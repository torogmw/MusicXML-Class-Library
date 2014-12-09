/** *******************************************************
  * 
  * MxEmMidiProgramTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmMidiProgram.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmMidiProgram )
{
	MxEmMidiProgram object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmMidiProgram )
{
	MxEmMidiProgram object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmMidiProgram )
{
	MxEmMidiProgram object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmMidiProgram )
{
	MxEmMidiProgram object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmMidiProgram )
{
	MxEmMidiProgram object( 1 );
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
TEST( ctorValue2, MxEmMidiProgram )
{
	MxEmMidiProgram object( 3 );
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
TEST( ctorValue4, MxEmMidiProgram )
{
	MxEmMidiProgram object( 5 );
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
TEST( ctorValue6, MxEmMidiProgram )
{
	MxEmMidiProgram object( 7 );
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
TEST( ctorValue8, MxEmMidiProgram )
{
	MxEmMidiProgram object( 9 );
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

TEST( getClassName, MxEmMidiProgram )
{
	MxEmMidiProgram object;
	std::string expected = "MxEmMidiProgram";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmMidiProgram )
{
	MxEmMidiProgram object;
	std::string expected = "midi-program";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmMidiProgram )
{
	MxEmMidiProgram object;
	std::string expected = "The midi-program element specifies a MIDI 1.0 program number ranging from 1 to 128.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmMidiProgram )
{
	MxEmMidiProgram object( 11 );
	std::string expected;
	std::string actual;
	expected = "<midi-program>11</midi-program>";
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


