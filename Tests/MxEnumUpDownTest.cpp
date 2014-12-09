#include "TestHarness.h"
#include "MxEnumUpDown.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumUpDown )
{
	MxEnumUpDown e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( e1 );
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
TEST( copyCtor1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( e1 );
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
TEST( assignmentOp0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::up );
	e1 = e2;
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumUpDown e3( enums::UpDown::down );
	e2 = e3;
	expected = "down";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "up";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "up";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::down );
	e1 = e2;
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumUpDown e3( enums::UpDown::up );
	e2 = e3;
	expected = "up";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "down";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "down";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	CHECK( e1.getValue() == enums::UpDown::up )
}
TEST( getValue1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	CHECK( e1.getValue() == enums::UpDown::down )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	e1.setValue( enums::UpDown::up );
	CHECK( e1.getValue() == enums::UpDown::up )
}
TEST( setValue1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	e1.setValue( enums::UpDown::down );
	CHECK( e1.getValue() == enums::UpDown::down )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::UpDown::down )
}
TEST( setValueInt0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::UpDown::down )
}
TEST( setValueInt1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::UpDown::up )
}
TEST( setValueInt2 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::UpDown::up )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::UpDown::down )
}
TEST( fromString0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	CHECK( e1.fromString( "down" ) )
	CHECK( e1.getValue() == enums::UpDown::down )
}
TEST( fromString1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	CHECK( e1.fromString( "up" ) )
	CHECK( e1.getValue() == enums::UpDown::up )
}
TEST( fromString2 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::UpDown::up )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	string expected = "up-down";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	string expected = "up-down";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	string expected = "MxEnumUpDown";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	string expected = "MxEnumUpDown";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	string expected = "The up-down type is used for the direction of arrows and other pointed symbols like vertical accents, indicating which way the tip is pointing.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	string expected = "The up-down type is used for the direction of arrows and other pointed symbols like vertical accents, indicating which way the tip is pointing.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	stringstream ss;
	e1.stream( ss );
	string expected = "up";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "up";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	stringstream ss;
	e1.stream( ss );
	string expected = "down";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "down";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	stringstream ss;
	ss << e1;
	string expected = "up";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "up";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	stringstream ss;
	ss << e1;
	string expected = "down";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "down";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::up );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::up );
	MxEnumUpDown e2( enums::UpDown::up );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumUpDown )
{
	MxEnumUpDown e1( enums::UpDown::down );
	MxEnumUpDown e2( enums::UpDown::down );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

