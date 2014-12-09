#include "TestHarness.h"
#include "MxEnumTopBottom.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumTopBottom )
{
	MxEnumTopBottom e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( e1 );
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
TEST( copyCtor1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( e1 );
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
TEST( assignmentOp0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::top );
	e1 = e2;
	string expected = "top";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTopBottom e3( enums::TopBottom::bottom );
	e2 = e3;
	expected = "bottom";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "top";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "top";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	e1 = e2;
	string expected = "bottom";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTopBottom e3( enums::TopBottom::top );
	e2 = e3;
	expected = "top";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bottom";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bottom";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	CHECK( e1.getValue() == enums::TopBottom::top )
}
TEST( getValue1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	CHECK( e1.getValue() == enums::TopBottom::bottom )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	string expected = "top";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	string expected = "bottom";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	e1.setValue( enums::TopBottom::top );
	CHECK( e1.getValue() == enums::TopBottom::top )
}
TEST( setValue1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	e1.setValue( enums::TopBottom::bottom );
	CHECK( e1.getValue() == enums::TopBottom::bottom )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::TopBottom::bottom )
}
TEST( setValueInt0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::TopBottom::bottom )
}
TEST( setValueInt1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::TopBottom::top )
}
TEST( setValueInt2 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::TopBottom::top )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::TopBottom::bottom )
}
TEST( fromString0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	CHECK( e1.fromString( "bottom" ) )
	CHECK( e1.getValue() == enums::TopBottom::bottom )
}
TEST( fromString1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	CHECK( e1.fromString( "top" ) )
	CHECK( e1.getValue() == enums::TopBottom::top )
}
TEST( fromString2 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::TopBottom::top )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	string expected = "top-bottom";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	string expected = "top-bottom";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	string expected = "MxEnumTopBottom";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	string expected = "MxEnumTopBottom";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	string expected = "The top-bottom type is used to indicate the top or bottom part of a vertical shape like non-arpeggiate.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	string expected = "The top-bottom type is used to indicate the top or bottom part of a vertical shape like non-arpeggiate.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	stringstream ss;
	e1.stream( ss );
	string expected = "top";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "top";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	stringstream ss;
	e1.stream( ss );
	string expected = "bottom";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "bottom";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	stringstream ss;
	ss << e1;
	string expected = "top";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "top";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	stringstream ss;
	ss << e1;
	string expected = "bottom";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "bottom";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::top );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::top );
	MxEnumTopBottom e2( enums::TopBottom::top );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumTopBottom )
{
	MxEnumTopBottom e1( enums::TopBottom::bottom );
	MxEnumTopBottom e2( enums::TopBottom::bottom );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

