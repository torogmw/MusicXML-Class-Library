/** *******************************************************
  * 
  * MxEsPartSymbolTest.cpp
  * Created: 2014-12-05 20:57:50
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsPartSymbol.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	std::string expected = ( MxNumberStaffNumber(  ) ).toString();
	std::string actual = object.getTopStaff().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	std::string expected = ( MxNumberStaffNumber(  ) ).toString();
	std::string actual = object.getBottomStaff().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	expected = "none";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::brace ) );
	expected = "brace";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::line );
	std::string expected;
	std::string actual;
	expected = "line";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::bracket ) );
	expected = "bracket";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::square );
	std::string expected;
	std::string actual;
	expected = "square";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	expected = "none";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::brace );
	std::string expected;
	std::string actual;
	expected = "brace";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::line ) );
	expected = "line";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::bracket );
	std::string expected;
	std::string actual;
	expected = "bracket";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::square ) );
	expected = "square";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	std::string expected = "MxEsPartSymbol";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	std::string expected = "part-symbol";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	std::string expected = "The part-symbol element indicates how a symbol for a multi-staff part is indicated in the score.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setTopStaff0, MxEsPartSymbol )
{
	MxNumberStaffNumber value1( 1 );
	MxNumberStaffNumber value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsPartSymbol object;
	object.setTopStaff( value1 );
	MxNumberStaffNumber expected = value1;
	MxNumberStaffNumber actual = object.getTopStaff();
	CHECK_EQUAL( expected, actual )
	object.setTopStaff( value2 );
	expected = value2;
	actual = object.getTopStaff();
	CHECK_EQUAL( expected, actual )
}
TEST( setBottomStaff1, MxEsPartSymbol )
{
	MxNumberStaffNumber value1( 1 );
	MxNumberStaffNumber value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsPartSymbol object;
	object.setBottomStaff( value1 );
	MxNumberStaffNumber expected = value1;
	MxNumberStaffNumber actual = object.getBottomStaff();
	CHECK_EQUAL( expected, actual )
	object.setBottomStaff( value2 );
	expected = value2;
	actual = object.getBottomStaff();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxEsPartSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPartSymbol object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxEsPartSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPartSymbol object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxEsPartSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPartSymbol object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxEsPartSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsPartSymbol object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor6, MxEsPartSymbol )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsPartSymbol object;
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

TEST( getIsTopStaffRequired0, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsTopStaffRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBottomStaffRequired1, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsBottomStaffRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired6, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTopStaffPresent0, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsTopStaffPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTopStaffPresent( true );
	expected = true;
	actual = object.getIsTopStaffPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTopStaffPresent( false );
	expected = false;
	actual = object.getIsTopStaffPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBottomStaffPresent1, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsBottomStaffPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBottomStaffPresent( true );
	expected = true;
	actual = object.getIsBottomStaffPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBottomStaffPresent( false );
	expected = false;
	actual = object.getIsBottomStaffPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent2, MxEsPartSymbol )
{
	MxEsPartSymbol object;
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
TEST( getIsDefaultYPresent3, MxEsPartSymbol )
{
	MxEsPartSymbol object;
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
TEST( getIsRelativeXPresent4, MxEsPartSymbol )
{
	MxEsPartSymbol object;
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
TEST( getIsRelativeYPresent5, MxEsPartSymbol )
{
	MxEsPartSymbol object;
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
TEST( getIsColorPresent6, MxEsPartSymbol )
{
	MxEsPartSymbol object;
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

TEST( getIsTopStaffDefaultDefined, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsTopStaffDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBottomStaffDefaultDefined, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsBottomStaffDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTopStaffDefaultValue, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	MxNumberStaffNumber expected;
	MxNumberStaffNumber actual = object.getTopStaffDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBottomStaffDefaultValue, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	MxNumberStaffNumber expected;
	MxNumberStaffNumber actual = object.getBottomStaffDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsPartSymbol )
{
	MxEsPartSymbol object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 1.1 ) );
	object.setDefaultY( MxNumberTenths( 1.1 ) );
	object.setRelativeX( MxNumberTenths( 1.1 ) );
	object.setRelativeY( MxNumberTenths( 1.1 ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"1.1\" default-y=\"1.1\" relative-x=\"1.1\" relative-y=\"1.1\" color=\"#01020100\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 1.2 ) );
	object.setDefaultY( MxNumberTenths( 1.2 ) );
	object.setRelativeX( MxNumberTenths( 1.2 ) );
	object.setRelativeY( MxNumberTenths( 1.2 ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-x=\"1.2\" default-y=\"1.2\" relative-x=\"1.2\" relative-y=\"1.2\" color=\"#040302\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 1.3 ) );
	object.setDefaultY( MxNumberTenths( 1.3 ) );
	object.setRelativeX( MxNumberTenths( 1.3 ) );
	object.setRelativeY( MxNumberTenths( 1.3 ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"1.3\" default-y=\"1.3\" relative-x=\"1.3\" relative-y=\"1.3\" color=\"#05060504\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 1.4 ) );
	object.setDefaultY( MxNumberTenths( 1.4 ) );
	object.setRelativeX( MxNumberTenths( 1.4 ) );
	object.setRelativeY( MxNumberTenths( 1.4 ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<part-symbol default-y=\"1.4\" relative-x=\"1.4\" relative-y=\"1.4\" color=\"#080706\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 1.5 ) );
	object.setDefaultY( MxNumberTenths( 1.5 ) );
	object.setRelativeX( MxNumberTenths( 1.5 ) );
	object.setRelativeY( MxNumberTenths( 1.5 ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" relative-x=\"1.5\" relative-y=\"1.5\" color=\"#090A0908\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 1.6 ) );
	object.setDefaultY( MxNumberTenths( 1.6 ) );
	object.setRelativeX( MxNumberTenths( 1.6 ) );
	object.setRelativeY( MxNumberTenths( 1.6 ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<part-symbol bottom-staff=\"1\" relative-y=\"1.6\" color=\"#0C0B0A\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 1.7 ) );
	object.setDefaultY( MxNumberTenths( 1.7 ) );
	object.setRelativeX( MxNumberTenths( 1.7 ) );
	object.setRelativeY( MxNumberTenths( 1.7 ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"1.7\" color=\"#0D0E0D0C\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 1.8 ) );
	object.setDefaultY( MxNumberTenths( 1.8 ) );
	object.setRelativeX( MxNumberTenths( 1.8 ) );
	object.setRelativeY( MxNumberTenths( 1.8 ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<part-symbol default-x=\"1.8\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 1.9 ) );
	object.setDefaultY( MxNumberTenths( 1.9 ) );
	object.setRelativeX( MxNumberTenths( 1.9 ) );
	object.setRelativeY( MxNumberTenths( 1.9 ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"1.9\" default-y=\"1.9\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 2 ) );
	object.setDefaultY( MxNumberTenths( 2 ) );
	object.setRelativeX( MxNumberTenths( 2 ) );
	object.setRelativeY( MxNumberTenths( 2 ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-y=\"2\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 2.1 ) );
	object.setDefaultY( MxNumberTenths( 2.1 ) );
	object.setRelativeX( MxNumberTenths( 2.1 ) );
	object.setRelativeY( MxNumberTenths( 2.1 ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<part-symbol top-staff=\"1\" default-y=\"2.1\" relative-x=\"2.1\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 2.2 ) );
	object.setDefaultY( MxNumberTenths( 2.2 ) );
	object.setRelativeX( MxNumberTenths( 2.2 ) );
	object.setRelativeY( MxNumberTenths( 2.2 ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<part-symbol default-y=\"2.2\" relative-x=\"2.2\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 2.3 ) );
	object.setDefaultY( MxNumberTenths( 2.3 ) );
	object.setRelativeX( MxNumberTenths( 2.3 ) );
	object.setRelativeY( MxNumberTenths( 2.3 ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"2.3\" relative-x=\"2.3\" relative-y=\"2.3\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 2.4 ) );
	object.setDefaultY( MxNumberTenths( 2.4 ) );
	object.setRelativeX( MxNumberTenths( 2.4 ) );
	object.setRelativeY( MxNumberTenths( 2.4 ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-x=\"2.4\" relative-x=\"2.4\" relative-y=\"2.4\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 2.5 ) );
	object.setDefaultY( MxNumberTenths( 2.5 ) );
	object.setRelativeX( MxNumberTenths( 2.5 ) );
	object.setRelativeY( MxNumberTenths( 2.5 ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"2.5\" relative-x=\"2.5\" relative-y=\"2.5\" color=\"#1D1E1D1C\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 2.6 ) );
	object.setDefaultY( MxNumberTenths( 2.6 ) );
	object.setRelativeX( MxNumberTenths( 2.6 ) );
	object.setRelativeY( MxNumberTenths( 2.6 ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<part-symbol relative-y=\"2.6\" color=\"#201F1E\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 2.7 ) );
	object.setDefaultY( MxNumberTenths( 2.7 ) );
	object.setRelativeX( MxNumberTenths( 2.7 ) );
	object.setRelativeY( MxNumberTenths( 2.7 ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-y=\"2.7\" relative-y=\"2.7\" color=\"#21222120\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 2.8 ) );
	object.setDefaultY( MxNumberTenths( 2.8 ) );
	object.setRelativeX( MxNumberTenths( 2.8 ) );
	object.setRelativeY( MxNumberTenths( 2.8 ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-y=\"2.8\" relative-y=\"2.8\" color=\"#242322\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 2.9 ) );
	object.setDefaultY( MxNumberTenths( 2.9 ) );
	object.setRelativeX( MxNumberTenths( 2.9 ) );
	object.setRelativeY( MxNumberTenths( 2.9 ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"2.9\" default-y=\"2.9\" color=\"#25262524\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 3 ) );
	object.setDefaultY( MxNumberTenths( 3 ) );
	object.setRelativeX( MxNumberTenths( 3 ) );
	object.setRelativeY( MxNumberTenths( 3 ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<part-symbol default-x=\"3\" default-y=\"3\" color=\"#282726\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 3.1 ) );
	object.setDefaultY( MxNumberTenths( 3.1 ) );
	object.setRelativeX( MxNumberTenths( 3.1 ) );
	object.setRelativeY( MxNumberTenths( 3.1 ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"3.1\" relative-x=\"3.1\" color=\"#292A2928\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 3.2 ) );
	object.setDefaultY( MxNumberTenths( 3.2 ) );
	object.setRelativeX( MxNumberTenths( 3.2 ) );
	object.setRelativeY( MxNumberTenths( 3.2 ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<part-symbol bottom-staff=\"1\" relative-x=\"3.2\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 3.3 ) );
	object.setDefaultY( MxNumberTenths( 3.3 ) );
	object.setRelativeX( MxNumberTenths( 3.3 ) );
	object.setRelativeY( MxNumberTenths( 3.3 ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<part-symbol top-staff=\"1\" relative-x=\"3.3\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 3.4 ) );
	object.setDefaultY( MxNumberTenths( 3.4 ) );
	object.setRelativeX( MxNumberTenths( 3.4 ) );
	object.setRelativeY( MxNumberTenths( 3.4 ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<part-symbol relative-x=\"3.4\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 3.5 ) );
	object.setDefaultY( MxNumberTenths( 3.5 ) );
	object.setRelativeX( MxNumberTenths( 3.5 ) );
	object.setRelativeY( MxNumberTenths( 3.5 ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"3.5\" default-y=\"3.5\" relative-x=\"3.5\" relative-y=\"3.5\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 3.6 ) );
	object.setDefaultY( MxNumberTenths( 3.6 ) );
	object.setRelativeX( MxNumberTenths( 3.6 ) );
	object.setRelativeY( MxNumberTenths( 3.6 ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-x=\"3.6\" default-y=\"3.6\" relative-y=\"3.6\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 3.7 ) );
	object.setDefaultY( MxNumberTenths( 3.7 ) );
	object.setRelativeX( MxNumberTenths( 3.7 ) );
	object.setRelativeY( MxNumberTenths( 3.7 ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"3.7\" default-y=\"3.7\" relative-y=\"3.7\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 3.8 ) );
	object.setDefaultY( MxNumberTenths( 3.8 ) );
	object.setRelativeX( MxNumberTenths( 3.8 ) );
	object.setRelativeY( MxNumberTenths( 3.8 ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<part-symbol default-y=\"3.8\" relative-y=\"3.8\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 3.9 ) );
	object.setDefaultY( MxNumberTenths( 3.9 ) );
	object.setRelativeX( MxNumberTenths( 3.9 ) );
	object.setRelativeY( MxNumberTenths( 3.9 ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" relative-y=\"3.9\" color=\"#393A3938\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 4 ) );
	object.setDefaultY( MxNumberTenths( 4 ) );
	object.setRelativeX( MxNumberTenths( 4 ) );
	object.setRelativeY( MxNumberTenths( 4 ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<part-symbol bottom-staff=\"1\" relative-y=\"4\" color=\"#3C3B3A\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 4.1 ) );
	object.setDefaultY( MxNumberTenths( 4.1 ) );
	object.setRelativeX( MxNumberTenths( 4.1 ) );
	object.setRelativeY( MxNumberTenths( 4.1 ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"4.1\" relative-x=\"4.1\" color=\"#3D3E3D3C\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 4.2 ) );
	object.setDefaultY( MxNumberTenths( 4.2 ) );
	object.setRelativeX( MxNumberTenths( 4.2 ) );
	object.setRelativeY( MxNumberTenths( 4.2 ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<part-symbol default-x=\"4.2\" relative-x=\"4.2\" color=\"#403F3E\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 4.3 ) );
	object.setDefaultY( MxNumberTenths( 4.3 ) );
	object.setRelativeX( MxNumberTenths( 4.3 ) );
	object.setRelativeY( MxNumberTenths( 4.3 ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"4.3\" default-y=\"4.3\" relative-x=\"4.3\" color=\"#41424140\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 4.4 ) );
	object.setDefaultY( MxNumberTenths( 4.4 ) );
	object.setRelativeX( MxNumberTenths( 4.4 ) );
	object.setRelativeY( MxNumberTenths( 4.4 ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-y=\"4.4\" relative-x=\"4.4\" color=\"#444342\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 4.5 ) );
	object.setDefaultY( MxNumberTenths( 4.5 ) );
	object.setRelativeX( MxNumberTenths( 4.5 ) );
	object.setRelativeY( MxNumberTenths( 4.5 ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<part-symbol top-staff=\"1\" default-y=\"4.5\" relative-x=\"4.5\" color=\"#45464544\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 4.6 ) );
	object.setDefaultY( MxNumberTenths( 4.6 ) );
	object.setRelativeX( MxNumberTenths( 4.6 ) );
	object.setRelativeY( MxNumberTenths( 4.6 ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<part-symbol default-y=\"4.6\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 4.7 ) );
	object.setDefaultY( MxNumberTenths( 4.7 ) );
	object.setRelativeX( MxNumberTenths( 4.7 ) );
	object.setRelativeY( MxNumberTenths( 4.7 ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"4.7\" relative-y=\"4.7\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 4.8 ) );
	object.setDefaultY( MxNumberTenths( 4.8 ) );
	object.setRelativeX( MxNumberTenths( 4.8 ) );
	object.setRelativeY( MxNumberTenths( 4.8 ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-x=\"4.8\" relative-y=\"4.8\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 4.9 ) );
	object.setDefaultY( MxNumberTenths( 4.9 ) );
	object.setRelativeX( MxNumberTenths( 4.9 ) );
	object.setRelativeY( MxNumberTenths( 4.9 ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"4.9\" relative-y=\"4.9\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 5 ) );
	object.setDefaultY( MxNumberTenths( 5 ) );
	object.setRelativeX( MxNumberTenths( 5 ) );
	object.setRelativeY( MxNumberTenths( 5 ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<part-symbol relative-y=\"5\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 5.1 ) );
	object.setDefaultY( MxNumberTenths( 5.1 ) );
	object.setRelativeX( MxNumberTenths( 5.1 ) );
	object.setRelativeY( MxNumberTenths( 5.1 ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-y=\"5.1\" relative-x=\"5.1\" relative-y=\"5.1\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 5.2 ) );
	object.setDefaultY( MxNumberTenths( 5.2 ) );
	object.setRelativeX( MxNumberTenths( 5.2 ) );
	object.setRelativeY( MxNumberTenths( 5.2 ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-y=\"5.2\" relative-x=\"5.2\" relative-y=\"5.2\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 5.3 ) );
	object.setDefaultY( MxNumberTenths( 5.3 ) );
	object.setRelativeX( MxNumberTenths( 5.3 ) );
	object.setRelativeY( MxNumberTenths( 5.3 ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"5.3\" default-y=\"5.3\" relative-x=\"5.3\" color=\"#55565554\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 5.4 ) );
	object.setDefaultY( MxNumberTenths( 5.4 ) );
	object.setRelativeX( MxNumberTenths( 5.4 ) );
	object.setRelativeY( MxNumberTenths( 5.4 ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<part-symbol default-x=\"5.4\" default-y=\"5.4\" relative-x=\"5.4\" color=\"#585756\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 5.5 ) );
	object.setDefaultY( MxNumberTenths( 5.5 ) );
	object.setRelativeX( MxNumberTenths( 5.5 ) );
	object.setRelativeY( MxNumberTenths( 5.5 ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"5.5\" relative-x=\"5.5\" color=\"#595A5958\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 5.6 ) );
	object.setDefaultY( MxNumberTenths( 5.6 ) );
	object.setRelativeX( MxNumberTenths( 5.6 ) );
	object.setRelativeY( MxNumberTenths( 5.6 ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<part-symbol bottom-staff=\"1\" color=\"#5C5B5A\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 5.7 ) );
	object.setDefaultY( MxNumberTenths( 5.7 ) );
	object.setRelativeX( MxNumberTenths( 5.7 ) );
	object.setRelativeY( MxNumberTenths( 5.7 ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<part-symbol top-staff=\"1\" color=\"#5D5E5D5C\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 5.8 ) );
	object.setDefaultY( MxNumberTenths( 5.8 ) );
	object.setRelativeX( MxNumberTenths( 5.8 ) );
	object.setRelativeY( MxNumberTenths( 5.8 ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<part-symbol color=\"#605F5E\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 5.9 ) );
	object.setDefaultY( MxNumberTenths( 5.9 ) );
	object.setRelativeX( MxNumberTenths( 5.9 ) );
	object.setRelativeY( MxNumberTenths( 5.9 ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"5.9\" default-y=\"5.9\" relative-y=\"5.9\" color=\"#61626160\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 6 ) );
	object.setDefaultY( MxNumberTenths( 6 ) );
	object.setRelativeX( MxNumberTenths( 6 ) );
	object.setRelativeY( MxNumberTenths( 6 ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-x=\"6\" default-y=\"6\" relative-y=\"6\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 6.1 ) );
	object.setDefaultY( MxNumberTenths( 6.1 ) );
	object.setRelativeX( MxNumberTenths( 6.1 ) );
	object.setRelativeY( MxNumberTenths( 6.1 ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"6.1\" default-y=\"6.1\" relative-x=\"6.1\" relative-y=\"6.1\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 6.2 ) );
	object.setDefaultY( MxNumberTenths( 6.2 ) );
	object.setRelativeX( MxNumberTenths( 6.2 ) );
	object.setRelativeY( MxNumberTenths( 6.2 ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<part-symbol default-y=\"6.2\" relative-x=\"6.2\" relative-y=\"6.2\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 6.3 ) );
	object.setDefaultY( MxNumberTenths( 6.3 ) );
	object.setRelativeX( MxNumberTenths( 6.3 ) );
	object.setRelativeY( MxNumberTenths( 6.3 ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" relative-x=\"6.3\" relative-y=\"6.3\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 6.4 ) );
	object.setDefaultY( MxNumberTenths( 6.4 ) );
	object.setRelativeX( MxNumberTenths( 6.4 ) );
	object.setRelativeY( MxNumberTenths( 6.4 ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<part-symbol bottom-staff=\"1\" relative-x=\"6.4\" relative-y=\"6.4\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 6.5 ) );
	object.setDefaultY( MxNumberTenths( 6.5 ) );
	object.setRelativeX( MxNumberTenths( 6.5 ) );
	object.setRelativeY( MxNumberTenths( 6.5 ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"6.5\" relative-x=\"6.5\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 6.6 ) );
	object.setDefaultY( MxNumberTenths( 6.6 ) );
	object.setRelativeX( MxNumberTenths( 6.6 ) );
	object.setRelativeY( MxNumberTenths( 6.6 ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<part-symbol default-x=\"6.6\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 6.7 ) );
	object.setDefaultY( MxNumberTenths( 6.7 ) );
	object.setRelativeX( MxNumberTenths( 6.7 ) );
	object.setRelativeY( MxNumberTenths( 6.7 ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"6.7\" default-y=\"6.7\" color=\"#71727170\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 6.8 ) );
	object.setDefaultY( MxNumberTenths( 6.8 ) );
	object.setRelativeX( MxNumberTenths( 6.8 ) );
	object.setRelativeY( MxNumberTenths( 6.8 ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-y=\"6.8\" color=\"#747372\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 6.9 ) );
	object.setDefaultY( MxNumberTenths( 6.9 ) );
	object.setRelativeX( MxNumberTenths( 6.9 ) );
	object.setRelativeY( MxNumberTenths( 6.9 ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<part-symbol top-staff=\"1\" default-y=\"6.9\" color=\"#75767574\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 7 ) );
	object.setDefaultY( MxNumberTenths( 7 ) );
	object.setRelativeX( MxNumberTenths( 7 ) );
	object.setRelativeY( MxNumberTenths( 7 ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<part-symbol default-y=\"7\" color=\"#787776\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 7.1 ) );
	object.setDefaultY( MxNumberTenths( 7.1 ) );
	object.setRelativeX( MxNumberTenths( 7.1 ) );
	object.setRelativeY( MxNumberTenths( 7.1 ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"7.1\" relative-x=\"7.1\" relative-y=\"7.1\" color=\"#797A7978\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 7.2 ) );
	object.setDefaultY( MxNumberTenths( 7.2 ) );
	object.setRelativeX( MxNumberTenths( 7.2 ) );
	object.setRelativeY( MxNumberTenths( 7.2 ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-x=\"7.2\" relative-x=\"7.2\" relative-y=\"7.2\" color=\"#7C7B7A\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 7.3 ) );
	object.setDefaultY( MxNumberTenths( 7.3 ) );
	object.setRelativeX( MxNumberTenths( 7.3 ) );
	object.setRelativeY( MxNumberTenths( 7.3 ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"7.3\" relative-x=\"7.3\" relative-y=\"7.3\" color=\"#7D7E7D7C\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 7.4 ) );
	object.setDefaultY( MxNumberTenths( 7.4 ) );
	object.setRelativeX( MxNumberTenths( 7.4 ) );
	object.setRelativeY( MxNumberTenths( 7.4 ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<part-symbol relative-x=\"7.4\" relative-y=\"7.4\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 7.5 ) );
	object.setDefaultY( MxNumberTenths( 7.5 ) );
	object.setRelativeX( MxNumberTenths( 7.5 ) );
	object.setRelativeY( MxNumberTenths( 7.5 ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-y=\"7.5\" relative-x=\"7.5\" relative-y=\"7.5\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 7.6 ) );
	object.setDefaultY( MxNumberTenths( 7.6 ) );
	object.setRelativeX( MxNumberTenths( 7.6 ) );
	object.setRelativeY( MxNumberTenths( 7.6 ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-y=\"7.6\" relative-y=\"7.6\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 7.7 ) );
	object.setDefaultY( MxNumberTenths( 7.7 ) );
	object.setRelativeX( MxNumberTenths( 7.7 ) );
	object.setRelativeY( MxNumberTenths( 7.7 ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"7.7\" default-y=\"7.7\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 7.8 ) );
	object.setDefaultY( MxNumberTenths( 7.8 ) );
	object.setRelativeX( MxNumberTenths( 7.8 ) );
	object.setRelativeY( MxNumberTenths( 7.8 ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<part-symbol default-x=\"7.8\" default-y=\"7.8\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 7.9 ) );
	object.setDefaultY( MxNumberTenths( 7.9 ) );
	object.setRelativeX( MxNumberTenths( 7.9 ) );
	object.setRelativeY( MxNumberTenths( 7.9 ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"7.9\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 8 ) );
	object.setDefaultY( MxNumberTenths( 8 ) );
	object.setRelativeX( MxNumberTenths( 8 ) );
	object.setRelativeY( MxNumberTenths( 8 ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<part-symbol bottom-staff=\"1\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 8.1 ) );
	object.setDefaultY( MxNumberTenths( 8.1 ) );
	object.setRelativeX( MxNumberTenths( 8.1 ) );
	object.setRelativeY( MxNumberTenths( 8.1 ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<part-symbol top-staff=\"1\" relative-x=\"8.1\" color=\"#8D8E8D8C\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 8.2 ) );
	object.setDefaultY( MxNumberTenths( 8.2 ) );
	object.setRelativeX( MxNumberTenths( 8.2 ) );
	object.setRelativeY( MxNumberTenths( 8.2 ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<part-symbol relative-x=\"8.2\" color=\"#908F8E\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 8.3 ) );
	object.setDefaultY( MxNumberTenths( 8.3 ) );
	object.setRelativeX( MxNumberTenths( 8.3 ) );
	object.setRelativeY( MxNumberTenths( 8.3 ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-x=\"8.3\" default-y=\"8.3\" relative-x=\"8.3\" relative-y=\"8.3\" color=\"#91929190\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 8.4 ) );
	object.setDefaultY( MxNumberTenths( 8.4 ) );
	object.setRelativeX( MxNumberTenths( 8.4 ) );
	object.setRelativeY( MxNumberTenths( 8.4 ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"8.4\" default-y=\"8.4\" relative-x=\"8.4\" relative-y=\"8.4\" color=\"#949392\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 8.5 ) );
	object.setDefaultY( MxNumberTenths( 8.5 ) );
	object.setRelativeX( MxNumberTenths( 8.5 ) );
	object.setRelativeY( MxNumberTenths( 8.5 ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<part-symbol default-y=\"8.5\" relative-y=\"8.5\" color=\"#95969594\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 8.6 ) );
	object.setDefaultY( MxNumberTenths( 8.6 ) );
	object.setRelativeX( MxNumberTenths( 8.6 ) );
	object.setRelativeY( MxNumberTenths( 8.6 ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" relative-y=\"8.6\" color=\"#989796\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 8.7 ) );
	object.setDefaultY( MxNumberTenths( 8.7 ) );
	object.setRelativeX( MxNumberTenths( 8.7 ) );
	object.setRelativeY( MxNumberTenths( 8.7 ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<part-symbol bottom-staff=\"1\" relative-y=\"8.7\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 8.8 ) );
	object.setDefaultY( MxNumberTenths( 8.8 ) );
	object.setRelativeX( MxNumberTenths( 8.8 ) );
	object.setRelativeY( MxNumberTenths( 8.8 ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"8.8\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 8.9 ) );
	object.setDefaultY( MxNumberTenths( 8.9 ) );
	object.setRelativeX( MxNumberTenths( 8.9 ) );
	object.setRelativeY( MxNumberTenths( 8.9 ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<part-symbol default-x=\"8.9\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 9 ) );
	object.setDefaultY( MxNumberTenths( 9 ) );
	object.setRelativeX( MxNumberTenths( 9 ) );
	object.setRelativeY( MxNumberTenths( 9 ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"9\" default-y=\"9\" relative-x=\"9\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 9.1 ) );
	object.setDefaultY( MxNumberTenths( 9.1 ) );
	object.setRelativeX( MxNumberTenths( 9.1 ) );
	object.setRelativeY( MxNumberTenths( 9.1 ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-y=\"9.1\" relative-x=\"9.1\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 9.2 ) );
	object.setDefaultY( MxNumberTenths( 9.2 ) );
	object.setRelativeX( MxNumberTenths( 9.2 ) );
	object.setRelativeY( MxNumberTenths( 9.2 ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<part-symbol top-staff=\"1\" default-y=\"9.2\" relative-x=\"9.2\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 9.3 ) );
	object.setDefaultY( MxNumberTenths( 9.3 ) );
	object.setRelativeX( MxNumberTenths( 9.3 ) );
	object.setRelativeY( MxNumberTenths( 9.3 ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<part-symbol default-y=\"9.3\" relative-x=\"9.3\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 9.4 ) );
	object.setDefaultY( MxNumberTenths( 9.4 ) );
	object.setRelativeX( MxNumberTenths( 9.4 ) );
	object.setRelativeY( MxNumberTenths( 9.4 ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"9.4\" relative-x=\"9.4\" relative-y=\"9.4\" color=\"#A8A7A6\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 9.5 ) );
	object.setDefaultY( MxNumberTenths( 9.5 ) );
	object.setRelativeX( MxNumberTenths( 9.5 ) );
	object.setRelativeY( MxNumberTenths( 9.5 ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-x=\"9.5\" relative-y=\"9.5\" color=\"#A9AAA9A8\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 9.6 ) );
	object.setDefaultY( MxNumberTenths( 9.6 ) );
	object.setRelativeX( MxNumberTenths( 9.6 ) );
	object.setRelativeY( MxNumberTenths( 9.6 ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"9.6\" relative-y=\"9.6\" color=\"#ACABAA\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 9.7 ) );
	object.setDefaultY( MxNumberTenths( 9.7 ) );
	object.setRelativeX( MxNumberTenths( 9.7 ) );
	object.setRelativeY( MxNumberTenths( 9.7 ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<part-symbol relative-y=\"9.7\" color=\"#ADAEADAC\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 9.8 ) );
	object.setDefaultY( MxNumberTenths( 9.8 ) );
	object.setRelativeX( MxNumberTenths( 9.8 ) );
	object.setRelativeY( MxNumberTenths( 9.8 ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-y=\"9.8\" relative-y=\"9.8\" color=\"#B0AFAE\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 9.9 ) );
	object.setDefaultY( MxNumberTenths( 9.9 ) );
	object.setRelativeX( MxNumberTenths( 9.9 ) );
	object.setRelativeY( MxNumberTenths( 9.9 ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-y=\"9.9\" relative-y=\"9.9\" color=\"#B1B2B1B0\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 10 ) );
	object.setDefaultY( MxNumberTenths( 10 ) );
	object.setRelativeX( MxNumberTenths( 10 ) );
	object.setRelativeY( MxNumberTenths( 10 ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"10\" default-y=\"10\" relative-x=\"10\" color=\"#B4B3B2\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 10.1 ) );
	object.setDefaultY( MxNumberTenths( 10.1 ) );
	object.setRelativeX( MxNumberTenths( 10.1 ) );
	object.setRelativeY( MxNumberTenths( 10.1 ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<part-symbol default-x=\"10.1\" default-y=\"10.1\" relative-x=\"10.1\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 10.2 ) );
	object.setDefaultY( MxNumberTenths( 10.2 ) );
	object.setRelativeX( MxNumberTenths( 10.2 ) );
	object.setRelativeY( MxNumberTenths( 10.2 ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"10.2\" relative-x=\"10.2\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 10.3 ) );
	object.setDefaultY( MxNumberTenths( 10.3 ) );
	object.setRelativeX( MxNumberTenths( 10.3 ) );
	object.setRelativeY( MxNumberTenths( 10.3 ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<part-symbol bottom-staff=\"1\" relative-x=\"10.3\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 10.4 ) );
	object.setDefaultY( MxNumberTenths( 10.4 ) );
	object.setRelativeX( MxNumberTenths( 10.4 ) );
	object.setRelativeY( MxNumberTenths( 10.4 ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<part-symbol top-staff=\"1\" relative-x=\"10.4\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 10.5 ) );
	object.setDefaultY( MxNumberTenths( 10.5 ) );
	object.setRelativeX( MxNumberTenths( 10.5 ) );
	object.setRelativeY( MxNumberTenths( 10.5 ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<part-symbol>none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 10.6 ) );
	object.setDefaultY( MxNumberTenths( 10.6 ) );
	object.setRelativeX( MxNumberTenths( 10.6 ) );
	object.setRelativeY( MxNumberTenths( 10.6 ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<part-symbol top-staff=\"1\" bottom-staff=\"1\" default-x=\"10.6\" default-y=\"10.6\" relative-y=\"10.6\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 10.7 ) );
	object.setDefaultY( MxNumberTenths( 10.7 ) );
	object.setRelativeX( MxNumberTenths( 10.7 ) );
	object.setRelativeY( MxNumberTenths( 10.7 ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<part-symbol bottom-staff=\"1\" default-x=\"10.7\" default-y=\"10.7\" relative-y=\"10.7\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 10.8 ) );
	object.setDefaultY( MxNumberTenths( 10.8 ) );
	object.setRelativeX( MxNumberTenths( 10.8 ) );
	object.setRelativeY( MxNumberTenths( 10.8 ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<part-symbol top-staff=\"1\" default-x=\"10.8\" default-y=\"10.8\" relative-y=\"10.8\" color=\"#C4C3C2\">none</part-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEsPartSymbol )
{
	MxEsPartSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsTopStaffPresent( false );
	object.setIsBottomStaffPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 10.9 ) );
	object.setDefaultY( MxNumberTenths( 10.9 ) );
	object.setRelativeX( MxNumberTenths( 10.9 ) );
	object.setRelativeY( MxNumberTenths( 10.9 ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<part-symbol default-y=\"10.9\" relative-y=\"10.9\" color=\"#C5C6C5C4\">none</part-symbol>";
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


