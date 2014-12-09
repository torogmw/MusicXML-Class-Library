#include "TestHarness.h"
#include "MxEnumUprightInverted.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( e1 );
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
TEST( copyCtor1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( e1 );
	int expected = 1;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 1;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	e1 = e2;
	string expected = "upright";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumUprightInverted e3( enums::UprightInverted::inverted );
	e2 = e3;
	expected = "inverted";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "upright";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "upright";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	e1 = e2;
	string expected = "inverted";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumUprightInverted e3( enums::UprightInverted::upright );
	e2 = e3;
	expected = "upright";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "inverted";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "inverted";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	CHECK( e1.getValue() == enums::UprightInverted::upright )
}
TEST( getValue1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	CHECK( e1.getValue() == enums::UprightInverted::inverted )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	string expected = "upright";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	string expected = "inverted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	string expected = "upright";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	string expected = "inverted";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	e1.setValue( enums::UprightInverted::upright );
	CHECK( e1.getValue() == enums::UprightInverted::upright )
}
TEST( setValue1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	e1.setValue( enums::UprightInverted::inverted );
	CHECK( e1.getValue() == enums::UprightInverted::inverted )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::UprightInverted::inverted )
}
TEST( setValueInt0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::UprightInverted::inverted )
}
TEST( setValueInt1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::UprightInverted::upright )
}
TEST( setValueInt2 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::UprightInverted::upright )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::UprightInverted::inverted )
}
TEST( fromString0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	CHECK( e1.fromString( "inverted" ) )
	CHECK( e1.getValue() == enums::UprightInverted::inverted )
}
TEST( fromString1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	CHECK( e1.fromString( "upright" ) )
	CHECK( e1.getValue() == enums::UprightInverted::upright )
}
TEST( fromString2 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::UprightInverted::upright )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	string expected = "upright-inverted";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	string expected = "upright-inverted";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	string expected = "MxEnumUprightInverted";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	string expected = "MxEnumUprightInverted";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	string expected = "The upright-inverted type describes the appearance of a fermata element. The value is upright if not specified.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	string expected = "The upright-inverted type describes the appearance of a fermata element. The value is upright if not specified.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	stringstream ss;
	e1.stream( ss );
	string expected = "upright";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "upright";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	stringstream ss;
	e1.stream( ss );
	string expected = "inverted";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "inverted";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	stringstream ss;
	ss << e1;
	string expected = "upright";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "upright";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	stringstream ss;
	ss << e1;
	string expected = "inverted";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "inverted";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "inverted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "inverted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "upright";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upright";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "upright";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upright";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "inverted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "inverted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "inverted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "inverted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "upright";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upright";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "upright";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upright";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "inverted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "inverted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "inverted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upright";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "upright";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "inverted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "upright";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "inverted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "inverted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upright";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "inverted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upright";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "upright";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "inverted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::upright );
	MxEnumUprightInverted e2( enums::UprightInverted::upright );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "upright";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "inverted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumUprightInverted )
{
	MxEnumUprightInverted e1( enums::UprightInverted::inverted );
	MxEnumUprightInverted e2( enums::UprightInverted::inverted );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "inverted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upright";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

