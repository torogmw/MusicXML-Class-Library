#include "TestHarness.h"
#include "MxEnumOverUnder.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumOverUnder )
{
	MxEnumOverUnder e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( e1 );
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
TEST( copyCtor1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( e1 );
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
TEST( assignmentOp0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::over );
	e1 = e2;
	string expected = "over";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumOverUnder e3( enums::OverUnder::under );
	e2 = e3;
	expected = "under";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "over";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "over";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::under );
	e1 = e2;
	string expected = "under";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumOverUnder e3( enums::OverUnder::over );
	e2 = e3;
	expected = "over";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "under";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "under";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	CHECK( e1.getValue() == enums::OverUnder::over )
}
TEST( getValue1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	CHECK( e1.getValue() == enums::OverUnder::under )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	string expected = "over";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	string expected = "under";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	string expected = "over";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	string expected = "under";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	e1.setValue( enums::OverUnder::over );
	CHECK( e1.getValue() == enums::OverUnder::over )
}
TEST( setValue1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	e1.setValue( enums::OverUnder::under );
	CHECK( e1.getValue() == enums::OverUnder::under )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::OverUnder::under )
}
TEST( setValueInt0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::OverUnder::under )
}
TEST( setValueInt1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::OverUnder::over )
}
TEST( setValueInt2 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::OverUnder::over )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::OverUnder::under )
}
TEST( fromString0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	CHECK( e1.fromString( "under" ) )
	CHECK( e1.getValue() == enums::OverUnder::under )
}
TEST( fromString1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	CHECK( e1.fromString( "over" ) )
	CHECK( e1.getValue() == enums::OverUnder::over )
}
TEST( fromString2 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::OverUnder::over )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	string expected = "over-under";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	string expected = "over-under";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	string expected = "MxEnumOverUnder";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	string expected = "MxEnumOverUnder";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	string expected = "The over-under type is used to indicate whether the tips of curved lines such as slurs and ties are overhand (tips down) or underhand (tips up).";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	string expected = "The over-under type is used to indicate whether the tips of curved lines such as slurs and ties are overhand (tips down) or underhand (tips up).";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	stringstream ss;
	e1.stream( ss );
	string expected = "over";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "over";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	stringstream ss;
	e1.stream( ss );
	string expected = "under";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "under";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	stringstream ss;
	ss << e1;
	string expected = "over";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "over";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	stringstream ss;
	ss << e1;
	string expected = "under";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "under";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::over );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "under";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "under";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "over";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "over";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "over";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "over";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "under";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "under";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "under";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "under";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "over";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "over";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "over";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "over";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "under";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "under";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "under";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "over";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "over";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "under";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "over";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "under";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "under";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "over";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "under";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "over";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "over";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "under";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::over );
	MxEnumOverUnder e2( enums::OverUnder::over );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "over";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "under";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumOverUnder )
{
	MxEnumOverUnder e1( enums::OverUnder::under );
	MxEnumOverUnder e2( enums::OverUnder::under );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "under";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "over";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

