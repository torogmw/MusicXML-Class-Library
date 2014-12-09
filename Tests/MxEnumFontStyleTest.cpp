#include "TestHarness.h"
#include "MxEnumFontStyle.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumFontStyle )
{
	MxEnumFontStyle e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( e1 );
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
TEST( copyCtor1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( e1 );
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
TEST( assignmentOp0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	e1 = e2;
	string expected = "normal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFontStyle e3( enums::FontStyle::italic );
	e2 = e3;
	expected = "italic";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "normal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "normal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	e1 = e2;
	string expected = "italic";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFontStyle e3( enums::FontStyle::normal );
	e2 = e3;
	expected = "normal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "italic";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "italic";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	CHECK( e1.getValue() == enums::FontStyle::normal )
}
TEST( getValue1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	CHECK( e1.getValue() == enums::FontStyle::italic )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	string expected = "italic";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	string expected = "normal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	string expected = "italic";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	e1.setValue( enums::FontStyle::normal );
	CHECK( e1.getValue() == enums::FontStyle::normal )
}
TEST( setValue1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	e1.setValue( enums::FontStyle::italic );
	CHECK( e1.getValue() == enums::FontStyle::italic )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::FontStyle::italic )
}
TEST( setValueInt0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::FontStyle::italic )
}
TEST( setValueInt1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::FontStyle::normal )
}
TEST( setValueInt2 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::FontStyle::normal )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::FontStyle::italic )
}
TEST( fromString0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	CHECK( e1.fromString( "italic" ) )
	CHECK( e1.getValue() == enums::FontStyle::italic )
}
TEST( fromString1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	CHECK( e1.fromString( "normal" ) )
	CHECK( e1.getValue() == enums::FontStyle::normal )
}
TEST( fromString2 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::FontStyle::normal )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	string expected = "font-style";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	string expected = "font-style";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	string expected = "MxEnumFontStyle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	string expected = "MxEnumFontStyle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	string expected = "The font-style type represents a simplified version of the CSS font-style property.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	string expected = "The font-style type represents a simplified version of the CSS font-style property.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
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
TEST( stream1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	stringstream ss;
	e1.stream( ss );
	string expected = "italic";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "italic";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
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
TEST( streamingOperator1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	stringstream ss;
	ss << e1;
	string expected = "italic";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "italic";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "italic";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "italic";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
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
TEST( incrementPre_start0_2times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
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
TEST( incrementPre_start1_2times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "italic";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "italic";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "italic";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "italic";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
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
TEST( decrementPre_start0_2times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
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
TEST( decrementPre_start1_2times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "italic";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "italic";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "italic";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "italic";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "italic";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "italic";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "italic";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "italic";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::normal );
	MxEnumFontStyle e2( enums::FontStyle::normal );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "italic";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumFontStyle )
{
	MxEnumFontStyle e1( enums::FontStyle::italic );
	MxEnumFontStyle e2( enums::FontStyle::italic );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "italic";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

