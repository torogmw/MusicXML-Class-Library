/** *******************************************************
  * 
  * MxCxSmpGroupSymbolTest.cpp
  * Created: 2014-12-02 17:31:55
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpGroupSymbol.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
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
TEST( ctorValueAndElementName2, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::line ) );
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
TEST( ctorValueAndElementName4, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::square ) );
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
TEST( ctorValueAndElementName6, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::brace ) );
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
TEST( ctorValueAndElementName8, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::bracket ) );
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

TEST( getClassName, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	std::string expected = "MxCxSmpGroupSymbol";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	std::string expected = "group-symbol";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	std::string expected = "The group-symbol type indicates how the symbol for a group is indicated in the score.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxCxSmpGroupSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupSymbol object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxCxSmpGroupSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupSymbol object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxCxSmpGroupSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupSymbol object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxCxSmpGroupSymbol )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupSymbol object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor4, MxCxSmpGroupSymbol )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupSymbol object;
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

TEST( getIsDefaultXRequired0, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired4, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
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
TEST( getIsDefaultYPresent1, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
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
TEST( getIsRelativeXPresent2, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
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
TEST( getIsRelativeYPresent3, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
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
TEST( getIsColorPresent4, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
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

TEST( toString0, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 314 ) );
	object.setDefaultY( MxNumberTenths( 314 ) );
	object.setRelativeX( MxNumberTenths( 314 ) );
	object.setRelativeY( MxNumberTenths( 314 ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart default-x=\"314\" default-y=\"314\" relative-x=\"314\" relative-y=\"314\" color=\"#ECEBEA\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 314.1 ) );
	object.setDefaultY( MxNumberTenths( 314.1 ) );
	object.setRelativeX( MxNumberTenths( 314.1 ) );
	object.setRelativeY( MxNumberTenths( 314.1 ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<quiet default-y=\"314.1\" relative-x=\"314.1\" relative-y=\"314.1\" color=\"#EDEEEDEC\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 314.2 ) );
	object.setDefaultY( MxNumberTenths( 314.2 ) );
	object.setRelativeX( MxNumberTenths( 314.2 ) );
	object.setRelativeY( MxNumberTenths( 314.2 ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<musicxmlishard default-x=\"314.2\" relative-x=\"314.2\" relative-y=\"314.2\" color=\"#F0EFEE\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 314.3 ) );
	object.setDefaultY( MxNumberTenths( 314.3 ) );
	object.setRelativeX( MxNumberTenths( 314.3 ) );
	object.setRelativeY( MxNumberTenths( 314.3 ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<bishop relative-y=\"314.3\" color=\"#F1F2F1F0\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 314.4 ) );
	object.setDefaultY( MxNumberTenths( 314.4 ) );
	object.setRelativeX( MxNumberTenths( 314.4 ) );
	object.setRelativeY( MxNumberTenths( 314.4 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<charlie default-x=\"314.4\" default-y=\"314.4\" color=\"#F4F3F2\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 314.5 ) );
	object.setDefaultY( MxNumberTenths( 314.5 ) );
	object.setRelativeX( MxNumberTenths( 314.5 ) );
	object.setRelativeY( MxNumberTenths( 314.5 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<booksmart default-y=\"314.5\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 314.6 ) );
	object.setDefaultY( MxNumberTenths( 314.6 ) );
	object.setRelativeX( MxNumberTenths( 314.6 ) );
	object.setRelativeY( MxNumberTenths( 314.6 ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<quiet default-x=\"314.6\" relative-x=\"314.6\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 314.7 ) );
	object.setDefaultY( MxNumberTenths( 314.7 ) );
	object.setRelativeX( MxNumberTenths( 314.7 ) );
	object.setRelativeY( MxNumberTenths( 314.7 ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<musicxmlishard relative-x=\"314.7\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 314.8 ) );
	object.setDefaultY( MxNumberTenths( 314.8 ) );
	object.setRelativeX( MxNumberTenths( 314.8 ) );
	object.setRelativeY( MxNumberTenths( 314.8 ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<bishop default-x=\"314.8\" default-y=\"314.8\" relative-x=\"314.8\" relative-y=\"314.8\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 314.9 ) );
	object.setDefaultY( MxNumberTenths( 314.9 ) );
	object.setRelativeX( MxNumberTenths( 314.9 ) );
	object.setRelativeY( MxNumberTenths( 314.9 ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<charlie default-y=\"314.9\" relative-y=\"314.9\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 315 ) );
	object.setDefaultY( MxNumberTenths( 315 ) );
	object.setRelativeX( MxNumberTenths( 315 ) );
	object.setRelativeY( MxNumberTenths( 315 ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<booksmart default-x=\"315\" relative-y=\"315\" color=\"#00FFFE\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 315.1 ) );
	object.setDefaultY( MxNumberTenths( 315.1 ) );
	object.setRelativeX( MxNumberTenths( 315.1 ) );
	object.setRelativeY( MxNumberTenths( 315.1 ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<quiet relative-y=\"315.1\" color=\"#01020100\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 315.2 ) );
	object.setDefaultY( MxNumberTenths( 315.2 ) );
	object.setRelativeX( MxNumberTenths( 315.2 ) );
	object.setRelativeY( MxNumberTenths( 315.2 ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<musicxmlishard default-x=\"315.2\" default-y=\"315.2\" relative-x=\"315.2\" color=\"#040302\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 315.3 ) );
	object.setDefaultY( MxNumberTenths( 315.3 ) );
	object.setRelativeX( MxNumberTenths( 315.3 ) );
	object.setRelativeY( MxNumberTenths( 315.3 ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<bishop default-y=\"315.3\" relative-x=\"315.3\" color=\"#05060504\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 315.4 ) );
	object.setDefaultY( MxNumberTenths( 315.4 ) );
	object.setRelativeX( MxNumberTenths( 315.4 ) );
	object.setRelativeY( MxNumberTenths( 315.4 ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<charlie default-x=\"315.4\" relative-x=\"315.4\" color=\"#080706\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 315.5 ) );
	object.setDefaultY( MxNumberTenths( 315.5 ) );
	object.setRelativeX( MxNumberTenths( 315.5 ) );
	object.setRelativeY( MxNumberTenths( 315.5 ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<booksmart>none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 315.6 ) );
	object.setDefaultY( MxNumberTenths( 315.6 ) );
	object.setRelativeX( MxNumberTenths( 315.6 ) );
	object.setRelativeY( MxNumberTenths( 315.6 ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<quiet default-x=\"315.6\" default-y=\"315.6\" relative-y=\"315.6\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 315.7 ) );
	object.setDefaultY( MxNumberTenths( 315.7 ) );
	object.setRelativeX( MxNumberTenths( 315.7 ) );
	object.setRelativeY( MxNumberTenths( 315.7 ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<musicxmlishard default-y=\"315.7\" relative-y=\"315.7\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 315.8 ) );
	object.setDefaultY( MxNumberTenths( 315.8 ) );
	object.setRelativeX( MxNumberTenths( 315.8 ) );
	object.setRelativeY( MxNumberTenths( 315.8 ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<bishop default-x=\"315.8\" relative-x=\"315.8\" relative-y=\"315.8\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 315.9 ) );
	object.setDefaultY( MxNumberTenths( 315.9 ) );
	object.setRelativeX( MxNumberTenths( 315.9 ) );
	object.setRelativeY( MxNumberTenths( 315.9 ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<charlie relative-x=\"315.9\" relative-y=\"315.9\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 316 ) );
	object.setDefaultY( MxNumberTenths( 316 ) );
	object.setRelativeX( MxNumberTenths( 316 ) );
	object.setRelativeY( MxNumberTenths( 316 ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<booksmart default-x=\"316\" default-y=\"316\" relative-x=\"316\" color=\"#141312\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 316.1 ) );
	object.setDefaultY( MxNumberTenths( 316.1 ) );
	object.setRelativeX( MxNumberTenths( 316.1 ) );
	object.setRelativeY( MxNumberTenths( 316.1 ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<quiet default-y=\"316.1\" color=\"#15161514\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 316.2 ) );
	object.setDefaultY( MxNumberTenths( 316.2 ) );
	object.setRelativeX( MxNumberTenths( 316.2 ) );
	object.setRelativeY( MxNumberTenths( 316.2 ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<musicxmlishard default-x=\"316.2\" color=\"#181716\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 316.3 ) );
	object.setDefaultY( MxNumberTenths( 316.3 ) );
	object.setRelativeX( MxNumberTenths( 316.3 ) );
	object.setRelativeY( MxNumberTenths( 316.3 ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<bishop color=\"#191A1918\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 316.4 ) );
	object.setDefaultY( MxNumberTenths( 316.4 ) );
	object.setRelativeX( MxNumberTenths( 316.4 ) );
	object.setRelativeY( MxNumberTenths( 316.4 ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<charlie default-y=\"316.4\" relative-x=\"316.4\" relative-y=\"316.4\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 316.5 ) );
	object.setDefaultY( MxNumberTenths( 316.5 ) );
	object.setRelativeX( MxNumberTenths( 316.5 ) );
	object.setRelativeY( MxNumberTenths( 316.5 ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<booksmart default-x=\"316.5\" relative-x=\"316.5\" relative-y=\"316.5\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "quiet", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 316.6 ) );
	object.setDefaultY( MxNumberTenths( 316.6 ) );
	object.setRelativeX( MxNumberTenths( 316.6 ) );
	object.setRelativeY( MxNumberTenths( 316.6 ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<quiet relative-y=\"316.6\">none</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "musicxmlishard", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 316.7 ) );
	object.setDefaultY( MxNumberTenths( 316.7 ) );
	object.setRelativeX( MxNumberTenths( 316.7 ) );
	object.setRelativeY( MxNumberTenths( 316.7 ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<musicxmlishard default-x=\"316.7\" default-y=\"316.7\">none</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "bishop", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 316.8 ) );
	object.setDefaultY( MxNumberTenths( 316.8 ) );
	object.setRelativeX( MxNumberTenths( 316.8 ) );
	object.setRelativeY( MxNumberTenths( 316.8 ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<bishop default-y=\"316.8\">none</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "charlie", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 316.9 ) );
	object.setDefaultY( MxNumberTenths( 316.9 ) );
	object.setRelativeX( MxNumberTenths( 316.9 ) );
	object.setRelativeY( MxNumberTenths( 316.9 ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<charlie default-x=\"316.9\" relative-x=\"316.9\" color=\"#25262524\">none</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object( "booksmart", MxEnumGroupSymbolValue( lexicon::enums::GroupSymbolValue::none ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 317 ) );
	object.setDefaultY( MxNumberTenths( 317 ) );
	object.setRelativeX( MxNumberTenths( 317 ) );
	object.setRelativeY( MxNumberTenths( 317 ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<booksmart relative-x=\"317\" color=\"#282726\">none</booksmart>";
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

TEST( getIsDefaultXDefaultDefined, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpGroupSymbol )
{
	MxCxSmpGroupSymbol object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


