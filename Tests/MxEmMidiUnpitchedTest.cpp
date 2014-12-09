/** *******************************************************
  * 
  * MxEmMidiUnpitchedTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmMidiUnpitched.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberMidi128( 2 ) );
	expected = "2";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object( 3 );
	std::string expected;
	std::string actual;
	expected = "3";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberMidi128( 4 ) );
	expected = "4";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object( 5 );
	std::string expected;
	std::string actual;
	expected = "5";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberMidi128( 6 ) );
	expected = "6";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object( 7 );
	std::string expected;
	std::string actual;
	expected = "7";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberMidi128( 8 ) );
	expected = "8";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object( 9 );
	std::string expected;
	std::string actual;
	expected = "9";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberMidi128( 10 ) );
	expected = "10";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object;
	std::string expected = "MxEmMidiUnpitched";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object;
	std::string expected = "midi-unpitched";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object;
	std::string expected = "For unpitched instruments, the midi-unpitched element specifies a MIDI 1.0 note number ranging from 1 to 128. It is usually used with MIDI banks for percussion. Note that MIDI 1.0 note numbers are generally specified from 0 to 127 rather than the 1 to 128 numbering used in this element.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmMidiUnpitched )
{
	MxEmMidiUnpitched object( 11 );
	std::string expected;
	std::string actual;
	expected = "<midi-unpitched>11</midi-unpitched>";
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


