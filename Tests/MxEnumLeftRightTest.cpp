#include "TestHarness.h"
#include "MxEnumLeftRight.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumLeftRight )
{
	MxEnumLeftRight e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( e1 );
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
TEST( copyCtor1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( e1 );
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
TEST( assignmentOp0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::left );
	e1 = e2;
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLeftRight e3( enums::LeftRight::right );
	e2 = e3;
	expected = "right";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::right );
	e1 = e2;
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLeftRight e3( enums::LeftRight::left );
	e2 = e3;
	expected = "left";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "right";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "right";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	CHECK( e1.getValue() == enums::LeftRight::left )
}
TEST( getValue1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	CHECK( e1.getValue() == enums::LeftRight::right )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	e1.setValue( enums::LeftRight::left );
	CHECK( e1.getValue() == enums::LeftRight::left )
}
TEST( setValue1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	e1.setValue( enums::LeftRight::right );
	CHECK( e1.getValue() == enums::LeftRight::right )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::LeftRight::right )
}
TEST( setValueInt0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::LeftRight::right )
}
TEST( setValueInt1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::LeftRight::left )
}
TEST( setValueInt2 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::LeftRight::left )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::LeftRight::right )
}
TEST( fromString0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	CHECK( e1.fromString( "right" ) )
	CHECK( e1.getValue() == enums::LeftRight::right )
}
TEST( fromString1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	CHECK( e1.fromString( "left" ) )
	CHECK( e1.getValue() == enums::LeftRight::left )
}
TEST( fromString2 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::LeftRight::left )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	string expected = "left-right";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	string expected = "left-right";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	string expected = "MxEnumLeftRight";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	string expected = "MxEnumLeftRight";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	string expected = "The left-right type is used to indicate whether one element appears to the left or the right of another element.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	string expected = "The left-right type is used to indicate whether one element appears to the left or the right of another element.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
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
TEST( stream1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	stringstream ss;
	e1.stream( ss );
	string expected = "right";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "right";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
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
TEST( streamingOperator1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	stringstream ss;
	ss << e1;
	string expected = "right";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "right";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::left );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	for( int i = 0; i < 1; ++i )
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
TEST( incrementPre_start0_2times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPre_start1_2times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	for( int i = 0; i < 1; ++i )
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
TEST( decrementPre_start1_1times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	for( int i = 0; i < 1; ++i )
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
TEST( decrementPre_start0_2times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPre_start1_2times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPost_start0_1times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::left );
	MxEnumLeftRight e2( enums::LeftRight::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumLeftRight )
{
	MxEnumLeftRight e1( enums::LeftRight::right );
	MxEnumLeftRight e2( enums::LeftRight::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

