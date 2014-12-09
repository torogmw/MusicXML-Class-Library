#include "TestHarness.h"
#include "MxEnumStartStopChangeContinue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( e1 );
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
TEST( copyCtor1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( e1 );
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
TEST( copyCtor2 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	MxEnumStartStopChangeContinue e2( e1 );
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
TEST( copyCtor3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( e1 );
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
TEST( assignmentOp0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	e1 = e2;
	string expected = "start";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopChangeContinue e3( enums::StartStopChangeContinue::stop );
	e2 = e3;
	expected = "stop";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "start";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "start";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	e1 = e2;
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopChangeContinue e3( enums::StartStopChangeContinue::change );
	e2 = e3;
	expected = "change";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::change );
	e1 = e2;
	string expected = "change";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopChangeContinue e3( enums::StartStopChangeContinue::continue_ );
	e2 = e3;
	expected = "continue";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "change";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "change";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	e1 = e2;
	string expected = "continue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopChangeContinue e3( enums::StartStopChangeContinue::start );
	e2 = e3;
	expected = "start";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "continue";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "continue";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	CHECK( e1.getValue() == enums::StartStopChangeContinue::start )
}
TEST( getValue1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	CHECK( e1.getValue() == enums::StartStopChangeContinue::stop )
}
TEST( getValue2 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	CHECK( e1.getValue() == enums::StartStopChangeContinue::change )
}
TEST( getValue3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	CHECK( e1.getValue() == enums::StartStopChangeContinue::continue_ )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	string expected = "change";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	string expected = "start";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	string expected = "change";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	string expected = "continue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	e1.setValue( enums::StartStopChangeContinue::start );
	CHECK( e1.getValue() == enums::StartStopChangeContinue::start )
}
TEST( setValue1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	e1.setValue( enums::StartStopChangeContinue::stop );
	CHECK( e1.getValue() == enums::StartStopChangeContinue::stop )
}
TEST( setValue2 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	e1.setValue( enums::StartStopChangeContinue::change );
	CHECK( e1.getValue() == enums::StartStopChangeContinue::change )
}
TEST( setValue3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	e1.setValue( enums::StartStopChangeContinue::continue_ );
	CHECK( e1.getValue() == enums::StartStopChangeContinue::continue_ )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::stop )
}
TEST( setValueInt0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::stop )
}
TEST( setValueInt1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::change )
}
TEST( setValueInt2 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::continue_ )
}
TEST( setValueInt3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::start )
}
TEST( setValueInt4 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::change )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::stop )
}
TEST( fromString0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	CHECK( e1.fromString( "stop" ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::stop )
}
TEST( fromString1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	CHECK( e1.fromString( "change" ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::change )
}
TEST( fromString2 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	CHECK( e1.fromString( "continue" ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::continue_ )
}
TEST( fromString3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	CHECK( e1.fromString( "start" ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::start )
}
TEST( fromString4 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::change );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::StartStopChangeContinue::change )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	string expected = "start-stop-change-continue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	string expected = "start-stop-change-continue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	string expected = "start-stop-change-continue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	string expected = "MxEnumStartStopChangeContinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	string expected = "MxEnumStartStopChangeContinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	string expected = "MxEnumStartStopChangeContinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	string expected = "The start-stop-change-continue type is used to distinguish types of pedal directions.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	string expected = "The start-stop-change-continue type is used to distinguish types of pedal directions.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	string expected = "The start-stop-change-continue type is used to distinguish types of pedal directions.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	stringstream ss;
	e1.stream( ss );
	string expected = "start";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "start";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	stringstream ss;
	e1.stream( ss );
	string expected = "stop";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "stop";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	stringstream ss;
	e1.stream( ss );
	string expected = "continue";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "continue";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	stringstream ss;
	ss << e1;
	string expected = "start";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "start";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	stringstream ss;
	ss << e1;
	string expected = "stop";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "stop";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	stringstream ss;
	ss << e1;
	string expected = "continue";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "continue";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "change";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "change";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "change";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "change";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "change";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "change";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "change";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "change";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "change";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::start );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::start );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::stop );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::stop );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "change";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumStartStopChangeContinue )
{
	MxEnumStartStopChangeContinue e1( enums::StartStopChangeContinue::continue_ );
	MxEnumStartStopChangeContinue e2( enums::StartStopChangeContinue::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

