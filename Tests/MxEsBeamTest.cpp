/** *******************************************************
  * 
  * MxEsBeamTest.cpp
  * Created: 2014-12-05 20:57:56
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsBeam.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsBeam )
{
	MxEsBeam object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsBeam )
{
	MxEsBeam object;
	std::string expected = ( MxNumberBeamLevel( 1 ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsBeam )
{
	MxEsBeam object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getRepeater().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsBeam )
{
	MxEsBeam object;
	std::string expected = ( MxEnumFan(  ) ).toString();
	std::string actual = object.getFan().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsBeam )
{
	MxEsBeam object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsBeam )
{
	MxEsBeam object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsBeam )
{
	MxEsBeam object;
	int expected = 8;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::continue_ ) );
	expected = "continue";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::end );
	std::string expected;
	std::string actual;
	expected = "end";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::forwardHook ) );
	expected = "forward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::backwardHook );
	std::string expected;
	std::string actual;
	expected = "backward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::continue_ );
	std::string expected;
	std::string actual;
	expected = "continue";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::end ) );
	expected = "end";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::forwardHook );
	std::string expected;
	std::string actual;
	expected = "forward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::backwardHook ) );
	expected = "backward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsBeam )
{
	MxEsBeam object;
	std::string expected = "MxEsBeam";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsBeam )
{
	MxEsBeam object;
	std::string expected = "beam";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsBeam )
{
	MxEsBeam object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxEsBeam )
{
	MxNumberBeamLevel value1( 1 );
	MxNumberBeamLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsBeam object;
	object.setNumber( value1 );
	MxNumberBeamLevel expected = value1;
	MxNumberBeamLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setRepeater1, MxEsBeam )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsBeam object;
	object.setRepeater( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getRepeater();
	CHECK_EQUAL( expected, actual )
	object.setRepeater( value2 );
	expected = value2;
	actual = object.getRepeater();
	CHECK_EQUAL( expected, actual )
}
TEST( setFan2, MxEsBeam )
{
	MxEnumFan value1( lexicon::enums::Fan::none );
	MxEnumFan value2( lexicon::enums::Fan::rit );
	CHECK( ( value1 != value2 ) )
	MxEsBeam object;
	object.setFan( value1 );
	MxEnumFan expected = value1;
	MxEnumFan actual = object.getFan();
	CHECK_EQUAL( expected, actual )
	object.setFan( value2 );
	expected = value2;
	actual = object.getFan();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor3, MxEsBeam )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsBeam object;
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

TEST( getIsNumberRequired0, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRepeaterRequired1, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsRepeaterRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFanRequired2, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsFanRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired3, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( true );
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( false );
	expected = false;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRepeaterPresent1, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsRepeaterPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRepeaterPresent( true );
	expected = true;
	actual = object.getIsRepeaterPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRepeaterPresent( false );
	expected = false;
	actual = object.getIsRepeaterPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFanPresent2, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsFanPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFanPresent( true );
	expected = true;
	actual = object.getIsFanPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFanPresent( false );
	expected = false;
	actual = object.getIsFanPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorPresent3, MxEsBeam )
{
	MxEsBeam object;
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

TEST( getIsNumberDefaultDefined, MxEsBeam )
{
	MxEsBeam object;
	bool expected = true;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRepeaterDefaultDefined, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsRepeaterDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFanDefaultDefined, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsFanDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEsBeam )
{
	MxEsBeam object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxEsBeam )
{
	MxEsBeam object;
	MxNumberBeamLevel expected( 1 );
	MxNumberBeamLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRepeaterDefaultValue, MxEsBeam )
{
	MxEsBeam object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getRepeaterDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFanDefaultValue, MxEsBeam )
{
	MxEsBeam object;
	MxEnumFan expected;
	MxEnumFan actual = object.getFanDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEsBeam )
{
	MxEsBeam object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( true );
	object.setIsColorPresent( true );
	expected = "<beam number=\"1\" repeater=\"yes\" fan=\"accel\" color=\"#C8C7C6\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<beam repeater=\"yes\" fan=\"accel\" color=\"#C9CAC9C8\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<beam number=\"1\" fan=\"accel\" color=\"#CCCBCA\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<beam color=\"#CDCECDCC\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<beam number=\"1\" repeater=\"yes\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<beam repeater=\"yes\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<beam number=\"1\" fan=\"accel\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<beam fan=\"accel\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<beam repeater=\"yes\" color=\"#D8D7D6\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<beam number=\"1\" color=\"#D9DAD9D8\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<beam color=\"#DCDBDA\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<beam number=\"1\" repeater=\"yes\" fan=\"accel\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<beam repeater=\"yes\" fan=\"accel\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<beam number=\"1\" fan=\"accel\">begin</beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsBeam )
{
	MxEsBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<beam>begin</beam>";
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


