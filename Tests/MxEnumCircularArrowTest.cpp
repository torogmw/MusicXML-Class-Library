#include "TestHarness.h"
#include "MxEnumCircularArrow.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( e1 );
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
TEST( copyCtor1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( e1 );
	int expected = 1;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 1;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	e1 = e2;
	string expected = "clockwise";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCircularArrow e3( enums::CircularArrow::anticlockwise );
	e2 = e3;
	expected = "anticlockwise";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "clockwise";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "clockwise";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	e1 = e2;
	string expected = "anticlockwise";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCircularArrow e3( enums::CircularArrow::clockwise );
	e2 = e3;
	expected = "clockwise";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "anticlockwise";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "anticlockwise";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	CHECK( e1.getValue() == enums::CircularArrow::clockwise )
}
TEST( getValue1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	CHECK( e1.getValue() == enums::CircularArrow::anticlockwise )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	string expected = "clockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	string expected = "anticlockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	string expected = "clockwise";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	string expected = "anticlockwise";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	e1.setValue( enums::CircularArrow::clockwise );
	CHECK( e1.getValue() == enums::CircularArrow::clockwise )
}
TEST( setValue1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	e1.setValue( enums::CircularArrow::anticlockwise );
	CHECK( e1.getValue() == enums::CircularArrow::anticlockwise )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::CircularArrow::anticlockwise )
}
TEST( setValueInt0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::CircularArrow::anticlockwise )
}
TEST( setValueInt1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::CircularArrow::clockwise )
}
TEST( setValueInt2 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::CircularArrow::clockwise )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::CircularArrow::anticlockwise )
}
TEST( fromString0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	CHECK( e1.fromString( "anticlockwise" ) )
	CHECK( e1.getValue() == enums::CircularArrow::anticlockwise )
}
TEST( fromString1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	CHECK( e1.fromString( "clockwise" ) )
	CHECK( e1.getValue() == enums::CircularArrow::clockwise )
}
TEST( fromString2 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::CircularArrow::clockwise )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	string expected = "circular-arrow";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	string expected = "circular-arrow";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	string expected = "MxEnumCircularArrow";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	string expected = "MxEnumCircularArrow";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	string expected = "The circular-arrow type represents the direction in which a circular arrow points, using Unicode arrow terminology.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	string expected = "The circular-arrow type represents the direction in which a circular arrow points, using Unicode arrow terminology.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	stringstream ss;
	e1.stream( ss );
	string expected = "clockwise";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "clockwise";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	stringstream ss;
	e1.stream( ss );
	string expected = "anticlockwise";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "anticlockwise";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	stringstream ss;
	ss << e1;
	string expected = "clockwise";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "clockwise";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	stringstream ss;
	ss << e1;
	string expected = "anticlockwise";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "anticlockwise";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "anticlockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anticlockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "clockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "clockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "clockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "clockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "anticlockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anticlockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "anticlockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anticlockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "clockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "clockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "clockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "clockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "anticlockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anticlockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "anticlockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "clockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "clockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anticlockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "clockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anticlockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "anticlockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "clockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "anticlockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "clockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "clockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anticlockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::clockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::clockwise );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "clockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anticlockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumCircularArrow )
{
	MxEnumCircularArrow e1( enums::CircularArrow::anticlockwise );
	MxEnumCircularArrow e2( enums::CircularArrow::anticlockwise );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "anticlockwise";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "clockwise";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

