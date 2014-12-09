#include "TestHarness.h"
#include "MxEnumLineWidthType.h"
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

TEST( customValue01, MxEnumLineWidthType )
{
    MxEnumLineWidthType e1;
    e1.fromString( "somecustomstring" );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}

TEST( customValue02, MxEnumLineWidthType )
{
    MxEnumLineWidthType e1;
    e1.fromString( "anotherstring" );
    std::string expected = "anotherstring";
    std::string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}

/* default constructor test */
TEST( ctorDefault , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::enclosure );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::ending );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::extend );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::heavyBarline );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::leger );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::lightBarline );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::octaveShift );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::pedal );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurMiddle );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurTip );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum13 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::staff );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum14 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::stem );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum15 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieMiddle );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum16 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieTip );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum17 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tupletBracket );
	int expected = 17;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum18 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::wedge );
	int expected = 18;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( e1 );
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
TEST( copyCtor1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( e1 );
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
TEST( copyCtor2 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	MxEnumLineWidthType e2( e1 );
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
TEST( copyCtor3 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::enclosure );
	MxEnumLineWidthType e2( e1 );
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
TEST( copyCtor4 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::ending );
	MxEnumLineWidthType e2( e1 );
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
TEST( copyCtor5 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::extend );
	MxEnumLineWidthType e2( e1 );
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
TEST( copyCtor6 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::heavyBarline );
	MxEnumLineWidthType e2( e1 );
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
TEST( copyCtor7 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::leger );
	MxEnumLineWidthType e2( e1 );
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
TEST( copyCtor8 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::lightBarline );
	MxEnumLineWidthType e2( e1 );
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
TEST( copyCtor9 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::octaveShift );
	MxEnumLineWidthType e2( e1 );
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
TEST( copyCtor10 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::pedal );
	MxEnumLineWidthType e2( e1 );
	int expected = 10;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 11 );
	expected = 10;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 11;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor11 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurMiddle );
	MxEnumLineWidthType e2( e1 );
	int expected = 11;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 12 );
	expected = 11;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 12;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor12 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurTip );
	MxEnumLineWidthType e2( e1 );
	int expected = 12;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 13 );
	expected = 12;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 13;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor13 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::staff );
	MxEnumLineWidthType e2( e1 );
	int expected = 13;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 14 );
	expected = 13;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 14;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor14 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::stem );
	MxEnumLineWidthType e2( e1 );
	int expected = 14;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 15 );
	expected = 14;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 15;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor15 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieMiddle );
	MxEnumLineWidthType e2( e1 );
	int expected = 15;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 16 );
	expected = 15;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 16;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor16 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieTip );
	MxEnumLineWidthType e2( e1 );
	int expected = 16;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 17 );
	expected = 16;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 17;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor17 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tupletBracket );
	MxEnumLineWidthType e2( e1 );
	int expected = 17;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 18 );
	expected = 17;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 18;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor18 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::wedge );
	MxEnumLineWidthType e2( e1 );
	int expected = 18;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 19 );
	expected = 18;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 19;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( e1 );
	int expected = 19;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 19;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	e1 = e2;
	string expected = "beam";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::bracket );
	e2 = e3;
	expected = "bracket";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "beam";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "beam";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	e1 = e2;
	string expected = "bracket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::dashes );
	e2 = e3;
	expected = "dashes";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bracket";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bracket";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::enclosure );
	MxEnumLineWidthType e2( enums::LineWidthType::dashes );
	e1 = e2;
	string expected = "dashes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::enclosure );
	e2 = e3;
	expected = "enclosure";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dashes";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dashes";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::ending );
	MxEnumLineWidthType e2( enums::LineWidthType::enclosure );
	e1 = e2;
	string expected = "enclosure";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::ending );
	e2 = e3;
	expected = "ending";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "enclosure";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "enclosure";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::extend );
	MxEnumLineWidthType e2( enums::LineWidthType::ending );
	e1 = e2;
	string expected = "ending";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::extend );
	e2 = e3;
	expected = "extend";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ending";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ending";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::heavyBarline );
	MxEnumLineWidthType e2( enums::LineWidthType::extend );
	e1 = e2;
	string expected = "extend";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::heavyBarline );
	e2 = e3;
	expected = "heavy barline";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "extend";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "extend";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::leger );
	MxEnumLineWidthType e2( enums::LineWidthType::heavyBarline );
	e1 = e2;
	string expected = "heavy barline";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::leger );
	e2 = e3;
	expected = "leger";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "heavy barline";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "heavy barline";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::lightBarline );
	MxEnumLineWidthType e2( enums::LineWidthType::leger );
	e1 = e2;
	string expected = "leger";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::lightBarline );
	e2 = e3;
	expected = "light barline";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "leger";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "leger";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::octaveShift );
	MxEnumLineWidthType e2( enums::LineWidthType::lightBarline );
	e1 = e2;
	string expected = "light barline";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::octaveShift );
	e2 = e3;
	expected = "octave shift";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "light barline";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "light barline";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::pedal );
	MxEnumLineWidthType e2( enums::LineWidthType::octaveShift );
	e1 = e2;
	string expected = "octave shift";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::pedal );
	e2 = e3;
	expected = "pedal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "octave shift";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "octave shift";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurMiddle );
	MxEnumLineWidthType e2( enums::LineWidthType::pedal );
	e1 = e2;
	string expected = "pedal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::slurMiddle );
	e2 = e3;
	expected = "slur middle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "pedal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "pedal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurTip );
	MxEnumLineWidthType e2( enums::LineWidthType::slurMiddle );
	e1 = e2;
	string expected = "slur middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::slurTip );
	e2 = e3;
	expected = "slur tip";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slur middle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slur middle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::staff );
	MxEnumLineWidthType e2( enums::LineWidthType::slurTip );
	e1 = e2;
	string expected = "slur tip";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::staff );
	e2 = e3;
	expected = "staff";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slur tip";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slur tip";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp13 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::stem );
	MxEnumLineWidthType e2( enums::LineWidthType::staff );
	e1 = e2;
	string expected = "staff";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::stem );
	e2 = e3;
	expected = "stem";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "staff";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "staff";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp14 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieMiddle );
	MxEnumLineWidthType e2( enums::LineWidthType::stem );
	e1 = e2;
	string expected = "stem";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::tieMiddle );
	e2 = e3;
	expected = "tie middle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stem";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stem";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp15 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieTip );
	MxEnumLineWidthType e2( enums::LineWidthType::tieMiddle );
	e1 = e2;
	string expected = "tie middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::tieTip );
	e2 = e3;
	expected = "tie tip";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tie middle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tie middle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp16 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tupletBracket );
	MxEnumLineWidthType e2( enums::LineWidthType::tieTip );
	e1 = e2;
	string expected = "tie tip";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::tupletBracket );
	e2 = e3;
	expected = "tuplet bracket";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tie tip";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tie tip";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp17 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::wedge );
	MxEnumLineWidthType e2( enums::LineWidthType::tupletBracket );
	e1 = e2;
	string expected = "tuplet bracket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::wedge );
	e2 = e3;
	expected = "wedge";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tuplet bracket";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tuplet bracket";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp18 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::wedge );
	e1 = e2;
	string expected = "wedge";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::other );
	e2 = e3;
	expected = "other";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wedge";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wedge";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	e1 = e2;
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineWidthType e3( enums::LineWidthType::beam );
	e2 = e3;
	expected = "beam";
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
TEST( getValue0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	CHECK( e1.getValue() == enums::LineWidthType::beam )
}
TEST( getValue1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	CHECK( e1.getValue() == enums::LineWidthType::bracket )
}
TEST( getValue2 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	CHECK( e1.getValue() == enums::LineWidthType::dashes )
}
TEST( getValue18 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::wedge );
	CHECK( e1.getValue() == enums::LineWidthType::wedge )
}
TEST( getValue19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	CHECK( e1.getValue() == enums::LineWidthType::other )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::enclosure );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::ending );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::extend );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::heavyBarline );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::leger );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::lightBarline );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::octaveShift );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::pedal );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurMiddle );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurTip );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt13 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::staff );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt14 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::stem );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt15 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieMiddle );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt16 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieTip );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt17 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tupletBracket );
	int expected = 17;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt18 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::wedge );
	int expected = 18;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	string expected = "dashes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::enclosure );
	string expected = "enclosure";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::ending );
	string expected = "ending";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::extend );
	string expected = "extend";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::heavyBarline );
	string expected = "heavyBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::leger );
	string expected = "leger";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::lightBarline );
	string expected = "lightBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::octaveShift );
	string expected = "octaveShift";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::pedal );
	string expected = "pedal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurMiddle );
	string expected = "slurMiddle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurTip );
	string expected = "slurTip";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString13 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::staff );
	string expected = "staff";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString14 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::stem );
	string expected = "stem";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString15 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieMiddle );
	string expected = "tieMiddle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString16 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieTip );
	string expected = "tieTip";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString17 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tupletBracket );
	string expected = "tupletBracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString18 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::wedge );
	string expected = "wedge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	string expected = "beam";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	string expected = "bracket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	string expected = "dashes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::enclosure );
	string expected = "enclosure";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::ending );
	string expected = "ending";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::extend );
	string expected = "extend";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::heavyBarline );
	string expected = "heavy barline";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::leger );
	string expected = "leger";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::lightBarline );
	string expected = "light barline";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::octaveShift );
	string expected = "octave shift";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::pedal );
	string expected = "pedal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurMiddle );
	string expected = "slur middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurTip );
	string expected = "slur tip";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString13 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::staff );
	string expected = "staff";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString14 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::stem );
	string expected = "stem";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString15 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieMiddle );
	string expected = "tie middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString16 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieTip );
	string expected = "tie tip";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString17 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tupletBracket );
	string expected = "tuplet bracket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString18 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::wedge );
	string expected = "wedge";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	e1.setValue( enums::LineWidthType::beam );
	CHECK( e1.getValue() == enums::LineWidthType::beam )
}
TEST( setValue1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	e1.setValue( enums::LineWidthType::bracket );
	CHECK( e1.getValue() == enums::LineWidthType::bracket )
}
TEST( setValue2 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::enclosure );
	e1.setValue( enums::LineWidthType::dashes );
	CHECK( e1.getValue() == enums::LineWidthType::dashes )
}
TEST( setValue18 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	e1.setValue( enums::LineWidthType::wedge );
	CHECK( e1.getValue() == enums::LineWidthType::wedge )
}
TEST( setValue19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	e1.setValue( enums::LineWidthType::other );
	CHECK( e1.getValue() == enums::LineWidthType::other )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::LineWidthType::bracket )
}
TEST( setValueInt0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::LineWidthType::bracket )
}
TEST( setValueInt1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::enclosure );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::LineWidthType::dashes )
}
TEST( setValueInt2 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::ending );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::LineWidthType::enclosure )
}
TEST( setValueInt18 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	CHECK( e1.setValueInt( 19 ) )
	CHECK( e1.getValue() == enums::LineWidthType::other )
}
TEST( setValueInt19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::LineWidthType::beam )
}
TEST( setValueInt20 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	CHECK( ! e1.setValueInt( 20 ) )
	CHECK( e1.getValue() == enums::LineWidthType::dashes )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::LineWidthType::other )
}
TEST( fromString0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	CHECK( e1.fromString( "bracket" ) )
	CHECK( e1.getValue() == enums::LineWidthType::bracket )
}
TEST( fromString1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::enclosure );
	CHECK( e1.fromString( "dashes" ) )
	CHECK( e1.getValue() == enums::LineWidthType::dashes )
}
TEST( fromString2 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::ending );
	CHECK( e1.fromString( "enclosure" ) )
	CHECK( e1.getValue() == enums::LineWidthType::enclosure )
}
TEST( fromString3 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::extend );
	CHECK( e1.fromString( "ending" ) )
	CHECK( e1.getValue() == enums::LineWidthType::ending )
}
TEST( fromString4 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::heavyBarline );
	CHECK( e1.fromString( "extend" ) )
	CHECK( e1.getValue() == enums::LineWidthType::extend )
}
TEST( fromString5 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::leger );
	CHECK( e1.fromString( "heavy barline" ) )
	CHECK( e1.getValue() == enums::LineWidthType::heavyBarline )
}
TEST( fromString6 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::lightBarline );
	CHECK( e1.fromString( "leger" ) )
	CHECK( e1.getValue() == enums::LineWidthType::leger )
}
TEST( fromString7 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::octaveShift );
	CHECK( e1.fromString( "light barline" ) )
	CHECK( e1.getValue() == enums::LineWidthType::lightBarline )
}
TEST( fromString8 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::pedal );
	CHECK( e1.fromString( "octave shift" ) )
	CHECK( e1.getValue() == enums::LineWidthType::octaveShift )
}
TEST( fromString9 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurMiddle );
	CHECK( e1.fromString( "pedal" ) )
	CHECK( e1.getValue() == enums::LineWidthType::pedal )
}
TEST( fromString10 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::slurTip );
	CHECK( e1.fromString( "slur middle" ) )
	CHECK( e1.getValue() == enums::LineWidthType::slurMiddle )
}
TEST( fromString11 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::staff );
	CHECK( e1.fromString( "slur tip" ) )
	CHECK( e1.getValue() == enums::LineWidthType::slurTip )
}
TEST( fromString12 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::stem );
	CHECK( e1.fromString( "staff" ) )
	CHECK( e1.getValue() == enums::LineWidthType::staff )
}
TEST( fromString13 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieMiddle );
	CHECK( e1.fromString( "stem" ) )
	CHECK( e1.getValue() == enums::LineWidthType::stem )
}
TEST( fromString14 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tieTip );
	CHECK( e1.fromString( "tie middle" ) )
	CHECK( e1.getValue() == enums::LineWidthType::tieMiddle )
}
TEST( fromString15 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::tupletBracket );
	CHECK( e1.fromString( "tie tip" ) )
	CHECK( e1.getValue() == enums::LineWidthType::tieTip )
}
TEST( fromString16 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::wedge );
	CHECK( e1.fromString( "tuplet bracket" ) )
	CHECK( e1.getValue() == enums::LineWidthType::tupletBracket )
}
TEST( fromString17 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	CHECK( e1.fromString( "wedge" ) )
	CHECK( e1.getValue() == enums::LineWidthType::wedge )
}
TEST( fromString18 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	CHECK( e1.fromString( "other" ) )
	CHECK( e1.getValue() == enums::LineWidthType::other )
}
TEST( fromString19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	CHECK( e1.fromString( "beam" ) )
	CHECK( e1.getValue() == enums::LineWidthType::beam )
}
TEST( fromString20 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::dashes );
	CHECK( ! e1.fromString( "crazyErrantValue20" ) )
	CHECK( e1.getValue() == enums::LineWidthType::other )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	int expected = 20;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	int expected = 20;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	int expected = 20;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	string expected = "line-width-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	string expected = "line-width-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	string expected = "line-width-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	string expected = "MxEnumLineWidthType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	string expected = "MxEnumLineWidthType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	string expected = "MxEnumLineWidthType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	string expected = "The line-width-type defines what type of line is being defined in a line-width element. Values include beam, bracket, dashes, enclosure, ending, extend, heavy barline, leger, light barline, octave shift, pedal, slur middle, slur tip, staff, stem, tie middle, tie tip, tuplet bracket, and wedge. This is left as a string so that other application-specific types can be defined, but it is made a separate type so that it can be redefined more strictly.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	string expected = "The line-width-type defines what type of line is being defined in a line-width element. Values include beam, bracket, dashes, enclosure, ending, extend, heavy barline, leger, light barline, octave shift, pedal, slur middle, slur tip, staff, stem, tie middle, tie tip, tuplet bracket, and wedge. This is left as a string so that other application-specific types can be defined, but it is made a separate type so that it can be redefined more strictly.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	string expected = "The line-width-type defines what type of line is being defined in a line-width element. Values include beam, bracket, dashes, enclosure, ending, extend, heavy barline, leger, light barline, octave shift, pedal, slur middle, slur tip, staff, stem, tie middle, tie tip, tuplet bracket, and wedge. This is left as a string so that other application-specific types can be defined, but it is made a separate type so that it can be redefined more strictly.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	stringstream ss;
	e1.stream( ss );
	string expected = "beam";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "beam";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	stringstream ss;
	e1.stream( ss );
	string expected = "bracket";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "bracket";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
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
TEST( streamingOperator0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	stringstream ss;
	ss << e1;
	string expected = "beam";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "beam";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	stringstream ss;
	ss << e1;
	string expected = "bracket";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "bracket";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
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
TEST( equalsEquals_true_0equals0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_19equals0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_19equals1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_19equals19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_19equals0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_19equals1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_19equals19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_19islessthanoreq0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_19islessthanoreq1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_19islessthanoreq19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_19isgreaterthanoreq0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_19isgreaterthanoreq1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_19isgreaterthanoreq19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_19islessthan0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_19islessthan1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_19islessthan19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_19isgreaterthan0 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_19isgreaterthan1 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_19isgreaterthan19 , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	for( int i = 0; i < 19; ++i )
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
TEST( incrementPre_start1_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	for( int i = 0; i < 19; ++i )
	{
		e2 = ++e1;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start19_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	for( int i = 0; i < 19; ++i )
	{
		e2 = ++e1;
	}
	string expected = "wedge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wedge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	for( int i = 0; i < 20; ++i )
	{
		e2 = ++e1;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	for( int i = 0; i < 20; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start19_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	for( int i = 0; i < 20; ++i )
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
TEST( decrementPre_start0_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	for( int i = 0; i < 19; ++i )
	{
		e2 = --e1;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	for( int i = 0; i < 19; ++i )
	{
		e2 = --e1;
	}
	string expected = "dashes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start19_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	for( int i = 0; i < 19; ++i )
	{
		e2 = --e1;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	for( int i = 0; i < 20; ++i )
	{
		e2 = --e1;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	for( int i = 0; i < 20; ++i )
	{
		e2 = --e1;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start19_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	for( int i = 0; i < 20; ++i )
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
TEST( incrementPost_start0_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	for( int i = 0; i < 19; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wedge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	for( int i = 0; i < 19; ++i )
	{
		e2 = e1++;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start19_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	for( int i = 0; i < 19; ++i )
	{
		e2 = e1++;
	}
	string expected = "wedge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tupletBracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	for( int i = 0; i < 20; ++i )
	{
		e2 = e1++;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	for( int i = 0; i < 20; ++i )
	{
		e2 = e1++;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start19_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	for( int i = 0; i < 20; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wedge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	for( int i = 0; i < 19; ++i )
	{
		e2 = e1--;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	for( int i = 0; i < 19; ++i )
	{
		e2 = e1--;
	}
	string expected = "dashes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "enclosure";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start19_19times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	for( int i = 0; i < 19; ++i )
	{
		e2 = e1--;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::beam );
	MxEnumLineWidthType e2( enums::LineWidthType::beam );
	for( int i = 0; i < 20; ++i )
	{
		e2 = e1--;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::bracket );
	MxEnumLineWidthType e2( enums::LineWidthType::bracket );
	for( int i = 0; i < 20; ++i )
	{
		e2 = e1--;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start19_20times , MxEnumLineWidthType )
{
	MxEnumLineWidthType e1( enums::LineWidthType::other );
	MxEnumLineWidthType e2( enums::LineWidthType::other );
	for( int i = 0; i < 20; ++i )
	{
		e2 = e1--;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

