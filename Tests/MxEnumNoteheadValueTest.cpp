#include "TestHarness.h"
#include "MxEnumNoteheadValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::square );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cross );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::x );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleX );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::invertedTriangle );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowDown );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowUp );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slashed );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::backSlashed );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::normal );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum13 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cluster );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum14 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleDot );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum15 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::leftTriangle );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum16 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::rectangle );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum17 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::none );
	int expected = 17;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum18 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::do_ );
	int expected = 18;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum19 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::re );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum20 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::mi );
	int expected = 20;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum21 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::fa );
	int expected = 21;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum22 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::faUp );
	int expected = 22;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum23 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::so );
	int expected = 23;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum24 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::la );
	int expected = 24;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	int expected = 25;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor2 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor3 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::square );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor4 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cross );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor5 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::x );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor6 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleX );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor7 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::invertedTriangle );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor8 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowDown );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor9 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowUp );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor10 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slashed );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor11 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::backSlashed );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor12 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::normal );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor13 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cluster );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor14 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleDot );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor15 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::leftTriangle );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor16 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::rectangle );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor17 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::none );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor18 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::do_ );
	MxEnumNoteheadValue e2( e1 );
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
TEST( copyCtor19 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::re );
	MxEnumNoteheadValue e2( e1 );
	int expected = 19;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 20 );
	expected = 19;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 20;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor20 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::mi );
	MxEnumNoteheadValue e2( e1 );
	int expected = 20;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 21 );
	expected = 20;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 21;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor21 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::fa );
	MxEnumNoteheadValue e2( e1 );
	int expected = 21;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 22 );
	expected = 21;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 22;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor22 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::faUp );
	MxEnumNoteheadValue e2( e1 );
	int expected = 22;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 23 );
	expected = 22;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 23;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor23 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::so );
	MxEnumNoteheadValue e2( e1 );
	int expected = 23;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 24 );
	expected = 23;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 24;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor24 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::la );
	MxEnumNoteheadValue e2( e1 );
	int expected = 24;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 25 );
	expected = 24;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 25;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( e1 );
	int expected = 25;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 25;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	e1 = e2;
	string expected = "slash";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::triangle );
	e2 = e3;
	expected = "triangle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slash";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slash";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	e1 = e2;
	string expected = "triangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::diamond );
	e2 = e3;
	expected = "diamond";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triangle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triangle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::square );
	MxEnumNoteheadValue e2( enums::NoteheadValue::diamond );
	e1 = e2;
	string expected = "diamond";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::square );
	e2 = e3;
	expected = "square";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diamond";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diamond";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cross );
	MxEnumNoteheadValue e2( enums::NoteheadValue::square );
	e1 = e2;
	string expected = "square";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::cross );
	e2 = e3;
	expected = "cross";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "square";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "square";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::x );
	MxEnumNoteheadValue e2( enums::NoteheadValue::cross );
	e1 = e2;
	string expected = "cross";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::x );
	e2 = e3;
	expected = "x";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cross";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cross";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleX );
	MxEnumNoteheadValue e2( enums::NoteheadValue::x );
	e1 = e2;
	string expected = "x";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::circleX );
	e2 = e3;
	expected = "circle-x";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "x";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "x";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::invertedTriangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::circleX );
	e1 = e2;
	string expected = "circle-x";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::invertedTriangle );
	e2 = e3;
	expected = "inverted triangle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "circle-x";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "circle-x";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowDown );
	MxEnumNoteheadValue e2( enums::NoteheadValue::invertedTriangle );
	e1 = e2;
	string expected = "inverted triangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::arrowDown );
	e2 = e3;
	expected = "arrow down";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "inverted triangle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "inverted triangle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowUp );
	MxEnumNoteheadValue e2( enums::NoteheadValue::arrowDown );
	e1 = e2;
	string expected = "arrow down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::arrowUp );
	e2 = e3;
	expected = "arrow up";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "arrow down";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "arrow down";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slashed );
	MxEnumNoteheadValue e2( enums::NoteheadValue::arrowUp );
	e1 = e2;
	string expected = "arrow up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::slashed );
	e2 = e3;
	expected = "slashed";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "arrow up";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "arrow up";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::backSlashed );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slashed );
	e1 = e2;
	string expected = "slashed";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::backSlashed );
	e2 = e3;
	expected = "back slashed";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slashed";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slashed";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::normal );
	MxEnumNoteheadValue e2( enums::NoteheadValue::backSlashed );
	e1 = e2;
	string expected = "back slashed";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::normal );
	e2 = e3;
	expected = "normal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "back slashed";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "back slashed";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cluster );
	MxEnumNoteheadValue e2( enums::NoteheadValue::normal );
	e1 = e2;
	string expected = "normal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::cluster );
	e2 = e3;
	expected = "cluster";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "normal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "normal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp13 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleDot );
	MxEnumNoteheadValue e2( enums::NoteheadValue::cluster );
	e1 = e2;
	string expected = "cluster";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::circleDot );
	e2 = e3;
	expected = "circle dot";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cluster";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cluster";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp14 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::leftTriangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::circleDot );
	e1 = e2;
	string expected = "circle dot";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::leftTriangle );
	e2 = e3;
	expected = "left triangle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "circle dot";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "circle dot";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp15 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::rectangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::leftTriangle );
	e1 = e2;
	string expected = "left triangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::rectangle );
	e2 = e3;
	expected = "rectangle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left triangle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left triangle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp16 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::none );
	MxEnumNoteheadValue e2( enums::NoteheadValue::rectangle );
	e1 = e2;
	string expected = "rectangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rectangle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rectangle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp17 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::do_ );
	MxEnumNoteheadValue e2( enums::NoteheadValue::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::do_ );
	e2 = e3;
	expected = "do";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp18 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::re );
	MxEnumNoteheadValue e2( enums::NoteheadValue::do_ );
	e1 = e2;
	string expected = "do";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::re );
	e2 = e3;
	expected = "re";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "do";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "do";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp19 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::mi );
	MxEnumNoteheadValue e2( enums::NoteheadValue::re );
	e1 = e2;
	string expected = "re";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::mi );
	e2 = e3;
	expected = "mi";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "re";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "re";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp20 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::fa );
	MxEnumNoteheadValue e2( enums::NoteheadValue::mi );
	e1 = e2;
	string expected = "mi";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::fa );
	e2 = e3;
	expected = "fa";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "mi";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "mi";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp21 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::faUp );
	MxEnumNoteheadValue e2( enums::NoteheadValue::fa );
	e1 = e2;
	string expected = "fa";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::faUp );
	e2 = e3;
	expected = "fa up";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "fa";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "fa";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp22 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::so );
	MxEnumNoteheadValue e2( enums::NoteheadValue::faUp );
	e1 = e2;
	string expected = "fa up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::so );
	e2 = e3;
	expected = "so";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "fa up";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "fa up";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp23 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::la );
	MxEnumNoteheadValue e2( enums::NoteheadValue::so );
	e1 = e2;
	string expected = "so";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::la );
	e2 = e3;
	expected = "la";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "so";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "so";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp24 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::la );
	e1 = e2;
	string expected = "la";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::ti );
	e2 = e3;
	expected = "ti";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "la";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "la";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	e1 = e2;
	string expected = "ti";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteheadValue e3( enums::NoteheadValue::slash );
	e2 = e3;
	expected = "slash";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ti";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ti";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	CHECK( e1.getValue() == enums::NoteheadValue::slash )
}
TEST( getValue1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	CHECK( e1.getValue() == enums::NoteheadValue::triangle )
}
TEST( getValue2 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	CHECK( e1.getValue() == enums::NoteheadValue::diamond )
}
TEST( getValue24 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::la );
	CHECK( e1.getValue() == enums::NoteheadValue::la )
}
TEST( getValue25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	CHECK( e1.getValue() == enums::NoteheadValue::ti )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::square );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cross );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::x );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleX );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::invertedTriangle );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowDown );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowUp );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slashed );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::backSlashed );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::normal );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt13 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cluster );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt14 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleDot );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt15 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::leftTriangle );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt16 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::rectangle );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt17 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::none );
	int expected = 17;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt18 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::do_ );
	int expected = 18;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt19 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::re );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt20 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::mi );
	int expected = 20;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt21 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::fa );
	int expected = 21;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt22 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::faUp );
	int expected = 22;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt23 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::so );
	int expected = 23;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt24 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::la );
	int expected = 24;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	int expected = 25;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	string expected = "slash";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	string expected = "diamond";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::square );
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cross );
	string expected = "cross";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::x );
	string expected = "x";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleX );
	string expected = "circleX";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::invertedTriangle );
	string expected = "invertedTriangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowDown );
	string expected = "arrowDown";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowUp );
	string expected = "arrowUp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slashed );
	string expected = "slashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::backSlashed );
	string expected = "backSlashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::normal );
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString13 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cluster );
	string expected = "cluster";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString14 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleDot );
	string expected = "circleDot";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString15 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::leftTriangle );
	string expected = "leftTriangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString16 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::rectangle );
	string expected = "rectangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString17 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString18 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::do_ );
	string expected = "do_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString19 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::re );
	string expected = "re";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString20 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::mi );
	string expected = "mi";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString21 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::fa );
	string expected = "fa";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString22 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::faUp );
	string expected = "faUp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString23 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::so );
	string expected = "so";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString24 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::la );
	string expected = "la";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	string expected = "ti";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	string expected = "slash";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	string expected = "triangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	string expected = "diamond";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::square );
	string expected = "square";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cross );
	string expected = "cross";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::x );
	string expected = "x";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleX );
	string expected = "circle-x";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::invertedTriangle );
	string expected = "inverted triangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowDown );
	string expected = "arrow down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowUp );
	string expected = "arrow up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slashed );
	string expected = "slashed";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::backSlashed );
	string expected = "back slashed";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::normal );
	string expected = "normal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString13 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cluster );
	string expected = "cluster";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString14 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleDot );
	string expected = "circle dot";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString15 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::leftTriangle );
	string expected = "left triangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString16 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::rectangle );
	string expected = "rectangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString17 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString18 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::do_ );
	string expected = "do";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString19 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::re );
	string expected = "re";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString20 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::mi );
	string expected = "mi";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString21 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::fa );
	string expected = "fa";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString22 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::faUp );
	string expected = "fa up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString23 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::so );
	string expected = "so";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString24 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::la );
	string expected = "la";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	string expected = "ti";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	e1.setValue( enums::NoteheadValue::slash );
	CHECK( e1.getValue() == enums::NoteheadValue::slash )
}
TEST( setValue1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	e1.setValue( enums::NoteheadValue::triangle );
	CHECK( e1.getValue() == enums::NoteheadValue::triangle )
}
TEST( setValue2 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::square );
	e1.setValue( enums::NoteheadValue::diamond );
	CHECK( e1.getValue() == enums::NoteheadValue::diamond )
}
TEST( setValue24 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	e1.setValue( enums::NoteheadValue::la );
	CHECK( e1.getValue() == enums::NoteheadValue::la )
}
TEST( setValue25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	e1.setValue( enums::NoteheadValue::ti );
	CHECK( e1.getValue() == enums::NoteheadValue::ti )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::NoteheadValue::triangle )
}
TEST( setValueInt0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::NoteheadValue::triangle )
}
TEST( setValueInt1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::square );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::NoteheadValue::diamond )
}
TEST( setValueInt2 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cross );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::NoteheadValue::square )
}
TEST( setValueInt24 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	CHECK( e1.setValueInt( 25 ) )
	CHECK( e1.getValue() == enums::NoteheadValue::ti )
}
TEST( setValueInt25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::NoteheadValue::slash )
}
TEST( setValueInt26 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	CHECK( ! e1.setValueInt( 26 ) )
	CHECK( e1.getValue() == enums::NoteheadValue::diamond )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::triangle )
}
TEST( fromString0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	CHECK( e1.fromString( "triangle" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::triangle )
}
TEST( fromString1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::square );
	CHECK( e1.fromString( "diamond" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::diamond )
}
TEST( fromString2 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cross );
	CHECK( e1.fromString( "square" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::square )
}
TEST( fromString3 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::x );
	CHECK( e1.fromString( "cross" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::cross )
}
TEST( fromString4 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleX );
	CHECK( e1.fromString( "x" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::x )
}
TEST( fromString5 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::invertedTriangle );
	CHECK( e1.fromString( "circle-x" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::circleX )
}
TEST( fromString6 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowDown );
	CHECK( e1.fromString( "inverted triangle" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::invertedTriangle )
}
TEST( fromString7 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::arrowUp );
	CHECK( e1.fromString( "arrow down" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::arrowDown )
}
TEST( fromString8 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slashed );
	CHECK( e1.fromString( "arrow up" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::arrowUp )
}
TEST( fromString9 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::backSlashed );
	CHECK( e1.fromString( "slashed" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::slashed )
}
TEST( fromString10 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::normal );
	CHECK( e1.fromString( "back slashed" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::backSlashed )
}
TEST( fromString11 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::cluster );
	CHECK( e1.fromString( "normal" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::normal )
}
TEST( fromString12 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::circleDot );
	CHECK( e1.fromString( "cluster" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::cluster )
}
TEST( fromString13 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::leftTriangle );
	CHECK( e1.fromString( "circle dot" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::circleDot )
}
TEST( fromString14 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::rectangle );
	CHECK( e1.fromString( "left triangle" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::leftTriangle )
}
TEST( fromString15 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::none );
	CHECK( e1.fromString( "rectangle" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::rectangle )
}
TEST( fromString16 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::do_ );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::none )
}
TEST( fromString17 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::re );
	CHECK( e1.fromString( "do" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::do_ )
}
TEST( fromString18 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::mi );
	CHECK( e1.fromString( "re" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::re )
}
TEST( fromString19 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::fa );
	CHECK( e1.fromString( "mi" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::mi )
}
TEST( fromString20 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::faUp );
	CHECK( e1.fromString( "fa" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::fa )
}
TEST( fromString21 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::so );
	CHECK( e1.fromString( "fa up" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::faUp )
}
TEST( fromString22 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::la );
	CHECK( e1.fromString( "so" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::so )
}
TEST( fromString23 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	CHECK( e1.fromString( "la" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::la )
}
TEST( fromString24 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	CHECK( e1.fromString( "ti" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::ti )
}
TEST( fromString25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	CHECK( e1.fromString( "slash" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::slash )
}
TEST( fromString26 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::diamond );
	CHECK( ! e1.fromString( "crazyErrantValue26" ) )
	CHECK( e1.getValue() == enums::NoteheadValue::diamond )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	int expected = 26;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	int expected = 26;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	int expected = 26;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	string expected = "notehead-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	string expected = "notehead-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	string expected = "notehead-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	string expected = "MxEnumNoteheadValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	string expected = "MxEnumNoteheadValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	string expected = "MxEnumNoteheadValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	string expected = "The notehead type indicates shapes other than the open and closed ovals associated with note durations. The values do, re, mi, fa, fa up, so, la, and ti correspond to Aikin's 7-shape system. The fa up shape is typically used with upstems; the fa shape is typically used with downstems or no stems. The arrow shapes differ from triangle and inverted triangle by being centered on the stem. Slashed and back slashed notes include both the normal notehead and a slash. The triangle shape has the tip of the triangle pointing up; the inverted triangle shape has the tip of the triangle pointing down. The left triangle shape is a right triangle with the hypotenuse facing up and to the left.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	string expected = "The notehead type indicates shapes other than the open and closed ovals associated with note durations. The values do, re, mi, fa, fa up, so, la, and ti correspond to Aikin's 7-shape system. The fa up shape is typically used with upstems; the fa shape is typically used with downstems or no stems. The arrow shapes differ from triangle and inverted triangle by being centered on the stem. Slashed and back slashed notes include both the normal notehead and a slash. The triangle shape has the tip of the triangle pointing up; the inverted triangle shape has the tip of the triangle pointing down. The left triangle shape is a right triangle with the hypotenuse facing up and to the left.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	string expected = "The notehead type indicates shapes other than the open and closed ovals associated with note durations. The values do, re, mi, fa, fa up, so, la, and ti correspond to Aikin's 7-shape system. The fa up shape is typically used with upstems; the fa shape is typically used with downstems or no stems. The arrow shapes differ from triangle and inverted triangle by being centered on the stem. Slashed and back slashed notes include both the normal notehead and a slash. The triangle shape has the tip of the triangle pointing up; the inverted triangle shape has the tip of the triangle pointing down. The left triangle shape is a right triangle with the hypotenuse facing up and to the left.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	stringstream ss;
	e1.stream( ss );
	string expected = "slash";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "slash";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	stringstream ss;
	e1.stream( ss );
	string expected = "triangle";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "triangle";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	stringstream ss;
	e1.stream( ss );
	string expected = "ti";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "ti";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	stringstream ss;
	ss << e1;
	string expected = "slash";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "slash";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	stringstream ss;
	ss << e1;
	string expected = "triangle";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "triangle";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	stringstream ss;
	ss << e1;
	string expected = "ti";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "ti";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_25equals0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_25equals1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_25equals25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_25equals0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_25equals1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_25equals25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_25islessthanoreq0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_25islessthanoreq1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_25islessthanoreq25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_25isgreaterthanoreq0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_25isgreaterthanoreq1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_25isgreaterthanoreq25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_25islessthan0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_25islessthan1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_25islessthan25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_25isgreaterthan0 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_25isgreaterthan1 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_25isgreaterthan25 , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	for( int i = 0; i < 25; ++i )
	{
		e2 = ++e1;
	}
	string expected = "ti";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ti";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	for( int i = 0; i < 25; ++i )
	{
		e2 = ++e1;
	}
	string expected = "slash";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "slash";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start25_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	for( int i = 0; i < 25; ++i )
	{
		e2 = ++e1;
	}
	string expected = "la";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "la";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	for( int i = 0; i < 26; ++i )
	{
		e2 = ++e1;
	}
	string expected = "slash";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "slash";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	for( int i = 0; i < 26; ++i )
	{
		e2 = ++e1;
	}
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start25_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	for( int i = 0; i < 26; ++i )
	{
		e2 = ++e1;
	}
	string expected = "ti";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ti";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	for( int i = 0; i < 25; ++i )
	{
		e2 = --e1;
	}
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	for( int i = 0; i < 25; ++i )
	{
		e2 = --e1;
	}
	string expected = "diamond";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diamond";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start25_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	for( int i = 0; i < 25; ++i )
	{
		e2 = --e1;
	}
	string expected = "slash";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "slash";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	for( int i = 0; i < 26; ++i )
	{
		e2 = --e1;
	}
	string expected = "slash";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "slash";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	for( int i = 0; i < 26; ++i )
	{
		e2 = --e1;
	}
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start25_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	for( int i = 0; i < 26; ++i )
	{
		e2 = --e1;
	}
	string expected = "ti";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ti";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	for( int i = 0; i < 25; ++i )
	{
		e2 = e1++;
	}
	string expected = "ti";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "la";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	for( int i = 0; i < 25; ++i )
	{
		e2 = e1++;
	}
	string expected = "slash";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ti";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start25_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	for( int i = 0; i < 25; ++i )
	{
		e2 = e1++;
	}
	string expected = "la";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "so";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	for( int i = 0; i < 26; ++i )
	{
		e2 = e1++;
	}
	string expected = "slash";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ti";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	for( int i = 0; i < 26; ++i )
	{
		e2 = e1++;
	}
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "slash";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start25_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	for( int i = 0; i < 26; ++i )
	{
		e2 = e1++;
	}
	string expected = "ti";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "la";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	for( int i = 0; i < 25; ++i )
	{
		e2 = e1--;
	}
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diamond";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	for( int i = 0; i < 25; ++i )
	{
		e2 = e1--;
	}
	string expected = "diamond";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start25_25times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	for( int i = 0; i < 25; ++i )
	{
		e2 = e1--;
	}
	string expected = "slash";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::slash );
	MxEnumNoteheadValue e2( enums::NoteheadValue::slash );
	for( int i = 0; i < 26; ++i )
	{
		e2 = e1--;
	}
	string expected = "slash";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::triangle );
	MxEnumNoteheadValue e2( enums::NoteheadValue::triangle );
	for( int i = 0; i < 26; ++i )
	{
		e2 = e1--;
	}
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diamond";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start25_26times , MxEnumNoteheadValue )
{
	MxEnumNoteheadValue e1( enums::NoteheadValue::ti );
	MxEnumNoteheadValue e2( enums::NoteheadValue::ti );
	for( int i = 0; i < 26; ++i )
	{
		e2 = e1--;
	}
	string expected = "ti";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "slash";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

