/** *******************************************************
  * 
  * MxCxSmpGroupNameTest.cpp
  * Created: 2014-12-02 17:31:55
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpGroupName.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getJustify().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "" ) );
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
TEST( ctorValueAndElementName2, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName4, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "X,Y,Z" ) );
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
TEST( ctorValueAndElementName6, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName8, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = "MxCxSmpGroupName";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = "group-name";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	std::string expected = "The group-name type describes the name or abbreviation of a part-group element. Formatting attributes in the group-name type are deprecated in Version 2.0 in favor of the new group-name-display and group-abbreviation-display elements.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxCxSmpGroupName )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupName object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxCxSmpGroupName )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupName object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxCxSmpGroupName )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupName object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxCxSmpGroupName )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupName object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily4, MxCxSmpGroupName )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupName object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle5, MxCxSmpGroupName )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupName object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize6, MxCxSmpGroupName )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupName object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight7, MxCxSmpGroupName )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupName object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxCxSmpGroupName )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupName object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setJustify9, MxCxSmpGroupName )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupName object;
	object.setJustify( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
	object.setJustify( value2 );
	expected = value2;
	actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDefaultXRequired0, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired4, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired5, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired6, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired7, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsJustifyRequired9, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsJustifyRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
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
TEST( getIsDefaultYPresent1, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
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
TEST( getIsRelativeXPresent2, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
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
TEST( getIsRelativeYPresent3, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
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
TEST( getIsFontFamilyPresent4, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
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
TEST( getIsFontStylePresent5, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
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
TEST( getIsFontSizePresent6, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
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
TEST( getIsFontWeightPresent7, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
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
TEST( getIsColorPresent8, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
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
TEST( getIsJustifyPresent9, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsJustifyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsJustifyPresent( true );
	expected = true;
	actual = object.getIsJustifyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsJustifyPresent( false );
	expected = false;
	actual = object.getIsJustifyPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 303.9 ) );
	object.setDefaultY( MxNumberTenths( 303.9 ) );
	object.setRelativeX( MxNumberTenths( 303.9 ) );
	object.setRelativeY( MxNumberTenths( 303.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsJustifyPresent( true );
	expected = "<booksmart default-x=\"303.9\" default-y=\"303.9\" relative-x=\"303.9\" relative-y=\"303.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#21222120\" justify=\"right\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 304 ) );
	object.setDefaultY( MxNumberTenths( 304 ) );
	object.setRelativeX( MxNumberTenths( 304 ) );
	object.setRelativeY( MxNumberTenths( 304 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<quiet default-y=\"304\" relative-x=\"304\" relative-y=\"304\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#242322\" justify=\"left\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 304.1 ) );
	object.setDefaultY( MxNumberTenths( 304.1 ) );
	object.setRelativeX( MxNumberTenths( 304.1 ) );
	object.setRelativeY( MxNumberTenths( 304.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<musicxmlishard default-x=\"304.1\" relative-x=\"304.1\" relative-y=\"304.1\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#25262524\" justify=\"center\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 304.2 ) );
	object.setDefaultY( MxNumberTenths( 304.2 ) );
	object.setRelativeX( MxNumberTenths( 304.2 ) );
	object.setRelativeY( MxNumberTenths( 304.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<bishop relative-y=\"304.2\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#282726\" justify=\"right\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 304.3 ) );
	object.setDefaultY( MxNumberTenths( 304.3 ) );
	object.setRelativeX( MxNumberTenths( 304.3 ) );
	object.setRelativeY( MxNumberTenths( 304.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<charlie default-x=\"304.3\" default-y=\"304.3\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#292A2928\" justify=\"left\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 304.4 ) );
	object.setDefaultY( MxNumberTenths( 304.4 ) );
	object.setRelativeX( MxNumberTenths( 304.4 ) );
	object.setRelativeY( MxNumberTenths( 304.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<booksmart default-y=\"304.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#2C2B2A\" justify=\"center\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 304.5 ) );
	object.setDefaultY( MxNumberTenths( 304.5 ) );
	object.setRelativeX( MxNumberTenths( 304.5 ) );
	object.setRelativeY( MxNumberTenths( 304.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<quiet default-x=\"304.5\" relative-x=\"304.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#2D2E2D2C\" justify=\"right\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 304.6 ) );
	object.setDefaultY( MxNumberTenths( 304.6 ) );
	object.setRelativeX( MxNumberTenths( 304.6 ) );
	object.setRelativeY( MxNumberTenths( 304.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<musicxmlishard relative-x=\"304.6\" font-weight=\"normal\" color=\"#302F2E\" justify=\"left\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 304.7 ) );
	object.setDefaultY( MxNumberTenths( 304.7 ) );
	object.setRelativeX( MxNumberTenths( 304.7 ) );
	object.setRelativeY( MxNumberTenths( 304.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<bishop default-x=\"304.7\" default-y=\"304.7\" relative-x=\"304.7\" relative-y=\"304.7\" color=\"#31323130\" justify=\"center\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 304.8 ) );
	object.setDefaultY( MxNumberTenths( 304.8 ) );
	object.setRelativeX( MxNumberTenths( 304.8 ) );
	object.setRelativeY( MxNumberTenths( 304.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<charlie default-y=\"304.8\" relative-y=\"304.8\" justify=\"right\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 304.9 ) );
	object.setDefaultY( MxNumberTenths( 304.9 ) );
	object.setRelativeX( MxNumberTenths( 304.9 ) );
	object.setRelativeY( MxNumberTenths( 304.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<booksmart default-x=\"304.9\" relative-y=\"304.9\" font-family=\"ABC\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 305 ) );
	object.setDefaultY( MxNumberTenths( 305 ) );
	object.setRelativeX( MxNumberTenths( 305 ) );
	object.setRelativeY( MxNumberTenths( 305 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<quiet relative-y=\"305\" font-family=\"DEF\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 305.1 ) );
	object.setDefaultY( MxNumberTenths( 305.1 ) );
	object.setRelativeX( MxNumberTenths( 305.1 ) );
	object.setRelativeY( MxNumberTenths( 305.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<musicxmlishard default-x=\"305.1\" default-y=\"305.1\" relative-x=\"305.1\" font-family=\"XYZ\" font-style=\"italic\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 305.2 ) );
	object.setDefaultY( MxNumberTenths( 305.2 ) );
	object.setRelativeX( MxNumberTenths( 305.2 ) );
	object.setRelativeY( MxNumberTenths( 305.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<bishop default-y=\"305.2\" relative-x=\"305.2\" font-family=\"ABC\" font-style=\"normal\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 305.3 ) );
	object.setDefaultY( MxNumberTenths( 305.3 ) );
	object.setRelativeX( MxNumberTenths( 305.3 ) );
	object.setRelativeY( MxNumberTenths( 305.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<charlie default-x=\"305.3\" relative-x=\"305.3\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 305.4 ) );
	object.setDefaultY( MxNumberTenths( 305.4 ) );
	object.setRelativeX( MxNumberTenths( 305.4 ) );
	object.setRelativeY( MxNumberTenths( 305.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<booksmart font-style=\"normal\" font-size=\"large\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 305.5 ) );
	object.setDefaultY( MxNumberTenths( 305.5 ) );
	object.setRelativeX( MxNumberTenths( 305.5 ) );
	object.setRelativeY( MxNumberTenths( 305.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<quiet default-x=\"305.5\" default-y=\"305.5\" relative-y=\"305.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 305.6 ) );
	object.setDefaultY( MxNumberTenths( 305.6 ) );
	object.setRelativeX( MxNumberTenths( 305.6 ) );
	object.setRelativeY( MxNumberTenths( 305.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<musicxmlishard default-y=\"305.6\" relative-y=\"305.6\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 305.7 ) );
	object.setDefaultY( MxNumberTenths( 305.7 ) );
	object.setRelativeX( MxNumberTenths( 305.7 ) );
	object.setRelativeY( MxNumberTenths( 305.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<bishop default-x=\"305.7\" relative-x=\"305.7\" relative-y=\"305.7\" font-size=\"1.1\" font-weight=\"bold\" color=\"#45464544\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 305.8 ) );
	object.setDefaultY( MxNumberTenths( 305.8 ) );
	object.setRelativeX( MxNumberTenths( 305.8 ) );
	object.setRelativeY( MxNumberTenths( 305.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<charlie relative-x=\"305.8\" relative-y=\"305.8\" font-size=\"large\" font-weight=\"normal\" color=\"#484746\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 305.9 ) );
	object.setDefaultY( MxNumberTenths( 305.9 ) );
	object.setRelativeX( MxNumberTenths( 305.9 ) );
	object.setRelativeY( MxNumberTenths( 305.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<booksmart default-x=\"305.9\" default-y=\"305.9\" relative-x=\"305.9\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" color=\"#494A4948\" justify=\"center\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 306 ) );
	object.setDefaultY( MxNumberTenths( 306 ) );
	object.setRelativeX( MxNumberTenths( 306 ) );
	object.setRelativeY( MxNumberTenths( 306 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<quiet default-y=\"306\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#4C4B4A\" justify=\"right\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 306.1 ) );
	object.setDefaultY( MxNumberTenths( 306.1 ) );
	object.setRelativeX( MxNumberTenths( 306.1 ) );
	object.setRelativeY( MxNumberTenths( 306.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<musicxmlishard default-x=\"306.1\" font-family=\"ABC\" font-weight=\"bold\" color=\"#4D4E4D4C\" justify=\"left\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 306.2 ) );
	object.setDefaultY( MxNumberTenths( 306.2 ) );
	object.setRelativeX( MxNumberTenths( 306.2 ) );
	object.setRelativeY( MxNumberTenths( 306.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<bishop font-family=\"DEF\" font-weight=\"normal\" color=\"#504F4E\" justify=\"center\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 306.3 ) );
	object.setDefaultY( MxNumberTenths( 306.3 ) );
	object.setRelativeX( MxNumberTenths( 306.3 ) );
	object.setRelativeY( MxNumberTenths( 306.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<charlie default-x=\"306.3\" default-y=\"306.3\" relative-x=\"306.3\" relative-y=\"306.3\" font-family=\"XYZ\" font-style=\"italic\" color=\"#51525150\" justify=\"right\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 306.4 ) );
	object.setDefaultY( MxNumberTenths( 306.4 ) );
	object.setRelativeX( MxNumberTenths( 306.4 ) );
	object.setRelativeY( MxNumberTenths( 306.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<booksmart default-y=\"306.4\" relative-x=\"306.4\" relative-y=\"306.4\" font-style=\"normal\" color=\"#545352\" justify=\"left\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 306.5 ) );
	object.setDefaultY( MxNumberTenths( 306.5 ) );
	object.setRelativeX( MxNumberTenths( 306.5 ) );
	object.setRelativeY( MxNumberTenths( 306.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<quiet default-x=\"306.5\" relative-x=\"306.5\" relative-y=\"306.5\" font-style=\"italic\" color=\"#55565554\" justify=\"center\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 306.6 ) );
	object.setDefaultY( MxNumberTenths( 306.6 ) );
	object.setRelativeX( MxNumberTenths( 306.6 ) );
	object.setRelativeY( MxNumberTenths( 306.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<musicxmlishard relative-y=\"306.6\" font-style=\"normal\" justify=\"right\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 306.7 ) );
	object.setDefaultY( MxNumberTenths( 306.7 ) );
	object.setRelativeX( MxNumberTenths( 306.7 ) );
	object.setRelativeY( MxNumberTenths( 306.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<bishop default-x=\"306.7\" default-y=\"306.7\" font-style=\"italic\" font-size=\"1.1\" justify=\"left\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 306.8 ) );
	object.setDefaultY( MxNumberTenths( 306.8 ) );
	object.setRelativeX( MxNumberTenths( 306.8 ) );
	object.setRelativeY( MxNumberTenths( 306.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<charlie default-y=\"306.8\" font-style=\"normal\" font-size=\"large\" justify=\"center\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 306.9 ) );
	object.setDefaultY( MxNumberTenths( 306.9 ) );
	object.setRelativeX( MxNumberTenths( 306.9 ) );
	object.setRelativeY( MxNumberTenths( 306.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<booksmart default-x=\"306.9\" relative-x=\"306.9\" font-family=\"XYZ\" font-size=\"1.1\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 307 ) );
	object.setDefaultY( MxNumberTenths( 307 ) );
	object.setRelativeX( MxNumberTenths( 307 ) );
	object.setRelativeY( MxNumberTenths( 307 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<quiet relative-x=\"307\" font-family=\"ABC\" font-size=\"large\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 307.1 ) );
	object.setDefaultY( MxNumberTenths( 307.1 ) );
	object.setRelativeX( MxNumberTenths( 307.1 ) );
	object.setRelativeY( MxNumberTenths( 307.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<musicxmlishard default-x=\"307.1\" default-y=\"307.1\" relative-x=\"307.1\" relative-y=\"307.1\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 307.2 ) );
	object.setDefaultY( MxNumberTenths( 307.2 ) );
	object.setRelativeX( MxNumberTenths( 307.2 ) );
	object.setRelativeY( MxNumberTenths( 307.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<bishop default-y=\"307.2\" relative-y=\"307.2\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 307.3 ) );
	object.setDefaultY( MxNumberTenths( 307.3 ) );
	object.setRelativeX( MxNumberTenths( 307.3 ) );
	object.setRelativeY( MxNumberTenths( 307.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<charlie default-x=\"307.3\" relative-y=\"307.3\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 307.4 ) );
	object.setDefaultY( MxNumberTenths( 307.4 ) );
	object.setRelativeX( MxNumberTenths( 307.4 ) );
	object.setRelativeY( MxNumberTenths( 307.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<booksmart relative-y=\"307.4\" font-weight=\"normal\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 307.5 ) );
	object.setDefaultY( MxNumberTenths( 307.5 ) );
	object.setRelativeX( MxNumberTenths( 307.5 ) );
	object.setRelativeY( MxNumberTenths( 307.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<quiet default-x=\"307.5\" default-y=\"307.5\" relative-x=\"307.5\" font-style=\"italic\" font-weight=\"bold\" color=\"#696A6968\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 307.6 ) );
	object.setDefaultY( MxNumberTenths( 307.6 ) );
	object.setRelativeX( MxNumberTenths( 307.6 ) );
	object.setRelativeY( MxNumberTenths( 307.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<musicxmlishard default-y=\"307.6\" relative-x=\"307.6\" font-style=\"normal\" font-weight=\"normal\" color=\"#6C6B6A\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 307.7 ) );
	object.setDefaultY( MxNumberTenths( 307.7 ) );
	object.setRelativeX( MxNumberTenths( 307.7 ) );
	object.setRelativeY( MxNumberTenths( 307.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<bishop default-x=\"307.7\" relative-x=\"307.7\" font-style=\"italic\" font-weight=\"bold\" color=\"#6D6E6D6C\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 307.8 ) );
	object.setDefaultY( MxNumberTenths( 307.8 ) );
	object.setRelativeX( MxNumberTenths( 307.8 ) );
	object.setRelativeY( MxNumberTenths( 307.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<charlie font-style=\"normal\" font-weight=\"normal\" color=\"#706F6E\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 307.9 ) );
	object.setDefaultY( MxNumberTenths( 307.9 ) );
	object.setRelativeX( MxNumberTenths( 307.9 ) );
	object.setRelativeY( MxNumberTenths( 307.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<booksmart default-x=\"307.9\" default-y=\"307.9\" relative-y=\"307.9\" font-family=\"ABC\" font-style=\"italic\" color=\"#71727170\" justify=\"left\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 308 ) );
	object.setDefaultY( MxNumberTenths( 308 ) );
	object.setRelativeX( MxNumberTenths( 308 ) );
	object.setRelativeY( MxNumberTenths( 308 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<quiet default-y=\"308\" relative-y=\"308\" font-family=\"DEF\" font-style=\"normal\" color=\"#747372\" justify=\"center\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 308.1 ) );
	object.setDefaultY( MxNumberTenths( 308.1 ) );
	object.setRelativeX( MxNumberTenths( 308.1 ) );
	object.setRelativeY( MxNumberTenths( 308.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<musicxmlishard default-x=\"308.1\" relative-x=\"308.1\" relative-y=\"308.1\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#75767574\" justify=\"right\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 308.2 ) );
	object.setDefaultY( MxNumberTenths( 308.2 ) );
	object.setRelativeX( MxNumberTenths( 308.2 ) );
	object.setRelativeY( MxNumberTenths( 308.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<bishop relative-x=\"308.2\" relative-y=\"308.2\" font-family=\"ABC\" font-size=\"large\" color=\"#787776\" justify=\"left\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 308.3 ) );
	object.setDefaultY( MxNumberTenths( 308.3 ) );
	object.setRelativeX( MxNumberTenths( 308.3 ) );
	object.setRelativeY( MxNumberTenths( 308.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<charlie default-x=\"308.3\" default-y=\"308.3\" relative-x=\"308.3\" font-family=\"DEF\" font-size=\"1.1\" color=\"#797A7978\" justify=\"center\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 308.4 ) );
	object.setDefaultY( MxNumberTenths( 308.4 ) );
	object.setRelativeX( MxNumberTenths( 308.4 ) );
	object.setRelativeY( MxNumberTenths( 308.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<booksmart default-y=\"308.4\" font-size=\"large\" justify=\"right\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 308.5 ) );
	object.setDefaultY( MxNumberTenths( 308.5 ) );
	object.setRelativeX( MxNumberTenths( 308.5 ) );
	object.setRelativeY( MxNumberTenths( 308.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<quiet default-x=\"308.5\" font-size=\"1.1\" justify=\"left\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 308.6 ) );
	object.setDefaultY( MxNumberTenths( 308.6 ) );
	object.setRelativeX( MxNumberTenths( 308.6 ) );
	object.setRelativeY( MxNumberTenths( 308.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<musicxmlishard font-size=\"large\" justify=\"center\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 308.7 ) );
	object.setDefaultY( MxNumberTenths( 308.7 ) );
	object.setRelativeX( MxNumberTenths( 308.7 ) );
	object.setRelativeY( MxNumberTenths( 308.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<bishop default-x=\"308.7\" default-y=\"308.7\" relative-x=\"308.7\" relative-y=\"308.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" justify=\"right\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 308.8 ) );
	object.setDefaultY( MxNumberTenths( 308.8 ) );
	object.setRelativeX( MxNumberTenths( 308.8 ) );
	object.setRelativeY( MxNumberTenths( 308.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<charlie default-y=\"308.8\" relative-x=\"308.8\" relative-y=\"308.8\" font-style=\"normal\" font-weight=\"normal\" justify=\"left\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 308.9 ) );
	object.setDefaultY( MxNumberTenths( 308.9 ) );
	object.setRelativeX( MxNumberTenths( 308.9 ) );
	object.setRelativeY( MxNumberTenths( 308.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<booksmart default-x=\"308.9\" relative-x=\"308.9\" relative-y=\"308.9\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 309 ) );
	object.setDefaultY( MxNumberTenths( 309 ) );
	object.setRelativeX( MxNumberTenths( 309 ) );
	object.setRelativeY( MxNumberTenths( 309 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<quiet relative-y=\"309\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 309.1 ) );
	object.setDefaultY( MxNumberTenths( 309.1 ) );
	object.setRelativeX( MxNumberTenths( 309.1 ) );
	object.setRelativeY( MxNumberTenths( 309.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<musicxmlishard default-x=\"309.1\" default-y=\"309.1\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 309.2 ) );
	object.setDefaultY( MxNumberTenths( 309.2 ) );
	object.setRelativeX( MxNumberTenths( 309.2 ) );
	object.setRelativeY( MxNumberTenths( 309.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<bishop default-y=\"309.2\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 309.3 ) );
	object.setDefaultY( MxNumberTenths( 309.3 ) );
	object.setRelativeX( MxNumberTenths( 309.3 ) );
	object.setRelativeY( MxNumberTenths( 309.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<charlie default-x=\"309.3\" relative-x=\"309.3\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#8D8E8D8C\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 309.4 ) );
	object.setDefaultY( MxNumberTenths( 309.4 ) );
	object.setRelativeX( MxNumberTenths( 309.4 ) );
	object.setRelativeY( MxNumberTenths( 309.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<booksmart relative-x=\"309.4\" font-weight=\"normal\" color=\"#908F8E\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 309.5 ) );
	object.setDefaultY( MxNumberTenths( 309.5 ) );
	object.setRelativeX( MxNumberTenths( 309.5 ) );
	object.setRelativeY( MxNumberTenths( 309.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<quiet default-x=\"309.5\" default-y=\"309.5\" relative-x=\"309.5\" relative-y=\"309.5\" font-size=\"1.1\" color=\"#91929190\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 309.6 ) );
	object.setDefaultY( MxNumberTenths( 309.6 ) );
	object.setRelativeX( MxNumberTenths( 309.6 ) );
	object.setRelativeY( MxNumberTenths( 309.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<musicxmlishard default-y=\"309.6\" relative-y=\"309.6\" font-size=\"large\" color=\"#949392\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 309.7 ) );
	object.setDefaultY( MxNumberTenths( 309.7 ) );
	object.setRelativeX( MxNumberTenths( 309.7 ) );
	object.setRelativeY( MxNumberTenths( 309.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<bishop default-x=\"309.7\" relative-y=\"309.7\" font-size=\"1.1\" color=\"#95969594\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 309.8 ) );
	object.setDefaultY( MxNumberTenths( 309.8 ) );
	object.setRelativeX( MxNumberTenths( 309.8 ) );
	object.setRelativeY( MxNumberTenths( 309.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<charlie relative-y=\"309.8\" font-size=\"large\" color=\"#989796\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 309.9 ) );
	object.setDefaultY( MxNumberTenths( 309.9 ) );
	object.setRelativeX( MxNumberTenths( 309.9 ) );
	object.setRelativeY( MxNumberTenths( 309.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<booksmart default-x=\"309.9\" default-y=\"309.9\" relative-x=\"309.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#999A9998\" justify=\"right\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 310 ) );
	object.setDefaultY( MxNumberTenths( 310 ) );
	object.setRelativeX( MxNumberTenths( 310 ) );
	object.setRelativeY( MxNumberTenths( 310 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<quiet default-y=\"310\" relative-x=\"310\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#9C9B9A\" justify=\"left\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 310.1 ) );
	object.setDefaultY( MxNumberTenths( 310.1 ) );
	object.setRelativeX( MxNumberTenths( 310.1 ) );
	object.setRelativeY( MxNumberTenths( 310.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<musicxmlishard default-x=\"310.1\" relative-x=\"310.1\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#9D9E9D9C\" justify=\"center\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 310.2 ) );
	object.setDefaultY( MxNumberTenths( 310.2 ) );
	object.setRelativeX( MxNumberTenths( 310.2 ) );
	object.setRelativeY( MxNumberTenths( 310.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<bishop font-family=\"XYZ\" font-style=\"normal\" justify=\"right\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 310.3 ) );
	object.setDefaultY( MxNumberTenths( 310.3 ) );
	object.setRelativeX( MxNumberTenths( 310.3 ) );
	object.setRelativeY( MxNumberTenths( 310.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<charlie default-x=\"310.3\" default-y=\"310.3\" relative-y=\"310.3\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" justify=\"left\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 310.4 ) );
	object.setDefaultY( MxNumberTenths( 310.4 ) );
	object.setRelativeX( MxNumberTenths( 310.4 ) );
	object.setRelativeY( MxNumberTenths( 310.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<booksmart default-y=\"310.4\" relative-y=\"310.4\" font-style=\"normal\" font-weight=\"normal\" justify=\"center\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 310.5 ) );
	object.setDefaultY( MxNumberTenths( 310.5 ) );
	object.setRelativeX( MxNumberTenths( 310.5 ) );
	object.setRelativeY( MxNumberTenths( 310.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<quiet default-x=\"310.5\" relative-x=\"310.5\" relative-y=\"310.5\" font-weight=\"bold\" justify=\"right\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 310.6 ) );
	object.setDefaultY( MxNumberTenths( 310.6 ) );
	object.setRelativeX( MxNumberTenths( 310.6 ) );
	object.setRelativeY( MxNumberTenths( 310.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<musicxmlishard relative-x=\"310.6\" relative-y=\"310.6\" font-weight=\"normal\" justify=\"left\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 310.7 ) );
	object.setDefaultY( MxNumberTenths( 310.7 ) );
	object.setRelativeX( MxNumberTenths( 310.7 ) );
	object.setRelativeY( MxNumberTenths( 310.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<bishop default-x=\"310.7\" default-y=\"310.7\" relative-x=\"310.7\" font-weight=\"bold\" justify=\"center\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 310.8 ) );
	object.setDefaultY( MxNumberTenths( 310.8 ) );
	object.setRelativeX( MxNumberTenths( 310.8 ) );
	object.setRelativeY( MxNumberTenths( 310.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<charlie default-y=\"310.8\" font-weight=\"normal\" justify=\"right\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 310.9 ) );
	object.setDefaultY( MxNumberTenths( 310.9 ) );
	object.setRelativeX( MxNumberTenths( 310.9 ) );
	object.setRelativeY( MxNumberTenths( 310.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<booksmart default-x=\"310.9\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 311 ) );
	object.setDefaultY( MxNumberTenths( 311 ) );
	object.setRelativeX( MxNumberTenths( 311 ) );
	object.setRelativeY( MxNumberTenths( 311 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<quiet font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 311.1 ) );
	object.setDefaultY( MxNumberTenths( 311.1 ) );
	object.setRelativeX( MxNumberTenths( 311.1 ) );
	object.setRelativeY( MxNumberTenths( 311.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<musicxmlishard default-x=\"311.1\" default-y=\"311.1\" relative-x=\"311.1\" relative-y=\"311.1\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#B1B2B1B0\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 311.2 ) );
	object.setDefaultY( MxNumberTenths( 311.2 ) );
	object.setRelativeX( MxNumberTenths( 311.2 ) );
	object.setRelativeY( MxNumberTenths( 311.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<bishop default-y=\"311.2\" relative-x=\"311.2\" relative-y=\"311.2\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#B4B3B2\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 311.3 ) );
	object.setDefaultY( MxNumberTenths( 311.3 ) );
	object.setRelativeX( MxNumberTenths( 311.3 ) );
	object.setRelativeY( MxNumberTenths( 311.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<charlie default-x=\"311.3\" relative-x=\"311.3\" relative-y=\"311.3\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#B5B6B5B4\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 311.4 ) );
	object.setDefaultY( MxNumberTenths( 311.4 ) );
	object.setRelativeX( MxNumberTenths( 311.4 ) );
	object.setRelativeY( MxNumberTenths( 311.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<booksmart relative-y=\"311.4\" font-style=\"normal\" font-size=\"large\" color=\"#B8B7B6\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 311.5 ) );
	object.setDefaultY( MxNumberTenths( 311.5 ) );
	object.setRelativeX( MxNumberTenths( 311.5 ) );
	object.setRelativeY( MxNumberTenths( 311.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<quiet default-x=\"311.5\" default-y=\"311.5\" font-style=\"italic\" font-size=\"1.1\" color=\"#B9BAB9B8\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 311.6 ) );
	object.setDefaultY( MxNumberTenths( 311.6 ) );
	object.setRelativeX( MxNumberTenths( 311.6 ) );
	object.setRelativeY( MxNumberTenths( 311.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<musicxmlishard default-y=\"311.6\" font-style=\"normal\" color=\"#BCBBBA\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 311.7 ) );
	object.setDefaultY( MxNumberTenths( 311.7 ) );
	object.setRelativeX( MxNumberTenths( 311.7 ) );
	object.setRelativeY( MxNumberTenths( 311.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<bishop default-x=\"311.7\" relative-x=\"311.7\" color=\"#BDBEBDBC\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 311.8 ) );
	object.setDefaultY( MxNumberTenths( 311.8 ) );
	object.setRelativeX( MxNumberTenths( 311.8 ) );
	object.setRelativeY( MxNumberTenths( 311.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<charlie relative-x=\"311.8\" color=\"#C0BFBE\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 311.9 ) );
	object.setDefaultY( MxNumberTenths( 311.9 ) );
	object.setRelativeX( MxNumberTenths( 311.9 ) );
	object.setRelativeY( MxNumberTenths( 311.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<booksmart default-x=\"311.9\" default-y=\"311.9\" relative-x=\"311.9\" relative-y=\"311.9\" font-family=\"DEF\" font-weight=\"bold\" color=\"#C1C2C1C0\" justify=\"center\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 312 ) );
	object.setDefaultY( MxNumberTenths( 312 ) );
	object.setRelativeX( MxNumberTenths( 312 ) );
	object.setRelativeY( MxNumberTenths( 312 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<quiet default-y=\"312\" relative-y=\"312\" font-family=\"XYZ\" font-weight=\"normal\" justify=\"right\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 312.1 ) );
	object.setDefaultY( MxNumberTenths( 312.1 ) );
	object.setRelativeX( MxNumberTenths( 312.1 ) );
	object.setRelativeY( MxNumberTenths( 312.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<musicxmlishard default-x=\"312.1\" relative-y=\"312.1\" font-family=\"ABC\" font-weight=\"bold\" justify=\"left\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 312.2 ) );
	object.setDefaultY( MxNumberTenths( 312.2 ) );
	object.setRelativeX( MxNumberTenths( 312.2 ) );
	object.setRelativeY( MxNumberTenths( 312.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<bishop relative-y=\"312.2\" font-family=\"DEF\" font-weight=\"normal\" justify=\"center\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 312.3 ) );
	object.setDefaultY( MxNumberTenths( 312.3 ) );
	object.setRelativeX( MxNumberTenths( 312.3 ) );
	object.setRelativeY( MxNumberTenths( 312.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<charlie default-x=\"312.3\" default-y=\"312.3\" relative-x=\"312.3\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" justify=\"right\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 312.4 ) );
	object.setDefaultY( MxNumberTenths( 312.4 ) );
	object.setRelativeX( MxNumberTenths( 312.4 ) );
	object.setRelativeY( MxNumberTenths( 312.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<booksmart default-y=\"312.4\" relative-x=\"312.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" justify=\"left\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 312.5 ) );
	object.setDefaultY( MxNumberTenths( 312.5 ) );
	object.setRelativeX( MxNumberTenths( 312.5 ) );
	object.setRelativeY( MxNumberTenths( 312.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<quiet default-x=\"312.5\" relative-x=\"312.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" justify=\"center\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 312.6 ) );
	object.setDefaultY( MxNumberTenths( 312.6 ) );
	object.setRelativeX( MxNumberTenths( 312.6 ) );
	object.setRelativeY( MxNumberTenths( 312.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<musicxmlishard font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" justify=\"right\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 312.7 ) );
	object.setDefaultY( MxNumberTenths( 312.7 ) );
	object.setRelativeX( MxNumberTenths( 312.7 ) );
	object.setRelativeY( MxNumberTenths( 312.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<bishop default-x=\"312.7\" default-y=\"312.7\" relative-y=\"312.7\" font-style=\"italic\" font-size=\"1.1\" justify=\"left\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 312.8 ) );
	object.setDefaultY( MxNumberTenths( 312.8 ) );
	object.setRelativeX( MxNumberTenths( 312.8 ) );
	object.setRelativeY( MxNumberTenths( 312.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<charlie default-y=\"312.8\" relative-y=\"312.8\" font-style=\"normal\" font-size=\"large\" justify=\"center\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 312.9 ) );
	object.setDefaultY( MxNumberTenths( 312.9 ) );
	object.setRelativeX( MxNumberTenths( 312.9 ) );
	object.setRelativeY( MxNumberTenths( 312.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<booksmart default-x=\"312.9\" relative-x=\"312.9\" relative-y=\"312.9\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#D5D6D5D4\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 313 ) );
	object.setDefaultY( MxNumberTenths( 313 ) );
	object.setRelativeX( MxNumberTenths( 313 ) );
	object.setRelativeY( MxNumberTenths( 313 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<quiet relative-x=\"313\" relative-y=\"313\" font-family=\"ABC\" color=\"#D8D7D6\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 313.1 ) );
	object.setDefaultY( MxNumberTenths( 313.1 ) );
	object.setRelativeX( MxNumberTenths( 313.1 ) );
	object.setRelativeY( MxNumberTenths( 313.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<musicxmlishard default-x=\"313.1\" default-y=\"313.1\" relative-x=\"313.1\" font-family=\"DEF\" color=\"#D9DAD9D8\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 313.2 ) );
	object.setDefaultY( MxNumberTenths( 313.2 ) );
	object.setRelativeX( MxNumberTenths( 313.2 ) );
	object.setRelativeY( MxNumberTenths( 313.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<bishop default-y=\"313.2\" font-family=\"XYZ\" color=\"#DCDBDA\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 313.3 ) );
	object.setDefaultY( MxNumberTenths( 313.3 ) );
	object.setRelativeX( MxNumberTenths( 313.3 ) );
	object.setRelativeY( MxNumberTenths( 313.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<charlie default-x=\"313.3\" font-family=\"ABC\" color=\"#DDDEDDDC\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 313.4 ) );
	object.setDefaultY( MxNumberTenths( 313.4 ) );
	object.setRelativeX( MxNumberTenths( 313.4 ) );
	object.setRelativeY( MxNumberTenths( 313.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<booksmart color=\"#E0DFDE\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "quiet", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 313.5 ) );
	object.setDefaultY( MxNumberTenths( 313.5 ) );
	object.setRelativeX( MxNumberTenths( 313.5 ) );
	object.setRelativeY( MxNumberTenths( 313.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<quiet default-x=\"313.5\" default-y=\"313.5\" relative-x=\"313.5\" relative-y=\"313.5\" font-style=\"italic\" font-weight=\"bold\" color=\"#E1E2E1E0\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "musicxmlishard", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 313.6 ) );
	object.setDefaultY( MxNumberTenths( 313.6 ) );
	object.setRelativeX( MxNumberTenths( 313.6 ) );
	object.setRelativeY( MxNumberTenths( 313.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<musicxmlishard default-y=\"313.6\" relative-x=\"313.6\" relative-y=\"313.6\" font-style=\"normal\" font-weight=\"normal\" color=\"#E4E3E2\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "bishop", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 313.7 ) );
	object.setDefaultY( MxNumberTenths( 313.7 ) );
	object.setRelativeX( MxNumberTenths( 313.7 ) );
	object.setRelativeY( MxNumberTenths( 313.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<bishop default-x=\"313.7\" relative-x=\"313.7\" relative-y=\"313.7\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#E5E6E5E4\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "charlie", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 313.8 ) );
	object.setDefaultY( MxNumberTenths( 313.8 ) );
	object.setRelativeX( MxNumberTenths( 313.8 ) );
	object.setRelativeY( MxNumberTenths( 313.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<charlie relative-y=\"313.8\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxSmpGroupName )
{
	MxCxSmpGroupName object( "booksmart", XsString( "D,E,F" ) );
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
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 313.9 ) );
	object.setDefaultY( MxNumberTenths( 313.9 ) );
	object.setRelativeX( MxNumberTenths( 313.9 ) );
	object.setRelativeY( MxNumberTenths( 313.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<booksmart>D,E,F</booksmart>";
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

TEST( getIsDefaultXDefaultDefined, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsJustifyDefaultDefined, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	bool expected = false;
	bool actual = object.getIsJustifyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getJustifyDefaultValue, MxCxSmpGroupName )
{
	MxCxSmpGroupName object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getJustifyDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


