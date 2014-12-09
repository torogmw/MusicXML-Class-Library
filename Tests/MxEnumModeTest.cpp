#include "TestHarness.h"
#include "MxEnumMode.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* This MxEnum has the ability to hold custom strings
   in addition to the regular enum values (this is
   because the MusicXml specification defines this type
   as a string instead of an enumeration and the xsd
   technically does not restrict the values to the
   listed expected values.  Thus, this enum tests
   the custom value functionality first before testing
   all of the regular MxEnum functionality */

TEST( customValue01, MxEnumMode )
{
    MxEnumMode e1;
    e1.fromString( "somecustomstring" );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}

TEST( customValue02, MxEnumMode )
{
    MxEnumMode e1;
    e1.fromString( "anotherstring" );
    std::string expected = "anotherstring";
    std::string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}

/* default constructor test */
TEST( ctorDefault , MxEnumMode )
{
	MxEnumMode e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}

/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::phrygian );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::lydian );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::mixolydian );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::aeolian );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::ionian );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::locrian );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::none );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( e1 );
	int expected = 0;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 1 );
	expected = 0;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 1;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( e1 );
	int expected = 1;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 2 );
	expected = 1;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 2;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor2 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	MxEnumMode e2( e1 );
	int expected = 2;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 3 );
	expected = 2;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 3;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor3 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::phrygian );
	MxEnumMode e2( e1 );
	int expected = 3;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 4 );
	expected = 3;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 4;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor4 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::lydian );
	MxEnumMode e2( e1 );
	int expected = 4;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 5 );
	expected = 4;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 5;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor5 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::mixolydian );
	MxEnumMode e2( e1 );
	int expected = 5;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 6 );
	expected = 5;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 6;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor6 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::aeolian );
	MxEnumMode e2( e1 );
	int expected = 6;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 7 );
	expected = 6;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 7;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor7 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::ionian );
	MxEnumMode e2( e1 );
	int expected = 7;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 8 );
	expected = 7;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 8;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor8 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::locrian );
	MxEnumMode e2( e1 );
	int expected = 8;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 9 );
	expected = 8;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 9;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor9 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::none );
	MxEnumMode e2( e1 );
	int expected = 9;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 10 );
	expected = 9;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 10;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( e1 );
	int expected = 10;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 10;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::major );
	e1 = e2;
	string expected = "major";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::minor );
	e2 = e3;
	expected = "minor";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	MxEnumMode e2( enums::Mode::minor );
	e1 = e2;
	string expected = "minor";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::dorian );
	e2 = e3;
	expected = "dorian";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::phrygian );
	MxEnumMode e2( enums::Mode::dorian );
	e1 = e2;
	string expected = "dorian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::phrygian );
	e2 = e3;
	expected = "phrygian";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dorian";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dorian";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::lydian );
	MxEnumMode e2( enums::Mode::phrygian );
	e1 = e2;
	string expected = "phrygian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::lydian );
	e2 = e3;
	expected = "lydian";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "phrygian";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "phrygian";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::mixolydian );
	MxEnumMode e2( enums::Mode::lydian );
	e1 = e2;
	string expected = "lydian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::mixolydian );
	e2 = e3;
	expected = "mixolydian";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "lydian";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "lydian";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::aeolian );
	MxEnumMode e2( enums::Mode::mixolydian );
	e1 = e2;
	string expected = "mixolydian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::aeolian );
	e2 = e3;
	expected = "aeolian";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "mixolydian";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "mixolydian";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::ionian );
	MxEnumMode e2( enums::Mode::aeolian );
	e1 = e2;
	string expected = "aeolian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::ionian );
	e2 = e3;
	expected = "ionian";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "aeolian";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "aeolian";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::locrian );
	MxEnumMode e2( enums::Mode::ionian );
	e1 = e2;
	string expected = "ionian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::locrian );
	e2 = e3;
	expected = "locrian";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ionian";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ionian";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::none );
	MxEnumMode e2( enums::Mode::locrian );
	e1 = e2;
	string expected = "locrian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "locrian";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "locrian";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::other );
	e2 = e3;
	expected = "other";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::other );
	e1 = e2;
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMode e3( enums::Mode::major );
	e2 = e3;
	expected = "major";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "other";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "other";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	CHECK( e1.getValue() == enums::Mode::major )
}
TEST( getValue1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	CHECK( e1.getValue() == enums::Mode::minor )
}
TEST( getValue2 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	CHECK( e1.getValue() == enums::Mode::dorian )
}
TEST( getValue9 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::none );
	CHECK( e1.getValue() == enums::Mode::none )
}
TEST( getValue10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	CHECK( e1.getValue() == enums::Mode::other )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::phrygian );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::lydian );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::mixolydian );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::aeolian );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::ionian );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::locrian );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::none );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	string expected = "dorian";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::phrygian );
	string expected = "phrygian";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::lydian );
	string expected = "lydian";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::mixolydian );
	string expected = "mixolydian";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::aeolian );
	string expected = "aeolian";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::ionian );
	string expected = "ionian";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::locrian );
	string expected = "locrian";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	string expected = "major";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	string expected = "minor";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	string expected = "dorian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::phrygian );
	string expected = "phrygian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::lydian );
	string expected = "lydian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::mixolydian );
	string expected = "mixolydian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::aeolian );
	string expected = "aeolian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::ionian );
	string expected = "ionian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::locrian );
	string expected = "locrian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	e1.setValue( enums::Mode::major );
	CHECK( e1.getValue() == enums::Mode::major )
}
TEST( setValue1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	e1.setValue( enums::Mode::minor );
	CHECK( e1.getValue() == enums::Mode::minor )
}
TEST( setValue2 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::phrygian );
	e1.setValue( enums::Mode::dorian );
	CHECK( e1.getValue() == enums::Mode::dorian )
}
TEST( setValue9 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	e1.setValue( enums::Mode::none );
	CHECK( e1.getValue() == enums::Mode::none )
}
TEST( setValue10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	e1.setValue( enums::Mode::other );
	CHECK( e1.getValue() == enums::Mode::other )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Mode::minor )
}
TEST( setValueInt0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Mode::minor )
}
TEST( setValueInt1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::phrygian );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Mode::dorian )
}
TEST( setValueInt2 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::lydian );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Mode::phrygian )
}
TEST( setValueInt9 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	CHECK( e1.setValueInt( 10 ) )
	CHECK( e1.getValue() == enums::Mode::other )
}
TEST( setValueInt10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Mode::major )
}
TEST( setValueInt11 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	CHECK( ! e1.setValueInt( 11 ) )
	CHECK( e1.getValue() == enums::Mode::dorian )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Mode::other )
}
TEST( fromString0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	CHECK( e1.fromString( "minor" ) )
	CHECK( e1.getValue() == enums::Mode::minor )
}
TEST( fromString1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::phrygian );
	CHECK( e1.fromString( "dorian" ) )
	CHECK( e1.getValue() == enums::Mode::dorian )
}
TEST( fromString2 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::lydian );
	CHECK( e1.fromString( "phrygian" ) )
	CHECK( e1.getValue() == enums::Mode::phrygian )
}
TEST( fromString3 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::mixolydian );
	CHECK( e1.fromString( "lydian" ) )
	CHECK( e1.getValue() == enums::Mode::lydian )
}
TEST( fromString4 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::aeolian );
	CHECK( e1.fromString( "mixolydian" ) )
	CHECK( e1.getValue() == enums::Mode::mixolydian )
}
TEST( fromString5 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::ionian );
	CHECK( e1.fromString( "aeolian" ) )
	CHECK( e1.getValue() == enums::Mode::aeolian )
}
TEST( fromString6 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::locrian );
	CHECK( e1.fromString( "ionian" ) )
	CHECK( e1.getValue() == enums::Mode::ionian )
}
TEST( fromString7 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::none );
	CHECK( e1.fromString( "locrian" ) )
	CHECK( e1.getValue() == enums::Mode::locrian )
}
TEST( fromString8 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::Mode::none )
}
TEST( fromString9 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	CHECK( e1.fromString( "other" ) )
	CHECK( e1.getValue() == enums::Mode::other )
}
TEST( fromString10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	CHECK( e1.fromString( "major" ) )
	CHECK( e1.getValue() == enums::Mode::major )
}
TEST( fromString11 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::dorian );
	CHECK( ! e1.fromString( "crazyErrantValue11" ) )
	CHECK( e1.getValue() == enums::Mode::other )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	int expected = 11;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	int expected = 11;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	int expected = 11;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	string expected = "mode";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	string expected = "mode";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	string expected = "mode";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	string expected = "MxEnumMode";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	string expected = "MxEnumMode";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	string expected = "MxEnumMode";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	string expected = "The mode type is used to specify major/minor and other mode distinctions. Valid mode values include major, minor, dorian, phrygian, lydian, mixolydian, aeolian, ionian, locrian, and none.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	string expected = "The mode type is used to specify major/minor and other mode distinctions. Valid mode values include major, minor, dorian, phrygian, lydian, mixolydian, aeolian, ionian, locrian, and none.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	string expected = "The mode type is used to specify major/minor and other mode distinctions. Valid mode values include major, minor, dorian, phrygian, lydian, mixolydian, aeolian, ionian, locrian, and none.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	stringstream ss;
	e1.stream( ss );
	string expected = "major";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "major";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	stringstream ss;
	e1.stream( ss );
	string expected = "minor";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "minor";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	stringstream ss;
	e1.stream( ss );
	string expected = "other";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "other";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	stringstream ss;
	ss << e1;
	string expected = "major";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "major";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	stringstream ss;
	ss << e1;
	string expected = "minor";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "minor";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	stringstream ss;
	ss << e1;
	string expected = "other";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "other";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::major );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::major );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_10equals0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::other );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_10equals1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::other );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_10equals10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::major );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::major );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_10equals0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::other );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_10equals1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::other );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_10equals10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::major );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_10islessthanoreq0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::major );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_10islessthanoreq1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_10islessthanoreq10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::major );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthanoreq0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::major );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthanoreq1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::other );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::other );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthanoreq10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::major );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_10islessthan0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::major );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_10islessthan1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::other );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::other );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_10islessthan10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::major );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthan0 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::major );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthan1 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::minor );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_10isgreaterthan10 , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	for( int i = 0; i < 10; ++i )
	{
		e2 = ++e1;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	for( int i = 0; i < 10; ++i )
	{
		e2 = ++e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start10_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	for( int i = 0; i < 10; ++i )
	{
		e2 = ++e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	for( int i = 0; i < 11; ++i )
	{
		e2 = ++e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	for( int i = 0; i < 11; ++i )
	{
		e2 = ++e1;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start10_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	for( int i = 0; i < 11; ++i )
	{
		e2 = ++e1;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	for( int i = 0; i < 10; ++i )
	{
		e2 = --e1;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	for( int i = 0; i < 10; ++i )
	{
		e2 = --e1;
	}
	string expected = "dorian";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dorian";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start10_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	for( int i = 0; i < 10; ++i )
	{
		e2 = --e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start10_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1++;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start10_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "locrian";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start10_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1--;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dorian";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1--;
	}
	string expected = "dorian";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "phrygian";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start10_10times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1--;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::major );
	MxEnumMode e2( enums::Mode::major );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::minor );
	MxEnumMode e2( enums::Mode::minor );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dorian";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start10_11times , MxEnumMode )
{
	MxEnumMode e1( enums::Mode::other );
	MxEnumMode e2( enums::Mode::other );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

