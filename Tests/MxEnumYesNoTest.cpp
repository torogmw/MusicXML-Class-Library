#include "TestHarness.h"
#include "MxEnumYesNo.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumYesNo )
{
	MxEnumYesNo e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( e1 );
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
TEST( copyCtor1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( e1 );
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
TEST( assignmentOp0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::yes );
	e1 = e2;
	string expected = "yes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumYesNo e3( enums::YesNo::no );
	e2 = e3;
	expected = "no";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "yes";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "yes";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::no );
	e1 = e2;
	string expected = "no";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumYesNo e3( enums::YesNo::yes );
	e2 = e3;
	expected = "yes";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "no";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "no";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	CHECK( e1.getValue() == enums::YesNo::yes )
}
TEST( getValue1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	CHECK( e1.getValue() == enums::YesNo::no )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	string expected = "yes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	string expected = "no";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	e1.setValue( enums::YesNo::yes );
	CHECK( e1.getValue() == enums::YesNo::yes )
}
TEST( setValue1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	e1.setValue( enums::YesNo::no );
	CHECK( e1.getValue() == enums::YesNo::no )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::YesNo::no )
}
TEST( setValueInt0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::YesNo::no )
}
TEST( setValueInt1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::YesNo::yes )
}
TEST( setValueInt2 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::YesNo::yes )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::YesNo::no )
}
TEST( fromString0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	CHECK( e1.fromString( "no" ) )
	CHECK( e1.getValue() == enums::YesNo::no )
}
TEST( fromString1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	CHECK( e1.fromString( "yes" ) )
	CHECK( e1.getValue() == enums::YesNo::yes )
}
TEST( fromString2 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::YesNo::yes )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	string expected = "yes-no";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	string expected = "yes-no";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	string expected = "MxEnumYesNo";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	string expected = "MxEnumYesNo";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	string expected = "The yes-no type is used for boolean-like attributes. We cannot use W3C XML Schema booleans due to their restrictions on expression of boolean values.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	string expected = "The yes-no type is used for boolean-like attributes. We cannot use W3C XML Schema booleans due to their restrictions on expression of boolean values.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	stringstream ss;
	e1.stream( ss );
	string expected = "yes";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "yes";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	stringstream ss;
	e1.stream( ss );
	string expected = "no";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "no";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	stringstream ss;
	ss << e1;
	string expected = "yes";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "yes";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	stringstream ss;
	ss << e1;
	string expected = "no";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "no";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::yes );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::yes );
	MxEnumYesNo e2( enums::YesNo::yes );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "yes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumYesNo )
{
	MxEnumYesNo e1( enums::YesNo::no );
	MxEnumYesNo e2( enums::YesNo::no );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "no";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

