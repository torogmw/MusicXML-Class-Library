#include "TestHarness.h"
#include "MxEnumLineShape.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumLineShape )
{
	MxEnumLineShape e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( e1 );
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
TEST( copyCtor1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( e1 );
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
TEST( assignmentOp0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::straight );
	e1 = e2;
	string expected = "straight";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineShape e3( enums::LineShape::curved );
	e2 = e3;
	expected = "curved";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "straight";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "straight";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::curved );
	e1 = e2;
	string expected = "curved";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineShape e3( enums::LineShape::straight );
	e2 = e3;
	expected = "straight";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "curved";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "curved";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	CHECK( e1.getValue() == enums::LineShape::straight )
}
TEST( getValue1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	CHECK( e1.getValue() == enums::LineShape::curved )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	string expected = "straight";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	string expected = "curved";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	e1.setValue( enums::LineShape::straight );
	CHECK( e1.getValue() == enums::LineShape::straight )
}
TEST( setValue1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	e1.setValue( enums::LineShape::curved );
	CHECK( e1.getValue() == enums::LineShape::curved )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::LineShape::curved )
}
TEST( setValueInt0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::LineShape::curved )
}
TEST( setValueInt1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::LineShape::straight )
}
TEST( setValueInt2 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::LineShape::straight )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::LineShape::curved )
}
TEST( fromString0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	CHECK( e1.fromString( "curved" ) )
	CHECK( e1.getValue() == enums::LineShape::curved )
}
TEST( fromString1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	CHECK( e1.fromString( "straight" ) )
	CHECK( e1.getValue() == enums::LineShape::straight )
}
TEST( fromString2 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::LineShape::straight )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	string expected = "line-shape";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	string expected = "line-shape";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	string expected = "MxEnumLineShape";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	string expected = "MxEnumLineShape";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	string expected = "The line-shape type distinguishes between straight and curved lines.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	string expected = "The line-shape type distinguishes between straight and curved lines.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	stringstream ss;
	e1.stream( ss );
	string expected = "straight";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "straight";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	stringstream ss;
	e1.stream( ss );
	string expected = "curved";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "curved";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	stringstream ss;
	ss << e1;
	string expected = "straight";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "straight";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	stringstream ss;
	ss << e1;
	string expected = "curved";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "curved";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::straight );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::straight );
	MxEnumLineShape e2( enums::LineShape::straight );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumLineShape )
{
	MxEnumLineShape e1( enums::LineShape::curved );
	MxEnumLineShape e2( enums::LineShape::curved );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

