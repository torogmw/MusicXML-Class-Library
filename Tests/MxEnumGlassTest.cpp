#include "TestHarness.h"
#include "MxEnumGlass.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumGlass )
{
	MxEnumGlass e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( e1 );
	int expected = 0;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 0;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	e1 = e2;
	string expected = "wind chimes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumGlass e3( enums::Glass::windChimes );
	e2 = e3;
	expected = "wind chimes";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wind chimes";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wind chimes";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	CHECK( e1.getValue() == enums::Glass::windChimes )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	string expected = "windChimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	string expected = "wind chimes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	e1.setValue( enums::Glass::windChimes );
	CHECK( e1.getValue() == enums::Glass::windChimes )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Glass::windChimes )
}
TEST( setValueInt0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Glass::windChimes )
}
TEST( setValueInt1 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	CHECK( ! e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Glass::windChimes )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Glass::windChimes )
}
TEST( fromString0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	CHECK( e1.fromString( "wind chimes" ) )
	CHECK( e1.getValue() == enums::Glass::windChimes )
}
TEST( fromString1 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	CHECK( ! e1.fromString( "crazyErrantValue1" ) )
	CHECK( e1.getValue() == enums::Glass::windChimes )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	int expected = 1;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	string expected = "glass";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	string expected = "MxEnumGlass";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	string expected = "The glass type represents pictograms for glass percussion instruments.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	stringstream ss;
	e1.stream( ss );
	string expected = "wind chimes";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "wind chimes";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	stringstream ss;
	ss << e1;
	string expected = "wind chimes";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "wind chimes";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_0times , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	for( int i = 0; i < 0; ++i )
	{
		e2 = ++e1;
	}
	string expected = "windChimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windChimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_1times , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	for( int i = 0; i < 1; ++i )
	{
		e2 = ++e1;
	}
	string expected = "windChimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windChimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_0times , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	for( int i = 0; i < 0; ++i )
	{
		e2 = --e1;
	}
	string expected = "windChimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windChimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_1times , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	for( int i = 0; i < 1; ++i )
	{
		e2 = --e1;
	}
	string expected = "windChimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windChimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_0times , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	for( int i = 0; i < 0; ++i )
	{
		e2 = e1++;
	}
	string expected = "windChimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windChimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_1times , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1++;
	}
	string expected = "windChimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windChimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_0times , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	for( int i = 0; i < 0; ++i )
	{
		e2 = e1--;
	}
	string expected = "windChimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windChimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_1times , MxEnumGlass )
{
	MxEnumGlass e1( enums::Glass::windChimes );
	MxEnumGlass e2( enums::Glass::windChimes );
	for( int i = 0; i < 1; ++i )
	{
		e2 = e1--;
	}
	string expected = "windChimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windChimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

