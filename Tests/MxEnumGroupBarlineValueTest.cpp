#include "TestHarness.h"
#include "MxEnumGroupBarlineValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( e1 );
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
TEST( copyCtor1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( e1 );
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
TEST( copyCtor2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( e1 );
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
TEST( assignmentOp0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	e1 = e2;
	string expected = "yes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumGroupBarlineValue e3( enums::GroupBarlineValue::no );
	e2 = e3;
	expected = "no";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "yes";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "yes";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	e1 = e2;
	string expected = "no";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumGroupBarlineValue e3( enums::GroupBarlineValue::mensurstrich );
	e2 = e3;
	expected = "Mensurstrich";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "no";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "no";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	e1 = e2;
	string expected = "Mensurstrich";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumGroupBarlineValue e3( enums::GroupBarlineValue::yes );
	e2 = e3;
	expected = "yes";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Mensurstrich";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Mensurstrich";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	CHECK( e1.getValue() == enums::GroupBarlineValue::yes )
}
TEST( getValue1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	CHECK( e1.getValue() == enums::GroupBarlineValue::no )
}
TEST( getValue2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	CHECK( e1.getValue() == enums::GroupBarlineValue::mensurstrich )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	string expected = "mensurstrich";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	string expected = "yes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	string expected = "no";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	string expected = "Mensurstrich";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	e1.setValue( enums::GroupBarlineValue::yes );
	CHECK( e1.getValue() == enums::GroupBarlineValue::yes )
}
TEST( setValue1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	e1.setValue( enums::GroupBarlineValue::no );
	CHECK( e1.getValue() == enums::GroupBarlineValue::no )
}
TEST( setValue2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	e1.setValue( enums::GroupBarlineValue::mensurstrich );
	CHECK( e1.getValue() == enums::GroupBarlineValue::mensurstrich )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::GroupBarlineValue::no )
}
TEST( setValueInt0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::GroupBarlineValue::no )
}
TEST( setValueInt1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::GroupBarlineValue::mensurstrich )
}
TEST( setValueInt2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::GroupBarlineValue::yes )
}
TEST( setValueInt3 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::GroupBarlineValue::mensurstrich )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::GroupBarlineValue::no )
}
TEST( fromString0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	CHECK( e1.fromString( "no" ) )
	CHECK( e1.getValue() == enums::GroupBarlineValue::no )
}
TEST( fromString1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	CHECK( e1.fromString( "Mensurstrich" ) )
	CHECK( e1.getValue() == enums::GroupBarlineValue::mensurstrich )
}
TEST( fromString2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	CHECK( e1.fromString( "yes" ) )
	CHECK( e1.getValue() == enums::GroupBarlineValue::yes )
}
TEST( fromString3 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::GroupBarlineValue::mensurstrich )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	string expected = "group-barline-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	string expected = "group-barline-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	string expected = "group-barline-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	string expected = "MxEnumGroupBarlineValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	string expected = "MxEnumGroupBarlineValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	string expected = "MxEnumGroupBarlineValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	string expected = "The group-barline-value type indicates if the group should have common barlines.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	string expected = "The group-barline-value type indicates if the group should have common barlines.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	string expected = "The group-barline-value type indicates if the group should have common barlines.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	stringstream ss;
	e1.stream( ss );
	string expected = "yes";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "yes";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	stringstream ss;
	e1.stream( ss );
	string expected = "no";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "no";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	stringstream ss;
	e1.stream( ss );
	string expected = "Mensurstrich";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "Mensurstrich";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	stringstream ss;
	ss << e1;
	string expected = "yes";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "yes";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	stringstream ss;
	ss << e1;
	string expected = "no";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "no";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	stringstream ss;
	ss << e1;
	string expected = "Mensurstrich";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "Mensurstrich";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "mensurstrich";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mensurstrich";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "mensurstrich";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mensurstrich";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "mensurstrich";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mensurstrich";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "mensurstrich";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mensurstrich";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "mensurstrich";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mensurstrich";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mensurstrich";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "mensurstrich";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mensurstrich";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "mensurstrich";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::yes );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::yes );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::no );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::no );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mensurstrich";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumGroupBarlineValue )
{
	MxEnumGroupBarlineValue e1( enums::GroupBarlineValue::mensurstrich );
	MxEnumGroupBarlineValue e2( enums::GroupBarlineValue::mensurstrich );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "mensurstrich";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

