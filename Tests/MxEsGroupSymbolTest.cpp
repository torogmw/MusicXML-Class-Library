/** *******************************************************
  * 
  * MxEsGroupSymbolTest.cpp
  * Created: 2014-12-05 20:57:58
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsGroupSymbol.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
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
TEST( ctorValue2, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::line );
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
TEST( ctorValue4, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::square );
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
TEST( ctorValue6, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::brace );
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
TEST( ctorValue8, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::bracket );
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

TEST( getClassName, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	std::string expected = "MxEsGroupSymbol";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	std::string expected = "group-symbol";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxEsGroupSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupSymbol object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxEsGroupSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupSymbol object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxEsGroupSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupSymbol object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxEsGroupSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupSymbol object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor4, MxEsGroupSymbol )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupSymbol object;
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

TEST( getIsDefaultXRequired0, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired4, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
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
TEST( getIsDefaultYPresent1, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
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
TEST( getIsRelativeXPresent2, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
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
TEST( getIsRelativeYPresent3, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
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
TEST( getIsColorPresent4, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
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

TEST( getIsDefaultXDefaultDefined, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsGroupSymbol )
{
	MxEsGroupSymbol object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 364.5 ) );
	object.setDefaultY( MxNumberTenths( 364.5 ) );
	object.setRelativeX( MxNumberTenths( 364.5 ) );
	object.setRelativeY( MxNumberTenths( 364.5 ) );
	object.setColor( MxColor( "#181716" ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	expected = "<group-symbol default-x=\"364.5\" default-y=\"364.5\" relative-x=\"364.5\" relative-y=\"364.5\" color=\"#181716\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 364.6 ) );
	object.setDefaultY( MxNumberTenths( 364.6 ) );
	object.setRelativeX( MxNumberTenths( 364.6 ) );
	object.setRelativeY( MxNumberTenths( 364.6 ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<group-symbol default-y=\"364.6\" relative-x=\"364.6\" relative-y=\"364.6\" color=\"#191A1918\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 364.7 ) );
	object.setDefaultY( MxNumberTenths( 364.7 ) );
	object.setRelativeX( MxNumberTenths( 364.7 ) );
	object.setRelativeY( MxNumberTenths( 364.7 ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<group-symbol default-x=\"364.7\" relative-x=\"364.7\" relative-y=\"364.7\" color=\"#1C1B1A\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 364.8 ) );
	object.setDefaultY( MxNumberTenths( 364.8 ) );
	object.setRelativeX( MxNumberTenths( 364.8 ) );
	object.setRelativeY( MxNumberTenths( 364.8 ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<group-symbol relative-y=\"364.8\" color=\"#1D1E1D1C\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 364.9 ) );
	object.setDefaultY( MxNumberTenths( 364.9 ) );
	object.setRelativeX( MxNumberTenths( 364.9 ) );
	object.setRelativeY( MxNumberTenths( 364.9 ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<group-symbol default-x=\"364.9\" default-y=\"364.9\" color=\"#201F1E\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 365 ) );
	object.setDefaultY( MxNumberTenths( 365 ) );
	object.setRelativeX( MxNumberTenths( 365 ) );
	object.setRelativeY( MxNumberTenths( 365 ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<group-symbol default-y=\"365\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 365.1 ) );
	object.setDefaultY( MxNumberTenths( 365.1 ) );
	object.setRelativeX( MxNumberTenths( 365.1 ) );
	object.setRelativeY( MxNumberTenths( 365.1 ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<group-symbol default-x=\"365.1\" relative-x=\"365.1\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 365.2 ) );
	object.setDefaultY( MxNumberTenths( 365.2 ) );
	object.setRelativeX( MxNumberTenths( 365.2 ) );
	object.setRelativeY( MxNumberTenths( 365.2 ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<group-symbol relative-x=\"365.2\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 365.3 ) );
	object.setDefaultY( MxNumberTenths( 365.3 ) );
	object.setRelativeX( MxNumberTenths( 365.3 ) );
	object.setRelativeY( MxNumberTenths( 365.3 ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<group-symbol default-x=\"365.3\" default-y=\"365.3\" relative-x=\"365.3\" relative-y=\"365.3\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 365.4 ) );
	object.setDefaultY( MxNumberTenths( 365.4 ) );
	object.setRelativeX( MxNumberTenths( 365.4 ) );
	object.setRelativeY( MxNumberTenths( 365.4 ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<group-symbol default-y=\"365.4\" relative-y=\"365.4\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 365.5 ) );
	object.setDefaultY( MxNumberTenths( 365.5 ) );
	object.setRelativeX( MxNumberTenths( 365.5 ) );
	object.setRelativeY( MxNumberTenths( 365.5 ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<group-symbol default-x=\"365.5\" relative-y=\"365.5\" color=\"#2C2B2A\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 365.6 ) );
	object.setDefaultY( MxNumberTenths( 365.6 ) );
	object.setRelativeX( MxNumberTenths( 365.6 ) );
	object.setRelativeY( MxNumberTenths( 365.6 ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<group-symbol relative-y=\"365.6\" color=\"#2D2E2D2C\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 365.7 ) );
	object.setDefaultY( MxNumberTenths( 365.7 ) );
	object.setRelativeX( MxNumberTenths( 365.7 ) );
	object.setRelativeY( MxNumberTenths( 365.7 ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<group-symbol default-x=\"365.7\" default-y=\"365.7\" relative-x=\"365.7\" color=\"#302F2E\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 365.8 ) );
	object.setDefaultY( MxNumberTenths( 365.8 ) );
	object.setRelativeX( MxNumberTenths( 365.8 ) );
	object.setRelativeY( MxNumberTenths( 365.8 ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<group-symbol default-y=\"365.8\" relative-x=\"365.8\" color=\"#31323130\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 365.9 ) );
	object.setDefaultY( MxNumberTenths( 365.9 ) );
	object.setRelativeX( MxNumberTenths( 365.9 ) );
	object.setRelativeY( MxNumberTenths( 365.9 ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<group-symbol default-x=\"365.9\" relative-x=\"365.9\" color=\"#343332\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 366 ) );
	object.setDefaultY( MxNumberTenths( 366 ) );
	object.setRelativeX( MxNumberTenths( 366 ) );
	object.setRelativeY( MxNumberTenths( 366 ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<group-symbol>none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 366.1 ) );
	object.setDefaultY( MxNumberTenths( 366.1 ) );
	object.setRelativeX( MxNumberTenths( 366.1 ) );
	object.setRelativeY( MxNumberTenths( 366.1 ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<group-symbol default-x=\"366.1\" default-y=\"366.1\" relative-y=\"366.1\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 366.2 ) );
	object.setDefaultY( MxNumberTenths( 366.2 ) );
	object.setRelativeX( MxNumberTenths( 366.2 ) );
	object.setRelativeY( MxNumberTenths( 366.2 ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<group-symbol default-y=\"366.2\" relative-y=\"366.2\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 366.3 ) );
	object.setDefaultY( MxNumberTenths( 366.3 ) );
	object.setRelativeX( MxNumberTenths( 366.3 ) );
	object.setRelativeY( MxNumberTenths( 366.3 ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<group-symbol default-x=\"366.3\" relative-x=\"366.3\" relative-y=\"366.3\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 366.4 ) );
	object.setDefaultY( MxNumberTenths( 366.4 ) );
	object.setRelativeX( MxNumberTenths( 366.4 ) );
	object.setRelativeY( MxNumberTenths( 366.4 ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<group-symbol relative-x=\"366.4\" relative-y=\"366.4\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 366.5 ) );
	object.setDefaultY( MxNumberTenths( 366.5 ) );
	object.setRelativeX( MxNumberTenths( 366.5 ) );
	object.setRelativeY( MxNumberTenths( 366.5 ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<group-symbol default-x=\"366.5\" default-y=\"366.5\" relative-x=\"366.5\" color=\"#403F3E\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 366.6 ) );
	object.setDefaultY( MxNumberTenths( 366.6 ) );
	object.setRelativeX( MxNumberTenths( 366.6 ) );
	object.setRelativeY( MxNumberTenths( 366.6 ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<group-symbol default-y=\"366.6\" color=\"#41424140\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 366.7 ) );
	object.setDefaultY( MxNumberTenths( 366.7 ) );
	object.setRelativeX( MxNumberTenths( 366.7 ) );
	object.setRelativeY( MxNumberTenths( 366.7 ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<group-symbol default-x=\"366.7\" color=\"#444342\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 366.8 ) );
	object.setDefaultY( MxNumberTenths( 366.8 ) );
	object.setRelativeX( MxNumberTenths( 366.8 ) );
	object.setRelativeY( MxNumberTenths( 366.8 ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<group-symbol color=\"#45464544\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 366.9 ) );
	object.setDefaultY( MxNumberTenths( 366.9 ) );
	object.setRelativeX( MxNumberTenths( 366.9 ) );
	object.setRelativeY( MxNumberTenths( 366.9 ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<group-symbol default-y=\"366.9\" relative-x=\"366.9\" relative-y=\"366.9\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 367 ) );
	object.setDefaultY( MxNumberTenths( 367 ) );
	object.setRelativeX( MxNumberTenths( 367 ) );
	object.setRelativeY( MxNumberTenths( 367 ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<group-symbol default-x=\"367\" relative-x=\"367\" relative-y=\"367\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 367.1 ) );
	object.setDefaultY( MxNumberTenths( 367.1 ) );
	object.setRelativeX( MxNumberTenths( 367.1 ) );
	object.setRelativeY( MxNumberTenths( 367.1 ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<group-symbol relative-y=\"367.1\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 367.2 ) );
	object.setDefaultY( MxNumberTenths( 367.2 ) );
	object.setRelativeX( MxNumberTenths( 367.2 ) );
	object.setRelativeY( MxNumberTenths( 367.2 ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<group-symbol default-x=\"367.2\" default-y=\"367.2\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 367.3 ) );
	object.setDefaultY( MxNumberTenths( 367.3 ) );
	object.setRelativeX( MxNumberTenths( 367.3 ) );
	object.setRelativeY( MxNumberTenths( 367.3 ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<group-symbol default-y=\"367.3\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 367.4 ) );
	object.setDefaultY( MxNumberTenths( 367.4 ) );
	object.setRelativeX( MxNumberTenths( 367.4 ) );
	object.setRelativeY( MxNumberTenths( 367.4 ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<group-symbol default-x=\"367.4\" relative-x=\"367.4\" color=\"#51525150\">none</group-symbol>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsGroupSymbol )
{
	MxEsGroupSymbol object( lexicon::enums::GroupSymbolValue::none );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 367.5 ) );
	object.setDefaultY( MxNumberTenths( 367.5 ) );
	object.setRelativeX( MxNumberTenths( 367.5 ) );
	object.setRelativeY( MxNumberTenths( 367.5 ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<group-symbol relative-x=\"367.5\" color=\"#545352\">none</group-symbol>";
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


