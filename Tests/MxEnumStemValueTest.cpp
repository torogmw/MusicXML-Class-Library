#include "TestHarness.h"
#include "MxEnumStemValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStemValue )
{
	MxEnumStemValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( e1 );
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
TEST( copyCtor1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( e1 );
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
TEST( copyCtor2 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	MxEnumStemValue e2( e1 );
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
TEST( copyCtor3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( e1 );
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
TEST( assignmentOp0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::down );
	e1 = e2;
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStemValue e3( enums::StemValue::up );
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
TEST( assignmentOp1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	MxEnumStemValue e2( enums::StemValue::up );
	e1 = e2;
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStemValue e3( enums::StemValue::double_ );
	e2 = e3;
	expected = "double";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "up";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "up";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::double_ );
	e1 = e2;
	string expected = "double";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStemValue e3( enums::StemValue::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStemValue e3( enums::StemValue::down );
	e2 = e3;
	expected = "down";
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
TEST( getValue0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	CHECK( e1.getValue() == enums::StemValue::down )
}
TEST( getValue1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	CHECK( e1.getValue() == enums::StemValue::up )
}
TEST( getValue2 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	CHECK( e1.getValue() == enums::StemValue::double_ )
}
TEST( getValue3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	CHECK( e1.getValue() == enums::StemValue::none )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	string expected = "double";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	e1.setValue( enums::StemValue::down );
	CHECK( e1.getValue() == enums::StemValue::down )
}
TEST( setValue1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	e1.setValue( enums::StemValue::up );
	CHECK( e1.getValue() == enums::StemValue::up )
}
TEST( setValue2 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	e1.setValue( enums::StemValue::double_ );
	CHECK( e1.getValue() == enums::StemValue::double_ )
}
TEST( setValue3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	e1.setValue( enums::StemValue::none );
	CHECK( e1.getValue() == enums::StemValue::none )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StemValue::up )
}
TEST( setValueInt0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StemValue::up )
}
TEST( setValueInt1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StemValue::double_ )
}
TEST( setValueInt2 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::StemValue::none )
}
TEST( setValueInt3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StemValue::down )
}
TEST( setValueInt4 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::StemValue::double_ )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StemValue::up )
}
TEST( fromString0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	CHECK( e1.fromString( "up" ) )
	CHECK( e1.getValue() == enums::StemValue::up )
}
TEST( fromString1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	CHECK( e1.fromString( "double" ) )
	CHECK( e1.getValue() == enums::StemValue::double_ )
}
TEST( fromString2 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::StemValue::none )
}
TEST( fromString3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	CHECK( e1.fromString( "down" ) )
	CHECK( e1.getValue() == enums::StemValue::down )
}
TEST( fromString4 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::double_ );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::StemValue::double_ )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	string expected = "stem-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	string expected = "stem-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	string expected = "stem-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	string expected = "MxEnumStemValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	string expected = "MxEnumStemValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	string expected = "MxEnumStemValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	string expected = "The stem type represents the notated stem direction.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	string expected = "The stem type represents the notated stem direction.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	string expected = "The stem type represents the notated stem direction.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
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
TEST( stream1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
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
TEST( stream3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
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
TEST( streamingOperator0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
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
TEST( streamingOperator1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
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
TEST( streamingOperator3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
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
TEST( equalsEquals_true_0equals0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::down );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::up );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPre_start1_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPre_start3_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	for( int i = 0; i < 4; ++i )
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
TEST( incrementPre_start1_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
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
TEST( incrementPre_start3_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
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
TEST( decrementPre_start0_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPre_start1_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPre_start0_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
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
TEST( decrementPre_start1_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
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
TEST( decrementPre_start3_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	for( int i = 0; i < 4; ++i )
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
TEST( incrementPost_start0_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	for( int i = 0; i < 4; ++i )
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
TEST( incrementPost_start3_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "double_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPost_start0_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::down );
	MxEnumStemValue e2( enums::StemValue::down );
	for( int i = 0; i < 4; ++i )
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
TEST( decrementPost_start1_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::up );
	MxEnumStemValue e2( enums::StemValue::up );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "double_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumStemValue )
{
	MxEnumStemValue e1( enums::StemValue::none );
	MxEnumStemValue e2( enums::StemValue::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

