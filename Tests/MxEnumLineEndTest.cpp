#include "TestHarness.h"
#include "MxEnumLineEnd.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumLineEnd )
{
	MxEnumLineEnd e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::arrow );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( e1 );
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
TEST( copyCtor1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( e1 );
	int expected = 1;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 2 );
	expected = 1;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 2;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor2 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	MxEnumLineEnd e2( e1 );
	int expected = 2;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 3 );
	expected = 2;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 3;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor3 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::arrow );
	MxEnumLineEnd e2( e1 );
	int expected = 3;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 4 );
	expected = 3;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 4;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( e1 );
	int expected = 4;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 4;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::up );
	e1 = e2;
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineEnd e3( enums::LineEnd::down );
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
TEST( assignmentOp1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	MxEnumLineEnd e2( enums::LineEnd::down );
	e1 = e2;
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineEnd e3( enums::LineEnd::both );
	e2 = e3;
	expected = "both";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "down";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "down";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::arrow );
	MxEnumLineEnd e2( enums::LineEnd::both );
	e1 = e2;
	string expected = "both";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineEnd e3( enums::LineEnd::arrow );
	e2 = e3;
	expected = "arrow";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "both";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "both";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::arrow );
	e1 = e2;
	string expected = "arrow";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineEnd e3( enums::LineEnd::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "arrow";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "arrow";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineEnd e3( enums::LineEnd::up );
	e2 = e3;
	expected = "up";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	CHECK( e1.getValue() == enums::LineEnd::up )
}
TEST( getValue1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	CHECK( e1.getValue() == enums::LineEnd::down )
}
TEST( getValue2 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	CHECK( e1.getValue() == enums::LineEnd::both )
}
TEST( getValue3 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::arrow );
	CHECK( e1.getValue() == enums::LineEnd::arrow )
}
TEST( getValue4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	CHECK( e1.getValue() == enums::LineEnd::none )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::arrow );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::arrow );
	string expected = "arrow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	string expected = "both";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::arrow );
	string expected = "arrow";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	e1.setValue( enums::LineEnd::up );
	CHECK( e1.getValue() == enums::LineEnd::up )
}
TEST( setValue1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	e1.setValue( enums::LineEnd::down );
	CHECK( e1.getValue() == enums::LineEnd::down )
}
TEST( setValue2 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::arrow );
	e1.setValue( enums::LineEnd::both );
	CHECK( e1.getValue() == enums::LineEnd::both )
}
TEST( setValue3 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	e1.setValue( enums::LineEnd::arrow );
	CHECK( e1.getValue() == enums::LineEnd::arrow )
}
TEST( setValue4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	e1.setValue( enums::LineEnd::none );
	CHECK( e1.getValue() == enums::LineEnd::none )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::LineEnd::down )
}
TEST( setValueInt0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::LineEnd::down )
}
TEST( setValueInt1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::arrow );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::LineEnd::both )
}
TEST( setValueInt2 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::LineEnd::arrow )
}
TEST( setValueInt3 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	CHECK( e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::LineEnd::none )
}
TEST( setValueInt4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::LineEnd::up )
}
TEST( setValueInt5 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	CHECK( ! e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::LineEnd::both )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::LineEnd::down )
}
TEST( fromString0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	CHECK( e1.fromString( "down" ) )
	CHECK( e1.getValue() == enums::LineEnd::down )
}
TEST( fromString1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::arrow );
	CHECK( e1.fromString( "both" ) )
	CHECK( e1.getValue() == enums::LineEnd::both )
}
TEST( fromString2 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	CHECK( e1.fromString( "arrow" ) )
	CHECK( e1.getValue() == enums::LineEnd::arrow )
}
TEST( fromString3 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::LineEnd::none )
}
TEST( fromString4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	CHECK( e1.fromString( "up" ) )
	CHECK( e1.getValue() == enums::LineEnd::up )
}
TEST( fromString5 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::both );
	CHECK( ! e1.fromString( "crazyErrantValue5" ) )
	CHECK( e1.getValue() == enums::LineEnd::both )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	string expected = "line-end";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	string expected = "line-end";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	string expected = "line-end";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	string expected = "MxEnumLineEnd";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	string expected = "MxEnumLineEnd";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	string expected = "MxEnumLineEnd";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	string expected = "The line-end type specifies if there is a jog up or down (or both), an arrow, or nothing at the start or end of a bracket.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	string expected = "The line-end type specifies if there is a jog up or down (or both), an arrow, or nothing at the start or end of a bracket.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	string expected = "The line-end type specifies if there is a jog up or down (or both), an arrow, or nothing at the start or end of a bracket.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
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
TEST( stream1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
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
TEST( stream4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	stringstream ss;
	e1.stream( ss );
	string expected = "none";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "none";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
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
TEST( streamingOperator1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
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
TEST( streamingOperator4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	stringstream ss;
	ss << e1;
	string expected = "none";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "none";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_4equals4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_4equals4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_4islessthanoreq4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan0 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::up );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan1 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::down );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_4isgreaterthan4 , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	for( int i = 0; i < 4; ++i )
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
TEST( incrementPre_start4_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "arrow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "arrow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	for( int i = 0; i < 5; ++i )
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
TEST( incrementPre_start1_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	for( int i = 0; i < 5; ++i )
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
TEST( incrementPre_start4_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	for( int i = 0; i < 4; ++i )
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
TEST( decrementPre_start1_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	for( int i = 0; i < 4; ++i )
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
TEST( decrementPre_start0_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	for( int i = 0; i < 5; ++i )
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
TEST( decrementPre_start1_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	for( int i = 0; i < 5; ++i )
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
TEST( decrementPre_start4_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "arrow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "arrow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	for( int i = 0; i < 5; ++i )
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
TEST( incrementPost_start4_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "arrow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "arrow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_4times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	for( int i = 0; i < 4; ++i )
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
TEST( decrementPost_start0_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::up );
	MxEnumLineEnd e2( enums::LineEnd::up );
	for( int i = 0; i < 5; ++i )
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
TEST( decrementPost_start1_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::down );
	MxEnumLineEnd e2( enums::LineEnd::down );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_5times , MxEnumLineEnd )
{
	MxEnumLineEnd e1( enums::LineEnd::none );
	MxEnumLineEnd e2( enums::LineEnd::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

