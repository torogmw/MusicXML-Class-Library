/** *******************************************************
  * 
  * MxCxSmpBeamTest.cpp
  * Created: 2014-12-02 17:31:53
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpBeam.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	std::string expected = ( MxNumberBeamLevel( 1 ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getRepeater().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	std::string expected = ( MxEnumFan(  ) ).toString();
	std::string actual = object.getFan().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpBeam )
{
	MxCxSmpBeam object( "booksmart", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::continue_ ) );
	expected = "continue";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpBeam )
{
	MxCxSmpBeam object( "musicxmlishard", MxEnumBeamValue( lexicon::enums::BeamValue::end ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::forwardHook ) );
	expected = "forward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpBeam )
{
	MxCxSmpBeam object( "charlie", MxEnumBeamValue( lexicon::enums::BeamValue::backwardHook ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "backward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpBeam )
{
	MxCxSmpBeam object( "quiet", MxEnumBeamValue( lexicon::enums::BeamValue::continue_ ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "continue";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::end ) );
	expected = "end";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpBeam )
{
	MxCxSmpBeam object( "bishop", MxEnumBeamValue( lexicon::enums::BeamValue::forwardHook ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
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

TEST( getClassName, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	std::string expected = "MxCxSmpBeam";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	std::string expected = "beam";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	std::string expected = "Beam values include begin, continue, end, forward hook, and backward hook. Up to eight concurrent beams are available to cover up to 1024th notes. Each beam in a note is represented with a separate beam element, starting with the eighth note beam using a number attribute of 1. Note that the beam number does not distinguish sets of beams that overlap, as it does for slur and other elements. Beaming groups are distinguished by being in different voices and/or the presence or absence of grace and cue elements. Beams that have a begin value can also have a fan attribute to indicate accelerandos and ritardandos using fanned beams. The fan attribute may also be used with a continue value if the fanning direction changes on that note. The value is 'none' if not specified. The repeater attribute has been deprecated in MusicXML 3.0. Formerly used for tremolos, it needs to be specified with a 'yes' value for each beam using it.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxCxSmpBeam )
{
	MxNumberBeamLevel value1( 1 );
	MxNumberBeamLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBeam object;
	object.setNumber( value1 );
	MxNumberBeamLevel expected = value1;
	MxNumberBeamLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setRepeater1, MxCxSmpBeam )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBeam object;
	object.setRepeater( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getRepeater();
	CHECK_EQUAL( expected, actual )
	object.setRepeater( value2 );
	expected = value2;
	actual = object.getRepeater();
	CHECK_EQUAL( expected, actual )
}
TEST( setFan2, MxCxSmpBeam )
{
	MxEnumFan value1( lexicon::enums::Fan::none );
	MxEnumFan value2( lexicon::enums::Fan::rit );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBeam object;
	object.setFan( value1 );
	MxEnumFan expected = value1;
	MxEnumFan actual = object.getFan();
	CHECK_EQUAL( expected, actual )
	object.setFan( value2 );
	expected = value2;
	actual = object.getFan();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor3, MxCxSmpBeam )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBeam object;
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

TEST( getIsNumberRequired0, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRepeaterRequired1, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	bool expected = false;
	bool actual = object.getIsRepeaterRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFanRequired2, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	bool expected = false;
	bool actual = object.getIsFanRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired3, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxCxSmpBeam )
{
	MxCxSmpBeam object;
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
TEST( getIsRepeaterPresent1, MxCxSmpBeam )
{
	MxCxSmpBeam object;
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
TEST( getIsFanPresent2, MxCxSmpBeam )
{
	MxCxSmpBeam object;
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
TEST( getIsColorPresent3, MxCxSmpBeam )
{
	MxCxSmpBeam object;
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

TEST( toString0, MxCxSmpBeam )
{
	MxCxSmpBeam object( "booksmart", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart number=\"1\" repeater=\"yes\" fan=\"accel\" color=\"#D1D2D1D0\">begin</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpBeam )
{
	MxCxSmpBeam object( "quiet", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<quiet repeater=\"yes\" fan=\"accel\" color=\"#D4D3D2\">begin</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpBeam )
{
	MxCxSmpBeam object( "musicxmlishard", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<musicxmlishard number=\"1\" fan=\"accel\" color=\"#D5D6D5D4\">begin</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpBeam )
{
	MxCxSmpBeam object( "bishop", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<bishop color=\"#D8D7D6\">begin</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpBeam )
{
	MxCxSmpBeam object( "charlie", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<charlie number=\"1\" repeater=\"yes\">begin</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpBeam )
{
	MxCxSmpBeam object( "booksmart", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<booksmart repeater=\"yes\">begin</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpBeam )
{
	MxCxSmpBeam object( "quiet", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<quiet number=\"1\" fan=\"accel\">begin</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpBeam )
{
	MxCxSmpBeam object( "musicxmlishard", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<musicxmlishard fan=\"accel\">begin</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpBeam )
{
	MxCxSmpBeam object( "bishop", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<bishop repeater=\"yes\" color=\"#E1E2E1E0\">begin</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpBeam )
{
	MxCxSmpBeam object( "charlie", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<charlie number=\"1\" color=\"#E4E3E2\">begin</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpBeam )
{
	MxCxSmpBeam object( "booksmart", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<booksmart color=\"#E5E6E5E4\">begin</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpBeam )
{
	MxCxSmpBeam object( "quiet", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<quiet number=\"1\" repeater=\"yes\" fan=\"accel\">begin</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpBeam )
{
	MxCxSmpBeam object( "musicxmlishard", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( true );
	object.setIsFanPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<musicxmlishard repeater=\"yes\" fan=\"accel\">begin</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpBeam )
{
	MxCxSmpBeam object( "bishop", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<bishop number=\"1\" fan=\"accel\">begin</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpBeam )
{
	MxCxSmpBeam object( "charlie", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsRepeaterPresent( false );
	object.setIsFanPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setRepeater( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFan( MxEnumFan( lexicon::enums::Fan::accel ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<charlie>begin</charlie>";
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

TEST( getIsNumberDefaultDefined, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	bool expected = true;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRepeaterDefaultDefined, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	bool expected = false;
	bool actual = object.getIsRepeaterDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFanDefaultDefined, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	bool expected = false;
	bool actual = object.getIsFanDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	MxNumberBeamLevel expected( 1 );
	MxNumberBeamLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRepeaterDefaultValue, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getRepeaterDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFanDefaultValue, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	MxEnumFan expected;
	MxEnumFan actual = object.getFanDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpBeam )
{
	MxCxSmpBeam object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


