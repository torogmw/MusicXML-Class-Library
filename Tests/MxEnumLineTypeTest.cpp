#include "TestHarness.h"
#include "MxEnumLineType.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumLineType )
{
	MxEnumLineType e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( e1 );
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
TEST( copyCtor1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( e1 );
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
TEST( copyCtor2 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	MxEnumLineType e2( e1 );
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
TEST( copyCtor3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( e1 );
	int expected = 3;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 3;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::solid );
	e1 = e2;
	string expected = "solid";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineType e3( enums::LineType::dashed );
	e2 = e3;
	expected = "dashed";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "solid";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "solid";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	MxEnumLineType e2( enums::LineType::dashed );
	e1 = e2;
	string expected = "dashed";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineType e3( enums::LineType::dotted );
	e2 = e3;
	expected = "dotted";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dashed";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dashed";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::dotted );
	e1 = e2;
	string expected = "dotted";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineType e3( enums::LineType::wavy );
	e2 = e3;
	expected = "wavy";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dotted";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dotted";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::wavy );
	e1 = e2;
	string expected = "wavy";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumLineType e3( enums::LineType::solid );
	e2 = e3;
	expected = "solid";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wavy";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wavy";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	CHECK( e1.getValue() == enums::LineType::solid )
}
TEST( getValue1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	CHECK( e1.getValue() == enums::LineType::dashed )
}
TEST( getValue2 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	CHECK( e1.getValue() == enums::LineType::dotted )
}
TEST( getValue3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	CHECK( e1.getValue() == enums::LineType::wavy )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	string expected = "solid";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	string expected = "dashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	string expected = "wavy";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	string expected = "solid";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	string expected = "dashed";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	string expected = "dotted";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	string expected = "wavy";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	e1.setValue( enums::LineType::solid );
	CHECK( e1.getValue() == enums::LineType::solid )
}
TEST( setValue1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	e1.setValue( enums::LineType::dashed );
	CHECK( e1.getValue() == enums::LineType::dashed )
}
TEST( setValue2 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	e1.setValue( enums::LineType::dotted );
	CHECK( e1.getValue() == enums::LineType::dotted )
}
TEST( setValue3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	e1.setValue( enums::LineType::wavy );
	CHECK( e1.getValue() == enums::LineType::wavy )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::LineType::dashed )
}
TEST( setValueInt0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::LineType::dashed )
}
TEST( setValueInt1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::LineType::dotted )
}
TEST( setValueInt2 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::LineType::wavy )
}
TEST( setValueInt3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::LineType::solid )
}
TEST( setValueInt4 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::LineType::dotted )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::LineType::dashed )
}
TEST( fromString0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	CHECK( e1.fromString( "dashed" ) )
	CHECK( e1.getValue() == enums::LineType::dashed )
}
TEST( fromString1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	CHECK( e1.fromString( "dotted" ) )
	CHECK( e1.getValue() == enums::LineType::dotted )
}
TEST( fromString2 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	CHECK( e1.fromString( "wavy" ) )
	CHECK( e1.getValue() == enums::LineType::wavy )
}
TEST( fromString3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	CHECK( e1.fromString( "solid" ) )
	CHECK( e1.getValue() == enums::LineType::solid )
}
TEST( fromString4 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dotted );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::LineType::dotted )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	string expected = "line-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	string expected = "line-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	string expected = "line-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	string expected = "MxEnumLineType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	string expected = "MxEnumLineType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	string expected = "MxEnumLineType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	string expected = "The line-type type distinguishes between solid, dashed, dotted, and wavy lines.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	string expected = "The line-type type distinguishes between solid, dashed, dotted, and wavy lines.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	string expected = "The line-type type distinguishes between solid, dashed, dotted, and wavy lines.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	stringstream ss;
	e1.stream( ss );
	string expected = "solid";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "solid";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	stringstream ss;
	e1.stream( ss );
	string expected = "dashed";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "dashed";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	stringstream ss;
	e1.stream( ss );
	string expected = "wavy";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "wavy";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	stringstream ss;
	ss << e1;
	string expected = "solid";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "solid";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	stringstream ss;
	ss << e1;
	string expected = "dashed";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "dashed";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	stringstream ss;
	ss << e1;
	string expected = "wavy";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "wavy";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::solid );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::dashed );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "wavy";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wavy";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "solid";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "solid";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "solid";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "solid";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "dashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashed";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "wavy";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wavy";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "dashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashed";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "solid";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "solid";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "solid";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "solid";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "dashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashed";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "wavy";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wavy";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "wavy";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "solid";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wavy";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashed";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "solid";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wavy";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "dashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "solid";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "wavy";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "dashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wavy";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "solid";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashed";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::solid );
	MxEnumLineType e2( enums::LineType::solid );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "solid";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashed";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::dashed );
	MxEnumLineType e2( enums::LineType::dashed );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "dashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumLineType )
{
	MxEnumLineType e1( enums::LineType::wavy );
	MxEnumLineType e2( enums::LineType::wavy );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "wavy";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "solid";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

