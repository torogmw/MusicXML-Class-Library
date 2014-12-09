#include "TestHarness.h"
#include "MxEnumOnOff.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumOnOff )
{
	MxEnumOnOff e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( e1 );
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
TEST( copyCtor1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( e1 );
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
TEST( assignmentOp0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::on );
	e1 = e2;
	string expected = "on";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumOnOff e3( enums::OnOff::off );
	e2 = e3;
	expected = "off";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "on";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "on";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::off );
	e1 = e2;
	string expected = "off";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumOnOff e3( enums::OnOff::on );
	e2 = e3;
	expected = "on";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "off";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "off";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	CHECK( e1.getValue() == enums::OnOff::on )
}
TEST( getValue1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	CHECK( e1.getValue() == enums::OnOff::off )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	string expected = "on";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	string expected = "off";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	e1.setValue( enums::OnOff::on );
	CHECK( e1.getValue() == enums::OnOff::on )
}
TEST( setValue1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	e1.setValue( enums::OnOff::off );
	CHECK( e1.getValue() == enums::OnOff::off )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::OnOff::off )
}
TEST( setValueInt0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::OnOff::off )
}
TEST( setValueInt1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::OnOff::on )
}
TEST( setValueInt2 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	CHECK( ! e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::OnOff::on )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::OnOff::off )
}
TEST( fromString0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	CHECK( e1.fromString( "off" ) )
	CHECK( e1.getValue() == enums::OnOff::off )
}
TEST( fromString1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	CHECK( e1.fromString( "on" ) )
	CHECK( e1.getValue() == enums::OnOff::on )
}
TEST( fromString2 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	CHECK( ! e1.fromString( "crazyErrantValue2" ) )
	CHECK( e1.getValue() == enums::OnOff::on )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	int expected = 2;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	string expected = "on-off";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	string expected = "on-off";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	string expected = "MxEnumOnOff";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	string expected = "MxEnumOnOff";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	string expected = "The on-off type is used for notation elements such as string mutes.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	string expected = "The on-off type is used for notation elements such as string mutes.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	stringstream ss;
	e1.stream( ss );
	string expected = "on";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "on";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	stringstream ss;
	e1.stream( ss );
	string expected = "off";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "off";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	stringstream ss;
	ss << e1;
	string expected = "on";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "on";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	stringstream ss;
	ss << e1;
	string expected = "off";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "off";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::on );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_1times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_1times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_2times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_1times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_1times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_1times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::on );
	MxEnumOnOff e2( enums::OnOff::on );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "on";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "off";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumOnOff )
{
	MxEnumOnOff e1( enums::OnOff::off );
	MxEnumOnOff e2( enums::OnOff::off );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "off";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "on";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

