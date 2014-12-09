#include "TestHarness.h"
#include "MxEnumFontWeight.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumFontWeight )
{
	MxEnumFontWeight e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( e1 );
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
TEST( copyCtor1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( e1 );
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
TEST( assignmentOp0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	e1 = e2;
	string expected = "normal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFontWeight e3( enums::FontWeight::bold );
	e2 = e3;
	expected = "bold";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "normal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "normal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	e1 = e2;
	string expected = "bold";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFontWeight e3( enums::FontWeight::normal );
	e2 = e3;
	expected = "normal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bold";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bold";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	CHECK( e1.getValue() == enums::FontWeight::normal )
}
TEST( getValue1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	CHECK( e1.getValue() == enums::FontWeight::bold )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	string expected = "bold";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	string expected = "normal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	string expected = "bold";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	e1.setValue( enums::FontWeight::normal );
	CHECK( e1.getValue() == enums::FontWeight::normal )
}
TEST( setValue1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	e1.setValue( enums::FontWeight::bold );
	CHECK( e1.getValue() == enums::FontWeight::bold )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::FontWeight::bold )
}
TEST( setValueInt0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::FontWeight::bold )
}
TEST( setValueInt1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::FontWeight::normal )
}
TEST( setValueInt2 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::FontWeight::normal )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::FontWeight::bold )
}
TEST( fromString0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	CHECK( e1.fromString( "bold" ) )
	CHECK( e1.getValue() == enums::FontWeight::bold )
}
TEST( fromString1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	CHECK( e1.fromString( "normal" ) )
	CHECK( e1.getValue() == enums::FontWeight::normal )
}
TEST( fromString2 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::FontWeight::normal )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	string expected = "font-weight";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	string expected = "font-weight";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	string expected = "MxEnumFontWeight";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	string expected = "MxEnumFontWeight";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	string expected = "The font-weight type represents a simplified version of the CSS font-weight property.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	string expected = "The font-weight type represents a simplified version of the CSS font-weight property.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	stringstream ss;
	e1.stream( ss );
	string expected = "normal";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "normal";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	stringstream ss;
	e1.stream( ss );
	string expected = "bold";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "bold";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	stringstream ss;
	ss << e1;
	string expected = "normal";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "normal";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	stringstream ss;
	ss << e1;
	string expected = "bold";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "bold";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bold";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bold";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bold";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bold";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "bold";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bold";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "bold";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bold";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "bold";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bold";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bold";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "bold";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "bold";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bold";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::normal );
	MxEnumFontWeight e2( enums::FontWeight::normal );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bold";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumFontWeight )
{
	MxEnumFontWeight e1( enums::FontWeight::bold );
	MxEnumFontWeight e2( enums::FontWeight::bold );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "bold";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

