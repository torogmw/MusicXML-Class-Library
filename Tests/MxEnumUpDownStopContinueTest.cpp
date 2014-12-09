#include "TestHarness.h"
#include "MxEnumUpDownStopContinue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( e1 );
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
TEST( copyCtor1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( e1 );
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
TEST( copyCtor2 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	MxEnumUpDownStopContinue e2( e1 );
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
TEST( copyCtor3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( e1 );
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
TEST( assignmentOp0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	e1 = e2;
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumUpDownStopContinue e3( enums::UpDownStopContinue::down );
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
TEST( assignmentOp1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	e1 = e2;
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumUpDownStopContinue e3( enums::UpDownStopContinue::stop );
	e2 = e3;
	expected = "stop";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "down";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "down";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::stop );
	e1 = e2;
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumUpDownStopContinue e3( enums::UpDownStopContinue::continue_ );
	e2 = e3;
	expected = "continue";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	e1 = e2;
	string expected = "continue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumUpDownStopContinue e3( enums::UpDownStopContinue::up );
	e2 = e3;
	expected = "up";
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
TEST( getValue0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	CHECK( e1.getValue() == enums::UpDownStopContinue::up )
}
TEST( getValue1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	CHECK( e1.getValue() == enums::UpDownStopContinue::down )
}
TEST( getValue2 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	CHECK( e1.getValue() == enums::UpDownStopContinue::stop )
}
TEST( getValue3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	CHECK( e1.getValue() == enums::UpDownStopContinue::continue_ )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	string expected = "continue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	e1.setValue( enums::UpDownStopContinue::up );
	CHECK( e1.getValue() == enums::UpDownStopContinue::up )
}
TEST( setValue1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	e1.setValue( enums::UpDownStopContinue::down );
	CHECK( e1.getValue() == enums::UpDownStopContinue::down )
}
TEST( setValue2 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	e1.setValue( enums::UpDownStopContinue::stop );
	CHECK( e1.getValue() == enums::UpDownStopContinue::stop )
}
TEST( setValue3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	e1.setValue( enums::UpDownStopContinue::continue_ );
	CHECK( e1.getValue() == enums::UpDownStopContinue::continue_ )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::down )
}
TEST( setValueInt0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::down )
}
TEST( setValueInt1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::stop )
}
TEST( setValueInt2 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::continue_ )
}
TEST( setValueInt3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::up )
}
TEST( setValueInt4 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::stop )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::down )
}
TEST( fromString0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	CHECK( e1.fromString( "down" ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::down )
}
TEST( fromString1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	CHECK( e1.fromString( "stop" ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::stop )
}
TEST( fromString2 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	CHECK( e1.fromString( "continue" ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::continue_ )
}
TEST( fromString3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	CHECK( e1.fromString( "up" ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::up )
}
TEST( fromString4 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::stop );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::UpDownStopContinue::stop )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	string expected = "up-down-stop-continue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	string expected = "up-down-stop-continue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	string expected = "up-down-stop-continue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	string expected = "MxEnumUpDownStopContinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	string expected = "MxEnumUpDownStopContinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	string expected = "MxEnumUpDownStopContinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	string expected = "The up-down-stop-continue type is used for octave-shift elements, indicating the direction of the shift from their true pitched values because of printing difficulty.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	string expected = "The up-down-stop-continue type is used for octave-shift elements, indicating the direction of the shift from their true pitched values because of printing difficulty.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	string expected = "The up-down-stop-continue type is used for octave-shift elements, indicating the direction of the shift from their true pitched values because of printing difficulty.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
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
TEST( stream1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
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
TEST( stream3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
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
TEST( streamingOperator0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
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
TEST( streamingOperator1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
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
TEST( streamingOperator3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
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
TEST( equalsEquals_true_0equals0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
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
TEST( incrementPre_start1_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPre_start3_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPre_start0_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
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
TEST( incrementPre_start1_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
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
TEST( incrementPre_start3_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
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
TEST( decrementPre_start0_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
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
TEST( decrementPre_start1_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
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
TEST( decrementPre_start3_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
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
TEST( decrementPre_start0_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
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
TEST( decrementPre_start1_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
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
TEST( decrementPre_start3_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
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
TEST( incrementPost_start0_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	for( int i = 0; i < 4; ++i )
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
TEST( incrementPost_start3_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPost_start0_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::up );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::up );
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
TEST( decrementPost_start1_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::down );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::down );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumUpDownStopContinue )
{
	MxEnumUpDownStopContinue e1( enums::UpDownStopContinue::continue_ );
	MxEnumUpDownStopContinue e2( enums::UpDownStopContinue::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

