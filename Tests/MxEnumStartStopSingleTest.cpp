#include "TestHarness.h"
#include "MxEnumStartStopSingle.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( e1 );
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
TEST( copyCtor1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( e1 );
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
TEST( copyCtor2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( e1 );
	int expected = 2;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 2;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	e1 = e2;
	string expected = "start";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopSingle e3( enums::StartStopSingle::stop );
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
TEST( assignmentOp1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	e1 = e2;
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopSingle e3( enums::StartStopSingle::single );
	e2 = e3;
	expected = "single";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	e1 = e2;
	string expected = "single";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopSingle e3( enums::StartStopSingle::start );
	e2 = e3;
	expected = "start";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "single";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "single";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	CHECK( e1.getValue() == enums::StartStopSingle::start )
}
TEST( getValue1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	CHECK( e1.getValue() == enums::StartStopSingle::stop )
}
TEST( getValue2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	CHECK( e1.getValue() == enums::StartStopSingle::single )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	string expected = "start";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	string expected = "single";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	e1.setValue( enums::StartStopSingle::start );
	CHECK( e1.getValue() == enums::StartStopSingle::start )
}
TEST( setValue1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	e1.setValue( enums::StartStopSingle::stop );
	CHECK( e1.getValue() == enums::StartStopSingle::stop )
}
TEST( setValue2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	e1.setValue( enums::StartStopSingle::single );
	CHECK( e1.getValue() == enums::StartStopSingle::single )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StartStopSingle::stop )
}
TEST( setValueInt0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StartStopSingle::stop )
}
TEST( setValueInt1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StartStopSingle::single )
}
TEST( setValueInt2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StartStopSingle::start )
}
TEST( setValueInt3 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::StartStopSingle::single )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StartStopSingle::stop )
}
TEST( fromString0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	CHECK( e1.fromString( "stop" ) )
	CHECK( e1.getValue() == enums::StartStopSingle::stop )
}
TEST( fromString1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	CHECK( e1.fromString( "single" ) )
	CHECK( e1.getValue() == enums::StartStopSingle::single )
}
TEST( fromString2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	CHECK( e1.fromString( "start" ) )
	CHECK( e1.getValue() == enums::StartStopSingle::start )
}
TEST( fromString3 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::StartStopSingle::single )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	string expected = "start-stop-single";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	string expected = "start-stop-single";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	string expected = "start-stop-single";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	string expected = "MxEnumStartStopSingle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	string expected = "MxEnumStartStopSingle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	string expected = "MxEnumStartStopSingle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	string expected = "The start-stop-single type is used for an attribute of musical elements that can be used for either multi-note or single-note musical elements, as for tremolos.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	string expected = "The start-stop-single type is used for an attribute of musical elements that can be used for either multi-note or single-note musical elements, as for tremolos.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	string expected = "The start-stop-single type is used for an attribute of musical elements that can be used for either multi-note or single-note musical elements, as for tremolos.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
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
TEST( stream1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
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
TEST( stream2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	stringstream ss;
	e1.stream( ss );
	string expected = "single";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "single";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
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
TEST( streamingOperator1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
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
TEST( streamingOperator2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	stringstream ss;
	ss << e1;
	string expected = "single";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "single";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
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
TEST( incrementPre_start2_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
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
TEST( incrementPre_start0_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPre_start1_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPre_start2_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
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
TEST( decrementPre_start1_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
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
TEST( decrementPre_start0_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPre_start1_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPre_start2_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
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
TEST( incrementPost_start0_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPost_start2_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
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
TEST( decrementPost_start0_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::start );
	MxEnumStartStopSingle e2( enums::StartStopSingle::start );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPost_start1_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::stop );
	MxEnumStartStopSingle e2( enums::StartStopSingle::stop );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumStartStopSingle )
{
	MxEnumStartStopSingle e1( enums::StartStopSingle::single );
	MxEnumStartStopSingle e2( enums::StartStopSingle::single );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

