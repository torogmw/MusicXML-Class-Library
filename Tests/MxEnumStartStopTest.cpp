#include "TestHarness.h"
#include "MxEnumStartStop.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStartStop )
{
	MxEnumStartStop e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( e1 );
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
TEST( copyCtor1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( e1 );
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
TEST( assignmentOp0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::start );
	e1 = e2;
	string expected = "start";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStop e3( enums::StartStop::stop );
	e2 = e3;
	expected = "stop";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "start";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "start";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::stop );
	e1 = e2;
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStop e3( enums::StartStop::start );
	e2 = e3;
	expected = "start";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	CHECK( e1.getValue() == enums::StartStop::start )
}
TEST( getValue1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	CHECK( e1.getValue() == enums::StartStop::stop )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	string expected = "start";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	e1.setValue( enums::StartStop::start );
	CHECK( e1.getValue() == enums::StartStop::start )
}
TEST( setValue1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	e1.setValue( enums::StartStop::stop );
	CHECK( e1.getValue() == enums::StartStop::stop )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StartStop::stop )
}
TEST( setValueInt0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StartStop::stop )
}
TEST( setValueInt1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StartStop::start )
}
TEST( setValueInt2 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StartStop::start )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StartStop::stop )
}
TEST( fromString0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	CHECK( e1.fromString( "stop" ) )
	CHECK( e1.getValue() == enums::StartStop::stop )
}
TEST( fromString1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	CHECK( e1.fromString( "start" ) )
	CHECK( e1.getValue() == enums::StartStop::start )
}
TEST( fromString2 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::StartStop::start )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	string expected = "start-stop";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	string expected = "start-stop";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	string expected = "MxEnumStartStop";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	string expected = "MxEnumStartStop";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	string expected = "The start-stop type is used for an attribute of musical elements that can either start or stop, such as tuplets. The values of start and stop refer to how an element appears in musical score order, not in MusicXML document order. An element with a stop attribute may precede the corresponding element with a start attribute within a MusicXML document. This is particularly common in multi-staff music. For example, the stopping point for a tuplet may appear in staff 1 before the starting point for the tuplet appears in staff 2 later in the document.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	string expected = "The start-stop type is used for an attribute of musical elements that can either start or stop, such as tuplets. The values of start and stop refer to how an element appears in musical score order, not in MusicXML document order. An element with a stop attribute may precede the corresponding element with a start attribute within a MusicXML document. This is particularly common in multi-staff music. For example, the stopping point for a tuplet may appear in staff 1 before the starting point for the tuplet appears in staff 2 later in the document.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	stringstream ss;
	e1.stream( ss );
	string expected = "start";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "start";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	stringstream ss;
	e1.stream( ss );
	string expected = "stop";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "stop";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	stringstream ss;
	ss << e1;
	string expected = "start";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "start";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	stringstream ss;
	ss << e1;
	string expected = "stop";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "stop";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::start );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::start );
	MxEnumStartStop e2( enums::StartStop::start );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumStartStop )
{
	MxEnumStartStop e1( enums::StartStop::stop );
	MxEnumStartStop e2( enums::StartStop::stop );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

