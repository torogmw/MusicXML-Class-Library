#include "TestHarness.h"
#include "MxEnumMute.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumMute )
{
	MxEnumMute e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::cup );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonNoStem );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonStem );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::bucket );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::plunger );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::hat );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::solotone );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::practice );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopMute );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopHand );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum13 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::echo );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( e1 );
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
TEST( copyCtor1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( e1 );
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
TEST( copyCtor2 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	MxEnumMute e2( e1 );
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
TEST( copyCtor3 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::cup );
	MxEnumMute e2( e1 );
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
TEST( copyCtor4 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonNoStem );
	MxEnumMute e2( e1 );
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
TEST( copyCtor5 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonStem );
	MxEnumMute e2( e1 );
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
TEST( copyCtor6 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::bucket );
	MxEnumMute e2( e1 );
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
TEST( copyCtor7 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::plunger );
	MxEnumMute e2( e1 );
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
TEST( copyCtor8 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::hat );
	MxEnumMute e2( e1 );
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
TEST( copyCtor9 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::solotone );
	MxEnumMute e2( e1 );
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
TEST( copyCtor10 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::practice );
	MxEnumMute e2( e1 );
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
TEST( copyCtor11 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopMute );
	MxEnumMute e2( e1 );
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
TEST( copyCtor12 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopHand );
	MxEnumMute e2( e1 );
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
TEST( copyCtor13 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::echo );
	MxEnumMute e2( e1 );
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
TEST( copyCtor14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( e1 );
	int expected = 14;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 14;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::on );
	e1 = e2;
	string expected = "on";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::off );
	e2 = e3;
	expected = "off";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "on";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "on";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	MxEnumMute e2( enums::Mute::off );
	e1 = e2;
	string expected = "off";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::straight );
	e2 = e3;
	expected = "straight";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "off";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "off";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::cup );
	MxEnumMute e2( enums::Mute::straight );
	e1 = e2;
	string expected = "straight";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::cup );
	e2 = e3;
	expected = "cup";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "straight";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "straight";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonNoStem );
	MxEnumMute e2( enums::Mute::cup );
	e1 = e2;
	string expected = "cup";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::harmonNoStem );
	e2 = e3;
	expected = "harmon-no-stem";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cup";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cup";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonStem );
	MxEnumMute e2( enums::Mute::harmonNoStem );
	e1 = e2;
	string expected = "harmon-no-stem";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::harmonStem );
	e2 = e3;
	expected = "harmon-stem";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "harmon-no-stem";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "harmon-no-stem";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::bucket );
	MxEnumMute e2( enums::Mute::harmonStem );
	e1 = e2;
	string expected = "harmon-stem";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::bucket );
	e2 = e3;
	expected = "bucket";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "harmon-stem";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "harmon-stem";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::plunger );
	MxEnumMute e2( enums::Mute::bucket );
	e1 = e2;
	string expected = "bucket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::plunger );
	e2 = e3;
	expected = "plunger";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bucket";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bucket";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::hat );
	MxEnumMute e2( enums::Mute::plunger );
	e1 = e2;
	string expected = "plunger";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::hat );
	e2 = e3;
	expected = "hat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "plunger";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "plunger";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::solotone );
	MxEnumMute e2( enums::Mute::hat );
	e1 = e2;
	string expected = "hat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::solotone );
	e2 = e3;
	expected = "solotone";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::practice );
	MxEnumMute e2( enums::Mute::solotone );
	e1 = e2;
	string expected = "solotone";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::practice );
	e2 = e3;
	expected = "practice";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "solotone";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "solotone";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopMute );
	MxEnumMute e2( enums::Mute::practice );
	e1 = e2;
	string expected = "practice";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::stopMute );
	e2 = e3;
	expected = "stop-mute";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "practice";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "practice";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopHand );
	MxEnumMute e2( enums::Mute::stopMute );
	e1 = e2;
	string expected = "stop-mute";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::stopHand );
	e2 = e3;
	expected = "stop-hand";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop-mute";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop-mute";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::echo );
	MxEnumMute e2( enums::Mute::stopHand );
	e1 = e2;
	string expected = "stop-hand";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::echo );
	e2 = e3;
	expected = "echo";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop-hand";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop-hand";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp13 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::echo );
	e1 = e2;
	string expected = "echo";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::palm );
	e2 = e3;
	expected = "palm";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "echo";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "echo";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::palm );
	e1 = e2;
	string expected = "palm";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMute e3( enums::Mute::on );
	e2 = e3;
	expected = "on";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "palm";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "palm";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	CHECK( e1.getValue() == enums::Mute::on )
}
TEST( getValue1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	CHECK( e1.getValue() == enums::Mute::off )
}
TEST( getValue2 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	CHECK( e1.getValue() == enums::Mute::straight )
}
TEST( getValue13 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::echo );
	CHECK( e1.getValue() == enums::Mute::echo )
}
TEST( getValue14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	CHECK( e1.getValue() == enums::Mute::palm )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::cup );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonNoStem );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonStem );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::bucket );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::plunger );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::hat );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::solotone );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::practice );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopMute );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopHand );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt13 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::echo );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::cup );
	string expected = "cup";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonNoStem );
	string expected = "harmonNoStem";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonStem );
	string expected = "harmonStem";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::bucket );
	string expected = "bucket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::plunger );
	string expected = "plunger";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::hat );
	string expected = "hat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::solotone );
	string expected = "solotone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::practice );
	string expected = "practice";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopMute );
	string expected = "stopMute";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopHand );
	string expected = "stopHand";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString13 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::echo );
	string expected = "echo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	string expected = "palm";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	string expected = "on";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	string expected = "off";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	string expected = "straight";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::cup );
	string expected = "cup";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonNoStem );
	string expected = "harmon-no-stem";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonStem );
	string expected = "harmon-stem";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::bucket );
	string expected = "bucket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::plunger );
	string expected = "plunger";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::hat );
	string expected = "hat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::solotone );
	string expected = "solotone";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::practice );
	string expected = "practice";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopMute );
	string expected = "stop-mute";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopHand );
	string expected = "stop-hand";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString13 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::echo );
	string expected = "echo";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	string expected = "palm";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	e1.setValue( enums::Mute::on );
	CHECK( e1.getValue() == enums::Mute::on )
}
TEST( setValue1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	e1.setValue( enums::Mute::off );
	CHECK( e1.getValue() == enums::Mute::off )
}
TEST( setValue2 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::cup );
	e1.setValue( enums::Mute::straight );
	CHECK( e1.getValue() == enums::Mute::straight )
}
TEST( setValue13 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	e1.setValue( enums::Mute::echo );
	CHECK( e1.getValue() == enums::Mute::echo )
}
TEST( setValue14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	e1.setValue( enums::Mute::palm );
	CHECK( e1.getValue() == enums::Mute::palm )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Mute::off )
}
TEST( setValueInt0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Mute::off )
}
TEST( setValueInt1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::cup );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Mute::straight )
}
TEST( setValueInt2 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonNoStem );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Mute::cup )
}
TEST( setValueInt13 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	CHECK( e1.setValueInt( 14 ) )
	CHECK( e1.getValue() == enums::Mute::palm )
}
TEST( setValueInt14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Mute::on )
}
TEST( setValueInt15 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	CHECK( ! e1.setValueInt( 15 ) )
	CHECK( e1.getValue() == enums::Mute::straight )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Mute::off )
}
TEST( fromString0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	CHECK( e1.fromString( "off" ) )
	CHECK( e1.getValue() == enums::Mute::off )
}
TEST( fromString1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::cup );
	CHECK( e1.fromString( "straight" ) )
	CHECK( e1.getValue() == enums::Mute::straight )
}
TEST( fromString2 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonNoStem );
	CHECK( e1.fromString( "cup" ) )
	CHECK( e1.getValue() == enums::Mute::cup )
}
TEST( fromString3 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::harmonStem );
	CHECK( e1.fromString( "harmon-no-stem" ) )
	CHECK( e1.getValue() == enums::Mute::harmonNoStem )
}
TEST( fromString4 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::bucket );
	CHECK( e1.fromString( "harmon-stem" ) )
	CHECK( e1.getValue() == enums::Mute::harmonStem )
}
TEST( fromString5 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::plunger );
	CHECK( e1.fromString( "bucket" ) )
	CHECK( e1.getValue() == enums::Mute::bucket )
}
TEST( fromString6 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::hat );
	CHECK( e1.fromString( "plunger" ) )
	CHECK( e1.getValue() == enums::Mute::plunger )
}
TEST( fromString7 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::solotone );
	CHECK( e1.fromString( "hat" ) )
	CHECK( e1.getValue() == enums::Mute::hat )
}
TEST( fromString8 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::practice );
	CHECK( e1.fromString( "solotone" ) )
	CHECK( e1.getValue() == enums::Mute::solotone )
}
TEST( fromString9 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopMute );
	CHECK( e1.fromString( "practice" ) )
	CHECK( e1.getValue() == enums::Mute::practice )
}
TEST( fromString10 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::stopHand );
	CHECK( e1.fromString( "stop-mute" ) )
	CHECK( e1.getValue() == enums::Mute::stopMute )
}
TEST( fromString11 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::echo );
	CHECK( e1.fromString( "stop-hand" ) )
	CHECK( e1.getValue() == enums::Mute::stopHand )
}
TEST( fromString12 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	CHECK( e1.fromString( "echo" ) )
	CHECK( e1.getValue() == enums::Mute::echo )
}
TEST( fromString13 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	CHECK( e1.fromString( "palm" ) )
	CHECK( e1.getValue() == enums::Mute::palm )
}
TEST( fromString14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	CHECK( e1.fromString( "on" ) )
	CHECK( e1.getValue() == enums::Mute::on )
}
TEST( fromString15 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::straight );
	CHECK( ! e1.fromString( "crazyErrantValue15" ) )
	CHECK( e1.getValue() == enums::Mute::straight )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	int expected = 15;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	int expected = 15;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	int expected = 15;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	string expected = "mute";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	string expected = "mute";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	string expected = "mute";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	string expected = "MxEnumMute";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	string expected = "MxEnumMute";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	string expected = "MxEnumMute";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	string expected = "The mute type represents muting for different instruments, including brass, winds, and strings. The on and off values are used for undifferentiated mutes. The remaining values represent specific mutes.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	string expected = "The mute type represents muting for different instruments, including brass, winds, and strings. The on and off values are used for undifferentiated mutes. The remaining values represent specific mutes.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	string expected = "The mute type represents muting for different instruments, including brass, winds, and strings. The on and off values are used for undifferentiated mutes. The remaining values represent specific mutes.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	stringstream ss;
	e1.stream( ss );
	string expected = "on";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "on";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	stringstream ss;
	e1.stream( ss );
	string expected = "off";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "off";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	stringstream ss;
	e1.stream( ss );
	string expected = "palm";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "palm";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	stringstream ss;
	ss << e1;
	string expected = "on";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "on";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	stringstream ss;
	ss << e1;
	string expected = "off";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "off";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	stringstream ss;
	ss << e1;
	string expected = "palm";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "palm";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::on );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::on );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::off );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::off );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_14equals0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_14equals1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_14equals14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::on );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::on );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::off );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::off );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_14equals0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_14equals1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_14equals14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::on );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_14islessthanoreq0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::on );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::off );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_14islessthanoreq1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::off );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_14islessthanoreq14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::on );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_14isgreaterthanoreq0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::on );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::off );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_14isgreaterthanoreq1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::off );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_14isgreaterthanoreq14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::on );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_14islessthan0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::on );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::off );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_14islessthan1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::off );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_14islessthan14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::on );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_14isgreaterthan0 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::on );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::off );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_14isgreaterthan1 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::off );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_14isgreaterthan14 , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "palm";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "palm";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start14_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "echo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "echo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	for( int i = 0; i < 15; ++i )
	{
		e2 = ++e1;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	for( int i = 0; i < 15; ++i )
	{
		e2 = ++e1;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start14_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	for( int i = 0; i < 15; ++i )
	{
		e2 = ++e1;
	}
	string expected = "palm";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "palm";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start14_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	for( int i = 0; i < 15; ++i )
	{
		e2 = --e1;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	for( int i = 0; i < 15; ++i )
	{
		e2 = --e1;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start14_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	for( int i = 0; i < 15; ++i )
	{
		e2 = --e1;
	}
	string expected = "palm";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "palm";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "palm";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "echo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "palm";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start14_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "echo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stopHand";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	for( int i = 0; i < 15; ++i )
	{
		e2 = e1++;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "palm";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	for( int i = 0; i < 15; ++i )
	{
		e2 = e1++;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start14_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	for( int i = 0; i < 15; ++i )
	{
		e2 = e1++;
	}
	string expected = "palm";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "echo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cup";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start14_14times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::on );
	MxEnumMute e2( enums::Mute::on );
	for( int i = 0; i < 15; ++i )
	{
		e2 = e1--;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::off );
	MxEnumMute e2( enums::Mute::off );
	for( int i = 0; i < 15; ++i )
	{
		e2 = e1--;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start14_15times , MxEnumMute )
{
	MxEnumMute e1( enums::Mute::palm );
	MxEnumMute e2( enums::Mute::palm );
	for( int i = 0; i < 15; ++i )
	{
		e2 = e1--;
	}
	string expected = "palm";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

