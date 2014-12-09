#include "TestHarness.h"
#include "MxEnumCancelLocation.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( e1 );
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
TEST( copyCtor1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( e1 );
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
TEST( copyCtor2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( e1 );
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
TEST( assignmentOp0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	e1 = e2;
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCancelLocation e3( enums::CancelLocation::right );
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
TEST( assignmentOp1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	e1 = e2;
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCancelLocation e3( enums::CancelLocation::beforeBarline );
	e2 = e3;
	expected = "before-barline";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "right";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "right";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	e1 = e2;
	string expected = "before-barline";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumCancelLocation e3( enums::CancelLocation::left );
	e2 = e3;
	expected = "left";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "before-barline";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "before-barline";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	CHECK( e1.getValue() == enums::CancelLocation::left )
}
TEST( getValue1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	CHECK( e1.getValue() == enums::CancelLocation::right )
}
TEST( getValue2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	CHECK( e1.getValue() == enums::CancelLocation::beforeBarline )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	string expected = "beforeBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	string expected = "before-barline";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	e1.setValue( enums::CancelLocation::left );
	CHECK( e1.getValue() == enums::CancelLocation::left )
}
TEST( setValue1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	e1.setValue( enums::CancelLocation::right );
	CHECK( e1.getValue() == enums::CancelLocation::right )
}
TEST( setValue2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	e1.setValue( enums::CancelLocation::beforeBarline );
	CHECK( e1.getValue() == enums::CancelLocation::beforeBarline )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::CancelLocation::right )
}
TEST( setValueInt0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::CancelLocation::right )
}
TEST( setValueInt1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::CancelLocation::beforeBarline )
}
TEST( setValueInt2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::CancelLocation::left )
}
TEST( setValueInt3 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::CancelLocation::beforeBarline )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::CancelLocation::right )
}
TEST( fromString0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	CHECK( e1.fromString( "right" ) )
	CHECK( e1.getValue() == enums::CancelLocation::right )
}
TEST( fromString1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	CHECK( e1.fromString( "before-barline" ) )
	CHECK( e1.getValue() == enums::CancelLocation::beforeBarline )
}
TEST( fromString2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	CHECK( e1.fromString( "left" ) )
	CHECK( e1.getValue() == enums::CancelLocation::left )
}
TEST( fromString3 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::CancelLocation::beforeBarline )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	string expected = "cancel-location";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	string expected = "cancel-location";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	string expected = "cancel-location";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	string expected = "MxEnumCancelLocation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	string expected = "MxEnumCancelLocation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	string expected = "MxEnumCancelLocation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	string expected = "The cancel-location type is used to indicate where a key signature cancellation appears relative to a new key signature: to the left, to the right, or before the barline and to the left. It is left by default. For mid-measure key elements, a cancel-location of before-barline should be treated like a cancel-location of left.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	string expected = "The cancel-location type is used to indicate where a key signature cancellation appears relative to a new key signature: to the left, to the right, or before the barline and to the left. It is left by default. For mid-measure key elements, a cancel-location of before-barline should be treated like a cancel-location of left.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	string expected = "The cancel-location type is used to indicate where a key signature cancellation appears relative to a new key signature: to the left, to the right, or before the barline and to the left. It is left by default. For mid-measure key elements, a cancel-location of before-barline should be treated like a cancel-location of left.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
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
TEST( stream1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
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
TEST( stream2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	stringstream ss;
	e1.stream( ss );
	string expected = "before-barline";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "before-barline";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
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
TEST( streamingOperator1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
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
TEST( streamingOperator2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	stringstream ss;
	ss << e1;
	string expected = "before-barline";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "before-barline";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "beforeBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beforeBarline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
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
TEST( incrementPre_start2_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
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
TEST( incrementPre_start0_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPre_start1_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPre_start2_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "beforeBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beforeBarline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
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
TEST( decrementPre_start1_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "beforeBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beforeBarline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
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
TEST( decrementPre_start0_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPre_start1_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPre_start2_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "beforeBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beforeBarline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "beforeBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beforeBarline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
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
TEST( incrementPost_start0_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beforeBarline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPost_start2_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "beforeBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beforeBarline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "beforeBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
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
TEST( decrementPost_start0_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::left );
	MxEnumCancelLocation e2( enums::CancelLocation::left );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPost_start1_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::right );
	MxEnumCancelLocation e2( enums::CancelLocation::right );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beforeBarline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumCancelLocation )
{
	MxEnumCancelLocation e1( enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation e2( enums::CancelLocation::beforeBarline );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "beforeBarline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

