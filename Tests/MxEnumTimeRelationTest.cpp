#include "TestHarness.h"
#include "MxEnumTimeRelation.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::slash );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::space );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( e1 );
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
TEST( copyCtor1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( e1 );
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
TEST( copyCtor2 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	MxEnumTimeRelation e2( e1 );
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
TEST( copyCtor3 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::slash );
	MxEnumTimeRelation e2( e1 );
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
TEST( copyCtor4 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::space );
	MxEnumTimeRelation e2( e1 );
	int expected = 4;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 5 );
	expected = 4;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 5;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( e1 );
	int expected = 5;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 5;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	e1 = e2;
	string expected = "parentheses";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeRelation e3( enums::TimeRelation::bracket );
	e2 = e3;
	expected = "bracket";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "parentheses";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "parentheses";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	e1 = e2;
	string expected = "bracket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeRelation e3( enums::TimeRelation::equals );
	e2 = e3;
	expected = "equals";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bracket";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bracket";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::slash );
	MxEnumTimeRelation e2( enums::TimeRelation::equals );
	e1 = e2;
	string expected = "equals";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeRelation e3( enums::TimeRelation::slash );
	e2 = e3;
	expected = "slash";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "equals";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "equals";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::space );
	MxEnumTimeRelation e2( enums::TimeRelation::slash );
	e1 = e2;
	string expected = "slash";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeRelation e3( enums::TimeRelation::space );
	e2 = e3;
	expected = "space";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slash";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slash";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::space );
	e1 = e2;
	string expected = "space";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeRelation e3( enums::TimeRelation::hyphen );
	e2 = e3;
	expected = "hyphen";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "space";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "space";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	e1 = e2;
	string expected = "hyphen";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeRelation e3( enums::TimeRelation::parentheses );
	e2 = e3;
	expected = "parentheses";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hyphen";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hyphen";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	CHECK( e1.getValue() == enums::TimeRelation::parentheses )
}
TEST( getValue1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	CHECK( e1.getValue() == enums::TimeRelation::bracket )
}
TEST( getValue2 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	CHECK( e1.getValue() == enums::TimeRelation::equals )
}
TEST( getValue4 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::space );
	CHECK( e1.getValue() == enums::TimeRelation::space )
}
TEST( getValue5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	CHECK( e1.getValue() == enums::TimeRelation::hyphen )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::slash );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::space );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	string expected = "parentheses";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	string expected = "equals";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::slash );
	string expected = "slash";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::space );
	string expected = "space";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	string expected = "parentheses";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	string expected = "bracket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	string expected = "equals";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::slash );
	string expected = "slash";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::space );
	string expected = "space";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	string expected = "hyphen";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	e1.setValue( enums::TimeRelation::parentheses );
	CHECK( e1.getValue() == enums::TimeRelation::parentheses )
}
TEST( setValue1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	e1.setValue( enums::TimeRelation::bracket );
	CHECK( e1.getValue() == enums::TimeRelation::bracket )
}
TEST( setValue2 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::slash );
	e1.setValue( enums::TimeRelation::equals );
	CHECK( e1.getValue() == enums::TimeRelation::equals )
}
TEST( setValue4 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	e1.setValue( enums::TimeRelation::space );
	CHECK( e1.getValue() == enums::TimeRelation::space )
}
TEST( setValue5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	e1.setValue( enums::TimeRelation::hyphen );
	CHECK( e1.getValue() == enums::TimeRelation::hyphen )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::TimeRelation::bracket )
}
TEST( setValueInt0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::TimeRelation::bracket )
}
TEST( setValueInt1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::slash );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::TimeRelation::equals )
}
TEST( setValueInt2 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::space );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::TimeRelation::slash )
}
TEST( setValueInt4 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	CHECK( e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::TimeRelation::hyphen )
}
TEST( setValueInt5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::TimeRelation::parentheses )
}
TEST( setValueInt6 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	CHECK( ! e1.setValueInt( 6 ) )
	CHECK( e1.getValue() == enums::TimeRelation::equals )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::TimeRelation::bracket )
}
TEST( fromString0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	CHECK( e1.fromString( "bracket" ) )
	CHECK( e1.getValue() == enums::TimeRelation::bracket )
}
TEST( fromString1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::slash );
	CHECK( e1.fromString( "equals" ) )
	CHECK( e1.getValue() == enums::TimeRelation::equals )
}
TEST( fromString2 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::space );
	CHECK( e1.fromString( "slash" ) )
	CHECK( e1.getValue() == enums::TimeRelation::slash )
}
TEST( fromString3 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	CHECK( e1.fromString( "space" ) )
	CHECK( e1.getValue() == enums::TimeRelation::space )
}
TEST( fromString4 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	CHECK( e1.fromString( "hyphen" ) )
	CHECK( e1.getValue() == enums::TimeRelation::hyphen )
}
TEST( fromString5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	CHECK( e1.fromString( "parentheses" ) )
	CHECK( e1.getValue() == enums::TimeRelation::parentheses )
}
TEST( fromString6 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::equals );
	CHECK( ! e1.fromString( "crazyErrantValue6" ) )
	CHECK( e1.getValue() == enums::TimeRelation::equals )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	int expected = 6;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	int expected = 6;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	int expected = 6;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	string expected = "time-relation";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	string expected = "time-relation";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	string expected = "time-relation";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	string expected = "MxEnumTimeRelation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	string expected = "MxEnumTimeRelation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	string expected = "MxEnumTimeRelation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	string expected = "The time-relation type indicates the symbol used to represent the interchangeable aspect of dual time signatures.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	string expected = "The time-relation type indicates the symbol used to represent the interchangeable aspect of dual time signatures.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	string expected = "The time-relation type indicates the symbol used to represent the interchangeable aspect of dual time signatures.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	stringstream ss;
	e1.stream( ss );
	string expected = "parentheses";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "parentheses";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	stringstream ss;
	e1.stream( ss );
	string expected = "bracket";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "bracket";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	stringstream ss;
	e1.stream( ss );
	string expected = "hyphen";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "hyphen";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	stringstream ss;
	ss << e1;
	string expected = "parentheses";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "parentheses";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	stringstream ss;
	ss << e1;
	string expected = "bracket";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "bracket";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	stringstream ss;
	ss << e1;
	string expected = "hyphen";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "hyphen";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_5equals0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_5equals1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_5equals5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_5equals0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_5equals1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_5equals5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_5islessthanoreq0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_5islessthanoreq1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_5islessthanoreq5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthanoreq0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthanoreq1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthanoreq5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_5islessthan0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_5islessthan1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_5islessthan5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthan0 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthan1 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_5isgreaterthan5 , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "parentheses";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "parentheses";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start5_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "space";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "space";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "parentheses";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "parentheses";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	for( int i = 0; i < 6; ++i )
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
TEST( incrementPre_start5_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "equals";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "equals";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start5_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "parentheses";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "parentheses";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "parentheses";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "parentheses";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start5_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "space";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "parentheses";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start5_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "space";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "slash";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "parentheses";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "parentheses";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start5_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "space";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "equals";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "equals";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "slash";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start5_5times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "parentheses";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::parentheses );
	MxEnumTimeRelation e2( enums::TimeRelation::parentheses );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "parentheses";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bracket";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::bracket );
	MxEnumTimeRelation e2( enums::TimeRelation::bracket );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "equals";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start5_6times , MxEnumTimeRelation )
{
	MxEnumTimeRelation e1( enums::TimeRelation::hyphen );
	MxEnumTimeRelation e2( enums::TimeRelation::hyphen );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "parentheses";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

