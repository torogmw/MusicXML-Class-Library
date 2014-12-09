#include "TestHarness.h"
#include "MxEnumLeftCenterRight.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( e1 );
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
TEST( copyCtor1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( e1 );
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
TEST( copyCtor2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( e1 );
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
TEST( assignmentOp0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	e1 = e2;
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLeftCenterRight e3( enums::LeftCenterRight::center );
	e2 = e3;
	expected = "center";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	e1 = e2;
	string expected = "center";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLeftCenterRight e3( enums::LeftCenterRight::right );
	e2 = e3;
	expected = "right";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "center";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "center";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	e1 = e2;
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLeftCenterRight e3( enums::LeftCenterRight::left );
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
TEST( getValue0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	CHECK( e1.getValue() == enums::LeftCenterRight::left )
}
TEST( getValue1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	CHECK( e1.getValue() == enums::LeftCenterRight::center )
}
TEST( getValue2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	CHECK( e1.getValue() == enums::LeftCenterRight::right )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	string expected = "center";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	e1.setValue( enums::LeftCenterRight::left );
	CHECK( e1.getValue() == enums::LeftCenterRight::left )
}
TEST( setValue1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	e1.setValue( enums::LeftCenterRight::center );
	CHECK( e1.getValue() == enums::LeftCenterRight::center )
}
TEST( setValue2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	e1.setValue( enums::LeftCenterRight::right );
	CHECK( e1.getValue() == enums::LeftCenterRight::right )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::LeftCenterRight::center )
}
TEST( setValueInt0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::LeftCenterRight::center )
}
TEST( setValueInt1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::LeftCenterRight::right )
}
TEST( setValueInt2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::LeftCenterRight::left )
}
TEST( setValueInt3 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::LeftCenterRight::right )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::LeftCenterRight::center )
}
TEST( fromString0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	CHECK( e1.fromString( "center" ) )
	CHECK( e1.getValue() == enums::LeftCenterRight::center )
}
TEST( fromString1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	CHECK( e1.fromString( "right" ) )
	CHECK( e1.getValue() == enums::LeftCenterRight::right )
}
TEST( fromString2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	CHECK( e1.fromString( "left" ) )
	CHECK( e1.getValue() == enums::LeftCenterRight::left )
}
TEST( fromString3 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::LeftCenterRight::right )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	string expected = "left-center-right";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	string expected = "left-center-right";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	string expected = "left-center-right";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	string expected = "MxEnumLeftCenterRight";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	string expected = "MxEnumLeftCenterRight";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	string expected = "MxEnumLeftCenterRight";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	string expected = "The left-center-right type is used to define horizontal alignment and text justification.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	string expected = "The left-center-right type is used to define horizontal alignment and text justification.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	string expected = "The left-center-right type is used to define horizontal alignment and text justification.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
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
TEST( stream1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	stringstream ss;
	e1.stream( ss );
	string expected = "center";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "center";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
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
TEST( streamingOperator0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
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
TEST( streamingOperator1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	stringstream ss;
	ss << e1;
	string expected = "center";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "center";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
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
TEST( equalsEquals_true_0equals0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
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
TEST( incrementPre_start1_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
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
TEST( incrementPre_start2_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
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
TEST( incrementPre_start1_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
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
TEST( decrementPre_start0_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
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
TEST( decrementPre_start2_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
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
TEST( decrementPre_start0_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
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
TEST( decrementPre_start1_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
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
TEST( incrementPost_start0_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
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
TEST( incrementPost_start2_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPost_start1_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
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
TEST( decrementPost_start2_2times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::left );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::left );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::center );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::center );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumLeftCenterRight )
{
	MxEnumLeftCenterRight e1( enums::LeftCenterRight::right );
	MxEnumLeftCenterRight e2( enums::LeftCenterRight::right );
	for( int i = 0; i < 3; ++i )
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

