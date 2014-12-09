/** *******************************************************
  * 
  * MxEsPartNameTest.cpp
  * Created: 2014-12-05 20:57:58
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsPartName.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsPartName )
{
	MxEsPartName object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintObject().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getJustify().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsPartName )
{
	MxEsPartName object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsPartName )
{
	MxEsPartName object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsPartName )
{
	MxEsPartName object( XsString( "" ) );
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
TEST( ctorValue2, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
TEST( ctorValue4, MxEsPartName )
{
	MxEsPartName object( XsString( "X,Y,Z" ) );
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
TEST( ctorValue6, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
TEST( ctorValue8, MxEsPartName )
{
	MxEsPartName object( XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = "MxEsPartName";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = "part-name";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsPartName )
{
	MxEsPartName object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxEsPartName )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxEsPartName )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxEsPartName )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxEsPartName )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily4, MxEsPartName )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle5, MxEsPartName )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize6, MxEsPartName )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight7, MxEsPartName )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxEsPartName )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPrintObject9, MxEsPartName )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
	object.setPrintObject( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
	object.setPrintObject( value2 );
	expected = value2;
	actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
}
TEST( setJustify10, MxEsPartName )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEsPartName object;
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

TEST( getIsDefaultXRequired0, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired4, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired5, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired6, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired7, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectRequired9, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsPrintObjectRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsJustifyRequired10, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsJustifyRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxEsPartName )
{
	MxEsPartName object;
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
TEST( getIsDefaultYPresent1, MxEsPartName )
{
	MxEsPartName object;
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
TEST( getIsRelativeXPresent2, MxEsPartName )
{
	MxEsPartName object;
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
TEST( getIsRelativeYPresent3, MxEsPartName )
{
	MxEsPartName object;
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
TEST( getIsFontFamilyPresent4, MxEsPartName )
{
	MxEsPartName object;
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
TEST( getIsFontStylePresent5, MxEsPartName )
{
	MxEsPartName object;
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
TEST( getIsFontSizePresent6, MxEsPartName )
{
	MxEsPartName object;
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
TEST( getIsFontWeightPresent7, MxEsPartName )
{
	MxEsPartName object;
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
TEST( getIsColorPresent8, MxEsPartName )
{
	MxEsPartName object;
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
TEST( getIsPrintObjectPresent9, MxEsPartName )
{
	MxEsPartName object;
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
TEST( getIsJustifyPresent10, MxEsPartName )
{
	MxEsPartName object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsDefaultXDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintObjectDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = true;
	bool actual = object.getIsPrintObjectDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsJustifyDefaultDefined, MxEsPartName )
{
	MxEsPartName object;
	bool expected = false;
	bool actual = object.getIsJustifyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPrintObjectDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintObjectDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getJustifyDefaultValue, MxEsPartName )
{
	MxEsPartName object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getJustifyDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 367.6 ) );
	object.setDefaultY( MxNumberTenths( 367.6 ) );
	object.setRelativeX( MxNumberTenths( 367.6 ) );
	object.setRelativeY( MxNumberTenths( 367.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	expected = "<part-name default-x=\"367.6\" default-y=\"367.6\" relative-x=\"367.6\" relative-y=\"367.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#595A5958\" print-object=\"no\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 367.7 ) );
	object.setDefaultY( MxNumberTenths( 367.7 ) );
	object.setRelativeX( MxNumberTenths( 367.7 ) );
	object.setRelativeY( MxNumberTenths( 367.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-y=\"367.7\" relative-x=\"367.7\" relative-y=\"367.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#5C5B5A\" print-object=\"yes\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 367.8 ) );
	object.setDefaultY( MxNumberTenths( 367.8 ) );
	object.setRelativeX( MxNumberTenths( 367.8 ) );
	object.setRelativeY( MxNumberTenths( 367.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"367.8\" relative-x=\"367.8\" relative-y=\"367.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#5D5E5D5C\" print-object=\"no\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 367.9 ) );
	object.setDefaultY( MxNumberTenths( 367.9 ) );
	object.setRelativeX( MxNumberTenths( 367.9 ) );
	object.setRelativeY( MxNumberTenths( 367.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name relative-y=\"367.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#605F5E\" print-object=\"yes\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 368 ) );
	object.setDefaultY( MxNumberTenths( 368 ) );
	object.setRelativeX( MxNumberTenths( 368 ) );
	object.setRelativeY( MxNumberTenths( 368 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"368\" default-y=\"368\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#61626160\" print-object=\"no\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 368.1 ) );
	object.setDefaultY( MxNumberTenths( 368.1 ) );
	object.setRelativeX( MxNumberTenths( 368.1 ) );
	object.setRelativeY( MxNumberTenths( 368.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-y=\"368.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#646362\" print-object=\"yes\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 368.2 ) );
	object.setDefaultY( MxNumberTenths( 368.2 ) );
	object.setRelativeX( MxNumberTenths( 368.2 ) );
	object.setRelativeY( MxNumberTenths( 368.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"368.2\" relative-x=\"368.2\" font-size=\"large\" font-weight=\"normal\" color=\"#65666564\" print-object=\"no\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 368.3 ) );
	object.setDefaultY( MxNumberTenths( 368.3 ) );
	object.setRelativeX( MxNumberTenths( 368.3 ) );
	object.setRelativeY( MxNumberTenths( 368.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name relative-x=\"368.3\" font-weight=\"bold\" color=\"#686766\" print-object=\"yes\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 368.4 ) );
	object.setDefaultY( MxNumberTenths( 368.4 ) );
	object.setRelativeX( MxNumberTenths( 368.4 ) );
	object.setRelativeY( MxNumberTenths( 368.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"368.4\" default-y=\"368.4\" relative-x=\"368.4\" relative-y=\"368.4\" color=\"#696A6968\" print-object=\"no\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 368.5 ) );
	object.setDefaultY( MxNumberTenths( 368.5 ) );
	object.setRelativeX( MxNumberTenths( 368.5 ) );
	object.setRelativeY( MxNumberTenths( 368.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-y=\"368.5\" relative-y=\"368.5\" print-object=\"yes\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 368.6 ) );
	object.setDefaultY( MxNumberTenths( 368.6 ) );
	object.setRelativeX( MxNumberTenths( 368.6 ) );
	object.setRelativeY( MxNumberTenths( 368.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"368.6\" relative-y=\"368.6\" font-family=\"DEF\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 368.7 ) );
	object.setDefaultY( MxNumberTenths( 368.7 ) );
	object.setRelativeX( MxNumberTenths( 368.7 ) );
	object.setRelativeY( MxNumberTenths( 368.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name relative-y=\"368.7\" font-family=\"XYZ\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 368.8 ) );
	object.setDefaultY( MxNumberTenths( 368.8 ) );
	object.setRelativeX( MxNumberTenths( 368.8 ) );
	object.setRelativeY( MxNumberTenths( 368.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"368.8\" default-y=\"368.8\" relative-x=\"368.8\" font-family=\"ABC\" font-style=\"normal\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 368.9 ) );
	object.setDefaultY( MxNumberTenths( 368.9 ) );
	object.setRelativeX( MxNumberTenths( 368.9 ) );
	object.setRelativeY( MxNumberTenths( 368.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-y=\"368.9\" relative-x=\"368.9\" font-family=\"DEF\" font-style=\"italic\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 369 ) );
	object.setDefaultY( MxNumberTenths( 369 ) );
	object.setRelativeX( MxNumberTenths( 369 ) );
	object.setRelativeY( MxNumberTenths( 369 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"369\" relative-x=\"369\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 369.1 ) );
	object.setDefaultY( MxNumberTenths( 369.1 ) );
	object.setRelativeX( MxNumberTenths( 369.1 ) );
	object.setRelativeY( MxNumberTenths( 369.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name font-style=\"italic\" font-size=\"1.1\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 369.2 ) );
	object.setDefaultY( MxNumberTenths( 369.2 ) );
	object.setRelativeX( MxNumberTenths( 369.2 ) );
	object.setRelativeY( MxNumberTenths( 369.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"369.2\" default-y=\"369.2\" relative-y=\"369.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 369.3 ) );
	object.setDefaultY( MxNumberTenths( 369.3 ) );
	object.setRelativeX( MxNumberTenths( 369.3 ) );
	object.setRelativeY( MxNumberTenths( 369.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-y=\"369.3\" relative-y=\"369.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 369.4 ) );
	object.setDefaultY( MxNumberTenths( 369.4 ) );
	object.setRelativeX( MxNumberTenths( 369.4 ) );
	object.setRelativeY( MxNumberTenths( 369.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"369.4\" relative-x=\"369.4\" relative-y=\"369.4\" font-size=\"large\" font-weight=\"normal\" color=\"#7D7E7D7C\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 369.5 ) );
	object.setDefaultY( MxNumberTenths( 369.5 ) );
	object.setRelativeX( MxNumberTenths( 369.5 ) );
	object.setRelativeY( MxNumberTenths( 369.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name relative-x=\"369.5\" relative-y=\"369.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#807F7E\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 369.6 ) );
	object.setDefaultY( MxNumberTenths( 369.6 ) );
	object.setRelativeX( MxNumberTenths( 369.6 ) );
	object.setRelativeY( MxNumberTenths( 369.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"369.6\" default-y=\"369.6\" relative-x=\"369.6\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" color=\"#81828180\" print-object=\"no\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 369.7 ) );
	object.setDefaultY( MxNumberTenths( 369.7 ) );
	object.setRelativeX( MxNumberTenths( 369.7 ) );
	object.setRelativeY( MxNumberTenths( 369.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-y=\"369.7\" font-family=\"ABC\" font-weight=\"bold\" color=\"#848382\" print-object=\"yes\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 369.8 ) );
	object.setDefaultY( MxNumberTenths( 369.8 ) );
	object.setRelativeX( MxNumberTenths( 369.8 ) );
	object.setRelativeY( MxNumberTenths( 369.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"369.8\" font-family=\"DEF\" font-weight=\"normal\" color=\"#85868584\" print-object=\"no\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 369.9 ) );
	object.setDefaultY( MxNumberTenths( 369.9 ) );
	object.setRelativeX( MxNumberTenths( 369.9 ) );
	object.setRelativeY( MxNumberTenths( 369.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name font-family=\"XYZ\" font-weight=\"bold\" color=\"#888786\" print-object=\"yes\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 370 ) );
	object.setDefaultY( MxNumberTenths( 370 ) );
	object.setRelativeX( MxNumberTenths( 370 ) );
	object.setRelativeY( MxNumberTenths( 370 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"370\" default-y=\"370\" relative-x=\"370\" relative-y=\"370\" font-family=\"ABC\" font-style=\"normal\" color=\"#898A8988\" print-object=\"no\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 370.1 ) );
	object.setDefaultY( MxNumberTenths( 370.1 ) );
	object.setRelativeX( MxNumberTenths( 370.1 ) );
	object.setRelativeY( MxNumberTenths( 370.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-y=\"370.1\" relative-x=\"370.1\" relative-y=\"370.1\" font-style=\"italic\" color=\"#8C8B8A\" print-object=\"yes\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 370.2 ) );
	object.setDefaultY( MxNumberTenths( 370.2 ) );
	object.setRelativeX( MxNumberTenths( 370.2 ) );
	object.setRelativeY( MxNumberTenths( 370.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"370.2\" relative-x=\"370.2\" relative-y=\"370.2\" font-style=\"normal\" color=\"#8D8E8D8C\" print-object=\"no\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 370.3 ) );
	object.setDefaultY( MxNumberTenths( 370.3 ) );
	object.setRelativeX( MxNumberTenths( 370.3 ) );
	object.setRelativeY( MxNumberTenths( 370.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name relative-y=\"370.3\" font-style=\"italic\" print-object=\"yes\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 370.4 ) );
	object.setDefaultY( MxNumberTenths( 370.4 ) );
	object.setRelativeX( MxNumberTenths( 370.4 ) );
	object.setRelativeY( MxNumberTenths( 370.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"370.4\" default-y=\"370.4\" font-style=\"normal\" font-size=\"large\" print-object=\"no\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 370.5 ) );
	object.setDefaultY( MxNumberTenths( 370.5 ) );
	object.setRelativeX( MxNumberTenths( 370.5 ) );
	object.setRelativeY( MxNumberTenths( 370.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-y=\"370.5\" font-style=\"italic\" font-size=\"1.1\" print-object=\"yes\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 370.6 ) );
	object.setDefaultY( MxNumberTenths( 370.6 ) );
	object.setRelativeX( MxNumberTenths( 370.6 ) );
	object.setRelativeY( MxNumberTenths( 370.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"370.6\" relative-x=\"370.6\" font-family=\"ABC\" font-size=\"large\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 370.7 ) );
	object.setDefaultY( MxNumberTenths( 370.7 ) );
	object.setRelativeX( MxNumberTenths( 370.7 ) );
	object.setRelativeY( MxNumberTenths( 370.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name relative-x=\"370.7\" font-family=\"DEF\" font-size=\"1.1\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 370.8 ) );
	object.setDefaultY( MxNumberTenths( 370.8 ) );
	object.setRelativeX( MxNumberTenths( 370.8 ) );
	object.setRelativeY( MxNumberTenths( 370.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"370.8\" default-y=\"370.8\" relative-x=\"370.8\" relative-y=\"370.8\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 370.9 ) );
	object.setDefaultY( MxNumberTenths( 370.9 ) );
	object.setRelativeX( MxNumberTenths( 370.9 ) );
	object.setRelativeY( MxNumberTenths( 370.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-y=\"370.9\" relative-y=\"370.9\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 371 ) );
	object.setDefaultY( MxNumberTenths( 371 ) );
	object.setRelativeX( MxNumberTenths( 371 ) );
	object.setRelativeY( MxNumberTenths( 371 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"371\" relative-y=\"371\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 371.1 ) );
	object.setDefaultY( MxNumberTenths( 371.1 ) );
	object.setRelativeX( MxNumberTenths( 371.1 ) );
	object.setRelativeY( MxNumberTenths( 371.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name relative-y=\"371.1\" font-weight=\"bold\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 371.2 ) );
	object.setDefaultY( MxNumberTenths( 371.2 ) );
	object.setRelativeX( MxNumberTenths( 371.2 ) );
	object.setRelativeY( MxNumberTenths( 371.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"371.2\" default-y=\"371.2\" relative-x=\"371.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#A1A2A1A0\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 371.3 ) );
	object.setDefaultY( MxNumberTenths( 371.3 ) );
	object.setRelativeX( MxNumberTenths( 371.3 ) );
	object.setRelativeY( MxNumberTenths( 371.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-y=\"371.3\" relative-x=\"371.3\" font-style=\"italic\" font-weight=\"bold\" color=\"#A4A3A2\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 371.4 ) );
	object.setDefaultY( MxNumberTenths( 371.4 ) );
	object.setRelativeX( MxNumberTenths( 371.4 ) );
	object.setRelativeY( MxNumberTenths( 371.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"371.4\" relative-x=\"371.4\" font-style=\"normal\" font-weight=\"normal\" color=\"#A5A6A5A4\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 371.5 ) );
	object.setDefaultY( MxNumberTenths( 371.5 ) );
	object.setRelativeX( MxNumberTenths( 371.5 ) );
	object.setRelativeY( MxNumberTenths( 371.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name font-style=\"italic\" font-weight=\"bold\" color=\"#A8A7A6\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 371.6 ) );
	object.setDefaultY( MxNumberTenths( 371.6 ) );
	object.setRelativeX( MxNumberTenths( 371.6 ) );
	object.setRelativeY( MxNumberTenths( 371.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"371.6\" default-y=\"371.6\" relative-y=\"371.6\" font-family=\"DEF\" font-style=\"normal\" color=\"#A9AAA9A8\" print-object=\"no\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 371.7 ) );
	object.setDefaultY( MxNumberTenths( 371.7 ) );
	object.setRelativeX( MxNumberTenths( 371.7 ) );
	object.setRelativeY( MxNumberTenths( 371.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-y=\"371.7\" relative-y=\"371.7\" font-family=\"XYZ\" font-style=\"italic\" color=\"#ACABAA\" print-object=\"yes\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 371.8 ) );
	object.setDefaultY( MxNumberTenths( 371.8 ) );
	object.setRelativeX( MxNumberTenths( 371.8 ) );
	object.setRelativeY( MxNumberTenths( 371.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"371.8\" relative-x=\"371.8\" relative-y=\"371.8\" font-family=\"ABC\" font-size=\"large\" color=\"#ADAEADAC\" print-object=\"no\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 371.9 ) );
	object.setDefaultY( MxNumberTenths( 371.9 ) );
	object.setRelativeX( MxNumberTenths( 371.9 ) );
	object.setRelativeY( MxNumberTenths( 371.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name relative-x=\"371.9\" relative-y=\"371.9\" font-family=\"DEF\" font-size=\"1.1\" color=\"#B0AFAE\" print-object=\"yes\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 372 ) );
	object.setDefaultY( MxNumberTenths( 372 ) );
	object.setRelativeX( MxNumberTenths( 372 ) );
	object.setRelativeY( MxNumberTenths( 372 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"372\" default-y=\"372\" relative-x=\"372\" font-family=\"XYZ\" font-size=\"large\" color=\"#B1B2B1B0\" print-object=\"no\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 372.1 ) );
	object.setDefaultY( MxNumberTenths( 372.1 ) );
	object.setRelativeX( MxNumberTenths( 372.1 ) );
	object.setRelativeY( MxNumberTenths( 372.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-y=\"372.1\" font-size=\"1.1\" print-object=\"yes\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 372.2 ) );
	object.setDefaultY( MxNumberTenths( 372.2 ) );
	object.setRelativeX( MxNumberTenths( 372.2 ) );
	object.setRelativeY( MxNumberTenths( 372.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"372.2\" font-size=\"large\" print-object=\"no\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 372.3 ) );
	object.setDefaultY( MxNumberTenths( 372.3 ) );
	object.setRelativeX( MxNumberTenths( 372.3 ) );
	object.setRelativeY( MxNumberTenths( 372.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name font-size=\"1.1\" print-object=\"yes\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 372.4 ) );
	object.setDefaultY( MxNumberTenths( 372.4 ) );
	object.setRelativeX( MxNumberTenths( 372.4 ) );
	object.setRelativeY( MxNumberTenths( 372.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"372.4\" default-y=\"372.4\" relative-x=\"372.4\" relative-y=\"372.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" print-object=\"no\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 372.5 ) );
	object.setDefaultY( MxNumberTenths( 372.5 ) );
	object.setRelativeX( MxNumberTenths( 372.5 ) );
	object.setRelativeY( MxNumberTenths( 372.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-y=\"372.5\" relative-x=\"372.5\" relative-y=\"372.5\" font-style=\"italic\" font-weight=\"bold\" print-object=\"yes\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 372.6 ) );
	object.setDefaultY( MxNumberTenths( 372.6 ) );
	object.setRelativeX( MxNumberTenths( 372.6 ) );
	object.setRelativeY( MxNumberTenths( 372.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"372.6\" relative-x=\"372.6\" relative-y=\"372.6\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 372.7 ) );
	object.setDefaultY( MxNumberTenths( 372.7 ) );
	object.setRelativeX( MxNumberTenths( 372.7 ) );
	object.setRelativeY( MxNumberTenths( 372.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name relative-y=\"372.7\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 372.8 ) );
	object.setDefaultY( MxNumberTenths( 372.8 ) );
	object.setRelativeX( MxNumberTenths( 372.8 ) );
	object.setRelativeY( MxNumberTenths( 372.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"372.8\" default-y=\"372.8\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 372.9 ) );
	object.setDefaultY( MxNumberTenths( 372.9 ) );
	object.setRelativeX( MxNumberTenths( 372.9 ) );
	object.setRelativeY( MxNumberTenths( 372.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-y=\"372.9\" font-family=\"XYZ\" font-style=\"italic\" font-weight=\"bold\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 373 ) );
	object.setDefaultY( MxNumberTenths( 373 ) );
	object.setRelativeX( MxNumberTenths( 373 ) );
	object.setRelativeY( MxNumberTenths( 373 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"373\" relative-x=\"373\" font-family=\"ABC\" font-weight=\"normal\" color=\"#C5C6C5C4\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 373.1 ) );
	object.setDefaultY( MxNumberTenths( 373.1 ) );
	object.setRelativeX( MxNumberTenths( 373.1 ) );
	object.setRelativeY( MxNumberTenths( 373.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name relative-x=\"373.1\" font-weight=\"bold\" color=\"#C8C7C6\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 373.2 ) );
	object.setDefaultY( MxNumberTenths( 373.2 ) );
	object.setRelativeX( MxNumberTenths( 373.2 ) );
	object.setRelativeY( MxNumberTenths( 373.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"373.2\" default-y=\"373.2\" relative-x=\"373.2\" relative-y=\"373.2\" font-size=\"large\" color=\"#C9CAC9C8\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 373.3 ) );
	object.setDefaultY( MxNumberTenths( 373.3 ) );
	object.setRelativeX( MxNumberTenths( 373.3 ) );
	object.setRelativeY( MxNumberTenths( 373.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-y=\"373.3\" relative-y=\"373.3\" font-size=\"1.1\" color=\"#CCCBCA\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 373.4 ) );
	object.setDefaultY( MxNumberTenths( 373.4 ) );
	object.setRelativeX( MxNumberTenths( 373.4 ) );
	object.setRelativeY( MxNumberTenths( 373.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"373.4\" relative-y=\"373.4\" font-size=\"large\" color=\"#CDCECDCC\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 373.5 ) );
	object.setDefaultY( MxNumberTenths( 373.5 ) );
	object.setRelativeX( MxNumberTenths( 373.5 ) );
	object.setRelativeY( MxNumberTenths( 373.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name relative-y=\"373.5\" font-size=\"1.1\" color=\"#D0CFCE\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 373.6 ) );
	object.setDefaultY( MxNumberTenths( 373.6 ) );
	object.setRelativeX( MxNumberTenths( 373.6 ) );
	object.setRelativeY( MxNumberTenths( 373.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"373.6\" default-y=\"373.6\" relative-x=\"373.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#D1D2D1D0\" print-object=\"no\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 373.7 ) );
	object.setDefaultY( MxNumberTenths( 373.7 ) );
	object.setRelativeX( MxNumberTenths( 373.7 ) );
	object.setRelativeY( MxNumberTenths( 373.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-y=\"373.7\" relative-x=\"373.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#D4D3D2\" print-object=\"yes\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 373.8 ) );
	object.setDefaultY( MxNumberTenths( 373.8 ) );
	object.setRelativeX( MxNumberTenths( 373.8 ) );
	object.setRelativeY( MxNumberTenths( 373.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"373.8\" relative-x=\"373.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#D5D6D5D4\" print-object=\"no\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 373.9 ) );
	object.setDefaultY( MxNumberTenths( 373.9 ) );
	object.setRelativeX( MxNumberTenths( 373.9 ) );
	object.setRelativeY( MxNumberTenths( 373.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name font-family=\"ABC\" font-style=\"italic\" print-object=\"yes\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 374 ) );
	object.setDefaultY( MxNumberTenths( 374 ) );
	object.setRelativeX( MxNumberTenths( 374 ) );
	object.setRelativeY( MxNumberTenths( 374 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"374\" default-y=\"374\" relative-y=\"374\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" print-object=\"no\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 374.1 ) );
	object.setDefaultY( MxNumberTenths( 374.1 ) );
	object.setRelativeX( MxNumberTenths( 374.1 ) );
	object.setRelativeY( MxNumberTenths( 374.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-y=\"374.1\" relative-y=\"374.1\" font-style=\"italic\" font-weight=\"bold\" print-object=\"yes\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 374.2 ) );
	object.setDefaultY( MxNumberTenths( 374.2 ) );
	object.setRelativeX( MxNumberTenths( 374.2 ) );
	object.setRelativeY( MxNumberTenths( 374.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"374.2\" relative-x=\"374.2\" relative-y=\"374.2\" font-weight=\"normal\" print-object=\"no\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 374.3 ) );
	object.setDefaultY( MxNumberTenths( 374.3 ) );
	object.setRelativeX( MxNumberTenths( 374.3 ) );
	object.setRelativeY( MxNumberTenths( 374.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name relative-x=\"374.3\" relative-y=\"374.3\" font-weight=\"bold\" print-object=\"yes\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 374.4 ) );
	object.setDefaultY( MxNumberTenths( 374.4 ) );
	object.setRelativeX( MxNumberTenths( 374.4 ) );
	object.setRelativeY( MxNumberTenths( 374.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"374.4\" default-y=\"374.4\" relative-x=\"374.4\" font-weight=\"normal\" print-object=\"no\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 374.5 ) );
	object.setDefaultY( MxNumberTenths( 374.5 ) );
	object.setRelativeX( MxNumberTenths( 374.5 ) );
	object.setRelativeY( MxNumberTenths( 374.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-y=\"374.5\" font-weight=\"bold\" print-object=\"yes\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 374.6 ) );
	object.setDefaultY( MxNumberTenths( 374.6 ) );
	object.setRelativeX( MxNumberTenths( 374.6 ) );
	object.setRelativeY( MxNumberTenths( 374.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"374.6\" font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 374.7 ) );
	object.setDefaultY( MxNumberTenths( 374.7 ) );
	object.setRelativeX( MxNumberTenths( 374.7 ) );
	object.setRelativeY( MxNumberTenths( 374.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name font-family=\"XYZ\" font-size=\"1.1\" font-weight=\"bold\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 374.8 ) );
	object.setDefaultY( MxNumberTenths( 374.8 ) );
	object.setRelativeX( MxNumberTenths( 374.8 ) );
	object.setRelativeY( MxNumberTenths( 374.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"374.8\" default-y=\"374.8\" relative-x=\"374.8\" relative-y=\"374.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#E9EAE9E8\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 374.9 ) );
	object.setDefaultY( MxNumberTenths( 374.9 ) );
	object.setRelativeX( MxNumberTenths( 374.9 ) );
	object.setRelativeY( MxNumberTenths( 374.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-y=\"374.9\" relative-x=\"374.9\" relative-y=\"374.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#ECEBEA\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 375 ) );
	object.setDefaultY( MxNumberTenths( 375 ) );
	object.setRelativeX( MxNumberTenths( 375 ) );
	object.setRelativeY( MxNumberTenths( 375 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"375\" relative-x=\"375\" relative-y=\"375\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#EDEEEDEC\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 375.1 ) );
	object.setDefaultY( MxNumberTenths( 375.1 ) );
	object.setRelativeX( MxNumberTenths( 375.1 ) );
	object.setRelativeY( MxNumberTenths( 375.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name relative-y=\"375.1\" font-style=\"italic\" font-size=\"1.1\" color=\"#F0EFEE\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 375.2 ) );
	object.setDefaultY( MxNumberTenths( 375.2 ) );
	object.setRelativeX( MxNumberTenths( 375.2 ) );
	object.setRelativeY( MxNumberTenths( 375.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"375.2\" default-y=\"375.2\" font-style=\"normal\" font-size=\"large\" color=\"#F1F2F1F0\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 375.3 ) );
	object.setDefaultY( MxNumberTenths( 375.3 ) );
	object.setRelativeX( MxNumberTenths( 375.3 ) );
	object.setRelativeY( MxNumberTenths( 375.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-y=\"375.3\" font-style=\"italic\" color=\"#F4F3F2\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 375.4 ) );
	object.setDefaultY( MxNumberTenths( 375.4 ) );
	object.setRelativeX( MxNumberTenths( 375.4 ) );
	object.setRelativeY( MxNumberTenths( 375.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"375.4\" relative-x=\"375.4\" color=\"#F5F6F5F4\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 375.5 ) );
	object.setDefaultY( MxNumberTenths( 375.5 ) );
	object.setRelativeX( MxNumberTenths( 375.5 ) );
	object.setRelativeY( MxNumberTenths( 375.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name relative-x=\"375.5\" color=\"#F8F7F6\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 375.6 ) );
	object.setDefaultY( MxNumberTenths( 375.6 ) );
	object.setRelativeX( MxNumberTenths( 375.6 ) );
	object.setRelativeY( MxNumberTenths( 375.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"375.6\" default-y=\"375.6\" relative-x=\"375.6\" relative-y=\"375.6\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#F9FAF9F8\" print-object=\"no\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 375.7 ) );
	object.setDefaultY( MxNumberTenths( 375.7 ) );
	object.setRelativeX( MxNumberTenths( 375.7 ) );
	object.setRelativeY( MxNumberTenths( 375.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-y=\"375.7\" relative-y=\"375.7\" font-family=\"ABC\" font-weight=\"bold\" print-object=\"yes\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 375.8 ) );
	object.setDefaultY( MxNumberTenths( 375.8 ) );
	object.setRelativeX( MxNumberTenths( 375.8 ) );
	object.setRelativeY( MxNumberTenths( 375.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"375.8\" relative-y=\"375.8\" font-family=\"DEF\" font-weight=\"normal\" print-object=\"no\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 375.9 ) );
	object.setDefaultY( MxNumberTenths( 375.9 ) );
	object.setRelativeX( MxNumberTenths( 375.9 ) );
	object.setRelativeY( MxNumberTenths( 375.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name relative-y=\"375.9\" font-family=\"XYZ\" font-weight=\"bold\" print-object=\"yes\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 376 ) );
	object.setDefaultY( MxNumberTenths( 376 ) );
	object.setRelativeX( MxNumberTenths( 376 ) );
	object.setRelativeY( MxNumberTenths( 376 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"376\" default-y=\"376\" relative-x=\"376\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" print-object=\"no\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 376.1 ) );
	object.setDefaultY( MxNumberTenths( 376.1 ) );
	object.setRelativeX( MxNumberTenths( 376.1 ) );
	object.setRelativeY( MxNumberTenths( 376.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#040302" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-y=\"376.1\" relative-x=\"376.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" print-object=\"yes\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 376.2 ) );
	object.setDefaultY( MxNumberTenths( 376.2 ) );
	object.setRelativeX( MxNumberTenths( 376.2 ) );
	object.setRelativeY( MxNumberTenths( 376.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"376.2\" relative-x=\"376.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" print-object=\"no\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 376.3 ) );
	object.setDefaultY( MxNumberTenths( 376.3 ) );
	object.setRelativeX( MxNumberTenths( 376.3 ) );
	object.setRelativeY( MxNumberTenths( 376.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#080706" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" print-object=\"yes\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 376.4 ) );
	object.setDefaultY( MxNumberTenths( 376.4 ) );
	object.setRelativeX( MxNumberTenths( 376.4 ) );
	object.setRelativeY( MxNumberTenths( 376.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"376.4\" default-y=\"376.4\" relative-y=\"376.4\" font-style=\"normal\" font-size=\"large\" print-object=\"no\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( true );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 376.5 ) );
	object.setDefaultY( MxNumberTenths( 376.5 ) );
	object.setRelativeX( MxNumberTenths( 376.5 ) );
	object.setRelativeY( MxNumberTenths( 376.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-y=\"376.5\" relative-y=\"376.5\" font-style=\"italic\" font-size=\"1.1\" print-object=\"yes\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 376.6 ) );
	object.setDefaultY( MxNumberTenths( 376.6 ) );
	object.setRelativeX( MxNumberTenths( 376.6 ) );
	object.setRelativeY( MxNumberTenths( 376.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"376.6\" relative-x=\"376.6\" relative-y=\"376.6\" font-family=\"ABC\" font-size=\"large\" color=\"#0D0E0D0C\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 376.7 ) );
	object.setDefaultY( MxNumberTenths( 376.7 ) );
	object.setRelativeX( MxNumberTenths( 376.7 ) );
	object.setRelativeY( MxNumberTenths( 376.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name relative-x=\"376.7\" relative-y=\"376.7\" font-family=\"DEF\" color=\"#100F0E\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 376.8 ) );
	object.setDefaultY( MxNumberTenths( 376.8 ) );
	object.setRelativeX( MxNumberTenths( 376.8 ) );
	object.setRelativeY( MxNumberTenths( 376.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"376.8\" default-y=\"376.8\" relative-x=\"376.8\" font-family=\"XYZ\" color=\"#11121110\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 376.9 ) );
	object.setDefaultY( MxNumberTenths( 376.9 ) );
	object.setRelativeX( MxNumberTenths( 376.9 ) );
	object.setRelativeY( MxNumberTenths( 376.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#141312" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-y=\"376.9\" font-family=\"ABC\" color=\"#141312\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 377 ) );
	object.setDefaultY( MxNumberTenths( 377 ) );
	object.setRelativeX( MxNumberTenths( 377 ) );
	object.setRelativeY( MxNumberTenths( 377 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-x=\"377\" font-family=\"DEF\" color=\"#15161514\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 377.1 ) );
	object.setDefaultY( MxNumberTenths( 377.1 ) );
	object.setRelativeX( MxNumberTenths( 377.1 ) );
	object.setRelativeY( MxNumberTenths( 377.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name color=\"#181716\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 377.2 ) );
	object.setDefaultY( MxNumberTenths( 377.2 ) );
	object.setRelativeX( MxNumberTenths( 377.2 ) );
	object.setRelativeY( MxNumberTenths( 377.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name default-x=\"377.2\" default-y=\"377.2\" relative-x=\"377.2\" relative-y=\"377.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#191A1918\" justify=\"right\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 377.3 ) );
	object.setDefaultY( MxNumberTenths( 377.3 ) );
	object.setRelativeX( MxNumberTenths( 377.3 ) );
	object.setRelativeY( MxNumberTenths( 377.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name default-y=\"377.3\" relative-x=\"377.3\" relative-y=\"377.3\" font-style=\"italic\" font-weight=\"bold\" color=\"#1C1B1A\" justify=\"left\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( true );
	object.setDefaultX( MxNumberTenths( 377.4 ) );
	object.setDefaultY( MxNumberTenths( 377.4 ) );
	object.setRelativeX( MxNumberTenths( 377.4 ) );
	object.setRelativeY( MxNumberTenths( 377.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	expected = "<part-name default-x=\"377.4\" relative-x=\"377.4\" relative-y=\"377.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#1D1E1D1C\" justify=\"center\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 377.5 ) );
	object.setDefaultY( MxNumberTenths( 377.5 ) );
	object.setRelativeX( MxNumberTenths( 377.5 ) );
	object.setRelativeY( MxNumberTenths( 377.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	expected = "<part-name relative-y=\"377.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">D,E,F</part-name>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsPartName )
{
	MxEsPartName object( XsString( "D,E,F" ) );
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
	object.setIsPrintObjectPresent( false );
	object.setIsJustifyPresent( false );
	object.setDefaultX( MxNumberTenths( 377.6 ) );
	object.setDefaultY( MxNumberTenths( 377.6 ) );
	object.setRelativeX( MxNumberTenths( 377.6 ) );
	object.setRelativeY( MxNumberTenths( 377.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	expected = "<part-name>D,E,F</part-name>";
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


