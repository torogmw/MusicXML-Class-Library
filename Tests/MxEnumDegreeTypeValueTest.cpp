#include "TestHarness.h"
#include "MxEnumDegreeTypeValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( e1 );
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
TEST( copyCtor1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( e1 );
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
TEST( copyCtor2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( e1 );
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
TEST( assignmentOp0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	e1 = e2;
	string expected = "add";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDegreeTypeValue e3( enums::DegreeTypeValue::alter );
	e2 = e3;
	expected = "alter";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "add";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "add";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	e1 = e2;
	string expected = "alter";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDegreeTypeValue e3( enums::DegreeTypeValue::subtract );
	e2 = e3;
	expected = "subtract";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "alter";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "alter";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	e1 = e2;
	string expected = "subtract";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDegreeTypeValue e3( enums::DegreeTypeValue::add );
	e2 = e3;
	expected = "add";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "subtract";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "subtract";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	CHECK( e1.getValue() == enums::DegreeTypeValue::add )
}
TEST( getValue1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	CHECK( e1.getValue() == enums::DegreeTypeValue::alter )
}
TEST( getValue2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	CHECK( e1.getValue() == enums::DegreeTypeValue::subtract )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	string expected = "add";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	string expected = "alter";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	string expected = "subtract";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	string expected = "add";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	string expected = "alter";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	string expected = "subtract";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	e1.setValue( enums::DegreeTypeValue::add );
	CHECK( e1.getValue() == enums::DegreeTypeValue::add )
}
TEST( setValue1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	e1.setValue( enums::DegreeTypeValue::alter );
	CHECK( e1.getValue() == enums::DegreeTypeValue::alter )
}
TEST( setValue2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	e1.setValue( enums::DegreeTypeValue::subtract );
	CHECK( e1.getValue() == enums::DegreeTypeValue::subtract )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::DegreeTypeValue::alter )
}
TEST( setValueInt0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::DegreeTypeValue::alter )
}
TEST( setValueInt1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::DegreeTypeValue::subtract )
}
TEST( setValueInt2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::DegreeTypeValue::add )
}
TEST( setValueInt3 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::DegreeTypeValue::subtract )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::DegreeTypeValue::alter )
}
TEST( fromString0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	CHECK( e1.fromString( "alter" ) )
	CHECK( e1.getValue() == enums::DegreeTypeValue::alter )
}
TEST( fromString1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	CHECK( e1.fromString( "subtract" ) )
	CHECK( e1.getValue() == enums::DegreeTypeValue::subtract )
}
TEST( fromString2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	CHECK( e1.fromString( "add" ) )
	CHECK( e1.getValue() == enums::DegreeTypeValue::add )
}
TEST( fromString3 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::DegreeTypeValue::subtract )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	string expected = "degree-type-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	string expected = "degree-type-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	string expected = "degree-type-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	string expected = "MxEnumDegreeTypeValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	string expected = "MxEnumDegreeTypeValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	string expected = "MxEnumDegreeTypeValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	string expected = "The degree-type-value type indicates whether the current degree element is an addition, alteration, or subtraction to the kind of the current chord in the harmony element.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	string expected = "The degree-type-value type indicates whether the current degree element is an addition, alteration, or subtraction to the kind of the current chord in the harmony element.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	string expected = "The degree-type-value type indicates whether the current degree element is an addition, alteration, or subtraction to the kind of the current chord in the harmony element.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	stringstream ss;
	e1.stream( ss );
	string expected = "add";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "add";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	stringstream ss;
	e1.stream( ss );
	string expected = "alter";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "alter";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	stringstream ss;
	e1.stream( ss );
	string expected = "subtract";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "subtract";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	stringstream ss;
	ss << e1;
	string expected = "add";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "add";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	stringstream ss;
	ss << e1;
	string expected = "alter";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "alter";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	stringstream ss;
	ss << e1;
	string expected = "subtract";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "subtract";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "subtract";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "subtract";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "add";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "add";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "alter";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alter";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "add";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "add";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "alter";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alter";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "subtract";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "subtract";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "alter";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alter";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "subtract";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "subtract";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "add";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "add";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "add";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "add";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "alter";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alter";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "subtract";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "subtract";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "subtract";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alter";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "add";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "subtract";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "alter";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "add";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "add";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "subtract";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "alter";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "add";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "subtract";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alter";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "alter";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "subtract";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "subtract";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "add";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "add";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alter";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::add );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::add );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "add";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alter";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::alter );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::alter );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "alter";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "subtract";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumDegreeTypeValue )
{
	MxEnumDegreeTypeValue e1( enums::DegreeTypeValue::subtract );
	MxEnumDegreeTypeValue e2( enums::DegreeTypeValue::subtract );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "subtract";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "add";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

