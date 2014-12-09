
#include "TestHarness.h"
#include "MxEnumBackwardForward.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( e1 );
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
TEST( copyCtor1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( e1 );
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
TEST( assignmentOp0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	e1 = e2;
	string expected = "backward";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBackwardForward e3( enums::BackwardForward::forward );
	e2 = e3;
	expected = "forward";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "backward";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "backward";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	e1 = e2;
	string expected = "forward";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBackwardForward e3( enums::BackwardForward::backward );
	e2 = e3;
	expected = "backward";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "forward";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "forward";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	CHECK( e1.getValue() == enums::BackwardForward::backward )
}
TEST( getValue1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	CHECK( e1.getValue() == enums::BackwardForward::forward )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	string expected = "backward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	string expected = "forward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	string expected = "backward";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	string expected = "forward";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	e1.setValue( enums::BackwardForward::backward );
	CHECK( e1.getValue() == enums::BackwardForward::backward )
}
TEST( setValue1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	e1.setValue( enums::BackwardForward::forward );
	CHECK( e1.getValue() == enums::BackwardForward::forward )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::BackwardForward::forward )
}
TEST( setValueInt0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::BackwardForward::forward )
}
TEST( setValueInt1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::BackwardForward::backward )
}
TEST( setValueInt2 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::BackwardForward::backward )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::BackwardForward::forward )
}
TEST( fromString0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	CHECK( e1.fromString( "forward" ) )
	CHECK( e1.getValue() == enums::BackwardForward::forward )
}
TEST( fromString1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	CHECK( e1.fromString( "backward" ) )
	CHECK( e1.getValue() == enums::BackwardForward::backward )
}
TEST( fromString2 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::BackwardForward::backward )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	string expected = "backward-forward";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	string expected = "backward-forward";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	string expected = "MxEnumBackwardForward";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	string expected = "MxEnumBackwardForward";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	string expected = "The backward-forward type is used to specify repeat directions. The start of the repeat has a forward direction while the end of the repeat has a backward direction.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	string expected = "The backward-forward type is used to specify repeat directions. The start of the repeat has a forward direction while the end of the repeat has a backward direction.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	stringstream ss;
	e1.stream( ss );
	string expected = "backward";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "backward";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	stringstream ss;
	e1.stream( ss );
	string expected = "forward";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "forward";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	stringstream ss;
	ss << e1;
	string expected = "backward";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "backward";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	stringstream ss;
	ss << e1;
	string expected = "forward";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "forward";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "forward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "backward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "backward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "forward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "forward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "backward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "backward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "forward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "forward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "backward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "backward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "forward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "forward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "backward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::backward );
	MxEnumBackwardForward e2( enums::BackwardForward::backward );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "backward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumBackwardForward )
{
	MxEnumBackwardForward e1( enums::BackwardForward::forward );
	MxEnumBackwardForward e2( enums::BackwardForward::forward );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "forward";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backward";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

