#include "TestHarness.h"
#include "MxEnumFan.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumFan )
{
	MxEnumFan e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( e1 );
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
TEST( copyCtor1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( e1 );
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
TEST( copyCtor2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( e1 );
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
TEST( assignmentOp0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::accel );
	e1 = e2;
	string expected = "accel";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFan e3( enums::Fan::rit );
	e2 = e3;
	expected = "rit";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "accel";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "accel";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::rit );
	e1 = e2;
	string expected = "rit";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFan e3( enums::Fan::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rit";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rit";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFan e3( enums::Fan::accel );
	e2 = e3;
	expected = "accel";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	CHECK( e1.getValue() == enums::Fan::accel )
}
TEST( getValue1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	CHECK( e1.getValue() == enums::Fan::rit )
}
TEST( getValue2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	CHECK( e1.getValue() == enums::Fan::none )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	string expected = "accel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	string expected = "rit";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	string expected = "accel";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	string expected = "rit";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	e1.setValue( enums::Fan::accel );
	CHECK( e1.getValue() == enums::Fan::accel )
}
TEST( setValue1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	e1.setValue( enums::Fan::rit );
	CHECK( e1.getValue() == enums::Fan::rit )
}
TEST( setValue2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	e1.setValue( enums::Fan::none );
	CHECK( e1.getValue() == enums::Fan::none )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Fan::rit )
}
TEST( setValueInt0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Fan::rit )
}
TEST( setValueInt1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Fan::none )
}
TEST( setValueInt2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Fan::accel )
}
TEST( setValueInt3 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Fan::none )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Fan::rit )
}
TEST( fromString0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	CHECK( e1.fromString( "rit" ) )
	CHECK( e1.getValue() == enums::Fan::rit )
}
TEST( fromString1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::Fan::none )
}
TEST( fromString2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	CHECK( e1.fromString( "accel" ) )
	CHECK( e1.getValue() == enums::Fan::accel )
}
TEST( fromString3 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::Fan::none )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	string expected = "fan";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	string expected = "fan";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	string expected = "fan";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	string expected = "MxEnumFan";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	string expected = "MxEnumFan";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	string expected = "MxEnumFan";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	string expected = "The fan type represents the type of beam fanning present on a note, used to represent accelerandos and ritardandos.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	string expected = "The fan type represents the type of beam fanning present on a note, used to represent accelerandos and ritardandos.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	string expected = "The fan type represents the type of beam fanning present on a note, used to represent accelerandos and ritardandos.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	stringstream ss;
	e1.stream( ss );
	string expected = "accel";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "accel";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	stringstream ss;
	e1.stream( ss );
	string expected = "rit";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "rit";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	stringstream ss;
	e1.stream( ss );
	string expected = "none";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "none";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	stringstream ss;
	ss << e1;
	string expected = "accel";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "accel";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	stringstream ss;
	ss << e1;
	string expected = "rit";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "rit";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	stringstream ss;
	ss << e1;
	string expected = "none";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "none";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::accel );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::rit );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "accel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "accel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "rit";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rit";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "accel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "accel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "rit";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rit";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "rit";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rit";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "accel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "accel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "accel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "accel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "rit";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rit";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rit";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "accel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "rit";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "accel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "accel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "rit";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "accel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rit";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "rit";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "accel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "accel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rit";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::accel );
	MxEnumFan e2( enums::Fan::accel );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "accel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rit";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::rit );
	MxEnumFan e2( enums::Fan::rit );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "rit";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumFan )
{
	MxEnumFan e1( enums::Fan::none );
	MxEnumFan e2( enums::Fan::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "accel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

