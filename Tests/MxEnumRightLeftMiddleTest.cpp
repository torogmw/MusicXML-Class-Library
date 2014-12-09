#include "TestHarness.h"
#include "MxEnumRightLeftMiddle.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( e1 );
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
TEST( copyCtor1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( e1 );
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
TEST( copyCtor2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( e1 );
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
TEST( assignmentOp0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	e1 = e2;
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumRightLeftMiddle e3( enums::RightLeftMiddle::left );
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
TEST( assignmentOp1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	e1 = e2;
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumRightLeftMiddle e3( enums::RightLeftMiddle::middle );
	e2 = e3;
	expected = "middle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	e1 = e2;
	string expected = "middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumRightLeftMiddle e3( enums::RightLeftMiddle::right );
	e2 = e3;
	expected = "right";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "middle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "middle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	CHECK( e1.getValue() == enums::RightLeftMiddle::right )
}
TEST( getValue1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	CHECK( e1.getValue() == enums::RightLeftMiddle::left )
}
TEST( getValue2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	CHECK( e1.getValue() == enums::RightLeftMiddle::middle )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	string expected = "middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	e1.setValue( enums::RightLeftMiddle::right );
	CHECK( e1.getValue() == enums::RightLeftMiddle::right )
}
TEST( setValue1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	e1.setValue( enums::RightLeftMiddle::left );
	CHECK( e1.getValue() == enums::RightLeftMiddle::left )
}
TEST( setValue2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	e1.setValue( enums::RightLeftMiddle::middle );
	CHECK( e1.getValue() == enums::RightLeftMiddle::middle )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::RightLeftMiddle::left )
}
TEST( setValueInt0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::RightLeftMiddle::left )
}
TEST( setValueInt1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::RightLeftMiddle::middle )
}
TEST( setValueInt2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::RightLeftMiddle::right )
}
TEST( setValueInt3 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::RightLeftMiddle::middle )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::RightLeftMiddle::left )
}
TEST( fromString0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	CHECK( e1.fromString( "left" ) )
	CHECK( e1.getValue() == enums::RightLeftMiddle::left )
}
TEST( fromString1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	CHECK( e1.fromString( "middle" ) )
	CHECK( e1.getValue() == enums::RightLeftMiddle::middle )
}
TEST( fromString2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	CHECK( e1.fromString( "right" ) )
	CHECK( e1.getValue() == enums::RightLeftMiddle::right )
}
TEST( fromString3 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::RightLeftMiddle::middle )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	string expected = "right-left-middle";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	string expected = "right-left-middle";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	string expected = "right-left-middle";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	string expected = "MxEnumRightLeftMiddle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	string expected = "MxEnumRightLeftMiddle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	string expected = "MxEnumRightLeftMiddle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	string expected = "The right-left-middle type is used to specify barline location.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	string expected = "The right-left-middle type is used to specify barline location.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	string expected = "The right-left-middle type is used to specify barline location.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
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
TEST( stream1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
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
TEST( stream2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	stringstream ss;
	e1.stream( ss );
	string expected = "middle";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "middle";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
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
TEST( streamingOperator1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
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
TEST( streamingOperator2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	stringstream ss;
	ss << e1;
	string expected = "middle";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "middle";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
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
TEST( incrementPre_start2_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
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
TEST( incrementPre_start0_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
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
TEST( incrementPre_start1_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
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
TEST( incrementPre_start2_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
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
TEST( decrementPre_start1_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
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
TEST( decrementPre_start0_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
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
TEST( decrementPre_start1_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
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
TEST( decrementPre_start2_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
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
TEST( incrementPost_start0_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
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
TEST( incrementPost_start2_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
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
TEST( decrementPost_start0_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::right );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::right );
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
TEST( decrementPost_start1_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::left );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::left );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumRightLeftMiddle )
{
	MxEnumRightLeftMiddle e1( enums::RightLeftMiddle::middle );
	MxEnumRightLeftMiddle e2( enums::RightLeftMiddle::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

