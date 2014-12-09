#include "TestHarness.h"
#include "MxEnumBreathMarkValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( e1 );
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
TEST( copyCtor1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( e1 );
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
TEST( copyCtor2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( e1 );
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
TEST( assignmentOp0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	e1 = e2;
	string expected = "";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBreathMarkValue e3( enums::BreathMarkValue::comma );
	e2 = e3;
	expected = "comma";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	e1 = e2;
	string expected = "comma";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBreathMarkValue e3( enums::BreathMarkValue::tick );
	e2 = e3;
	expected = "tick";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "comma";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "comma";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	e1 = e2;
	string expected = "tick";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBreathMarkValue e3( enums::BreathMarkValue::empty );
	e2 = e3;
	expected = "";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tick";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tick";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	CHECK( e1.getValue() == enums::BreathMarkValue::empty )
}
TEST( getValue1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	CHECK( e1.getValue() == enums::BreathMarkValue::comma )
}
TEST( getValue2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	CHECK( e1.getValue() == enums::BreathMarkValue::tick )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	string expected = "comma";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	string expected = "tick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	string expected = "";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	string expected = "comma";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	string expected = "tick";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	e1.setValue( enums::BreathMarkValue::empty );
	CHECK( e1.getValue() == enums::BreathMarkValue::empty )
}
TEST( setValue1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	e1.setValue( enums::BreathMarkValue::comma );
	CHECK( e1.getValue() == enums::BreathMarkValue::comma )
}
TEST( setValue2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	e1.setValue( enums::BreathMarkValue::tick );
	CHECK( e1.getValue() == enums::BreathMarkValue::tick )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::BreathMarkValue::comma )
}
TEST( setValueInt0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::BreathMarkValue::comma )
}
TEST( setValueInt1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::BreathMarkValue::tick )
}
TEST( setValueInt2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::BreathMarkValue::empty )
}
TEST( setValueInt3 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::BreathMarkValue::tick )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::BreathMarkValue::comma )
}
TEST( fromString0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	CHECK( e1.fromString( "comma" ) )
	CHECK( e1.getValue() == enums::BreathMarkValue::comma )
}
TEST( fromString1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	CHECK( e1.fromString( "tick" ) )
	CHECK( e1.getValue() == enums::BreathMarkValue::tick )
}
TEST( fromString2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	CHECK( e1.fromString( "" ) )
	CHECK( e1.getValue() == enums::BreathMarkValue::empty )
}
TEST( fromString3 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::BreathMarkValue::tick )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	string expected = "breath-mark-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	string expected = "breath-mark-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	string expected = "breath-mark-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	string expected = "MxEnumBreathMarkValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	string expected = "MxEnumBreathMarkValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	string expected = "MxEnumBreathMarkValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	string expected = "The breath-mark-value type represents the symbol used for a breath mark.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	string expected = "The breath-mark-value type represents the symbol used for a breath mark.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	string expected = "The breath-mark-value type represents the symbol used for a breath mark.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	stringstream ss;
	e1.stream( ss );
	string expected = "";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	stringstream ss;
	e1.stream( ss );
	string expected = "comma";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "comma";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	stringstream ss;
	e1.stream( ss );
	string expected = "tick";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "tick";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	stringstream ss;
	ss << e1;
	string expected = "";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	stringstream ss;
	ss << e1;
	string expected = "comma";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "comma";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	stringstream ss;
	ss << e1;
	string expected = "tick";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "tick";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "tick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tick";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "comma";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "comma";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "comma";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "comma";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "tick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tick";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "comma";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "comma";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "tick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tick";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "comma";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "comma";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "tick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tick";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "tick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "comma";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tick";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "comma";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tick";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "comma";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "tick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "comma";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "comma";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tick";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "tick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "comma";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::empty );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::empty );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "comma";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::comma );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::comma );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "comma";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tick";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumBreathMarkValue )
{
	MxEnumBreathMarkValue e1( enums::BreathMarkValue::tick );
	MxEnumBreathMarkValue e2( enums::BreathMarkValue::tick );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "tick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

