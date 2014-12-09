/** *******************************************************
  * 
  * MxCxSmpPartSymbolTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpPartSymbol.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	std::string expected = ( MxNumberStaffNumber(  ) ).toString();
	std::string actual = object.getTopStaff().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	std::string expected = ( MxNumberStaffNumber(  ) ).toString();
	std::string actual = object.getBottomStaff().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::brace ) );
	expected = "brace";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::line ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "line";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::bracket ) );
	expected = "bracket";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::square ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	expected = "none";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::brace ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "brace";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::line ) );
	expected = "line";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::bracket ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
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

TEST( getClassName, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	std::string expected = "MxCxSmpPartSymbol";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	std::string expected = "part-symbol";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	std::string expected = "The part-symbol type indicates how a symbol for a multi-staff part is indicated in the score; brace is the default value. The top-staff and bottom-staff elements are used when the brace does not extend across the entire part. For example, in a 3-staff organ part, the top-staff will typically be 1 for the right hand, while the bottom-staff will typically be 2 for the left hand. Staff 3 for the pedals is usually outside the brace.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setTopStaff0, MxCxSmpPartSymbol )
{
	MxNumberStaffNumber value1( 1 );
	MxNumberStaffNumber value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPartSymbol object;
	object.setTopStaff( value1 );
	MxNumberStaffNumber expected = value1;
	MxNumberStaffNumber actual = object.getTopStaff();
	CHECK_EQUAL( expected, actual )
	object.setTopStaff( value2 );
	expected = value2;
	actual = object.getTopStaff();
	CHECK_EQUAL( expected, actual )
}
TEST( setBottomStaff1, MxCxSmpPartSymbol )
{
	MxNumberStaffNumber value1( 1 );
	MxNumberStaffNumber value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPartSymbol object;
	object.setBottomStaff( value1 );
	MxNumberStaffNumber expected = value1;
	MxNumberStaffNumber actual = object.getBottomStaff();
	CHECK_EQUAL( expected, actual )
	object.setBottomStaff( value2 );
	expected = value2;
	actual = object.getBottomStaff();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxCxSmpPartSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPartSymbol object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxCxSmpPartSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPartSymbol object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxCxSmpPartSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPartSymbol object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxCxSmpPartSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPartSymbol object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor6, MxCxSmpPartSymbol )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpPartSymbol object;
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

TEST( getIsTopStaffRequired0, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsTopStaffRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBottomStaffRequired1, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsBottomStaffRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired6, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTopStaffPresent0, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
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
TEST( getIsBottomStaffPresent1, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
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
TEST( getIsDefaultXPresent2, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
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
TEST( getIsDefaultYPresent3, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
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
TEST( getIsRelativeXPresent4, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
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
TEST( getIsRelativeYPresent5, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
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
TEST( getIsColorPresent6, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setTopStaff( MxNumberStaffNumber( 1 ) );
	object.setBottomStaff( MxNumberStaffNumber( 1 ) );
	object.setDefaultX( MxNumberTenths( 51.6 ) );
	object.setDefaultY( MxNumberTenths( 51.6 ) );
	object.setRelativeX( MxNumberTenths( 51.6 ) );
	object.setRelativeY( MxNumberTenths( 51.6 ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setIsTopStaffPresent( true );
	object.setIsBottomStaffPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart top-staff=\"1\" bottom-staff=\"1\" default-x=\"51.6\" default-y=\"51.6\" relative-x=\"51.6\" relative-y=\"51.6\" color=\"#31323130\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 51.7 ) );
	object.setDefaultY( MxNumberTenths( 51.7 ) );
	object.setRelativeX( MxNumberTenths( 51.7 ) );
	object.setRelativeY( MxNumberTenths( 51.7 ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<quiet bottom-staff=\"1\" default-x=\"51.7\" default-y=\"51.7\" relative-x=\"51.7\" relative-y=\"51.7\" color=\"#343332\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 51.8 ) );
	object.setDefaultY( MxNumberTenths( 51.8 ) );
	object.setRelativeX( MxNumberTenths( 51.8 ) );
	object.setRelativeY( MxNumberTenths( 51.8 ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<musicxmlishard top-staff=\"1\" default-x=\"51.8\" default-y=\"51.8\" relative-x=\"51.8\" relative-y=\"51.8\" color=\"#35363534\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 51.9 ) );
	object.setDefaultY( MxNumberTenths( 51.9 ) );
	object.setRelativeX( MxNumberTenths( 51.9 ) );
	object.setRelativeY( MxNumberTenths( 51.9 ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<bishop default-y=\"51.9\" relative-x=\"51.9\" relative-y=\"51.9\" color=\"#383736\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 52 ) );
	object.setDefaultY( MxNumberTenths( 52 ) );
	object.setRelativeX( MxNumberTenths( 52 ) );
	object.setRelativeY( MxNumberTenths( 52 ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<charlie top-staff=\"1\" bottom-staff=\"1\" relative-x=\"52\" relative-y=\"52\" color=\"#393A3938\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 52.1 ) );
	object.setDefaultY( MxNumberTenths( 52.1 ) );
	object.setRelativeX( MxNumberTenths( 52.1 ) );
	object.setRelativeY( MxNumberTenths( 52.1 ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<booksmart bottom-staff=\"1\" relative-y=\"52.1\" color=\"#3C3B3A\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 52.2 ) );
	object.setDefaultY( MxNumberTenths( 52.2 ) );
	object.setRelativeX( MxNumberTenths( 52.2 ) );
	object.setRelativeY( MxNumberTenths( 52.2 ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<quiet top-staff=\"1\" default-x=\"52.2\" color=\"#3D3E3D3C\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 52.3 ) );
	object.setDefaultY( MxNumberTenths( 52.3 ) );
	object.setRelativeX( MxNumberTenths( 52.3 ) );
	object.setRelativeY( MxNumberTenths( 52.3 ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<musicxmlishard default-x=\"52.3\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 52.4 ) );
	object.setDefaultY( MxNumberTenths( 52.4 ) );
	object.setRelativeX( MxNumberTenths( 52.4 ) );
	object.setRelativeY( MxNumberTenths( 52.4 ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<bishop top-staff=\"1\" bottom-staff=\"1\" default-x=\"52.4\" default-y=\"52.4\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 52.5 ) );
	object.setDefaultY( MxNumberTenths( 52.5 ) );
	object.setRelativeX( MxNumberTenths( 52.5 ) );
	object.setRelativeY( MxNumberTenths( 52.5 ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<charlie bottom-staff=\"1\" default-y=\"52.5\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 52.6 ) );
	object.setDefaultY( MxNumberTenths( 52.6 ) );
	object.setRelativeX( MxNumberTenths( 52.6 ) );
	object.setRelativeY( MxNumberTenths( 52.6 ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<booksmart top-staff=\"1\" default-y=\"52.6\" relative-x=\"52.6\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 52.7 ) );
	object.setDefaultY( MxNumberTenths( 52.7 ) );
	object.setRelativeX( MxNumberTenths( 52.7 ) );
	object.setRelativeY( MxNumberTenths( 52.7 ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<quiet default-y=\"52.7\" relative-x=\"52.7\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 52.8 ) );
	object.setDefaultY( MxNumberTenths( 52.8 ) );
	object.setRelativeX( MxNumberTenths( 52.8 ) );
	object.setRelativeY( MxNumberTenths( 52.8 ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<musicxmlishard top-staff=\"1\" bottom-staff=\"1\" default-x=\"52.8\" relative-x=\"52.8\" relative-y=\"52.8\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 52.9 ) );
	object.setDefaultY( MxNumberTenths( 52.9 ) );
	object.setRelativeX( MxNumberTenths( 52.9 ) );
	object.setRelativeY( MxNumberTenths( 52.9 ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<bishop bottom-staff=\"1\" default-x=\"52.9\" relative-x=\"52.9\" relative-y=\"52.9\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 53 ) );
	object.setDefaultY( MxNumberTenths( 53 ) );
	object.setRelativeX( MxNumberTenths( 53 ) );
	object.setRelativeY( MxNumberTenths( 53 ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<charlie top-staff=\"1\" default-x=\"53\" relative-x=\"53\" relative-y=\"53\" color=\"#4D4E4D4C\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 53.1 ) );
	object.setDefaultY( MxNumberTenths( 53.1 ) );
	object.setRelativeX( MxNumberTenths( 53.1 ) );
	object.setRelativeY( MxNumberTenths( 53.1 ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<booksmart relative-y=\"53.1\" color=\"#504F4E\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 53.2 ) );
	object.setDefaultY( MxNumberTenths( 53.2 ) );
	object.setRelativeX( MxNumberTenths( 53.2 ) );
	object.setRelativeY( MxNumberTenths( 53.2 ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<quiet top-staff=\"1\" bottom-staff=\"1\" default-y=\"53.2\" relative-y=\"53.2\" color=\"#51525150\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 53.3 ) );
	object.setDefaultY( MxNumberTenths( 53.3 ) );
	object.setRelativeX( MxNumberTenths( 53.3 ) );
	object.setRelativeY( MxNumberTenths( 53.3 ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<musicxmlishard bottom-staff=\"1\" default-y=\"53.3\" relative-y=\"53.3\" color=\"#545352\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 53.4 ) );
	object.setDefaultY( MxNumberTenths( 53.4 ) );
	object.setRelativeX( MxNumberTenths( 53.4 ) );
	object.setRelativeY( MxNumberTenths( 53.4 ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<bishop top-staff=\"1\" default-x=\"53.4\" default-y=\"53.4\" color=\"#55565554\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 53.5 ) );
	object.setDefaultY( MxNumberTenths( 53.5 ) );
	object.setRelativeX( MxNumberTenths( 53.5 ) );
	object.setRelativeY( MxNumberTenths( 53.5 ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<charlie default-x=\"53.5\" default-y=\"53.5\" color=\"#585756\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 53.6 ) );
	object.setDefaultY( MxNumberTenths( 53.6 ) );
	object.setRelativeX( MxNumberTenths( 53.6 ) );
	object.setRelativeY( MxNumberTenths( 53.6 ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<booksmart top-staff=\"1\" bottom-staff=\"1\" default-x=\"53.6\" relative-x=\"53.6\" color=\"#595A5958\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 53.7 ) );
	object.setDefaultY( MxNumberTenths( 53.7 ) );
	object.setRelativeX( MxNumberTenths( 53.7 ) );
	object.setRelativeY( MxNumberTenths( 53.7 ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<quiet bottom-staff=\"1\" relative-x=\"53.7\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 53.8 ) );
	object.setDefaultY( MxNumberTenths( 53.8 ) );
	object.setRelativeX( MxNumberTenths( 53.8 ) );
	object.setRelativeY( MxNumberTenths( 53.8 ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<musicxmlishard top-staff=\"1\" relative-x=\"53.8\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 53.9 ) );
	object.setDefaultY( MxNumberTenths( 53.9 ) );
	object.setRelativeX( MxNumberTenths( 53.9 ) );
	object.setRelativeY( MxNumberTenths( 53.9 ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<bishop relative-x=\"53.9\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 54 ) );
	object.setDefaultY( MxNumberTenths( 54 ) );
	object.setRelativeX( MxNumberTenths( 54 ) );
	object.setRelativeY( MxNumberTenths( 54 ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<charlie top-staff=\"1\" bottom-staff=\"1\" default-x=\"54\" default-y=\"54\" relative-x=\"54\" relative-y=\"54\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 54.1 ) );
	object.setDefaultY( MxNumberTenths( 54.1 ) );
	object.setRelativeX( MxNumberTenths( 54.1 ) );
	object.setRelativeY( MxNumberTenths( 54.1 ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<booksmart bottom-staff=\"1\" default-x=\"54.1\" default-y=\"54.1\" relative-y=\"54.1\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 54.2 ) );
	object.setDefaultY( MxNumberTenths( 54.2 ) );
	object.setRelativeX( MxNumberTenths( 54.2 ) );
	object.setRelativeY( MxNumberTenths( 54.2 ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<quiet top-staff=\"1\" default-x=\"54.2\" default-y=\"54.2\" relative-y=\"54.2\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 54.3 ) );
	object.setDefaultY( MxNumberTenths( 54.3 ) );
	object.setRelativeX( MxNumberTenths( 54.3 ) );
	object.setRelativeY( MxNumberTenths( 54.3 ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<musicxmlishard default-y=\"54.3\" relative-y=\"54.3\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 54.4 ) );
	object.setDefaultY( MxNumberTenths( 54.4 ) );
	object.setRelativeX( MxNumberTenths( 54.4 ) );
	object.setRelativeY( MxNumberTenths( 54.4 ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<bishop top-staff=\"1\" bottom-staff=\"1\" relative-y=\"54.4\" color=\"#696A6968\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 54.5 ) );
	object.setDefaultY( MxNumberTenths( 54.5 ) );
	object.setRelativeX( MxNumberTenths( 54.5 ) );
	object.setRelativeY( MxNumberTenths( 54.5 ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<charlie bottom-staff=\"1\" relative-y=\"54.5\" color=\"#6C6B6A\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 54.6 ) );
	object.setDefaultY( MxNumberTenths( 54.6 ) );
	object.setRelativeX( MxNumberTenths( 54.6 ) );
	object.setRelativeY( MxNumberTenths( 54.6 ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<booksmart top-staff=\"1\" default-x=\"54.6\" relative-x=\"54.6\" color=\"#6D6E6D6C\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 54.7 ) );
	object.setDefaultY( MxNumberTenths( 54.7 ) );
	object.setRelativeX( MxNumberTenths( 54.7 ) );
	object.setRelativeY( MxNumberTenths( 54.7 ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<quiet default-x=\"54.7\" relative-x=\"54.7\" color=\"#706F6E\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 54.8 ) );
	object.setDefaultY( MxNumberTenths( 54.8 ) );
	object.setRelativeX( MxNumberTenths( 54.8 ) );
	object.setRelativeY( MxNumberTenths( 54.8 ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<musicxmlishard top-staff=\"1\" bottom-staff=\"1\" default-x=\"54.8\" default-y=\"54.8\" relative-x=\"54.8\" color=\"#71727170\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 54.9 ) );
	object.setDefaultY( MxNumberTenths( 54.9 ) );
	object.setRelativeX( MxNumberTenths( 54.9 ) );
	object.setRelativeY( MxNumberTenths( 54.9 ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<bishop bottom-staff=\"1\" default-y=\"54.9\" relative-x=\"54.9\" color=\"#747372\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 55 ) );
	object.setDefaultY( MxNumberTenths( 55 ) );
	object.setRelativeX( MxNumberTenths( 55 ) );
	object.setRelativeY( MxNumberTenths( 55 ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<charlie top-staff=\"1\" default-y=\"55\" relative-x=\"55\" color=\"#75767574\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 55.1 ) );
	object.setDefaultY( MxNumberTenths( 55.1 ) );
	object.setRelativeX( MxNumberTenths( 55.1 ) );
	object.setRelativeY( MxNumberTenths( 55.1 ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<booksmart default-y=\"55.1\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 55.2 ) );
	object.setDefaultY( MxNumberTenths( 55.2 ) );
	object.setRelativeX( MxNumberTenths( 55.2 ) );
	object.setRelativeY( MxNumberTenths( 55.2 ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<quiet top-staff=\"1\" bottom-staff=\"1\" default-x=\"55.2\" relative-y=\"55.2\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 55.3 ) );
	object.setDefaultY( MxNumberTenths( 55.3 ) );
	object.setRelativeX( MxNumberTenths( 55.3 ) );
	object.setRelativeY( MxNumberTenths( 55.3 ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<musicxmlishard bottom-staff=\"1\" default-x=\"55.3\" relative-y=\"55.3\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 55.4 ) );
	object.setDefaultY( MxNumberTenths( 55.4 ) );
	object.setRelativeX( MxNumberTenths( 55.4 ) );
	object.setRelativeY( MxNumberTenths( 55.4 ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<bishop top-staff=\"1\" default-x=\"55.4\" relative-y=\"55.4\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 55.5 ) );
	object.setDefaultY( MxNumberTenths( 55.5 ) );
	object.setRelativeX( MxNumberTenths( 55.5 ) );
	object.setRelativeY( MxNumberTenths( 55.5 ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<charlie relative-y=\"55.5\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 55.6 ) );
	object.setDefaultY( MxNumberTenths( 55.6 ) );
	object.setRelativeX( MxNumberTenths( 55.6 ) );
	object.setRelativeY( MxNumberTenths( 55.6 ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<booksmart top-staff=\"1\" bottom-staff=\"1\" default-y=\"55.6\" relative-x=\"55.6\" relative-y=\"55.6\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 55.7 ) );
	object.setDefaultY( MxNumberTenths( 55.7 ) );
	object.setRelativeX( MxNumberTenths( 55.7 ) );
	object.setRelativeY( MxNumberTenths( 55.7 ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<quiet bottom-staff=\"1\" default-y=\"55.7\" relative-x=\"55.7\" relative-y=\"55.7\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 55.8 ) );
	object.setDefaultY( MxNumberTenths( 55.8 ) );
	object.setRelativeX( MxNumberTenths( 55.8 ) );
	object.setRelativeY( MxNumberTenths( 55.8 ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<musicxmlishard top-staff=\"1\" default-x=\"55.8\" default-y=\"55.8\" relative-x=\"55.8\" color=\"#85868584\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 55.9 ) );
	object.setDefaultY( MxNumberTenths( 55.9 ) );
	object.setRelativeX( MxNumberTenths( 55.9 ) );
	object.setRelativeY( MxNumberTenths( 55.9 ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<bishop default-x=\"55.9\" default-y=\"55.9\" relative-x=\"55.9\" color=\"#888786\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 56 ) );
	object.setDefaultY( MxNumberTenths( 56 ) );
	object.setRelativeX( MxNumberTenths( 56 ) );
	object.setRelativeY( MxNumberTenths( 56 ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<charlie top-staff=\"1\" bottom-staff=\"1\" default-x=\"56\" relative-x=\"56\" color=\"#898A8988\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 56.1 ) );
	object.setDefaultY( MxNumberTenths( 56.1 ) );
	object.setRelativeX( MxNumberTenths( 56.1 ) );
	object.setRelativeY( MxNumberTenths( 56.1 ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<booksmart bottom-staff=\"1\" color=\"#8C8B8A\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 56.2 ) );
	object.setDefaultY( MxNumberTenths( 56.2 ) );
	object.setRelativeX( MxNumberTenths( 56.2 ) );
	object.setRelativeY( MxNumberTenths( 56.2 ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<quiet top-staff=\"1\" color=\"#8D8E8D8C\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 56.3 ) );
	object.setDefaultY( MxNumberTenths( 56.3 ) );
	object.setRelativeX( MxNumberTenths( 56.3 ) );
	object.setRelativeY( MxNumberTenths( 56.3 ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<musicxmlishard color=\"#908F8E\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 56.4 ) );
	object.setDefaultY( MxNumberTenths( 56.4 ) );
	object.setRelativeX( MxNumberTenths( 56.4 ) );
	object.setRelativeY( MxNumberTenths( 56.4 ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<bishop top-staff=\"1\" bottom-staff=\"1\" default-x=\"56.4\" default-y=\"56.4\" relative-y=\"56.4\" color=\"#91929190\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 56.5 ) );
	object.setDefaultY( MxNumberTenths( 56.5 ) );
	object.setRelativeX( MxNumberTenths( 56.5 ) );
	object.setRelativeY( MxNumberTenths( 56.5 ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<charlie bottom-staff=\"1\" default-x=\"56.5\" default-y=\"56.5\" relative-y=\"56.5\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 56.6 ) );
	object.setDefaultY( MxNumberTenths( 56.6 ) );
	object.setRelativeX( MxNumberTenths( 56.6 ) );
	object.setRelativeY( MxNumberTenths( 56.6 ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<booksmart top-staff=\"1\" default-x=\"56.6\" default-y=\"56.6\" relative-x=\"56.6\" relative-y=\"56.6\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 56.7 ) );
	object.setDefaultY( MxNumberTenths( 56.7 ) );
	object.setRelativeX( MxNumberTenths( 56.7 ) );
	object.setRelativeY( MxNumberTenths( 56.7 ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<quiet default-y=\"56.7\" relative-x=\"56.7\" relative-y=\"56.7\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 56.8 ) );
	object.setDefaultY( MxNumberTenths( 56.8 ) );
	object.setRelativeX( MxNumberTenths( 56.8 ) );
	object.setRelativeY( MxNumberTenths( 56.8 ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<musicxmlishard top-staff=\"1\" bottom-staff=\"1\" relative-x=\"56.8\" relative-y=\"56.8\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 56.9 ) );
	object.setDefaultY( MxNumberTenths( 56.9 ) );
	object.setRelativeX( MxNumberTenths( 56.9 ) );
	object.setRelativeY( MxNumberTenths( 56.9 ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<bishop bottom-staff=\"1\" relative-x=\"56.9\" relative-y=\"56.9\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 57 ) );
	object.setDefaultY( MxNumberTenths( 57 ) );
	object.setRelativeX( MxNumberTenths( 57 ) );
	object.setRelativeY( MxNumberTenths( 57 ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<charlie top-staff=\"1\" default-x=\"57\" relative-x=\"57\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 57.1 ) );
	object.setDefaultY( MxNumberTenths( 57.1 ) );
	object.setRelativeX( MxNumberTenths( 57.1 ) );
	object.setRelativeY( MxNumberTenths( 57.1 ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<booksmart default-x=\"57.1\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 57.2 ) );
	object.setDefaultY( MxNumberTenths( 57.2 ) );
	object.setRelativeX( MxNumberTenths( 57.2 ) );
	object.setRelativeY( MxNumberTenths( 57.2 ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<quiet top-staff=\"1\" bottom-staff=\"1\" default-x=\"57.2\" default-y=\"57.2\" color=\"#A1A2A1A0\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 57.3 ) );
	object.setDefaultY( MxNumberTenths( 57.3 ) );
	object.setRelativeX( MxNumberTenths( 57.3 ) );
	object.setRelativeY( MxNumberTenths( 57.3 ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<musicxmlishard bottom-staff=\"1\" default-y=\"57.3\" color=\"#A4A3A2\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 57.4 ) );
	object.setDefaultY( MxNumberTenths( 57.4 ) );
	object.setRelativeX( MxNumberTenths( 57.4 ) );
	object.setRelativeY( MxNumberTenths( 57.4 ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<bishop top-staff=\"1\" default-y=\"57.4\" color=\"#A5A6A5A4\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 57.5 ) );
	object.setDefaultY( MxNumberTenths( 57.5 ) );
	object.setRelativeX( MxNumberTenths( 57.5 ) );
	object.setRelativeY( MxNumberTenths( 57.5 ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<charlie default-y=\"57.5\" color=\"#A8A7A6\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 57.6 ) );
	object.setDefaultY( MxNumberTenths( 57.6 ) );
	object.setRelativeX( MxNumberTenths( 57.6 ) );
	object.setRelativeY( MxNumberTenths( 57.6 ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<booksmart top-staff=\"1\" bottom-staff=\"1\" default-x=\"57.6\" relative-x=\"57.6\" relative-y=\"57.6\" color=\"#A9AAA9A8\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 57.7 ) );
	object.setDefaultY( MxNumberTenths( 57.7 ) );
	object.setRelativeX( MxNumberTenths( 57.7 ) );
	object.setRelativeY( MxNumberTenths( 57.7 ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<quiet bottom-staff=\"1\" default-x=\"57.7\" relative-x=\"57.7\" relative-y=\"57.7\" color=\"#ACABAA\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 57.8 ) );
	object.setDefaultY( MxNumberTenths( 57.8 ) );
	object.setRelativeX( MxNumberTenths( 57.8 ) );
	object.setRelativeY( MxNumberTenths( 57.8 ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<musicxmlishard top-staff=\"1\" default-x=\"57.8\" relative-x=\"57.8\" relative-y=\"57.8\" color=\"#ADAEADAC\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 57.9 ) );
	object.setDefaultY( MxNumberTenths( 57.9 ) );
	object.setRelativeX( MxNumberTenths( 57.9 ) );
	object.setRelativeY( MxNumberTenths( 57.9 ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<bishop relative-x=\"57.9\" relative-y=\"57.9\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 58 ) );
	object.setDefaultY( MxNumberTenths( 58 ) );
	object.setRelativeX( MxNumberTenths( 58 ) );
	object.setRelativeY( MxNumberTenths( 58 ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<charlie top-staff=\"1\" bottom-staff=\"1\" default-y=\"58\" relative-x=\"58\" relative-y=\"58\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 58.1 ) );
	object.setDefaultY( MxNumberTenths( 58.1 ) );
	object.setRelativeX( MxNumberTenths( 58.1 ) );
	object.setRelativeY( MxNumberTenths( 58.1 ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<booksmart bottom-staff=\"1\" default-y=\"58.1\" relative-y=\"58.1\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 58.2 ) );
	object.setDefaultY( MxNumberTenths( 58.2 ) );
	object.setRelativeX( MxNumberTenths( 58.2 ) );
	object.setRelativeY( MxNumberTenths( 58.2 ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<quiet top-staff=\"1\" default-x=\"58.2\" default-y=\"58.2\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 58.3 ) );
	object.setDefaultY( MxNumberTenths( 58.3 ) );
	object.setRelativeX( MxNumberTenths( 58.3 ) );
	object.setRelativeY( MxNumberTenths( 58.3 ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<musicxmlishard default-x=\"58.3\" default-y=\"58.3\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 58.4 ) );
	object.setDefaultY( MxNumberTenths( 58.4 ) );
	object.setRelativeX( MxNumberTenths( 58.4 ) );
	object.setRelativeY( MxNumberTenths( 58.4 ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<bishop top-staff=\"1\" bottom-staff=\"1\" default-x=\"58.4\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 58.5 ) );
	object.setDefaultY( MxNumberTenths( 58.5 ) );
	object.setRelativeX( MxNumberTenths( 58.5 ) );
	object.setRelativeY( MxNumberTenths( 58.5 ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<charlie bottom-staff=\"1\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 58.6 ) );
	object.setDefaultY( MxNumberTenths( 58.6 ) );
	object.setRelativeX( MxNumberTenths( 58.6 ) );
	object.setRelativeY( MxNumberTenths( 58.6 ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<booksmart top-staff=\"1\" relative-x=\"58.6\" color=\"#BDBEBDBC\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 58.7 ) );
	object.setDefaultY( MxNumberTenths( 58.7 ) );
	object.setRelativeX( MxNumberTenths( 58.7 ) );
	object.setRelativeY( MxNumberTenths( 58.7 ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<quiet relative-x=\"58.7\" color=\"#C0BFBE\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 58.8 ) );
	object.setDefaultY( MxNumberTenths( 58.8 ) );
	object.setRelativeX( MxNumberTenths( 58.8 ) );
	object.setRelativeY( MxNumberTenths( 58.8 ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<musicxmlishard bottom-staff=\"1\" default-x=\"58.8\" default-y=\"58.8\" relative-x=\"58.8\" relative-y=\"58.8\" color=\"#C1C2C1C0\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 58.9 ) );
	object.setDefaultY( MxNumberTenths( 58.9 ) );
	object.setRelativeX( MxNumberTenths( 58.9 ) );
	object.setRelativeY( MxNumberTenths( 58.9 ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<bishop top-staff=\"1\" default-x=\"58.9\" default-y=\"58.9\" relative-x=\"58.9\" relative-y=\"58.9\" color=\"#C4C3C2\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 59 ) );
	object.setDefaultY( MxNumberTenths( 59 ) );
	object.setRelativeX( MxNumberTenths( 59 ) );
	object.setRelativeY( MxNumberTenths( 59 ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<charlie default-y=\"59\" relative-y=\"59\" color=\"#C5C6C5C4\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 59.1 ) );
	object.setDefaultY( MxNumberTenths( 59.1 ) );
	object.setRelativeX( MxNumberTenths( 59.1 ) );
	object.setRelativeY( MxNumberTenths( 59.1 ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<booksmart top-staff=\"1\" bottom-staff=\"1\" relative-y=\"59.1\" color=\"#C8C7C6\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 59.2 ) );
	object.setDefaultY( MxNumberTenths( 59.2 ) );
	object.setRelativeX( MxNumberTenths( 59.2 ) );
	object.setRelativeY( MxNumberTenths( 59.2 ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<quiet bottom-staff=\"1\" relative-y=\"59.2\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 59.3 ) );
	object.setDefaultY( MxNumberTenths( 59.3 ) );
	object.setRelativeX( MxNumberTenths( 59.3 ) );
	object.setRelativeY( MxNumberTenths( 59.3 ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<musicxmlishard top-staff=\"1\" default-x=\"59.3\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 59.4 ) );
	object.setDefaultY( MxNumberTenths( 59.4 ) );
	object.setRelativeX( MxNumberTenths( 59.4 ) );
	object.setRelativeY( MxNumberTenths( 59.4 ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<bishop default-x=\"59.4\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 59.5 ) );
	object.setDefaultY( MxNumberTenths( 59.5 ) );
	object.setRelativeX( MxNumberTenths( 59.5 ) );
	object.setRelativeY( MxNumberTenths( 59.5 ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<charlie top-staff=\"1\" bottom-staff=\"1\" default-x=\"59.5\" default-y=\"59.5\" relative-x=\"59.5\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 59.6 ) );
	object.setDefaultY( MxNumberTenths( 59.6 ) );
	object.setRelativeX( MxNumberTenths( 59.6 ) );
	object.setRelativeY( MxNumberTenths( 59.6 ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<booksmart bottom-staff=\"1\" default-y=\"59.6\" relative-x=\"59.6\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 59.7 ) );
	object.setDefaultY( MxNumberTenths( 59.7 ) );
	object.setRelativeX( MxNumberTenths( 59.7 ) );
	object.setRelativeY( MxNumberTenths( 59.7 ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<quiet top-staff=\"1\" default-y=\"59.7\" relative-x=\"59.7\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 59.8 ) );
	object.setDefaultY( MxNumberTenths( 59.8 ) );
	object.setRelativeX( MxNumberTenths( 59.8 ) );
	object.setRelativeY( MxNumberTenths( 59.8 ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<musicxmlishard default-y=\"59.8\" relative-x=\"59.8\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 59.9 ) );
	object.setDefaultY( MxNumberTenths( 59.9 ) );
	object.setRelativeX( MxNumberTenths( 59.9 ) );
	object.setRelativeY( MxNumberTenths( 59.9 ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<bishop top-staff=\"1\" bottom-staff=\"1\" default-x=\"59.9\" relative-x=\"59.9\" relative-y=\"59.9\" color=\"#D8D7D6\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 60 ) );
	object.setDefaultY( MxNumberTenths( 60 ) );
	object.setRelativeX( MxNumberTenths( 60 ) );
	object.setRelativeY( MxNumberTenths( 60 ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<charlie bottom-staff=\"1\" default-x=\"60\" relative-y=\"60\" color=\"#D9DAD9D8\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 60.1 ) );
	object.setDefaultY( MxNumberTenths( 60.1 ) );
	object.setRelativeX( MxNumberTenths( 60.1 ) );
	object.setRelativeY( MxNumberTenths( 60.1 ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<booksmart top-staff=\"1\" default-x=\"60.1\" relative-y=\"60.1\" color=\"#DCDBDA\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 60.2 ) );
	object.setDefaultY( MxNumberTenths( 60.2 ) );
	object.setRelativeX( MxNumberTenths( 60.2 ) );
	object.setRelativeY( MxNumberTenths( 60.2 ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<quiet relative-y=\"60.2\" color=\"#DDDEDDDC\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 60.3 ) );
	object.setDefaultY( MxNumberTenths( 60.3 ) );
	object.setRelativeX( MxNumberTenths( 60.3 ) );
	object.setRelativeY( MxNumberTenths( 60.3 ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<musicxmlishard top-staff=\"1\" bottom-staff=\"1\" default-y=\"60.3\" relative-y=\"60.3\" color=\"#E0DFDE\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 60.4 ) );
	object.setDefaultY( MxNumberTenths( 60.4 ) );
	object.setRelativeX( MxNumberTenths( 60.4 ) );
	object.setRelativeY( MxNumberTenths( 60.4 ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<bishop bottom-staff=\"1\" default-y=\"60.4\" relative-y=\"60.4\" color=\"#E1E2E1E0\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 60.5 ) );
	object.setDefaultY( MxNumberTenths( 60.5 ) );
	object.setRelativeX( MxNumberTenths( 60.5 ) );
	object.setRelativeY( MxNumberTenths( 60.5 ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<charlie top-staff=\"1\" default-x=\"60.5\" default-y=\"60.5\" relative-x=\"60.5\" color=\"#E4E3E2\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 60.6 ) );
	object.setDefaultY( MxNumberTenths( 60.6 ) );
	object.setRelativeX( MxNumberTenths( 60.6 ) );
	object.setRelativeY( MxNumberTenths( 60.6 ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<booksmart default-x=\"60.6\" default-y=\"60.6\" relative-x=\"60.6\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 60.7 ) );
	object.setDefaultY( MxNumberTenths( 60.7 ) );
	object.setRelativeX( MxNumberTenths( 60.7 ) );
	object.setRelativeY( MxNumberTenths( 60.7 ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<quiet top-staff=\"1\" bottom-staff=\"1\" default-x=\"60.7\" relative-x=\"60.7\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 60.8 ) );
	object.setDefaultY( MxNumberTenths( 60.8 ) );
	object.setRelativeX( MxNumberTenths( 60.8 ) );
	object.setRelativeY( MxNumberTenths( 60.8 ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<musicxmlishard bottom-staff=\"1\" relative-x=\"60.8\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 60.9 ) );
	object.setDefaultY( MxNumberTenths( 60.9 ) );
	object.setRelativeX( MxNumberTenths( 60.9 ) );
	object.setRelativeY( MxNumberTenths( 60.9 ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<bishop top-staff=\"1\" relative-x=\"60.9\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 61 ) );
	object.setDefaultY( MxNumberTenths( 61 ) );
	object.setRelativeX( MxNumberTenths( 61 ) );
	object.setRelativeY( MxNumberTenths( 61 ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<charlie>none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 61.1 ) );
	object.setDefaultY( MxNumberTenths( 61.1 ) );
	object.setRelativeX( MxNumberTenths( 61.1 ) );
	object.setRelativeY( MxNumberTenths( 61.1 ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<booksmart top-staff=\"1\" bottom-staff=\"1\" default-x=\"61.1\" default-y=\"61.1\" relative-y=\"61.1\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 61.2 ) );
	object.setDefaultY( MxNumberTenths( 61.2 ) );
	object.setRelativeX( MxNumberTenths( 61.2 ) );
	object.setRelativeY( MxNumberTenths( 61.2 ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<quiet bottom-staff=\"1\" default-x=\"61.2\" default-y=\"61.2\" relative-y=\"61.2\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 61.3 ) );
	object.setDefaultY( MxNumberTenths( 61.3 ) );
	object.setRelativeX( MxNumberTenths( 61.3 ) );
	object.setRelativeY( MxNumberTenths( 61.3 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<musicxmlishard top-staff=\"1\" default-x=\"61.3\" default-y=\"61.3\" relative-y=\"61.3\" color=\"#F4F3F2\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
	object.setDefaultX( MxNumberTenths( 61.4 ) );
	object.setDefaultY( MxNumberTenths( 61.4 ) );
	object.setRelativeX( MxNumberTenths( 61.4 ) );
	object.setRelativeY( MxNumberTenths( 61.4 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<bishop default-y=\"61.4\" relative-y=\"61.4\" color=\"#F5F6F5F4\">none</bishop>";
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

TEST( getIsTopStaffDefaultDefined, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsTopStaffDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBottomStaffDefaultDefined, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsBottomStaffDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTopStaffDefaultValue, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	MxNumberStaffNumber expected;
	MxNumberStaffNumber actual = object.getTopStaffDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBottomStaffDefaultValue, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	MxNumberStaffNumber expected;
	MxNumberStaffNumber actual = object.getBottomStaffDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpPartSymbol )
{
	MxCxSmpPartSymbol object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


