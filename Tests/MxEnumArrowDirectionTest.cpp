#include "TestHarness.h"
#include "MxEnumArrowDirection.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::down );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwest );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeast );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southeast );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southwest );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::leftRight );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::upDown );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwestSoutheast );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeastSouthwest );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor2 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor3 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::down );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor4 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwest );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor5 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeast );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor6 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southeast );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor7 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southwest );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor8 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::leftRight );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor9 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::upDown );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor10 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwestSoutheast );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor11 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeastSouthwest );
	MxEnumArrowDirection e2( e1 );
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
TEST( copyCtor12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( e1 );
	int expected = 12;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 12;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	e1 = e2;
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::up );
	e2 = e3;
	expected = "up";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	e1 = e2;
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::right );
	e2 = e3;
	expected = "right";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "up";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "up";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::down );
	MxEnumArrowDirection e2( enums::ArrowDirection::right );
	e1 = e2;
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::down );
	e2 = e3;
	expected = "down";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "right";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "right";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwest );
	MxEnumArrowDirection e2( enums::ArrowDirection::down );
	e1 = e2;
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::northwest );
	e2 = e3;
	expected = "northwest";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "down";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "down";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeast );
	MxEnumArrowDirection e2( enums::ArrowDirection::northwest );
	e1 = e2;
	string expected = "northwest";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::northeast );
	e2 = e3;
	expected = "northeast";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northwest";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northwest";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southeast );
	MxEnumArrowDirection e2( enums::ArrowDirection::northeast );
	e1 = e2;
	string expected = "northeast";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::southeast );
	e2 = e3;
	expected = "southeast";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northeast";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northeast";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southwest );
	MxEnumArrowDirection e2( enums::ArrowDirection::southeast );
	e1 = e2;
	string expected = "southeast";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::southwest );
	e2 = e3;
	expected = "southwest";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "southeast";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "southeast";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::leftRight );
	MxEnumArrowDirection e2( enums::ArrowDirection::southwest );
	e1 = e2;
	string expected = "southwest";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::leftRight );
	e2 = e3;
	expected = "left right";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "southwest";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "southwest";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::upDown );
	MxEnumArrowDirection e2( enums::ArrowDirection::leftRight );
	e1 = e2;
	string expected = "left right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::upDown );
	e2 = e3;
	expected = "up down";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left right";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left right";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwestSoutheast );
	MxEnumArrowDirection e2( enums::ArrowDirection::upDown );
	e1 = e2;
	string expected = "up down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::northwestSoutheast );
	e2 = e3;
	expected = "northwest southeast";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "up down";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "up down";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeastSouthwest );
	MxEnumArrowDirection e2( enums::ArrowDirection::northwestSoutheast );
	e1 = e2;
	string expected = "northwest southeast";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::northeastSouthwest );
	e2 = e3;
	expected = "northeast southwest";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northwest southeast";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northwest southeast";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::northeastSouthwest );
	e1 = e2;
	string expected = "northeast southwest";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::other );
	e2 = e3;
	expected = "other";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northeast southwest";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northeast southwest";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	e1 = e2;
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumArrowDirection e3( enums::ArrowDirection::left );
	e2 = e3;
	expected = "left";
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
TEST( getValue0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	CHECK( e1.getValue() == enums::ArrowDirection::left )
}
TEST( getValue1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	CHECK( e1.getValue() == enums::ArrowDirection::up )
}
TEST( getValue2 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	CHECK( e1.getValue() == enums::ArrowDirection::right )
}
TEST( getValue11 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeastSouthwest );
	CHECK( e1.getValue() == enums::ArrowDirection::northeastSouthwest )
}
TEST( getValue12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	CHECK( e1.getValue() == enums::ArrowDirection::other )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::down );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwest );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeast );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southeast );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southwest );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::leftRight );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::upDown );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwestSoutheast );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeastSouthwest );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::down );
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwest );
	string expected = "northwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeast );
	string expected = "northeast";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southeast );
	string expected = "southeast";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southwest );
	string expected = "southwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::leftRight );
	string expected = "leftRight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::upDown );
	string expected = "upDown";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwestSoutheast );
	string expected = "northwestSoutheast";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeastSouthwest );
	string expected = "northeastSouthwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::down );
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwest );
	string expected = "northwest";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeast );
	string expected = "northeast";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southeast );
	string expected = "southeast";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southwest );
	string expected = "southwest";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::leftRight );
	string expected = "left right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::upDown );
	string expected = "up down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwestSoutheast );
	string expected = "northwest southeast";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeastSouthwest );
	string expected = "northeast southwest";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	e1.setValue( enums::ArrowDirection::left );
	CHECK( e1.getValue() == enums::ArrowDirection::left )
}
TEST( setValue1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	e1.setValue( enums::ArrowDirection::up );
	CHECK( e1.getValue() == enums::ArrowDirection::up )
}
TEST( setValue2 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::down );
	e1.setValue( enums::ArrowDirection::right );
	CHECK( e1.getValue() == enums::ArrowDirection::right )
}
TEST( setValue11 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	e1.setValue( enums::ArrowDirection::northeastSouthwest );
	CHECK( e1.getValue() == enums::ArrowDirection::northeastSouthwest )
}
TEST( setValue12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	e1.setValue( enums::ArrowDirection::other );
	CHECK( e1.getValue() == enums::ArrowDirection::other )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::ArrowDirection::up )
}
TEST( setValueInt0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::ArrowDirection::up )
}
TEST( setValueInt1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::down );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::ArrowDirection::right )
}
TEST( setValueInt2 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwest );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::ArrowDirection::down )
}
TEST( setValueInt11 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	CHECK( e1.setValueInt( 12 ) )
	CHECK( e1.getValue() == enums::ArrowDirection::other )
}
TEST( setValueInt12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::ArrowDirection::left )
}
TEST( setValueInt13 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	CHECK( ! e1.setValueInt( 13 ) )
	CHECK( e1.getValue() == enums::ArrowDirection::right )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::up )
}
TEST( fromString0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	CHECK( e1.fromString( "up" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::up )
}
TEST( fromString1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::down );
	CHECK( e1.fromString( "right" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::right )
}
TEST( fromString2 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwest );
	CHECK( e1.fromString( "down" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::down )
}
TEST( fromString3 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeast );
	CHECK( e1.fromString( "northwest" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::northwest )
}
TEST( fromString4 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southeast );
	CHECK( e1.fromString( "northeast" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::northeast )
}
TEST( fromString5 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::southwest );
	CHECK( e1.fromString( "southeast" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::southeast )
}
TEST( fromString6 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::leftRight );
	CHECK( e1.fromString( "southwest" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::southwest )
}
TEST( fromString7 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::upDown );
	CHECK( e1.fromString( "left right" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::leftRight )
}
TEST( fromString8 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northwestSoutheast );
	CHECK( e1.fromString( "up down" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::upDown )
}
TEST( fromString9 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::northeastSouthwest );
	CHECK( e1.fromString( "northwest southeast" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::northwestSoutheast )
}
TEST( fromString10 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	CHECK( e1.fromString( "northeast southwest" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::northeastSouthwest )
}
TEST( fromString11 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	CHECK( e1.fromString( "other" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::other )
}
TEST( fromString12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	CHECK( e1.fromString( "left" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::left )
}
TEST( fromString13 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::right );
	CHECK( ! e1.fromString( "crazyErrantValue13" ) )
	CHECK( e1.getValue() == enums::ArrowDirection::right )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	int expected = 13;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	int expected = 13;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	int expected = 13;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	string expected = "arrow-direction";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	string expected = "arrow-direction";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	string expected = "arrow-direction";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	string expected = "MxEnumArrowDirection";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	string expected = "MxEnumArrowDirection";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	string expected = "MxEnumArrowDirection";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	string expected = "The arrow-direction type represents the direction in which an arrow points, using Unicode arrow terminology.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	string expected = "The arrow-direction type represents the direction in which an arrow points, using Unicode arrow terminology.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	string expected = "The arrow-direction type represents the direction in which an arrow points, using Unicode arrow terminology.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	stringstream ss;
	e1.stream( ss );
	string expected = "left";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "left";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	stringstream ss;
	e1.stream( ss );
	string expected = "up";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "up";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
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
TEST( streamingOperator0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	stringstream ss;
	ss << e1;
	string expected = "left";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "left";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	stringstream ss;
	ss << e1;
	string expected = "up";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "up";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
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
TEST( equalsEquals_true_0equals0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_12equals0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_12equals1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_12equals12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_12equals0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_12equals1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_12equals12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_12islessthanoreq0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_12islessthanoreq1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_12islessthanoreq12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_12isgreaterthanoreq0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_12isgreaterthanoreq1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_12isgreaterthanoreq12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_12islessthan0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_12islessthan1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_12islessthan12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_12isgreaterthan0 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_12isgreaterthan1 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_12isgreaterthan12 , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	for( int i = 0; i < 12; ++i )
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
TEST( incrementPre_start1_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	for( int i = 0; i < 12; ++i )
	{
		e2 = ++e1;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start12_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	for( int i = 0; i < 12; ++i )
	{
		e2 = ++e1;
	}
	string expected = "northeastSouthwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "northeastSouthwest";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start12_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	for( int i = 0; i < 13; ++i )
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
TEST( decrementPre_start0_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	for( int i = 0; i < 12; ++i )
	{
		e2 = --e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	for( int i = 0; i < 12; ++i )
	{
		e2 = --e1;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start12_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	for( int i = 0; i < 12; ++i )
	{
		e2 = --e1;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start12_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	for( int i = 0; i < 13; ++i )
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
TEST( incrementPost_start0_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "northeastSouthwest";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1++;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start12_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1++;
	}
	string expected = "northeastSouthwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "northwestSoutheast";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start12_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "northeastSouthwest";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1--;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1--;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start12_12times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1--;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::left );
	MxEnumArrowDirection e2( enums::ArrowDirection::left );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::up );
	MxEnumArrowDirection e2( enums::ArrowDirection::up );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start12_13times , MxEnumArrowDirection )
{
	MxEnumArrowDirection e1( enums::ArrowDirection::other );
	MxEnumArrowDirection e2( enums::ArrowDirection::other );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

