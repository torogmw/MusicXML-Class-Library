#include "TestHarness.h"
#include "MxEnumMarginType.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumMarginType )
{
	MxEnumMarginType e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( e1 );
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
TEST( copyCtor1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( e1 );
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
TEST( copyCtor2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( e1 );
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
TEST( assignmentOp0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::odd );
	e1 = e2;
	string expected = "odd";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMarginType e3( enums::MarginType::even );
	e2 = e3;
	expected = "even";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "odd";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "odd";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::even );
	e1 = e2;
	string expected = "even";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMarginType e3( enums::MarginType::both );
	e2 = e3;
	expected = "both";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "even";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "even";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::both );
	e1 = e2;
	string expected = "both";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMarginType e3( enums::MarginType::odd );
	e2 = e3;
	expected = "odd";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "both";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "both";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	CHECK( e1.getValue() == enums::MarginType::odd )
}
TEST( getValue1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	CHECK( e1.getValue() == enums::MarginType::even )
}
TEST( getValue2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	CHECK( e1.getValue() == enums::MarginType::both )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	string expected = "odd";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	string expected = "even";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	string expected = "odd";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	string expected = "even";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	string expected = "both";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	e1.setValue( enums::MarginType::odd );
	CHECK( e1.getValue() == enums::MarginType::odd )
}
TEST( setValue1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	e1.setValue( enums::MarginType::even );
	CHECK( e1.getValue() == enums::MarginType::even )
}
TEST( setValue2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	e1.setValue( enums::MarginType::both );
	CHECK( e1.getValue() == enums::MarginType::both )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::MarginType::even )
}
TEST( setValueInt0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::MarginType::even )
}
TEST( setValueInt1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::MarginType::both )
}
TEST( setValueInt2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::MarginType::odd )
}
TEST( setValueInt3 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::MarginType::both )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::MarginType::even )
}
TEST( fromString0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	CHECK( e1.fromString( "even" ) )
	CHECK( e1.getValue() == enums::MarginType::even )
}
TEST( fromString1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	CHECK( e1.fromString( "both" ) )
	CHECK( e1.getValue() == enums::MarginType::both )
}
TEST( fromString2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	CHECK( e1.fromString( "odd" ) )
	CHECK( e1.getValue() == enums::MarginType::odd )
}
TEST( fromString3 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::MarginType::both )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	string expected = "margin-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	string expected = "margin-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	string expected = "margin-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	string expected = "MxEnumMarginType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	string expected = "MxEnumMarginType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	string expected = "MxEnumMarginType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	string expected = "The margin-type type specifies whether margins apply to even page, odd pages, or both.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	string expected = "The margin-type type specifies whether margins apply to even page, odd pages, or both.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	string expected = "The margin-type type specifies whether margins apply to even page, odd pages, or both.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	stringstream ss;
	e1.stream( ss );
	string expected = "odd";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "odd";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	stringstream ss;
	e1.stream( ss );
	string expected = "even";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "even";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	stringstream ss;
	e1.stream( ss );
	string expected = "both";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "both";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	stringstream ss;
	ss << e1;
	string expected = "odd";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "odd";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	stringstream ss;
	ss << e1;
	string expected = "even";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "even";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	stringstream ss;
	ss << e1;
	string expected = "both";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "both";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::odd );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::even );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "odd";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "odd";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "even";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "even";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "odd";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "odd";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "even";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "even";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "even";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "even";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "odd";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "odd";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "odd";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "odd";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "even";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "even";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "even";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "odd";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "even";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "odd";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "odd";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "even";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "odd";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "even";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "even";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "odd";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "odd";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "even";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::odd );
	MxEnumMarginType e2( enums::MarginType::odd );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "odd";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "even";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::even );
	MxEnumMarginType e2( enums::MarginType::even );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "even";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumMarginType )
{
	MxEnumMarginType e1( enums::MarginType::both );
	MxEnumMarginType e2( enums::MarginType::both );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "odd";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

