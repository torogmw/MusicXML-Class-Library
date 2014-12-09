#include "TestHarness.h"
#include "MxEnumNoteTypeValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n128th );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n64th );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n32nd );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n16th );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::eighth );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::quarter );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::half );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::whole );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::breve );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::long_ );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor2 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor3 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n128th );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor4 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n64th );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor5 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n32nd );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor6 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n16th );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor7 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::eighth );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor8 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::quarter );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor9 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::half );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor10 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::whole );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor11 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::breve );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor12 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::long_ );
	MxEnumNoteTypeValue e2( e1 );
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
TEST( copyCtor13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( e1 );
	int expected = 13;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 13;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	e1 = e2;
	string expected = "1024th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::n512th );
	e2 = e3;
	expected = "512th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "1024th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "1024th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	e1 = e2;
	string expected = "512th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::n256th );
	e2 = e3;
	expected = "256th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "512th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "512th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n128th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n256th );
	e1 = e2;
	string expected = "256th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::n128th );
	e2 = e3;
	expected = "128th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "256th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "256th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n64th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n128th );
	e1 = e2;
	string expected = "128th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::n64th );
	e2 = e3;
	expected = "64th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "128th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "128th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n32nd );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n64th );
	e1 = e2;
	string expected = "64th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::n32nd );
	e2 = e3;
	expected = "32nd";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "64th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "64th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n16th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n32nd );
	e1 = e2;
	string expected = "32nd";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::n16th );
	e2 = e3;
	expected = "16th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "32nd";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "32nd";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::eighth );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n16th );
	e1 = e2;
	string expected = "16th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::eighth );
	e2 = e3;
	expected = "eighth";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "16th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "16th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::quarter );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::eighth );
	e1 = e2;
	string expected = "eighth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::quarter );
	e2 = e3;
	expected = "quarter";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "eighth";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "eighth";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::half );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::quarter );
	e1 = e2;
	string expected = "quarter";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::half );
	e2 = e3;
	expected = "half";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "quarter";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "quarter";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::whole );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::half );
	e1 = e2;
	string expected = "half";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::whole );
	e2 = e3;
	expected = "whole";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::breve );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::whole );
	e1 = e2;
	string expected = "whole";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::breve );
	e2 = e3;
	expected = "breve";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "whole";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "whole";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::long_ );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::breve );
	e1 = e2;
	string expected = "breve";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::long_ );
	e2 = e3;
	expected = "long";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "breve";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "breve";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::long_ );
	e1 = e2;
	string expected = "long";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::maxima );
	e2 = e3;
	expected = "maxima";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "long";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "long";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	e1 = e2;
	string expected = "maxima";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteTypeValue e3( enums::NoteTypeValue::n1024th );
	e2 = e3;
	expected = "1024th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "maxima";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "maxima";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	CHECK( e1.getValue() == enums::NoteTypeValue::n1024th )
}
TEST( getValue1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	CHECK( e1.getValue() == enums::NoteTypeValue::n512th )
}
TEST( getValue2 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	CHECK( e1.getValue() == enums::NoteTypeValue::n256th )
}
TEST( getValue12 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::long_ );
	CHECK( e1.getValue() == enums::NoteTypeValue::long_ )
}
TEST( getValue13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	CHECK( e1.getValue() == enums::NoteTypeValue::maxima )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n128th );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n64th );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n32nd );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n16th );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::eighth );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::quarter );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::half );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::whole );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::breve );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::long_ );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	string expected = "n1024th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	string expected = "n512th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	string expected = "n256th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n128th );
	string expected = "n128th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n64th );
	string expected = "n64th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n32nd );
	string expected = "n32nd";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n16th );
	string expected = "n16th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::eighth );
	string expected = "eighth";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::quarter );
	string expected = "quarter";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::half );
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::whole );
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::breve );
	string expected = "breve";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::long_ );
	string expected = "long_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	string expected = "maxima";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	string expected = "1024th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	string expected = "512th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	string expected = "256th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n128th );
	string expected = "128th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n64th );
	string expected = "64th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n32nd );
	string expected = "32nd";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n16th );
	string expected = "16th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::eighth );
	string expected = "eighth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::quarter );
	string expected = "quarter";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::half );
	string expected = "half";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::whole );
	string expected = "whole";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::breve );
	string expected = "breve";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::long_ );
	string expected = "long";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	string expected = "maxima";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	e1.setValue( enums::NoteTypeValue::n1024th );
	CHECK( e1.getValue() == enums::NoteTypeValue::n1024th )
}
TEST( setValue1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	e1.setValue( enums::NoteTypeValue::n512th );
	CHECK( e1.getValue() == enums::NoteTypeValue::n512th )
}
TEST( setValue2 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n128th );
	e1.setValue( enums::NoteTypeValue::n256th );
	CHECK( e1.getValue() == enums::NoteTypeValue::n256th )
}
TEST( setValue12 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	e1.setValue( enums::NoteTypeValue::long_ );
	CHECK( e1.getValue() == enums::NoteTypeValue::long_ )
}
TEST( setValue13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	e1.setValue( enums::NoteTypeValue::maxima );
	CHECK( e1.getValue() == enums::NoteTypeValue::maxima )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n512th )
}
TEST( setValueInt0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n512th )
}
TEST( setValueInt1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n128th );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n256th )
}
TEST( setValueInt2 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n64th );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n128th )
}
TEST( setValueInt12 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	CHECK( e1.setValueInt( 13 ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::maxima )
}
TEST( setValueInt13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n1024th )
}
TEST( setValueInt14 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	CHECK( ! e1.setValueInt( 14 ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n256th )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n512th )
}
TEST( fromString0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	CHECK( e1.fromString( "512th" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n512th )
}
TEST( fromString1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n128th );
	CHECK( e1.fromString( "256th" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n256th )
}
TEST( fromString2 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n64th );
	CHECK( e1.fromString( "128th" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n128th )
}
TEST( fromString3 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n32nd );
	CHECK( e1.fromString( "64th" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n64th )
}
TEST( fromString4 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n16th );
	CHECK( e1.fromString( "32nd" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n32nd )
}
TEST( fromString5 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::eighth );
	CHECK( e1.fromString( "16th" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n16th )
}
TEST( fromString6 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::quarter );
	CHECK( e1.fromString( "eighth" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::eighth )
}
TEST( fromString7 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::half );
	CHECK( e1.fromString( "quarter" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::quarter )
}
TEST( fromString8 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::whole );
	CHECK( e1.fromString( "half" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::half )
}
TEST( fromString9 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::breve );
	CHECK( e1.fromString( "whole" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::whole )
}
TEST( fromString10 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::long_ );
	CHECK( e1.fromString( "breve" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::breve )
}
TEST( fromString11 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	CHECK( e1.fromString( "long" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::long_ )
}
TEST( fromString12 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	CHECK( e1.fromString( "maxima" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::maxima )
}
TEST( fromString13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	CHECK( e1.fromString( "1024th" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n1024th )
}
TEST( fromString14 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n256th );
	CHECK( ! e1.fromString( "crazyErrantValue14" ) )
	CHECK( e1.getValue() == enums::NoteTypeValue::n256th )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	int expected = 14;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	int expected = 14;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	int expected = 14;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	string expected = "note-type-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	string expected = "note-type-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	string expected = "note-type-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	string expected = "MxEnumNoteTypeValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	string expected = "MxEnumNoteTypeValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	string expected = "MxEnumNoteTypeValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	string expected = "The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	string expected = "The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	string expected = "The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	stringstream ss;
	e1.stream( ss );
	string expected = "1024th";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "1024th";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	stringstream ss;
	e1.stream( ss );
	string expected = "512th";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "512th";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	stringstream ss;
	e1.stream( ss );
	string expected = "maxima";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "maxima";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	stringstream ss;
	ss << e1;
	string expected = "1024th";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "1024th";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	stringstream ss;
	ss << e1;
	string expected = "512th";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "512th";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	stringstream ss;
	ss << e1;
	string expected = "maxima";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "maxima";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_13equals0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_13equals1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_13equals13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_13equals0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_13equals1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_13equals13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_13islessthanoreq0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_13islessthanoreq1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_13islessthanoreq13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthanoreq0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthanoreq1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthanoreq13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_13islessthan0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_13islessthan1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_13islessthan13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthan0 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthan1 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_13isgreaterthan13 , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "maxima";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "maxima";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "n1024th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n1024th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start13_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "long_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "long_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "n1024th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n1024th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "n512th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n512th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start13_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "maxima";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "maxima";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "n512th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n512th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "n256th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n256th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start13_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "n1024th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n1024th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "n1024th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n1024th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "n512th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n512th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start13_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "maxima";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "maxima";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "maxima";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "long_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "n1024th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "maxima";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start13_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "long_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "breve";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "n1024th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "maxima";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "n512th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n1024th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start13_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "maxima";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "long_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "n512th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n256th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "n256th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n128th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start13_13times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "n1024th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n512th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n1024th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n1024th );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "n1024th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n512th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::n512th );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::n512th );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "n512th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n256th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start13_14times , MxEnumNoteTypeValue )
{
	MxEnumNoteTypeValue e1( enums::NoteTypeValue::maxima );
	MxEnumNoteTypeValue e2( enums::NoteTypeValue::maxima );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "maxima";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "n1024th";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

