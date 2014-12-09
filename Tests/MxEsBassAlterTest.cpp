/** *******************************************************
  * 
  * MxEsBassAlterTest.cpp
  * Created: 2014-12-05 20:57:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsBassAlter.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsBassAlter )
{
	MxEsBassAlter object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintObject().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = ( MxEnumLeftRight( lexicon::enums::LeftRight::right ) ).toString();
	std::string actual = object.getLocation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsBassAlter )
{
	MxEsBassAlter object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsBassAlter )
{
	MxEsBassAlter object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsBassAlter )
{
	MxEsBassAlter object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberSemitones( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = "MxEsBassAlter";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = "bass-alter";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsBassAlter )
{
	MxEsBassAlter object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setPrintObject0, MxEsBassAlter )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setPrintObject( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
	object.setPrintObject( value2 );
	expected = value2;
	actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX1, MxEsBassAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY2, MxEsBassAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX3, MxEsBassAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY4, MxEsBassAlter )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily5, MxEsBassAlter )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle6, MxEsBassAlter )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize7, MxEsBassAlter )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight8, MxEsBassAlter )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor9, MxEsBassAlter )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setLocation10, MxEsBassAlter )
{
	MxEnumLeftRight value1( lexicon::enums::LeftRight::right );
	MxEnumLeftRight value2( lexicon::enums::LeftRight::left );
	CHECK( ( value1 != value2 ) )
	MxEsBassAlter object;
	object.setLocation( value1 );
	MxEnumLeftRight expected = value1;
	MxEnumLeftRight actual = object.getLocation();
	CHECK_EQUAL( expected, actual )
	object.setLocation( value2 );
	expected = value2;
	actual = object.getLocation();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsPrintObjectRequired0, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsPrintObjectRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired1, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired2, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired3, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired4, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired5, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired6, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired7, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired8, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired9, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationRequired10, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsLocationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsPrintObjectPresent0, MxEsBassAlter )
{
	MxEsBassAlter object;
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
TEST( getIsDefaultXPresent1, MxEsBassAlter )
{
	MxEsBassAlter object;
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
TEST( getIsDefaultYPresent2, MxEsBassAlter )
{
	MxEsBassAlter object;
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
TEST( getIsRelativeXPresent3, MxEsBassAlter )
{
	MxEsBassAlter object;
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
TEST( getIsRelativeYPresent4, MxEsBassAlter )
{
	MxEsBassAlter object;
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
TEST( getIsFontFamilyPresent5, MxEsBassAlter )
{
	MxEsBassAlter object;
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
TEST( getIsFontStylePresent6, MxEsBassAlter )
{
	MxEsBassAlter object;
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
TEST( getIsFontSizePresent7, MxEsBassAlter )
{
	MxEsBassAlter object;
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
TEST( getIsFontWeightPresent8, MxEsBassAlter )
{
	MxEsBassAlter object;
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
TEST( getIsColorPresent9, MxEsBassAlter )
{
	MxEsBassAlter object;
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
TEST( getIsLocationPresent10, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLocationPresent( true );
	expected = true;
	actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLocationPresent( false );
	expected = false;
	actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsPrintObjectDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = true;
	bool actual = object.getIsPrintObjectDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLocationDefaultDefined, MxEsBassAlter )
{
	MxEsBassAlter object;
	bool expected = true;
	bool actual = object.getIsLocationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getPrintObjectDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintObjectDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLocationDefaultValue, MxEsBassAlter )
{
	MxEsBassAlter object;
	MxEnumLeftRight expected( lexicon::enums::LeftRight::right );
	MxEnumLeftRight actual = object.getLocationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 41.3 ) );
	object.setDefaultY( MxNumberTenths( 41.3 ) );
	object.setRelativeX( MxNumberTenths( 41.3 ) );
	object.setRelativeY( MxNumberTenths( 41.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
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
	object.setIsLocationPresent( true );
	expected = "<bass-alter print-object=\"yes\" default-x=\"41.3\" default-y=\"41.3\" relative-x=\"41.3\" relative-y=\"41.3\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#292A2928\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 41.4 ) );
	object.setDefaultY( MxNumberTenths( 41.4 ) );
	object.setRelativeX( MxNumberTenths( 41.4 ) );
	object.setRelativeY( MxNumberTenths( 41.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"41.4\" default-y=\"41.4\" relative-x=\"41.4\" relative-y=\"41.4\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#2C2B2A\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 41.5 ) );
	object.setDefaultY( MxNumberTenths( 41.5 ) );
	object.setRelativeX( MxNumberTenths( 41.5 ) );
	object.setRelativeY( MxNumberTenths( 41.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"41.5\" relative-x=\"41.5\" relative-y=\"41.5\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#2D2E2D2C\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 41.6 ) );
	object.setDefaultY( MxNumberTenths( 41.6 ) );
	object.setRelativeX( MxNumberTenths( 41.6 ) );
	object.setRelativeY( MxNumberTenths( 41.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-x=\"41.6\" relative-y=\"41.6\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#302F2E\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 41.7 ) );
	object.setDefaultY( MxNumberTenths( 41.7 ) );
	object.setRelativeX( MxNumberTenths( 41.7 ) );
	object.setRelativeY( MxNumberTenths( 41.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"41.7\" relative-y=\"41.7\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#31323130\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 41.8 ) );
	object.setDefaultY( MxNumberTenths( 41.8 ) );
	object.setRelativeX( MxNumberTenths( 41.8 ) );
	object.setRelativeY( MxNumberTenths( 41.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"41.8\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#343332\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 41.9 ) );
	object.setDefaultY( MxNumberTenths( 41.9 ) );
	object.setRelativeX( MxNumberTenths( 41.9 ) );
	object.setRelativeY( MxNumberTenths( 41.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"41.9\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#35363534\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 42 ) );
	object.setDefaultY( MxNumberTenths( 42 ) );
	object.setRelativeX( MxNumberTenths( 42 ) );
	object.setRelativeY( MxNumberTenths( 42 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-y=\"42\" font-size=\"1.1\" font-weight=\"bold\" color=\"#383736\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 42.1 ) );
	object.setDefaultY( MxNumberTenths( 42.1 ) );
	object.setRelativeX( MxNumberTenths( 42.1 ) );
	object.setRelativeY( MxNumberTenths( 42.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"42.1\" default-y=\"42.1\" relative-x=\"42.1\" font-weight=\"normal\" color=\"#393A3938\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 42.2 ) );
	object.setDefaultY( MxNumberTenths( 42.2 ) );
	object.setRelativeX( MxNumberTenths( 42.2 ) );
	object.setRelativeY( MxNumberTenths( 42.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"42.2\" relative-x=\"42.2\" color=\"#3C3B3A\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 42.3 ) );
	object.setDefaultY( MxNumberTenths( 42.3 ) );
	object.setRelativeX( MxNumberTenths( 42.3 ) );
	object.setRelativeY( MxNumberTenths( 42.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" relative-x=\"42.3\" relative-y=\"42.3\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 42.4 ) );
	object.setDefaultY( MxNumberTenths( 42.4 ) );
	object.setRelativeX( MxNumberTenths( 42.4 ) );
	object.setRelativeY( MxNumberTenths( 42.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-x=\"42.4\" relative-y=\"42.4\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 42.5 ) );
	object.setDefaultY( MxNumberTenths( 42.5 ) );
	object.setRelativeX( MxNumberTenths( 42.5 ) );
	object.setRelativeY( MxNumberTenths( 42.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"42.5\" default-y=\"42.5\" relative-y=\"42.5\" font-family=\"ABC\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 42.6 ) );
	object.setDefaultY( MxNumberTenths( 42.6 ) );
	object.setRelativeX( MxNumberTenths( 42.6 ) );
	object.setRelativeY( MxNumberTenths( 42.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"42.6\" default-y=\"42.6\" relative-y=\"42.6\" font-family=\"DEF\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 42.7 ) );
	object.setDefaultY( MxNumberTenths( 42.7 ) );
	object.setRelativeX( MxNumberTenths( 42.7 ) );
	object.setRelativeY( MxNumberTenths( 42.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"42.7\" relative-y=\"42.7\" font-family=\"XYZ\" font-style=\"normal\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 42.8 ) );
	object.setDefaultY( MxNumberTenths( 42.8 ) );
	object.setRelativeX( MxNumberTenths( 42.8 ) );
	object.setRelativeY( MxNumberTenths( 42.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter font-family=\"ABC\" font-style=\"italic\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 42.9 ) );
	object.setDefaultY( MxNumberTenths( 42.9 ) );
	object.setRelativeX( MxNumberTenths( 42.9 ) );
	object.setRelativeY( MxNumberTenths( 42.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"42.9\" relative-x=\"42.9\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 43 ) );
	object.setDefaultY( MxNumberTenths( 43 ) );
	object.setRelativeX( MxNumberTenths( 43 ) );
	object.setRelativeY( MxNumberTenths( 43 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"43\" relative-x=\"43\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 43.1 ) );
	object.setDefaultY( MxNumberTenths( 43.1 ) );
	object.setRelativeX( MxNumberTenths( 43.1 ) );
	object.setRelativeY( MxNumberTenths( 43.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"43.1\" relative-x=\"43.1\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 43.2 ) );
	object.setDefaultY( MxNumberTenths( 43.2 ) );
	object.setRelativeX( MxNumberTenths( 43.2 ) );
	object.setRelativeY( MxNumberTenths( 43.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-y=\"43.2\" relative-x=\"43.2\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 43.3 ) );
	object.setDefaultY( MxNumberTenths( 43.3 ) );
	object.setRelativeX( MxNumberTenths( 43.3 ) );
	object.setRelativeY( MxNumberTenths( 43.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"43.3\" default-y=\"43.3\" relative-y=\"43.3\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#51525150\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 43.4 ) );
	object.setDefaultY( MxNumberTenths( 43.4 ) );
	object.setRelativeX( MxNumberTenths( 43.4 ) );
	object.setRelativeY( MxNumberTenths( 43.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"43.4\" relative-y=\"43.4\" font-size=\"1.1\" font-weight=\"bold\" color=\"#545352\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 43.5 ) );
	object.setDefaultY( MxNumberTenths( 43.5 ) );
	object.setRelativeX( MxNumberTenths( 43.5 ) );
	object.setRelativeY( MxNumberTenths( 43.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" relative-y=\"43.5\" font-size=\"large\" font-weight=\"normal\" color=\"#55565554\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 43.6 ) );
	object.setDefaultY( MxNumberTenths( 43.6 ) );
	object.setRelativeX( MxNumberTenths( 43.6 ) );
	object.setRelativeY( MxNumberTenths( 43.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-y=\"43.6\" font-size=\"1.1\" font-weight=\"bold\" color=\"#585756\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 43.7 ) );
	object.setDefaultY( MxNumberTenths( 43.7 ) );
	object.setRelativeX( MxNumberTenths( 43.7 ) );
	object.setRelativeY( MxNumberTenths( 43.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"43.7\" default-y=\"43.7\" relative-x=\"43.7\" relative-y=\"43.7\" font-family=\"ABC\" font-weight=\"normal\" color=\"#595A5958\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 43.8 ) );
	object.setDefaultY( MxNumberTenths( 43.8 ) );
	object.setRelativeX( MxNumberTenths( 43.8 ) );
	object.setRelativeY( MxNumberTenths( 43.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"43.8\" default-y=\"43.8\" relative-x=\"43.8\" font-family=\"DEF\" font-weight=\"bold\" color=\"#5C5B5A\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 43.9 ) );
	object.setDefaultY( MxNumberTenths( 43.9 ) );
	object.setRelativeX( MxNumberTenths( 43.9 ) );
	object.setRelativeY( MxNumberTenths( 43.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"43.9\" relative-x=\"43.9\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#5D5E5D5C\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 44 ) );
	object.setDefaultY( MxNumberTenths( 44 ) );
	object.setRelativeX( MxNumberTenths( 44 ) );
	object.setRelativeY( MxNumberTenths( 44 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-x=\"44\" font-family=\"ABC\" color=\"#605F5E\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 44.1 ) );
	object.setDefaultY( MxNumberTenths( 44.1 ) );
	object.setRelativeX( MxNumberTenths( 44.1 ) );
	object.setRelativeY( MxNumberTenths( 44.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"44.1\" font-family=\"DEF\" font-style=\"normal\" color=\"#61626160\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 44.2 ) );
	object.setDefaultY( MxNumberTenths( 44.2 ) );
	object.setRelativeX( MxNumberTenths( 44.2 ) );
	object.setRelativeY( MxNumberTenths( 44.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"44.2\" font-family=\"XYZ\" font-style=\"italic\" color=\"#646362\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 44.3 ) );
	object.setDefaultY( MxNumberTenths( 44.3 ) );
	object.setRelativeX( MxNumberTenths( 44.3 ) );
	object.setRelativeY( MxNumberTenths( 44.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"44.3\" relative-y=\"44.3\" font-style=\"normal\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 44.4 ) );
	object.setDefaultY( MxNumberTenths( 44.4 ) );
	object.setRelativeX( MxNumberTenths( 44.4 ) );
	object.setRelativeY( MxNumberTenths( 44.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-y=\"44.4\" relative-y=\"44.4\" font-style=\"italic\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 44.5 ) );
	object.setDefaultY( MxNumberTenths( 44.5 ) );
	object.setRelativeX( MxNumberTenths( 44.5 ) );
	object.setRelativeY( MxNumberTenths( 44.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"44.5\" default-y=\"44.5\" relative-x=\"44.5\" relative-y=\"44.5\" font-style=\"normal\" font-size=\"large\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 44.6 ) );
	object.setDefaultY( MxNumberTenths( 44.6 ) );
	object.setRelativeX( MxNumberTenths( 44.6 ) );
	object.setRelativeY( MxNumberTenths( 44.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"44.6\" relative-x=\"44.6\" relative-y=\"44.6\" font-style=\"italic\" font-size=\"1.1\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 44.7 ) );
	object.setDefaultY( MxNumberTenths( 44.7 ) );
	object.setRelativeX( MxNumberTenths( 44.7 ) );
	object.setRelativeY( MxNumberTenths( 44.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" relative-x=\"44.7\" relative-y=\"44.7\" font-style=\"normal\" font-size=\"large\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 44.8 ) );
	object.setDefaultY( MxNumberTenths( 44.8 ) );
	object.setRelativeX( MxNumberTenths( 44.8 ) );
	object.setRelativeY( MxNumberTenths( 44.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-x=\"44.8\" font-size=\"1.1\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 44.9 ) );
	object.setDefaultY( MxNumberTenths( 44.9 ) );
	object.setRelativeX( MxNumberTenths( 44.9 ) );
	object.setRelativeY( MxNumberTenths( 44.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"44.9\" default-y=\"44.9\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 45 ) );
	object.setDefaultY( MxNumberTenths( 45 ) );
	object.setRelativeX( MxNumberTenths( 45 ) );
	object.setRelativeY( MxNumberTenths( 45 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"45\" default-y=\"45\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 45.1 ) );
	object.setDefaultY( MxNumberTenths( 45.1 ) );
	object.setRelativeX( MxNumberTenths( 45.1 ) );
	object.setRelativeY( MxNumberTenths( 45.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"45.1\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 45.2 ) );
	object.setDefaultY( MxNumberTenths( 45.2 ) );
	object.setRelativeX( MxNumberTenths( 45.2 ) );
	object.setRelativeY( MxNumberTenths( 45.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 45.3 ) );
	object.setDefaultY( MxNumberTenths( 45.3 ) );
	object.setRelativeX( MxNumberTenths( 45.3 ) );
	object.setRelativeY( MxNumberTenths( 45.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"45.3\" relative-x=\"45.3\" relative-y=\"45.3\" font-family=\"DEF\" font-weight=\"normal\" color=\"#797A7978\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 45.4 ) );
	object.setDefaultY( MxNumberTenths( 45.4 ) );
	object.setRelativeX( MxNumberTenths( 45.4 ) );
	object.setRelativeY( MxNumberTenths( 45.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"45.4\" relative-x=\"45.4\" relative-y=\"45.4\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#7C7B7A\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 45.5 ) );
	object.setDefaultY( MxNumberTenths( 45.5 ) );
	object.setRelativeX( MxNumberTenths( 45.5 ) );
	object.setRelativeY( MxNumberTenths( 45.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"45.5\" relative-x=\"45.5\" relative-y=\"45.5\" font-style=\"normal\" font-weight=\"normal\" color=\"#7D7E7D7C\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 45.6 ) );
	object.setDefaultY( MxNumberTenths( 45.6 ) );
	object.setRelativeX( MxNumberTenths( 45.6 ) );
	object.setRelativeY( MxNumberTenths( 45.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-y=\"45.6\" relative-x=\"45.6\" relative-y=\"45.6\" font-style=\"italic\" font-weight=\"bold\" color=\"#807F7E\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 45.7 ) );
	object.setDefaultY( MxNumberTenths( 45.7 ) );
	object.setRelativeX( MxNumberTenths( 45.7 ) );
	object.setRelativeY( MxNumberTenths( 45.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"45.7\" default-y=\"45.7\" relative-y=\"45.7\" font-style=\"normal\" font-weight=\"normal\" color=\"#81828180\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 45.8 ) );
	object.setDefaultY( MxNumberTenths( 45.8 ) );
	object.setRelativeX( MxNumberTenths( 45.8 ) );
	object.setRelativeY( MxNumberTenths( 45.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"45.8\" font-style=\"italic\" color=\"#848382\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 45.9 ) );
	object.setDefaultY( MxNumberTenths( 45.9 ) );
	object.setRelativeX( MxNumberTenths( 45.9 ) );
	object.setRelativeY( MxNumberTenths( 45.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" font-style=\"normal\" color=\"#85868584\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 46 ) );
	object.setDefaultY( MxNumberTenths( 46 ) );
	object.setRelativeX( MxNumberTenths( 46 ) );
	object.setRelativeY( MxNumberTenths( 46 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter font-style=\"italic\" color=\"#888786\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 46.1 ) );
	object.setDefaultY( MxNumberTenths( 46.1 ) );
	object.setRelativeX( MxNumberTenths( 46.1 ) );
	object.setRelativeY( MxNumberTenths( 46.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"46.1\" default-y=\"46.1\" relative-x=\"46.1\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#898A8988\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 46.2 ) );
	object.setDefaultY( MxNumberTenths( 46.2 ) );
	object.setRelativeX( MxNumberTenths( 46.2 ) );
	object.setRelativeY( MxNumberTenths( 46.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"46.2\" default-y=\"46.2\" relative-x=\"46.2\" font-family=\"DEF\" font-size=\"1.1\" color=\"#8C8B8A\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 46.3 ) );
	object.setDefaultY( MxNumberTenths( 46.3 ) );
	object.setRelativeX( MxNumberTenths( 46.3 ) );
	object.setRelativeY( MxNumberTenths( 46.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"46.3\" relative-x=\"46.3\" relative-y=\"46.3\" font-family=\"XYZ\" font-size=\"large\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 46.4 ) );
	object.setDefaultY( MxNumberTenths( 46.4 ) );
	object.setRelativeX( MxNumberTenths( 46.4 ) );
	object.setRelativeY( MxNumberTenths( 46.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-x=\"46.4\" relative-y=\"46.4\" font-family=\"ABC\" font-size=\"1.1\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 46.5 ) );
	object.setDefaultY( MxNumberTenths( 46.5 ) );
	object.setRelativeX( MxNumberTenths( 46.5 ) );
	object.setRelativeY( MxNumberTenths( 46.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"46.5\" relative-y=\"46.5\" font-family=\"DEF\" font-size=\"large\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 46.6 ) );
	object.setDefaultY( MxNumberTenths( 46.6 ) );
	object.setRelativeX( MxNumberTenths( 46.6 ) );
	object.setRelativeY( MxNumberTenths( 46.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"46.6\" relative-y=\"46.6\" font-family=\"XYZ\" font-size=\"1.1\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 46.7 ) );
	object.setDefaultY( MxNumberTenths( 46.7 ) );
	object.setRelativeX( MxNumberTenths( 46.7 ) );
	object.setRelativeY( MxNumberTenths( 46.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"46.7\" relative-y=\"46.7\" font-size=\"large\" font-weight=\"normal\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 46.8 ) );
	object.setDefaultY( MxNumberTenths( 46.8 ) );
	object.setRelativeX( MxNumberTenths( 46.8 ) );
	object.setRelativeY( MxNumberTenths( 46.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-y=\"46.8\" font-size=\"1.1\" font-weight=\"bold\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 46.9 ) );
	object.setDefaultY( MxNumberTenths( 46.9 ) );
	object.setRelativeX( MxNumberTenths( 46.9 ) );
	object.setRelativeY( MxNumberTenths( 46.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"46.9\" default-y=\"46.9\" relative-x=\"46.9\" font-style=\"normal\" font-weight=\"normal\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 47 ) );
	object.setDefaultY( MxNumberTenths( 47 ) );
	object.setRelativeX( MxNumberTenths( 47 ) );
	object.setRelativeY( MxNumberTenths( 47 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"47\" relative-x=\"47\" font-style=\"italic\" font-weight=\"bold\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 47.1 ) );
	object.setDefaultY( MxNumberTenths( 47.1 ) );
	object.setRelativeX( MxNumberTenths( 47.1 ) );
	object.setRelativeY( MxNumberTenths( 47.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" relative-x=\"47.1\" font-style=\"normal\" font-weight=\"normal\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 47.2 ) );
	object.setDefaultY( MxNumberTenths( 47.2 ) );
	object.setRelativeX( MxNumberTenths( 47.2 ) );
	object.setRelativeY( MxNumberTenths( 47.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-x=\"47.2\" font-style=\"italic\" font-weight=\"bold\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 47.3 ) );
	object.setDefaultY( MxNumberTenths( 47.3 ) );
	object.setRelativeX( MxNumberTenths( 47.3 ) );
	object.setRelativeY( MxNumberTenths( 47.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"47.3\" default-y=\"47.3\" relative-y=\"47.3\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" color=\"#A1A2A1A0\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 47.4 ) );
	object.setDefaultY( MxNumberTenths( 47.4 ) );
	object.setRelativeX( MxNumberTenths( 47.4 ) );
	object.setRelativeY( MxNumberTenths( 47.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"47.4\" default-y=\"47.4\" relative-y=\"47.4\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" color=\"#A4A3A2\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 47.5 ) );
	object.setDefaultY( MxNumberTenths( 47.5 ) );
	object.setRelativeX( MxNumberTenths( 47.5 ) );
	object.setRelativeY( MxNumberTenths( 47.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"47.5\" relative-y=\"47.5\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#A5A6A5A4\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 47.6 ) );
	object.setDefaultY( MxNumberTenths( 47.6 ) );
	object.setRelativeX( MxNumberTenths( 47.6 ) );
	object.setRelativeY( MxNumberTenths( 47.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-y=\"47.6\" font-family=\"ABC\" color=\"#A8A7A6\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 47.7 ) );
	object.setDefaultY( MxNumberTenths( 47.7 ) );
	object.setRelativeX( MxNumberTenths( 47.7 ) );
	object.setRelativeY( MxNumberTenths( 47.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"47.7\" relative-x=\"47.7\" relative-y=\"47.7\" font-family=\"DEF\" font-size=\"large\" color=\"#A9AAA9A8\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 47.8 ) );
	object.setDefaultY( MxNumberTenths( 47.8 ) );
	object.setRelativeX( MxNumberTenths( 47.8 ) );
	object.setRelativeY( MxNumberTenths( 47.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"47.8\" relative-x=\"47.8\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#ACABAA\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 47.9 ) );
	object.setDefaultY( MxNumberTenths( 47.9 ) );
	object.setRelativeX( MxNumberTenths( 47.9 ) );
	object.setRelativeY( MxNumberTenths( 47.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"47.9\" relative-x=\"47.9\" font-size=\"large\" color=\"#ADAEADAC\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 48 ) );
	object.setDefaultY( MxNumberTenths( 48 ) );
	object.setRelativeX( MxNumberTenths( 48 ) );
	object.setRelativeY( MxNumberTenths( 48 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-y=\"48\" relative-x=\"48\" font-size=\"1.1\" color=\"#B0AFAE\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 48.1 ) );
	object.setDefaultY( MxNumberTenths( 48.1 ) );
	object.setRelativeX( MxNumberTenths( 48.1 ) );
	object.setRelativeY( MxNumberTenths( 48.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"48.1\" default-y=\"48.1\" font-size=\"large\" color=\"#B1B2B1B0\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 48.2 ) );
	object.setDefaultY( MxNumberTenths( 48.2 ) );
	object.setRelativeX( MxNumberTenths( 48.2 ) );
	object.setRelativeY( MxNumberTenths( 48.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"48.2\" font-size=\"1.1\" color=\"#B4B3B2\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 48.3 ) );
	object.setDefaultY( MxNumberTenths( 48.3 ) );
	object.setRelativeX( MxNumberTenths( 48.3 ) );
	object.setRelativeY( MxNumberTenths( 48.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" relative-y=\"48.3\" font-style=\"normal\" font-size=\"large\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 48.4 ) );
	object.setDefaultY( MxNumberTenths( 48.4 ) );
	object.setRelativeX( MxNumberTenths( 48.4 ) );
	object.setRelativeY( MxNumberTenths( 48.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-y=\"48.4\" font-style=\"italic\" font-size=\"1.1\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 48.5 ) );
	object.setDefaultY( MxNumberTenths( 48.5 ) );
	object.setRelativeX( MxNumberTenths( 48.5 ) );
	object.setRelativeY( MxNumberTenths( 48.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"48.5\" default-y=\"48.5\" relative-x=\"48.5\" relative-y=\"48.5\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 48.6 ) );
	object.setDefaultY( MxNumberTenths( 48.6 ) );
	object.setRelativeX( MxNumberTenths( 48.6 ) );
	object.setRelativeY( MxNumberTenths( 48.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"48.6\" default-y=\"48.6\" relative-x=\"48.6\" relative-y=\"48.6\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 48.7 ) );
	object.setDefaultY( MxNumberTenths( 48.7 ) );
	object.setRelativeX( MxNumberTenths( 48.7 ) );
	object.setRelativeY( MxNumberTenths( 48.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"48.7\" relative-x=\"48.7\" relative-y=\"48.7\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 48.8 ) );
	object.setDefaultY( MxNumberTenths( 48.8 ) );
	object.setRelativeX( MxNumberTenths( 48.8 ) );
	object.setRelativeY( MxNumberTenths( 48.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-x=\"48.8\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 48.9 ) );
	object.setDefaultY( MxNumberTenths( 48.9 ) );
	object.setRelativeX( MxNumberTenths( 48.9 ) );
	object.setRelativeY( MxNumberTenths( 48.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"48.9\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 49 ) );
	object.setDefaultY( MxNumberTenths( 49 ) );
	object.setRelativeX( MxNumberTenths( 49 ) );
	object.setRelativeY( MxNumberTenths( 49 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"49\" font-family=\"XYZ\" font-weight=\"bold\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 49.1 ) );
	object.setDefaultY( MxNumberTenths( 49.1 ) );
	object.setRelativeX( MxNumberTenths( 49.1 ) );
	object.setRelativeY( MxNumberTenths( 49.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"49.1\" font-weight=\"normal\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 49.2 ) );
	object.setDefaultY( MxNumberTenths( 49.2 ) );
	object.setRelativeX( MxNumberTenths( 49.2 ) );
	object.setRelativeY( MxNumberTenths( 49.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-y=\"49.2\" font-weight=\"bold\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 49.3 ) );
	object.setDefaultY( MxNumberTenths( 49.3 ) );
	object.setRelativeX( MxNumberTenths( 49.3 ) );
	object.setRelativeY( MxNumberTenths( 49.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"49.3\" default-y=\"49.3\" relative-x=\"49.3\" relative-y=\"49.3\" font-size=\"large\" font-weight=\"normal\" color=\"#C9CAC9C8\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 49.4 ) );
	object.setDefaultY( MxNumberTenths( 49.4 ) );
	object.setRelativeX( MxNumberTenths( 49.4 ) );
	object.setRelativeY( MxNumberTenths( 49.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"49.4\" relative-x=\"49.4\" relative-y=\"49.4\" font-size=\"1.1\" color=\"#CCCBCA\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 49.5 ) );
	object.setDefaultY( MxNumberTenths( 49.5 ) );
	object.setRelativeX( MxNumberTenths( 49.5 ) );
	object.setRelativeY( MxNumberTenths( 49.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" relative-x=\"49.5\" relative-y=\"49.5\" font-size=\"large\" color=\"#CDCECDCC\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 49.6 ) );
	object.setDefaultY( MxNumberTenths( 49.6 ) );
	object.setRelativeX( MxNumberTenths( 49.6 ) );
	object.setRelativeY( MxNumberTenths( 49.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-x=\"49.6\" relative-y=\"49.6\" font-size=\"1.1\" color=\"#D0CFCE\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 49.7 ) );
	object.setDefaultY( MxNumberTenths( 49.7 ) );
	object.setRelativeX( MxNumberTenths( 49.7 ) );
	object.setRelativeY( MxNumberTenths( 49.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"49.7\" default-y=\"49.7\" relative-y=\"49.7\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#D1D2D1D0\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 49.8 ) );
	object.setDefaultY( MxNumberTenths( 49.8 ) );
	object.setRelativeX( MxNumberTenths( 49.8 ) );
	object.setRelativeY( MxNumberTenths( 49.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"49.8\" default-y=\"49.8\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#D4D3D2\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 49.9 ) );
	object.setDefaultY( MxNumberTenths( 49.9 ) );
	object.setRelativeX( MxNumberTenths( 49.9 ) );
	object.setRelativeY( MxNumberTenths( 49.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"49.9\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#D5D6D5D4\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 50 ) );
	object.setDefaultY( MxNumberTenths( 50 ) );
	object.setRelativeX( MxNumberTenths( 50 ) );
	object.setRelativeY( MxNumberTenths( 50 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#D8D7D6\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 50.1 ) );
	object.setDefaultY( MxNumberTenths( 50.1 ) );
	object.setRelativeX( MxNumberTenths( 50.1 ) );
	object.setRelativeY( MxNumberTenths( 50.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"50.1\" relative-x=\"50.1\" font-family=\"DEF\" font-style=\"normal\" color=\"#D9DAD9D8\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 50.2 ) );
	object.setDefaultY( MxNumberTenths( 50.2 ) );
	object.setRelativeX( MxNumberTenths( 50.2 ) );
	object.setRelativeY( MxNumberTenths( 50.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"50.2\" relative-x=\"50.2\" font-family=\"XYZ\" font-style=\"italic\" color=\"#DCDBDA\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 50.3 ) );
	object.setDefaultY( MxNumberTenths( 50.3 ) );
	object.setRelativeX( MxNumberTenths( 50.3 ) );
	object.setRelativeY( MxNumberTenths( 50.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"50.3\" relative-x=\"50.3\" relative-y=\"50.3\" font-style=\"normal\" font-weight=\"normal\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 50.4 ) );
	object.setDefaultY( MxNumberTenths( 50.4 ) );
	object.setRelativeX( MxNumberTenths( 50.4 ) );
	object.setRelativeY( MxNumberTenths( 50.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-y=\"50.4\" relative-x=\"50.4\" relative-y=\"50.4\" font-weight=\"bold\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 50.5 ) );
	object.setDefaultY( MxNumberTenths( 50.5 ) );
	object.setRelativeX( MxNumberTenths( 50.5 ) );
	object.setRelativeY( MxNumberTenths( 50.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"50.5\" default-y=\"50.5\" relative-y=\"50.5\" font-weight=\"normal\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 50.6 ) );
	object.setDefaultY( MxNumberTenths( 50.6 ) );
	object.setRelativeX( MxNumberTenths( 50.6 ) );
	object.setRelativeY( MxNumberTenths( 50.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"50.6\" relative-y=\"50.6\" font-weight=\"bold\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 50.7 ) );
	object.setDefaultY( MxNumberTenths( 50.7 ) );
	object.setRelativeX( MxNumberTenths( 50.7 ) );
	object.setRelativeY( MxNumberTenths( 50.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" relative-y=\"50.7\" font-weight=\"normal\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 50.8 ) );
	object.setDefaultY( MxNumberTenths( 50.8 ) );
	object.setRelativeX( MxNumberTenths( 50.8 ) );
	object.setRelativeY( MxNumberTenths( 50.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter font-weight=\"bold\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 50.9 ) );
	object.setDefaultY( MxNumberTenths( 50.9 ) );
	object.setRelativeX( MxNumberTenths( 50.9 ) );
	object.setRelativeY( MxNumberTenths( 50.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-x=\"50.9\" default-y=\"50.9\" relative-x=\"50.9\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 51 ) );
	object.setDefaultY( MxNumberTenths( 51 ) );
	object.setRelativeX( MxNumberTenths( 51 ) );
	object.setRelativeY( MxNumberTenths( 51 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter default-x=\"51\" default-y=\"51\" relative-x=\"51\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 51.1 ) );
	object.setDefaultY( MxNumberTenths( 51.1 ) );
	object.setRelativeX( MxNumberTenths( 51.1 ) );
	object.setRelativeY( MxNumberTenths( 51.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter print-object=\"yes\" default-y=\"51.1\" relative-x=\"51.1\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" location=\"left\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setDefaultX( MxNumberTenths( 51.2 ) );
	object.setDefaultY( MxNumberTenths( 51.2 ) );
	object.setRelativeX( MxNumberTenths( 51.2 ) );
	object.setRelativeY( MxNumberTenths( 51.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter relative-x=\"51.2\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\">-1000</bass-alter>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEsBassAlter )
{
	MxEsBassAlter object( -1000 );
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
	object.setIsLocationPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setDefaultX( MxNumberTenths( 51.3 ) );
	object.setDefaultY( MxNumberTenths( 51.3 ) );
	object.setRelativeX( MxNumberTenths( 51.3 ) );
	object.setRelativeY( MxNumberTenths( 51.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setLocation( MxEnumLeftRight( lexicon::enums::LeftRight::left ) );
	expected = "<bass-alter>-1000</bass-alter>";
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


