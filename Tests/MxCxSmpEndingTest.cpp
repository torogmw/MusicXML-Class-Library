/** *******************************************************
  * 
  * MxCxSmpEndingTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpEnding.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxEndingNumber(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxEnumStartStopDiscontinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintObject().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getEndLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getTextX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getTextY().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "" ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "WOOF" ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "WOOF" ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = "MxCxSmpEnding";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = "ending";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	std::string expected = "The ending type represents multiple (e.g. first and second) endings. Typically, the start type is associated with the left barline of the first measure in an ending. The stop and discontinue types are associated with the right barline of the last measure in an ending. Stop is used when the ending mark concludes with a downward jog, as is typical for first endings. Discontinue is used when there is no downward jog, as is typical for second endings that do not conclude a piece. The length of the jog can be specified using the end-length attribute. The text-x and text-y attributes are offsets that specify where the baseline of the start of the ending text appears, relative to the start of the ending line. The number attribute reflects the numeric values of what is under the ending line. Single endings such as '1' or comma-separated multiple endings such as '1,2' may be used. The ending element text is used when the text displayed in the ending is different than what appears in the number attribute. The print-object element is used to indicate when an ending is present but not printed, as is often the case for many parts in a full score.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxCxSmpEnding )
{
	MxEndingNumber value1( "1,2,3" );
	MxEndingNumber value2( "4,5,6" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setNumber( value1 );
	MxEndingNumber expected = value1;
	MxEndingNumber actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setType1, MxCxSmpEnding )
{
	MxEnumStartStopDiscontinue value1( lexicon::enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue value2( lexicon::enums::StartStopDiscontinue::stop );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setType( value1 );
	MxEnumStartStopDiscontinue expected = value1;
	MxEnumStartStopDiscontinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setPrintObject2, MxCxSmpEnding )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setPrintObject( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
	object.setPrintObject( value2 );
	expected = value2;
	actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX3, MxCxSmpEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY4, MxCxSmpEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX5, MxCxSmpEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY6, MxCxSmpEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily7, MxCxSmpEnding )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle8, MxCxSmpEnding )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize9, MxCxSmpEnding )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight10, MxCxSmpEnding )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor11, MxCxSmpEnding )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setEndLength12, MxCxSmpEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setEndLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getEndLength();
	CHECK_EQUAL( expected, actual )
	object.setEndLength( value2 );
	expected = value2;
	actual = object.getEndLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setTextX13, MxCxSmpEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
	object.setTextX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getTextX();
	CHECK_EQUAL( expected, actual )
	object.setTextX( value2 );
	expected = value2;
	actual = object.getTextX();
	CHECK_EQUAL( expected, actual )
}
TEST( setTextY14, MxCxSmpEnding )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpEnding object;
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

TEST( getIsNumberRequired0, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = true;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypeRequired1, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectRequired2, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsPrintObjectRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired3, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired4, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired5, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired6, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired7, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired8, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired9, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired10, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired11, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEndLengthRequired12, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsEndLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextXRequired13, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsTextXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextYRequired14, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsTextYRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsTypePresent1, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsPrintObjectPresent2, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsDefaultXPresent3, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsDefaultYPresent4, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsRelativeXPresent5, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsRelativeYPresent6, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsFontFamilyPresent7, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsFontStylePresent8, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsFontSizePresent9, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsFontWeightPresent10, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsColorPresent11, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsEndLengthPresent12, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsTextXPresent13, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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
TEST( getIsTextYPresent14, MxCxSmpEnding )
{
	MxCxSmpEnding object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setNumber( MxEndingNumber( "" ) );
	object.setType( MxEnumStartStopDiscontinue( lexicon::enums::StartStopDiscontinue::start ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 61.5 ) );
	object.setDefaultY( MxNumberTenths( 61.5 ) );
	object.setRelativeX( MxNumberTenths( 61.5 ) );
	object.setRelativeY( MxNumberTenths( 61.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
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
	expected = "<booksmart number=\"\" type=\"start\" print-object=\"no\" default-x=\"61.5\" default-y=\"61.5\" relative-x=\"61.5\" relative-y=\"61.5\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#FCFBFA\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 61.6 ) );
	object.setDefaultY( MxNumberTenths( 61.6 ) );
	object.setRelativeX( MxNumberTenths( 61.6 ) );
	object.setRelativeY( MxNumberTenths( 61.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"yes\" default-x=\"61.6\" default-y=\"61.6\" relative-x=\"61.6\" relative-y=\"61.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#FDFEFDFC\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 61.7 ) );
	object.setDefaultY( MxNumberTenths( 61.7 ) );
	object.setRelativeX( MxNumberTenths( 61.7 ) );
	object.setRelativeY( MxNumberTenths( 61.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"no\" default-x=\"61.7\" default-y=\"61.7\" relative-x=\"61.7\" relative-y=\"61.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#00FFFE\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 61.8 ) );
	object.setDefaultY( MxNumberTenths( 61.8 ) );
	object.setRelativeX( MxNumberTenths( 61.8 ) );
	object.setRelativeY( MxNumberTenths( 61.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" default-x=\"61.8\" default-y=\"61.8\" relative-x=\"61.8\" relative-y=\"61.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#01020100\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 61.9 ) );
	object.setDefaultY( MxNumberTenths( 61.9 ) );
	object.setRelativeX( MxNumberTenths( 61.9 ) );
	object.setRelativeY( MxNumberTenths( 61.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" default-y=\"61.9\" relative-x=\"61.9\" relative-y=\"61.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#040302\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 62 ) );
	object.setDefaultY( MxNumberTenths( 62 ) );
	object.setRelativeX( MxNumberTenths( 62 ) );
	object.setRelativeY( MxNumberTenths( 62 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" relative-x=\"62\" relative-y=\"62\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#05060504\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 62.1 ) );
	object.setDefaultY( MxNumberTenths( 62.1 ) );
	object.setRelativeX( MxNumberTenths( 62.1 ) );
	object.setRelativeY( MxNumberTenths( 62.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"no\" relative-y=\"62.1\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#080706\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 62.2 ) );
	object.setDefaultY( MxNumberTenths( 62.2 ) );
	object.setRelativeX( MxNumberTenths( 62.2 ) );
	object.setRelativeY( MxNumberTenths( 62.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"yes\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#090A0908\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 62.3 ) );
	object.setDefaultY( MxNumberTenths( 62.3 ) );
	object.setRelativeX( MxNumberTenths( 62.3 ) );
	object.setRelativeY( MxNumberTenths( 62.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" print-object=\"no\" default-x=\"62.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#0C0B0A\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 62.4 ) );
	object.setDefaultY( MxNumberTenths( 62.4 ) );
	object.setRelativeX( MxNumberTenths( 62.4 ) );
	object.setRelativeY( MxNumberTenths( 62.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" default-x=\"62.4\" font-size=\"large\" font-weight=\"normal\" color=\"#0D0E0D0C\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 62.5 ) );
	object.setDefaultY( MxNumberTenths( 62.5 ) );
	object.setRelativeX( MxNumberTenths( 62.5 ) );
	object.setRelativeY( MxNumberTenths( 62.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" default-x=\"62.5\" default-y=\"62.5\" font-weight=\"bold\" color=\"#100F0E\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 62.6 ) );
	object.setDefaultY( MxNumberTenths( 62.6 ) );
	object.setRelativeX( MxNumberTenths( 62.6 ) );
	object.setRelativeY( MxNumberTenths( 62.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" default-x=\"62.6\" default-y=\"62.6\" color=\"#11121110\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 62.7 ) );
	object.setDefaultY( MxNumberTenths( 62.7 ) );
	object.setRelativeX( MxNumberTenths( 62.7 ) );
	object.setRelativeY( MxNumberTenths( 62.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"no\" default-y=\"62.7\" relative-x=\"62.7\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 62.8 ) );
	object.setDefaultY( MxNumberTenths( 62.8 ) );
	object.setRelativeX( MxNumberTenths( 62.8 ) );
	object.setRelativeY( MxNumberTenths( 62.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" print-object=\"yes\" default-y=\"62.8\" relative-x=\"62.8\" text-x=\"1\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 62.9 ) );
	object.setDefaultY( MxNumberTenths( 62.9 ) );
	object.setRelativeX( MxNumberTenths( 62.9 ) );
	object.setRelativeY( MxNumberTenths( 62.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" print-object=\"no\" default-y=\"62.9\" relative-x=\"62.9\" relative-y=\"62.9\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 63 ) );
	object.setDefaultY( MxNumberTenths( 63 ) );
	object.setRelativeX( MxNumberTenths( 63 ) );
	object.setRelativeY( MxNumberTenths( 63 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" relative-x=\"63\" relative-y=\"63\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 63.1 ) );
	object.setDefaultY( MxNumberTenths( 63.1 ) );
	object.setRelativeX( MxNumberTenths( 63.1 ) );
	object.setRelativeY( MxNumberTenths( 63.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" default-x=\"63.1\" relative-x=\"63.1\" relative-y=\"63.1\" font-family=\"ABC\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 63.2 ) );
	object.setDefaultY( MxNumberTenths( 63.2 ) );
	object.setRelativeX( MxNumberTenths( 63.2 ) );
	object.setRelativeY( MxNumberTenths( 63.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" default-x=\"63.2\" relative-x=\"63.2\" relative-y=\"63.2\" font-family=\"DEF\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 63.3 ) );
	object.setDefaultY( MxNumberTenths( 63.3 ) );
	object.setRelativeX( MxNumberTenths( 63.3 ) );
	object.setRelativeY( MxNumberTenths( 63.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" print-object=\"no\" default-x=\"63.3\" relative-y=\"63.3\" font-family=\"XYZ\" font-style=\"italic\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 63.4 ) );
	object.setDefaultY( MxNumberTenths( 63.4 ) );
	object.setRelativeX( MxNumberTenths( 63.4 ) );
	object.setRelativeY( MxNumberTenths( 63.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" print-object=\"yes\" default-x=\"63.4\" relative-y=\"63.4\" font-family=\"ABC\" font-style=\"normal\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 63.5 ) );
	object.setDefaultY( MxNumberTenths( 63.5 ) );
	object.setRelativeX( MxNumberTenths( 63.5 ) );
	object.setRelativeY( MxNumberTenths( 63.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" print-object=\"no\" default-y=\"63.5\" relative-y=\"63.5\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 63.6 ) );
	object.setDefaultY( MxNumberTenths( 63.6 ) );
	object.setRelativeX( MxNumberTenths( 63.6 ) );
	object.setRelativeY( MxNumberTenths( 63.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" default-y=\"63.6\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 63.7 ) );
	object.setDefaultY( MxNumberTenths( 63.7 ) );
	object.setRelativeX( MxNumberTenths( 63.7 ) );
	object.setRelativeY( MxNumberTenths( 63.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" default-y=\"63.7\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 63.8 ) );
	object.setDefaultY( MxNumberTenths( 63.8 ) );
	object.setRelativeX( MxNumberTenths( 63.8 ) );
	object.setRelativeY( MxNumberTenths( 63.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" default-y=\"63.8\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 63.9 ) );
	object.setDefaultY( MxNumberTenths( 63.9 ) );
	object.setRelativeX( MxNumberTenths( 63.9 ) );
	object.setRelativeY( MxNumberTenths( 63.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" print-object=\"no\" default-x=\"63.9\" default-y=\"63.9\" relative-x=\"63.9\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#2C2B2A\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 64 ) );
	object.setDefaultY( MxNumberTenths( 64 ) );
	object.setRelativeX( MxNumberTenths( 64 ) );
	object.setRelativeY( MxNumberTenths( 64 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" print-object=\"yes\" default-x=\"64\" relative-x=\"64\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#2D2E2D2C\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 64.1 ) );
	object.setDefaultY( MxNumberTenths( 64.1 ) );
	object.setRelativeX( MxNumberTenths( 64.1 ) );
	object.setRelativeY( MxNumberTenths( 64.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"no\" default-x=\"64.1\" relative-x=\"64.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#302F2E\" end-length=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 64.2 ) );
	object.setDefaultY( MxNumberTenths( 64.2 ) );
	object.setRelativeX( MxNumberTenths( 64.2 ) );
	object.setRelativeY( MxNumberTenths( 64.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" default-x=\"64.2\" relative-x=\"64.2\" font-size=\"large\" font-weight=\"normal\" color=\"#31323130\" end-length=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 64.3 ) );
	object.setDefaultY( MxNumberTenths( 64.3 ) );
	object.setRelativeX( MxNumberTenths( 64.3 ) );
	object.setRelativeY( MxNumberTenths( 64.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" relative-x=\"64.3\" relative-y=\"64.3\" font-size=\"1.1\" font-weight=\"bold\" color=\"#343332\" end-length=\"1\" text-x=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 64.4 ) );
	object.setDefaultY( MxNumberTenths( 64.4 ) );
	object.setRelativeX( MxNumberTenths( 64.4 ) );
	object.setRelativeY( MxNumberTenths( 64.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" relative-x=\"64.4\" relative-y=\"64.4\" font-size=\"large\" font-weight=\"normal\" color=\"#35363534\" end-length=\"1\" text-x=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 64.5 ) );
	object.setDefaultY( MxNumberTenths( 64.5 ) );
	object.setRelativeX( MxNumberTenths( 64.5 ) );
	object.setRelativeY( MxNumberTenths( 64.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" print-object=\"no\" default-y=\"64.5\" relative-y=\"64.5\" font-weight=\"bold\" color=\"#383736\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 64.6 ) );
	object.setDefaultY( MxNumberTenths( 64.6 ) );
	object.setRelativeX( MxNumberTenths( 64.6 ) );
	object.setRelativeY( MxNumberTenths( 64.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"yes\" default-y=\"64.6\" relative-y=\"64.6\" font-weight=\"normal\" color=\"#393A3938\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 64.7 ) );
	object.setDefaultY( MxNumberTenths( 64.7 ) );
	object.setRelativeX( MxNumberTenths( 64.7 ) );
	object.setRelativeY( MxNumberTenths( 64.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"no\" default-x=\"64.7\" default-y=\"64.7\" relative-y=\"64.7\" font-family=\"DEF\" font-weight=\"bold\" color=\"#3C3B3A\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 64.8 ) );
	object.setDefaultY( MxNumberTenths( 64.8 ) );
	object.setRelativeX( MxNumberTenths( 64.8 ) );
	object.setRelativeY( MxNumberTenths( 64.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" default-x=\"64.8\" default-y=\"64.8\" relative-y=\"64.8\" font-family=\"XYZ\" color=\"#3D3E3D3C\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 64.9 ) );
	object.setDefaultY( MxNumberTenths( 64.9 ) );
	object.setRelativeX( MxNumberTenths( 64.9 ) );
	object.setRelativeY( MxNumberTenths( 64.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" default-x=\"64.9\" default-y=\"64.9\" relative-y=\"64.9\" font-family=\"ABC\" color=\"#403F3E\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 65 ) );
	object.setDefaultY( MxNumberTenths( 65 ) );
	object.setRelativeX( MxNumberTenths( 65 ) );
	object.setRelativeY( MxNumberTenths( 65 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" default-x=\"65\" font-family=\"DEF\" color=\"#41424140\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 65.1 ) );
	object.setDefaultY( MxNumberTenths( 65.1 ) );
	object.setRelativeX( MxNumberTenths( 65.1 ) );
	object.setRelativeY( MxNumberTenths( 65.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"no\" relative-x=\"65.1\" font-family=\"XYZ\" font-style=\"italic\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 65.2 ) );
	object.setDefaultY( MxNumberTenths( 65.2 ) );
	object.setRelativeX( MxNumberTenths( 65.2 ) );
	object.setRelativeY( MxNumberTenths( 65.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"yes\" relative-x=\"65.2\" font-family=\"ABC\" font-style=\"normal\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 65.3 ) );
	object.setDefaultY( MxNumberTenths( 65.3 ) );
	object.setRelativeX( MxNumberTenths( 65.3 ) );
	object.setRelativeY( MxNumberTenths( 65.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" print-object=\"no\" relative-x=\"65.3\" font-family=\"DEF\" font-style=\"italic\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 65.4 ) );
	object.setDefaultY( MxNumberTenths( 65.4 ) );
	object.setRelativeX( MxNumberTenths( 65.4 ) );
	object.setRelativeY( MxNumberTenths( 65.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" relative-x=\"65.4\" font-family=\"XYZ\" font-style=\"normal\" text-x=\"1\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 65.5 ) );
	object.setDefaultY( MxNumberTenths( 65.5 ) );
	object.setRelativeX( MxNumberTenths( 65.5 ) );
	object.setRelativeY( MxNumberTenths( 65.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" default-x=\"65.5\" default-y=\"65.5\" relative-x=\"65.5\" font-style=\"italic\" font-size=\"1.1\" text-x=\"1\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 65.6 ) );
	object.setDefaultY( MxNumberTenths( 65.6 ) );
	object.setRelativeX( MxNumberTenths( 65.6 ) );
	object.setRelativeY( MxNumberTenths( 65.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" default-x=\"65.6\" default-y=\"65.6\" relative-x=\"65.6\" font-style=\"normal\" font-size=\"large\" text-x=\"1\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 65.7 ) );
	object.setDefaultY( MxNumberTenths( 65.7 ) );
	object.setRelativeX( MxNumberTenths( 65.7 ) );
	object.setRelativeY( MxNumberTenths( 65.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"no\" default-x=\"65.7\" default-y=\"65.7\" relative-y=\"65.7\" font-style=\"italic\" font-size=\"1.1\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 65.8 ) );
	object.setDefaultY( MxNumberTenths( 65.8 ) );
	object.setRelativeX( MxNumberTenths( 65.8 ) );
	object.setRelativeY( MxNumberTenths( 65.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" print-object=\"yes\" default-x=\"65.8\" default-y=\"65.8\" relative-y=\"65.8\" font-style=\"normal\" font-size=\"large\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 65.9 ) );
	object.setDefaultY( MxNumberTenths( 65.9 ) );
	object.setRelativeX( MxNumberTenths( 65.9 ) );
	object.setRelativeY( MxNumberTenths( 65.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" print-object=\"no\" default-y=\"65.9\" relative-y=\"65.9\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 66 ) );
	object.setDefaultY( MxNumberTenths( 66 ) );
	object.setRelativeX( MxNumberTenths( 66 ) );
	object.setRelativeY( MxNumberTenths( 66 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" relative-y=\"66\" font-size=\"large\" font-weight=\"normal\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 66.1 ) );
	object.setDefaultY( MxNumberTenths( 66.1 ) );
	object.setRelativeX( MxNumberTenths( 66.1 ) );
	object.setRelativeY( MxNumberTenths( 66.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" relative-y=\"66.1\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 66.2 ) );
	object.setDefaultY( MxNumberTenths( 66.2 ) );
	object.setRelativeX( MxNumberTenths( 66.2 ) );
	object.setRelativeY( MxNumberTenths( 66.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" relative-y=\"66.2\" font-size=\"large\" font-weight=\"normal\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 66.3 ) );
	object.setDefaultY( MxNumberTenths( 66.3 ) );
	object.setRelativeX( MxNumberTenths( 66.3 ) );
	object.setRelativeY( MxNumberTenths( 66.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" print-object=\"no\" default-x=\"66.3\" relative-x=\"66.3\" relative-y=\"66.3\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" color=\"#5C5B5A\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 66.4 ) );
	object.setDefaultY( MxNumberTenths( 66.4 ) );
	object.setRelativeX( MxNumberTenths( 66.4 ) );
	object.setRelativeY( MxNumberTenths( 66.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" print-object=\"yes\" default-x=\"66.4\" relative-x=\"66.4\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" color=\"#5D5E5D5C\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 66.5 ) );
	object.setDefaultY( MxNumberTenths( 66.5 ) );
	object.setRelativeX( MxNumberTenths( 66.5 ) );
	object.setRelativeY( MxNumberTenths( 66.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" print-object=\"no\" default-x=\"66.5\" default-y=\"66.5\" relative-x=\"66.5\" font-family=\"DEF\" font-weight=\"bold\" color=\"#605F5E\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 66.6 ) );
	object.setDefaultY( MxNumberTenths( 66.6 ) );
	object.setRelativeX( MxNumberTenths( 66.6 ) );
	object.setRelativeY( MxNumberTenths( 66.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" default-x=\"66.6\" default-y=\"66.6\" relative-x=\"66.6\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#61626160\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 66.7 ) );
	object.setDefaultY( MxNumberTenths( 66.7 ) );
	object.setRelativeX( MxNumberTenths( 66.7 ) );
	object.setRelativeY( MxNumberTenths( 66.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" default-y=\"66.7\" relative-x=\"66.7\" font-family=\"ABC\" font-weight=\"bold\" color=\"#646362\" end-length=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 66.8 ) );
	object.setDefaultY( MxNumberTenths( 66.8 ) );
	object.setRelativeX( MxNumberTenths( 66.8 ) );
	object.setRelativeY( MxNumberTenths( 66.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" default-y=\"66.8\" relative-x=\"66.8\" font-family=\"DEF\" font-weight=\"normal\" color=\"#65666564\" end-length=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 66.9 ) );
	object.setDefaultY( MxNumberTenths( 66.9 ) );
	object.setRelativeX( MxNumberTenths( 66.9 ) );
	object.setRelativeY( MxNumberTenths( 66.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" print-object=\"no\" default-y=\"66.9\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#686766\" end-length=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 67 ) );
	object.setDefaultY( MxNumberTenths( 67 ) );
	object.setRelativeX( MxNumberTenths( 67 ) );
	object.setRelativeY( MxNumberTenths( 67 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" print-object=\"yes\" font-family=\"ABC\" font-style=\"normal\" color=\"#696A6968\" end-length=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 67.1 ) );
	object.setDefaultY( MxNumberTenths( 67.1 ) );
	object.setRelativeX( MxNumberTenths( 67.1 ) );
	object.setRelativeY( MxNumberTenths( 67.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"no\" default-x=\"67.1\" relative-y=\"67.1\" font-style=\"italic\" color=\"#6C6B6A\" end-length=\"1\" text-x=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 67.2 ) );
	object.setDefaultY( MxNumberTenths( 67.2 ) );
	object.setRelativeX( MxNumberTenths( 67.2 ) );
	object.setRelativeY( MxNumberTenths( 67.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" default-x=\"67.2\" relative-y=\"67.2\" font-style=\"normal\" color=\"#6D6E6D6C\" end-length=\"1\" text-x=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 67.3 ) );
	object.setDefaultY( MxNumberTenths( 67.3 ) );
	object.setRelativeX( MxNumberTenths( 67.3 ) );
	object.setRelativeY( MxNumberTenths( 67.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" default-x=\"67.3\" relative-y=\"67.3\" font-style=\"italic\" color=\"#706F6E\" end-length=\"1\" text-x=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 67.4 ) );
	object.setDefaultY( MxNumberTenths( 67.4 ) );
	object.setRelativeX( MxNumberTenths( 67.4 ) );
	object.setRelativeY( MxNumberTenths( 67.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" default-x=\"67.4\" relative-y=\"67.4\" font-style=\"normal\" color=\"#71727170\" end-length=\"1\" text-x=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 67.5 ) );
	object.setDefaultY( MxNumberTenths( 67.5 ) );
	object.setRelativeX( MxNumberTenths( 67.5 ) );
	object.setRelativeY( MxNumberTenths( 67.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" print-object=\"no\" default-y=\"67.5\" relative-x=\"67.5\" relative-y=\"67.5\" font-style=\"italic\" font-size=\"1.1\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 67.6 ) );
	object.setDefaultY( MxNumberTenths( 67.6 ) );
	object.setRelativeX( MxNumberTenths( 67.6 ) );
	object.setRelativeY( MxNumberTenths( 67.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"yes\" default-y=\"67.6\" relative-x=\"67.6\" relative-y=\"67.6\" font-style=\"normal\" font-size=\"large\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 67.7 ) );
	object.setDefaultY( MxNumberTenths( 67.7 ) );
	object.setRelativeX( MxNumberTenths( 67.7 ) );
	object.setRelativeY( MxNumberTenths( 67.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"no\" default-y=\"67.7\" relative-x=\"67.7\" relative-y=\"67.7\" font-style=\"italic\" font-size=\"1.1\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 67.8 ) );
	object.setDefaultY( MxNumberTenths( 67.8 ) );
	object.setRelativeX( MxNumberTenths( 67.8 ) );
	object.setRelativeY( MxNumberTenths( 67.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" default-y=\"67.8\" relative-x=\"67.8\" font-size=\"large\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 67.9 ) );
	object.setDefaultY( MxNumberTenths( 67.9 ) );
	object.setRelativeX( MxNumberTenths( 67.9 ) );
	object.setRelativeY( MxNumberTenths( 67.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" default-x=\"67.9\" default-y=\"67.9\" relative-x=\"67.9\" font-family=\"ABC\" font-size=\"1.1\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 68 ) );
	object.setDefaultY( MxNumberTenths( 68 ) );
	object.setRelativeX( MxNumberTenths( 68 ) );
	object.setRelativeY( MxNumberTenths( 68 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" default-x=\"68\" relative-x=\"68\" font-family=\"DEF\" font-size=\"large\" text-x=\"1\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 68.1 ) );
	object.setDefaultY( MxNumberTenths( 68.1 ) );
	object.setRelativeX( MxNumberTenths( 68.1 ) );
	object.setRelativeY( MxNumberTenths( 68.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"no\" default-x=\"68.1\" font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" text-x=\"1\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 68.2 ) );
	object.setDefaultY( MxNumberTenths( 68.2 ) );
	object.setRelativeX( MxNumberTenths( 68.2 ) );
	object.setRelativeY( MxNumberTenths( 68.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"yes\" default-x=\"68.2\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" text-x=\"1\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 68.3 ) );
	object.setDefaultY( MxNumberTenths( 68.3 ) );
	object.setRelativeX( MxNumberTenths( 68.3 ) );
	object.setRelativeY( MxNumberTenths( 68.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" print-object=\"no\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" text-x=\"1\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 68.4 ) );
	object.setDefaultY( MxNumberTenths( 68.4 ) );
	object.setRelativeX( MxNumberTenths( 68.4 ) );
	object.setRelativeY( MxNumberTenths( 68.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" text-x=\"1\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 68.5 ) );
	object.setDefaultY( MxNumberTenths( 68.5 ) );
	object.setRelativeX( MxNumberTenths( 68.5 ) );
	object.setRelativeY( MxNumberTenths( 68.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" default-y=\"68.5\" relative-y=\"68.5\" font-family=\"ABC\" font-weight=\"bold\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 68.6 ) );
	object.setDefaultY( MxNumberTenths( 68.6 ) );
	object.setRelativeX( MxNumberTenths( 68.6 ) );
	object.setRelativeY( MxNumberTenths( 68.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" default-y=\"68.6\" relative-y=\"68.6\" font-family=\"DEF\" font-weight=\"normal\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 68.7 ) );
	object.setDefaultY( MxNumberTenths( 68.7 ) );
	object.setRelativeX( MxNumberTenths( 68.7 ) );
	object.setRelativeY( MxNumberTenths( 68.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"no\" default-x=\"68.7\" default-y=\"68.7\" relative-x=\"68.7\" relative-y=\"68.7\" font-style=\"italic\" font-weight=\"bold\" color=\"#8C8B8A\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 68.8 ) );
	object.setDefaultY( MxNumberTenths( 68.8 ) );
	object.setRelativeX( MxNumberTenths( 68.8 ) );
	object.setRelativeY( MxNumberTenths( 68.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" print-object=\"yes\" default-x=\"68.8\" default-y=\"68.8\" relative-x=\"68.8\" relative-y=\"68.8\" font-style=\"normal\" font-weight=\"normal\" color=\"#8D8E8D8C\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 68.9 ) );
	object.setDefaultY( MxNumberTenths( 68.9 ) );
	object.setRelativeX( MxNumberTenths( 68.9 ) );
	object.setRelativeY( MxNumberTenths( 68.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" print-object=\"no\" default-x=\"68.9\" default-y=\"68.9\" relative-x=\"68.9\" relative-y=\"68.9\" font-style=\"italic\" font-weight=\"bold\" color=\"#908F8E\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 69 ) );
	object.setDefaultY( MxNumberTenths( 69 ) );
	object.setRelativeX( MxNumberTenths( 69 ) );
	object.setRelativeY( MxNumberTenths( 69 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" default-x=\"69\" relative-x=\"69\" relative-y=\"69\" font-style=\"normal\" font-weight=\"normal\" color=\"#91929190\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 69.1 ) );
	object.setDefaultY( MxNumberTenths( 69.1 ) );
	object.setRelativeX( MxNumberTenths( 69.1 ) );
	object.setRelativeY( MxNumberTenths( 69.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" relative-x=\"69.1\" relative-y=\"69.1\" font-style=\"italic\" font-weight=\"bold\" color=\"#949392\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 69.2 ) );
	object.setDefaultY( MxNumberTenths( 69.2 ) );
	object.setRelativeX( MxNumberTenths( 69.2 ) );
	object.setRelativeY( MxNumberTenths( 69.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" relative-x=\"69.2\" font-style=\"normal\" color=\"#95969594\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 69.3 ) );
	object.setDefaultY( MxNumberTenths( 69.3 ) );
	object.setRelativeX( MxNumberTenths( 69.3 ) );
	object.setRelativeY( MxNumberTenths( 69.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" print-object=\"no\" font-style=\"italic\" color=\"#989796\" end-length=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 69.4 ) );
	object.setDefaultY( MxNumberTenths( 69.4 ) );
	object.setRelativeX( MxNumberTenths( 69.4 ) );
	object.setRelativeY( MxNumberTenths( 69.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" print-object=\"yes\" font-style=\"normal\" color=\"#999A9998\" end-length=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 69.5 ) );
	object.setDefaultY( MxNumberTenths( 69.5 ) );
	object.setRelativeX( MxNumberTenths( 69.5 ) );
	object.setRelativeY( MxNumberTenths( 69.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" print-object=\"no\" default-x=\"69.5\" default-y=\"69.5\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#9C9B9A\" end-length=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 69.6 ) );
	object.setDefaultY( MxNumberTenths( 69.6 ) );
	object.setRelativeX( MxNumberTenths( 69.6 ) );
	object.setRelativeY( MxNumberTenths( 69.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" default-x=\"69.6\" default-y=\"69.6\" font-family=\"XYZ\" font-size=\"large\" color=\"#9D9E9D9C\" end-length=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 69.7 ) );
	object.setDefaultY( MxNumberTenths( 69.7 ) );
	object.setRelativeX( MxNumberTenths( 69.7 ) );
	object.setRelativeY( MxNumberTenths( 69.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" default-x=\"69.7\" default-y=\"69.7\" font-family=\"ABC\" font-size=\"1.1\" color=\"#A09F9E\" end-length=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 69.8 ) );
	object.setDefaultY( MxNumberTenths( 69.8 ) );
	object.setRelativeX( MxNumberTenths( 69.8 ) );
	object.setRelativeY( MxNumberTenths( 69.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" default-x=\"69.8\" default-y=\"69.8\" font-family=\"DEF\" font-size=\"large\" color=\"#A1A2A1A0\" end-length=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 69.9 ) );
	object.setDefaultY( MxNumberTenths( 69.9 ) );
	object.setRelativeX( MxNumberTenths( 69.9 ) );
	object.setRelativeY( MxNumberTenths( 69.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" print-object=\"no\" default-y=\"69.9\" relative-x=\"69.9\" relative-y=\"69.9\" font-family=\"XYZ\" font-size=\"1.1\" end-length=\"1\" text-x=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 70 ) );
	object.setDefaultY( MxNumberTenths( 70 ) );
	object.setRelativeX( MxNumberTenths( 70 ) );
	object.setRelativeY( MxNumberTenths( 70 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" print-object=\"yes\" relative-x=\"70\" relative-y=\"70\" font-family=\"ABC\" font-size=\"large\" end-length=\"1\" text-x=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 70.1 ) );
	object.setDefaultY( MxNumberTenths( 70.1 ) );
	object.setRelativeX( MxNumberTenths( 70.1 ) );
	object.setRelativeY( MxNumberTenths( 70.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"no\" relative-x=\"70.1\" relative-y=\"70.1\" font-family=\"DEF\" font-size=\"1.1\" end-length=\"1\" text-x=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 70.2 ) );
	object.setDefaultY( MxNumberTenths( 70.2 ) );
	object.setRelativeX( MxNumberTenths( 70.2 ) );
	object.setRelativeY( MxNumberTenths( 70.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" relative-x=\"70.2\" relative-y=\"70.2\" font-family=\"XYZ\" font-size=\"large\" end-length=\"1\" text-x=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 70.3 ) );
	object.setDefaultY( MxNumberTenths( 70.3 ) );
	object.setRelativeX( MxNumberTenths( 70.3 ) );
	object.setRelativeY( MxNumberTenths( 70.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" default-x=\"70.3\" relative-x=\"70.3\" relative-y=\"70.3\" font-size=\"1.1\" font-weight=\"bold\" end-length=\"1\" text-x=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 70.4 ) );
	object.setDefaultY( MxNumberTenths( 70.4 ) );
	object.setRelativeX( MxNumberTenths( 70.4 ) );
	object.setRelativeY( MxNumberTenths( 70.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" default-x=\"70.4\" relative-x=\"70.4\" relative-y=\"70.4\" font-size=\"large\" font-weight=\"normal\" end-length=\"1\" text-x=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 70.5 ) );
	object.setDefaultY( MxNumberTenths( 70.5 ) );
	object.setRelativeX( MxNumberTenths( 70.5 ) );
	object.setRelativeY( MxNumberTenths( 70.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" print-object=\"no\" default-x=\"70.5\" default-y=\"70.5\" relative-y=\"70.5\" font-style=\"italic\" font-weight=\"bold\" end-length=\"1\" text-x=\"1\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 70.6 ) );
	object.setDefaultY( MxNumberTenths( 70.6 ) );
	object.setRelativeX( MxNumberTenths( 70.6 ) );
	object.setRelativeY( MxNumberTenths( 70.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"yes\" default-x=\"70.6\" default-y=\"70.6\" font-style=\"normal\" font-weight=\"normal\" text-x=\"1\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 70.7 ) );
	object.setDefaultY( MxNumberTenths( 70.7 ) );
	object.setRelativeX( MxNumberTenths( 70.7 ) );
	object.setRelativeY( MxNumberTenths( 70.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"no\" default-y=\"70.7\" font-style=\"italic\" font-weight=\"bold\" text-x=\"1\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 70.8 ) );
	object.setDefaultY( MxNumberTenths( 70.8 ) );
	object.setRelativeX( MxNumberTenths( 70.8 ) );
	object.setRelativeY( MxNumberTenths( 70.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" default-y=\"70.8\" font-style=\"normal\" font-weight=\"normal\" text-x=\"1\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 70.9 ) );
	object.setDefaultY( MxNumberTenths( 70.9 ) );
	object.setRelativeX( MxNumberTenths( 70.9 ) );
	object.setRelativeY( MxNumberTenths( 70.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" default-y=\"70.9\" font-style=\"italic\" font-weight=\"bold\" text-x=\"1\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 71 ) );
	object.setDefaultY( MxNumberTenths( 71 ) );
	object.setRelativeX( MxNumberTenths( 71 ) );
	object.setRelativeY( MxNumberTenths( 71 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\" font-style=\"normal\" font-weight=\"normal\" text-x=\"1\" text-y=\"1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpEnding )
{
	MxCxSmpEnding object( "quiet", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 71.1 ) );
	object.setDefaultY( MxNumberTenths( 71.1 ) );
	object.setRelativeX( MxNumberTenths( 71.1 ) );
	object.setRelativeY( MxNumberTenths( 71.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<quiet number=\"\" type=\"start\" print-object=\"no\" default-x=\"71.1\" relative-x=\"71.1\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" color=\"#BCBBBA\" text-x=\"1\" text-y=\"1\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpEnding )
{
	MxCxSmpEnding object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 71.2 ) );
	object.setDefaultY( MxNumberTenths( 71.2 ) );
	object.setRelativeX( MxNumberTenths( 71.2 ) );
	object.setRelativeY( MxNumberTenths( 71.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<musicxmlishard number=\"\" type=\"start\" print-object=\"yes\" default-x=\"71.2\" relative-x=\"71.2\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#BDBEBDBC\" text-x=\"1\" text-y=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpEnding )
{
	MxCxSmpEnding object( "bishop", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 71.3 ) );
	object.setDefaultY( MxNumberTenths( 71.3 ) );
	object.setRelativeX( MxNumberTenths( 71.3 ) );
	object.setRelativeY( MxNumberTenths( 71.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<bishop number=\"\" type=\"start\" print-object=\"no\" default-x=\"71.3\" relative-x=\"71.3\" relative-y=\"71.3\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" color=\"#C0BFBE\" text-y=\"1\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpEnding )
{
	MxCxSmpEnding object( "charlie", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 71.4 ) );
	object.setDefaultY( MxNumberTenths( 71.4 ) );
	object.setRelativeX( MxNumberTenths( 71.4 ) );
	object.setRelativeY( MxNumberTenths( 71.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<charlie number=\"\" type=\"start\" default-x=\"71.4\" relative-x=\"71.4\" relative-y=\"71.4\" font-family=\"XYZ\" color=\"#C1C2C1C0\" text-y=\"1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpEnding )
{
	MxCxSmpEnding object( "booksmart", XsString( "D,E,F" ) );
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
	object.setDefaultX( MxNumberTenths( 71.5 ) );
	object.setDefaultY( MxNumberTenths( 71.5 ) );
	object.setRelativeX( MxNumberTenths( 71.5 ) );
	object.setRelativeY( MxNumberTenths( 71.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setTextX( MxNumberTenths( 1 ) );
	object.setTextY( MxNumberTenths( 1 ) );
	expected = "<booksmart number=\"\" type=\"start\">D,E,F</booksmart>";
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsNumberDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypeDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = true;
	bool actual = object.getIsPrintObjectDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEndLengthDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsEndLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextXDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsTextXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTextYDefaultDefined, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	bool expected = false;
	bool actual = object.getIsTextYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxEndingNumber expected;
	MxEndingNumber actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTypeDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxEnumStartStopDiscontinue expected;
	MxEnumStartStopDiscontinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPrintObjectDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintObjectDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEndLengthDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getEndLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTextXDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getTextXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTextYDefaultValue, MxCxSmpEnding )
{
	MxCxSmpEnding object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getTextYDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


