/** *******************************************************
  * 
  * MxEsStemTest.cpp
  * Created: 2014-12-05 20:57:55
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsStem.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsStem )
{
	MxEsStem object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsStem )
{
	MxEsStem object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsStem )
{
	MxEsStem object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsStem )
{
	MxEsStem object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsStem )
{
	MxEsStem object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEsStem )
{
	MxEsStem object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsStem )
{
	MxEsStem object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsStem )
{
	MxEsStem object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::down );
	std::string expected;
	std::string actual;
	expected = "down";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStemValue( lexicon::enums::StemValue::up ) );
	expected = "up";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	expected = "double";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStemValue( lexicon::enums::StemValue::none ) );
	expected = "none";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::down );
	std::string expected;
	std::string actual;
	expected = "down";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStemValue( lexicon::enums::StemValue::up ) );
	expected = "up";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	expected = "double";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStemValue( lexicon::enums::StemValue::none ) );
	expected = "none";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::down );
	std::string expected;
	std::string actual;
	expected = "down";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStemValue( lexicon::enums::StemValue::up ) );
	expected = "up";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsStem )
{
	MxEsStem object;
	std::string expected = "MxEsStem";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsStem )
{
	MxEsStem object;
	std::string expected = "stem";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsStem )
{
	MxEsStem object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxEsStem )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsStem object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxEsStem )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsStem object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxEsStem )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsStem object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxEsStem )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEsStem object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor4, MxEsStem )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsStem object;
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

TEST( getIsDefaultXRequired0, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired4, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxEsStem )
{
	MxEsStem object;
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
TEST( getIsDefaultYPresent1, MxEsStem )
{
	MxEsStem object;
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
TEST( getIsRelativeXPresent2, MxEsStem )
{
	MxEsStem object;
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
TEST( getIsRelativeYPresent3, MxEsStem )
{
	MxEsStem object;
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
TEST( getIsColorPresent4, MxEsStem )
{
	MxEsStem object;
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

TEST( getIsDefaultXDefaultDefined, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsStem )
{
	MxEsStem object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxEsStem )
{
	MxEsStem object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEsStem )
{
	MxEsStem object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEsStem )
{
	MxEsStem object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEsStem )
{
	MxEsStem object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsStem )
{
	MxEsStem object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 1.1 ) );
	object.setDefaultY( MxNumberTenths( 1.1 ) );
	object.setRelativeX( MxNumberTenths( 1.1 ) );
	object.setRelativeY( MxNumberTenths( 1.1 ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	expected = "<stem default-x=\"1.1\" default-y=\"1.1\" relative-x=\"1.1\" relative-y=\"1.1\" color=\"#C4C3C2\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 1.2 ) );
	object.setDefaultY( MxNumberTenths( 1.2 ) );
	object.setRelativeX( MxNumberTenths( 1.2 ) );
	object.setRelativeY( MxNumberTenths( 1.2 ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<stem default-y=\"1.2\" relative-x=\"1.2\" relative-y=\"1.2\" color=\"#C5C6C5C4\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 1.3 ) );
	object.setDefaultY( MxNumberTenths( 1.3 ) );
	object.setRelativeX( MxNumberTenths( 1.3 ) );
	object.setRelativeY( MxNumberTenths( 1.3 ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<stem default-x=\"1.3\" relative-x=\"1.3\" relative-y=\"1.3\" color=\"#C8C7C6\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 1.4 ) );
	object.setDefaultY( MxNumberTenths( 1.4 ) );
	object.setRelativeX( MxNumberTenths( 1.4 ) );
	object.setRelativeY( MxNumberTenths( 1.4 ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<stem relative-y=\"1.4\" color=\"#C9CAC9C8\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 1.5 ) );
	object.setDefaultY( MxNumberTenths( 1.5 ) );
	object.setRelativeX( MxNumberTenths( 1.5 ) );
	object.setRelativeY( MxNumberTenths( 1.5 ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<stem default-x=\"1.5\" default-y=\"1.5\" color=\"#CCCBCA\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 1.6 ) );
	object.setDefaultY( MxNumberTenths( 1.6 ) );
	object.setRelativeX( MxNumberTenths( 1.6 ) );
	object.setRelativeY( MxNumberTenths( 1.6 ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<stem default-y=\"1.6\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 1.7 ) );
	object.setDefaultY( MxNumberTenths( 1.7 ) );
	object.setRelativeX( MxNumberTenths( 1.7 ) );
	object.setRelativeY( MxNumberTenths( 1.7 ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<stem default-x=\"1.7\" relative-x=\"1.7\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 1.8 ) );
	object.setDefaultY( MxNumberTenths( 1.8 ) );
	object.setRelativeX( MxNumberTenths( 1.8 ) );
	object.setRelativeY( MxNumberTenths( 1.8 ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<stem relative-x=\"1.8\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 1.9 ) );
	object.setDefaultY( MxNumberTenths( 1.9 ) );
	object.setRelativeX( MxNumberTenths( 1.9 ) );
	object.setRelativeY( MxNumberTenths( 1.9 ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<stem default-x=\"1.9\" default-y=\"1.9\" relative-x=\"1.9\" relative-y=\"1.9\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 2 ) );
	object.setDefaultY( MxNumberTenths( 2 ) );
	object.setRelativeX( MxNumberTenths( 2 ) );
	object.setRelativeY( MxNumberTenths( 2 ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<stem default-y=\"2\" relative-y=\"2\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 2.1 ) );
	object.setDefaultY( MxNumberTenths( 2.1 ) );
	object.setRelativeX( MxNumberTenths( 2.1 ) );
	object.setRelativeY( MxNumberTenths( 2.1 ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<stem default-x=\"2.1\" relative-y=\"2.1\" color=\"#D8D7D6\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 2.2 ) );
	object.setDefaultY( MxNumberTenths( 2.2 ) );
	object.setRelativeX( MxNumberTenths( 2.2 ) );
	object.setRelativeY( MxNumberTenths( 2.2 ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<stem relative-y=\"2.2\" color=\"#D9DAD9D8\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 2.3 ) );
	object.setDefaultY( MxNumberTenths( 2.3 ) );
	object.setRelativeX( MxNumberTenths( 2.3 ) );
	object.setRelativeY( MxNumberTenths( 2.3 ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<stem default-x=\"2.3\" default-y=\"2.3\" relative-x=\"2.3\" color=\"#DCDBDA\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 2.4 ) );
	object.setDefaultY( MxNumberTenths( 2.4 ) );
	object.setRelativeX( MxNumberTenths( 2.4 ) );
	object.setRelativeY( MxNumberTenths( 2.4 ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<stem default-y=\"2.4\" relative-x=\"2.4\" color=\"#DDDEDDDC\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 2.5 ) );
	object.setDefaultY( MxNumberTenths( 2.5 ) );
	object.setRelativeX( MxNumberTenths( 2.5 ) );
	object.setRelativeY( MxNumberTenths( 2.5 ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<stem default-x=\"2.5\" relative-x=\"2.5\" color=\"#E0DFDE\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 2.6 ) );
	object.setDefaultY( MxNumberTenths( 2.6 ) );
	object.setRelativeX( MxNumberTenths( 2.6 ) );
	object.setRelativeY( MxNumberTenths( 2.6 ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<stem>double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 2.7 ) );
	object.setDefaultY( MxNumberTenths( 2.7 ) );
	object.setRelativeX( MxNumberTenths( 2.7 ) );
	object.setRelativeY( MxNumberTenths( 2.7 ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<stem default-x=\"2.7\" default-y=\"2.7\" relative-y=\"2.7\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 2.8 ) );
	object.setDefaultY( MxNumberTenths( 2.8 ) );
	object.setRelativeX( MxNumberTenths( 2.8 ) );
	object.setRelativeY( MxNumberTenths( 2.8 ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<stem default-y=\"2.8\" relative-y=\"2.8\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 2.9 ) );
	object.setDefaultY( MxNumberTenths( 2.9 ) );
	object.setRelativeX( MxNumberTenths( 2.9 ) );
	object.setRelativeY( MxNumberTenths( 2.9 ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<stem default-x=\"2.9\" relative-x=\"2.9\" relative-y=\"2.9\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3 ) );
	object.setDefaultY( MxNumberTenths( 3 ) );
	object.setRelativeX( MxNumberTenths( 3 ) );
	object.setRelativeY( MxNumberTenths( 3 ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<stem relative-x=\"3\" relative-y=\"3\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 3.1 ) );
	object.setDefaultY( MxNumberTenths( 3.1 ) );
	object.setRelativeX( MxNumberTenths( 3.1 ) );
	object.setRelativeY( MxNumberTenths( 3.1 ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<stem default-x=\"3.1\" default-y=\"3.1\" relative-x=\"3.1\" color=\"#ECEBEA\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 3.2 ) );
	object.setDefaultY( MxNumberTenths( 3.2 ) );
	object.setRelativeX( MxNumberTenths( 3.2 ) );
	object.setRelativeY( MxNumberTenths( 3.2 ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<stem default-y=\"3.2\" color=\"#EDEEEDEC\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 3.3 ) );
	object.setDefaultY( MxNumberTenths( 3.3 ) );
	object.setRelativeX( MxNumberTenths( 3.3 ) );
	object.setRelativeY( MxNumberTenths( 3.3 ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<stem default-x=\"3.3\" color=\"#F0EFEE\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 3.4 ) );
	object.setDefaultY( MxNumberTenths( 3.4 ) );
	object.setRelativeX( MxNumberTenths( 3.4 ) );
	object.setRelativeY( MxNumberTenths( 3.4 ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<stem color=\"#F1F2F1F0\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3.5 ) );
	object.setDefaultY( MxNumberTenths( 3.5 ) );
	object.setRelativeX( MxNumberTenths( 3.5 ) );
	object.setRelativeY( MxNumberTenths( 3.5 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<stem default-y=\"3.5\" relative-x=\"3.5\" relative-y=\"3.5\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3.6 ) );
	object.setDefaultY( MxNumberTenths( 3.6 ) );
	object.setRelativeX( MxNumberTenths( 3.6 ) );
	object.setRelativeY( MxNumberTenths( 3.6 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<stem default-x=\"3.6\" relative-x=\"3.6\" relative-y=\"3.6\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3.7 ) );
	object.setDefaultY( MxNumberTenths( 3.7 ) );
	object.setRelativeX( MxNumberTenths( 3.7 ) );
	object.setRelativeY( MxNumberTenths( 3.7 ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<stem relative-y=\"3.7\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3.8 ) );
	object.setDefaultY( MxNumberTenths( 3.8 ) );
	object.setRelativeX( MxNumberTenths( 3.8 ) );
	object.setRelativeY( MxNumberTenths( 3.8 ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<stem default-x=\"3.8\" default-y=\"3.8\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3.9 ) );
	object.setDefaultY( MxNumberTenths( 3.9 ) );
	object.setRelativeX( MxNumberTenths( 3.9 ) );
	object.setRelativeY( MxNumberTenths( 3.9 ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<stem default-y=\"3.9\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 4 ) );
	object.setDefaultY( MxNumberTenths( 4 ) );
	object.setRelativeX( MxNumberTenths( 4 ) );
	object.setRelativeY( MxNumberTenths( 4 ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<stem default-x=\"4\" relative-x=\"4\" color=\"#FDFEFDFC\">double</stem>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEsStem )
{
	MxEsStem object( lexicon::enums::StemValue::double_ );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 4.1 ) );
	object.setDefaultY( MxNumberTenths( 4.1 ) );
	object.setRelativeX( MxNumberTenths( 4.1 ) );
	object.setRelativeY( MxNumberTenths( 4.1 ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<stem relative-x=\"4.1\" color=\"#00FFFE\">double</stem>";
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


