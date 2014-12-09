#include "TestHarness.h"
#include "MxEnumAboveBelow.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( e1 );
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
TEST( copyCtor1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( e1 );
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
TEST( assignmentOp0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	e1 = e2;
	string expected = "above";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAboveBelow e3( enums::AboveBelow::below );
	e2 = e3;
	expected = "below";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "above";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "above";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	e1 = e2;
	string expected = "below";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAboveBelow e3( enums::AboveBelow::above );
	e2 = e3;
	expected = "above";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "below";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "below";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	CHECK( e1.getValue() == enums::AboveBelow::above )
}
TEST( getValue1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	CHECK( e1.getValue() == enums::AboveBelow::below )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	string expected = "above";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	string expected = "above";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	string expected = "below";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	e1.setValue( enums::AboveBelow::above );
	CHECK( e1.getValue() == enums::AboveBelow::above )
}
TEST( setValue1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	e1.setValue( enums::AboveBelow::below );
	CHECK( e1.getValue() == enums::AboveBelow::below )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::AboveBelow::below )
}
TEST( setValueInt0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::AboveBelow::below )
}
TEST( setValueInt1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::AboveBelow::above )
}
TEST( setValueInt2 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::AboveBelow::above )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::AboveBelow::below )
}
TEST( fromString0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	CHECK( e1.fromString( "below" ) )
	CHECK( e1.getValue() == enums::AboveBelow::below )
}
TEST( fromString1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	CHECK( e1.fromString( "above" ) )
	CHECK( e1.getValue() == enums::AboveBelow::above )
}
TEST( fromString2 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::AboveBelow::above )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	string expected = "above-below";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	string expected = "above-below";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	string expected = "MxEnumAboveBelow";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	string expected = "MxEnumAboveBelow";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	string expected = "The above-below type is used to indicate whether one element appears above or below another element.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	string expected = "The above-below type is used to indicate whether one element appears above or below another element.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	stringstream ss;
	e1.stream( ss );
	string expected = "above";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "above";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	stringstream ss;
	e1.stream( ss );
	string expected = "below";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "below";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	stringstream ss;
	ss << e1;
	string expected = "above";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "above";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	stringstream ss;
	ss << e1;
	string expected = "below";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "below";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "above";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "above";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "above";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "above";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "above";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "above";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "above";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "above";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "above";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "above";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "above";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "above";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "above";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "above";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::above );
	MxEnumAboveBelow e2( enums::AboveBelow::above );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "above";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumAboveBelow )
{
	MxEnumAboveBelow e1( enums::AboveBelow::below );
	MxEnumAboveBelow e2( enums::AboveBelow::below );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "above";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

