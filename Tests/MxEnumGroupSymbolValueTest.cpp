#include "TestHarness.h"
#include "MxEnumGroupSymbolValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::bracket );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( e1 );
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
TEST( copyCtor1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( e1 );
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
TEST( copyCtor2 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	MxEnumGroupSymbolValue e2( e1 );
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
TEST( copyCtor3 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::bracket );
	MxEnumGroupSymbolValue e2( e1 );
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
TEST( copyCtor4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( e1 );
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
TEST( assignmentOp0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumGroupSymbolValue e3( enums::GroupSymbolValue::brace );
	e2 = e3;
	expected = "brace";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	e1 = e2;
	string expected = "brace";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumGroupSymbolValue e3( enums::GroupSymbolValue::line );
	e2 = e3;
	expected = "line";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "brace";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "brace";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::bracket );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::line );
	e1 = e2;
	string expected = "line";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumGroupSymbolValue e3( enums::GroupSymbolValue::bracket );
	e2 = e3;
	expected = "bracket";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "line";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "line";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::bracket );
	e1 = e2;
	string expected = "bracket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumGroupSymbolValue e3( enums::GroupSymbolValue::square );
	e2 = e3;
	expected = "square";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bracket";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bracket";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	e1 = e2;
	string expected = "square";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumGroupSymbolValue e3( enums::GroupSymbolValue::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "square";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "square";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	CHECK( e1.getValue() == enums::GroupSymbolValue::none )
}
TEST( getValue1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	CHECK( e1.getValue() == enums::GroupSymbolValue::brace )
}
TEST( getValue2 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	CHECK( e1.getValue() == enums::GroupSymbolValue::line )
}
TEST( getValue3 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::bracket );
	CHECK( e1.getValue() == enums::GroupSymbolValue::bracket )
}
TEST( getValue4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	CHECK( e1.getValue() == enums::GroupSymbolValue::square )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::bracket );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	string expected = "brace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	string expected = "line";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::bracket );
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	string expected = "brace";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	string expected = "line";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::bracket );
	string expected = "bracket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	string expected = "square";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	e1.setValue( enums::GroupSymbolValue::none );
	CHECK( e1.getValue() == enums::GroupSymbolValue::none )
}
TEST( setValue1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	e1.setValue( enums::GroupSymbolValue::brace );
	CHECK( e1.getValue() == enums::GroupSymbolValue::brace )
}
TEST( setValue2 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::bracket );
	e1.setValue( enums::GroupSymbolValue::line );
	CHECK( e1.getValue() == enums::GroupSymbolValue::line )
}
TEST( setValue3 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	e1.setValue( enums::GroupSymbolValue::bracket );
	CHECK( e1.getValue() == enums::GroupSymbolValue::bracket )
}
TEST( setValue4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	e1.setValue( enums::GroupSymbolValue::square );
	CHECK( e1.getValue() == enums::GroupSymbolValue::square )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::brace )
}
TEST( setValueInt0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::brace )
}
TEST( setValueInt1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::bracket );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::line )
}
TEST( setValueInt2 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::bracket )
}
TEST( setValueInt3 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	CHECK( e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::square )
}
TEST( setValueInt4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::none )
}
TEST( setValueInt5 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	CHECK( ! e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::line )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::brace )
}
TEST( fromString0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	CHECK( e1.fromString( "brace" ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::brace )
}
TEST( fromString1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::bracket );
	CHECK( e1.fromString( "line" ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::line )
}
TEST( fromString2 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	CHECK( e1.fromString( "bracket" ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::bracket )
}
TEST( fromString3 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	CHECK( e1.fromString( "square" ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::square )
}
TEST( fromString4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::none )
}
TEST( fromString5 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::line );
	CHECK( ! e1.fromString( "crazyErrantValue5" ) )
	CHECK( e1.getValue() == enums::GroupSymbolValue::line )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	string expected = "group-symbol-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	string expected = "group-symbol-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	string expected = "group-symbol-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	string expected = "MxEnumGroupSymbolValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	string expected = "MxEnumGroupSymbolValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	string expected = "MxEnumGroupSymbolValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	string expected = "The group-symbol-value type indicates how the symbol for a group is indicated in the score. The default value is none.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	string expected = "The group-symbol-value type indicates how the symbol for a group is indicated in the score. The default value is none.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	string expected = "The group-symbol-value type indicates how the symbol for a group is indicated in the score. The default value is none.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
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
TEST( stream1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	stringstream ss;
	e1.stream( ss );
	string expected = "brace";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "brace";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	stringstream ss;
	e1.stream( ss );
	string expected = "square";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "square";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
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
TEST( streamingOperator1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	stringstream ss;
	ss << e1;
	string expected = "brace";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "brace";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	stringstream ss;
	ss << e1;
	string expected = "square";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "square";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_4equals4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_4equals4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_4islessthanoreq4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan0 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan1 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_4isgreaterthan4 , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
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
TEST( incrementPre_start4_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
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
TEST( incrementPre_start1_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "brace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "brace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "brace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "brace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "line";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "line";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
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
TEST( decrementPre_start0_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
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
TEST( decrementPre_start1_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "brace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "brace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "line";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "brace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "brace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "line";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "line";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_4times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "brace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::none );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "brace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::brace );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::brace );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "brace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "line";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_5times , MxEnumGroupSymbolValue )
{
	MxEnumGroupSymbolValue e1( enums::GroupSymbolValue::square );
	MxEnumGroupSymbolValue e2( enums::GroupSymbolValue::square );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

