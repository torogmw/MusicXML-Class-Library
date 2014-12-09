/** *******************************************************
  * 
  * MxCxSmpMidiDeviceTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpMidiDevice.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	std::string expected = ( MxNumberMidi16(  ) ).toString();
	std::string actual = object.getPort().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	std::string expected = ( XsIdRef(  ) ).toString();
	std::string actual = object.getId().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object( "booksmart", XsString( "" ) );
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
TEST( ctorValueAndElementName2, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object( "musicxmlishard", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName4, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object( "charlie", XsString( "X,Y,Z" ) );
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
TEST( ctorValueAndElementName6, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object( "quiet", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName8, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object( "bishop", XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	std::string expected = "MxCxSmpMidiDevice";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	std::string expected = "midi-device";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	std::string expected = "The midi-device type corresponds to the DeviceName meta event in Standard MIDI Files. The optional port attribute is a number from 1 to 16 that can be used with the unofficial MIDI port (or cable) meta event. Unlike the DeviceName meta event, there can be multiple midi-device elements per MusicXML part starting in MusicXML 3.0. The optional id attribute refers to the score-instrument assigned to this device. If missing, the device assignment affects all score-instrument elements in the score-part.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setPort0, MxCxSmpMidiDevice )
{
	MxNumberMidi16 value1( 1 );
	MxNumberMidi16 value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpMidiDevice object;
	object.setPort( value1 );
	MxNumberMidi16 expected = value1;
	MxNumberMidi16 actual = object.getPort();
	CHECK_EQUAL( expected, actual )
	object.setPort( value2 );
	expected = value2;
	actual = object.getPort();
	CHECK_EQUAL( expected, actual )
}
TEST( setId1, MxCxSmpMidiDevice )
{
	XsIdRef value1( "ID01" );
	XsIdRef value2( "ID02" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpMidiDevice object;
	object.setId( value1 );
	XsIdRef expected = value1;
	XsIdRef actual = object.getId();
	CHECK_EQUAL( expected, actual )
	object.setId( value2 );
	expected = value2;
	actual = object.getId();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsPortRequired0, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	bool expected = false;
	bool actual = object.getIsPortRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsIdRequired1, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	bool expected = false;
	bool actual = object.getIsIdRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsPortPresent0, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	bool expected = false;
	bool actual = object.getIsPortPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPortPresent( true );
	expected = true;
	actual = object.getIsPortPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPortPresent( false );
	expected = false;
	actual = object.getIsPortPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsIdPresent1, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	bool expected = false;
	bool actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsIdPresent( true );
	expected = true;
	actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsIdPresent( false );
	expected = false;
	actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setPort( MxNumberMidi16( 1 ) );
	object.setId( XsIdRef( "" ) );
	object.setIsPortPresent( true );
	object.setIsIdPresent( true );
	expected = "<booksmart port=\"1\" id=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPortPresent( false );
	object.setIsIdPresent( true );
	object.setPort( MxNumberMidi16( 1 ) );
	object.setId( XsIdRef( "" ) );
	expected = "<quiet id=\"\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPortPresent( true );
	object.setIsIdPresent( false );
	object.setPort( MxNumberMidi16( 1 ) );
	object.setId( XsIdRef( "" ) );
	expected = "<musicxmlishard port=\"1\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsPortPresent( false );
	object.setIsIdPresent( false );
	object.setPort( MxNumberMidi16( 1 ) );
	object.setId( XsIdRef( "" ) );
	expected = "<bishop>D,E,F</bishop>";
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

TEST( getIsPortDefaultDefined, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	bool expected = false;
	bool actual = object.getIsPortDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsIdDefaultDefined, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	bool expected = false;
	bool actual = object.getIsIdDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getPortDefaultValue, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	MxNumberMidi16 expected;
	MxNumberMidi16 actual = object.getPortDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getIdDefaultValue, MxCxSmpMidiDevice )
{
	MxCxSmpMidiDevice object;
	XsIdRef expected;
	XsIdRef actual = object.getIdDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


