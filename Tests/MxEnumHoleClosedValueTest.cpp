#include "TestHarness.h"
#include "MxEnumHoleClosedValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( e1 );
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
TEST( copyCtor1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( e1 );
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
TEST( copyCtor2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( e1 );
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
TEST( assignmentOp0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	e1 = e2;
	string expected = "yes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHoleClosedValue e3( enums::HoleClosedValue::no );
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
TEST( assignmentOp1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	e1 = e2;
	string expected = "no";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHoleClosedValue e3( enums::HoleClosedValue::half );
	e2 = e3;
	expected = "half";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "no";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "no";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	e1 = e2;
	string expected = "half";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHoleClosedValue e3( enums::HoleClosedValue::yes );
	e2 = e3;
	expected = "yes";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	CHECK( e1.getValue() == enums::HoleClosedValue::yes )
}
TEST( getValue1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	CHECK( e1.getValue() == enums::HoleClosedValue::no )
}
TEST( getValue2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	CHECK( e1.getValue() == enums::HoleClosedValue::half )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	string expected = "yes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	string expected = "no";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	string expected = "half";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	e1.setValue( enums::HoleClosedValue::yes );
	CHECK( e1.getValue() == enums::HoleClosedValue::yes )
}
TEST( setValue1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	e1.setValue( enums::HoleClosedValue::no );
	CHECK( e1.getValue() == enums::HoleClosedValue::no )
}
TEST( setValue2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	e1.setValue( enums::HoleClosedValue::half );
	CHECK( e1.getValue() == enums::HoleClosedValue::half )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::HoleClosedValue::no )
}
TEST( setValueInt0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::HoleClosedValue::no )
}
TEST( setValueInt1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::HoleClosedValue::half )
}
TEST( setValueInt2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::HoleClosedValue::yes )
}
TEST( setValueInt3 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::HoleClosedValue::half )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::HoleClosedValue::no )
}
TEST( fromString0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	CHECK( e1.fromString( "no" ) )
	CHECK( e1.getValue() == enums::HoleClosedValue::no )
}
TEST( fromString1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	CHECK( e1.fromString( "half" ) )
	CHECK( e1.getValue() == enums::HoleClosedValue::half )
}
TEST( fromString2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	CHECK( e1.fromString( "yes" ) )
	CHECK( e1.getValue() == enums::HoleClosedValue::yes )
}
TEST( fromString3 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::HoleClosedValue::half )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	string expected = "hole-closed-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	string expected = "hole-closed-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	string expected = "hole-closed-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	string expected = "MxEnumHoleClosedValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	string expected = "MxEnumHoleClosedValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	string expected = "MxEnumHoleClosedValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	string expected = "The hole-closed-value type represents whether the hole is closed, open, or half-open.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	string expected = "The hole-closed-value type represents whether the hole is closed, open, or half-open.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	string expected = "The hole-closed-value type represents whether the hole is closed, open, or half-open.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
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
TEST( stream1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
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
TEST( stream2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	stringstream ss;
	e1.stream( ss );
	string expected = "half";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "half";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
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
TEST( streamingOperator1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
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
TEST( streamingOperator2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	stringstream ss;
	ss << e1;
	string expected = "half";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "half";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
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
TEST( incrementPre_start2_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
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
TEST( incrementPre_start0_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
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
TEST( incrementPre_start1_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
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
TEST( incrementPre_start2_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
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
TEST( decrementPre_start1_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
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
TEST( decrementPre_start0_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
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
TEST( decrementPre_start1_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
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
TEST( decrementPre_start2_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
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
TEST( incrementPost_start0_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
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
TEST( incrementPost_start2_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
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
TEST( decrementPost_start0_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::yes );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::yes );
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
TEST( decrementPost_start1_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::no );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::no );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumHoleClosedValue )
{
	MxEnumHoleClosedValue e1( enums::HoleClosedValue::half );
	MxEnumHoleClosedValue e2( enums::HoleClosedValue::half );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

