#include "TestHarness.h"
#include "MxEnumShowFrets.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumShowFrets )
{
	MxEnumShowFrets e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( e1 );
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
TEST( copyCtor1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( e1 );
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
TEST( assignmentOp0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	e1 = e2;
	string expected = "numbers";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumShowFrets e3( enums::ShowFrets::letters );
	e2 = e3;
	expected = "letters";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "numbers";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "numbers";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	e1 = e2;
	string expected = "letters";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumShowFrets e3( enums::ShowFrets::numbers );
	e2 = e3;
	expected = "numbers";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "letters";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "letters";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	CHECK( e1.getValue() == enums::ShowFrets::numbers )
}
TEST( getValue1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	CHECK( e1.getValue() == enums::ShowFrets::letters )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	string expected = "numbers";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	string expected = "letters";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	string expected = "numbers";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	string expected = "letters";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	e1.setValue( enums::ShowFrets::numbers );
	CHECK( e1.getValue() == enums::ShowFrets::numbers )
}
TEST( setValue1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	e1.setValue( enums::ShowFrets::letters );
	CHECK( e1.getValue() == enums::ShowFrets::letters )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::ShowFrets::letters )
}
TEST( setValueInt0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::ShowFrets::letters )
}
TEST( setValueInt1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::ShowFrets::numbers )
}
TEST( setValueInt2 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::ShowFrets::numbers )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::ShowFrets::letters )
}
TEST( fromString0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	CHECK( e1.fromString( "letters" ) )
	CHECK( e1.getValue() == enums::ShowFrets::letters )
}
TEST( fromString1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	CHECK( e1.fromString( "numbers" ) )
	CHECK( e1.getValue() == enums::ShowFrets::numbers )
}
TEST( fromString2 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::ShowFrets::numbers )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	string expected = "show-frets";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	string expected = "show-frets";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	string expected = "MxEnumShowFrets";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	string expected = "MxEnumShowFrets";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	string expected = "The show-frets type indicates whether to show tablature frets as numbers (0, 1, 2) or letters (a, b, c). The default choice is numbers.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	string expected = "The show-frets type indicates whether to show tablature frets as numbers (0, 1, 2) or letters (a, b, c). The default choice is numbers.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	stringstream ss;
	e1.stream( ss );
	string expected = "numbers";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "numbers";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	stringstream ss;
	e1.stream( ss );
	string expected = "letters";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "letters";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	stringstream ss;
	ss << e1;
	string expected = "numbers";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "numbers";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	stringstream ss;
	ss << e1;
	string expected = "letters";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "letters";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "letters";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "letters";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "numbers";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "numbers";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "numbers";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "numbers";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "letters";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "letters";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "letters";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "letters";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "numbers";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "numbers";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "numbers";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "numbers";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "letters";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "letters";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "letters";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "numbers";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "numbers";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "letters";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "numbers";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "letters";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "letters";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "numbers";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "letters";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "numbers";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "numbers";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "letters";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::numbers );
	MxEnumShowFrets e2( enums::ShowFrets::numbers );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "numbers";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "letters";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumShowFrets )
{
	MxEnumShowFrets e1( enums::ShowFrets::letters );
	MxEnumShowFrets e2( enums::ShowFrets::letters );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "letters";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "numbers";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

