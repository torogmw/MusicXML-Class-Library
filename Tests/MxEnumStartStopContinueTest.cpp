#include "TestHarness.h"
#include "MxEnumStartStopContinue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( e1 );
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
TEST( copyCtor1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( e1 );
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
TEST( copyCtor2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( e1 );
	int expected = 2;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 2;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	e1 = e2;
	string expected = "start";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopContinue e3( enums::StartStopContinue::stop );
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
TEST( assignmentOp1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	e1 = e2;
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopContinue e3( enums::StartStopContinue::continue_ );
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
TEST( assignmentOp2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	e1 = e2;
	string expected = "continue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopContinue e3( enums::StartStopContinue::start );
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
TEST( getValue0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	CHECK( e1.getValue() == enums::StartStopContinue::start )
}
TEST( getValue1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	CHECK( e1.getValue() == enums::StartStopContinue::stop )
}
TEST( getValue2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	CHECK( e1.getValue() == enums::StartStopContinue::continue_ )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	string expected = "start";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	string expected = "continue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	e1.setValue( enums::StartStopContinue::start );
	CHECK( e1.getValue() == enums::StartStopContinue::start )
}
TEST( setValue1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	e1.setValue( enums::StartStopContinue::stop );
	CHECK( e1.getValue() == enums::StartStopContinue::stop )
}
TEST( setValue2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	e1.setValue( enums::StartStopContinue::continue_ );
	CHECK( e1.getValue() == enums::StartStopContinue::continue_ )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StartStopContinue::stop )
}
TEST( setValueInt0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StartStopContinue::stop )
}
TEST( setValueInt1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StartStopContinue::continue_ )
}
TEST( setValueInt2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StartStopContinue::start )
}
TEST( setValueInt3 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::StartStopContinue::continue_ )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StartStopContinue::stop )
}
TEST( fromString0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	CHECK( e1.fromString( "stop" ) )
	CHECK( e1.getValue() == enums::StartStopContinue::stop )
}
TEST( fromString1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	CHECK( e1.fromString( "continue" ) )
	CHECK( e1.getValue() == enums::StartStopContinue::continue_ )
}
TEST( fromString2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	CHECK( e1.fromString( "start" ) )
	CHECK( e1.getValue() == enums::StartStopContinue::start )
}
TEST( fromString3 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::StartStopContinue::continue_ )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	string expected = "start-stop-continue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	string expected = "start-stop-continue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	string expected = "start-stop-continue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	string expected = "MxEnumStartStopContinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	string expected = "MxEnumStartStopContinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	string expected = "MxEnumStartStopContinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	string expected = "The start-stop-continue type is used for an attribute of musical elements that can either start or stop, but also need to refer to an intermediate point in the symbol, as for complex slurs or for formatting of symbols across system breaks. The values of start, stop, and continue refer to how an element appears in musical score order, not in MusicXML document order. An element with a stop attribute may precede the corresponding element with a start attribute within a MusicXML document. This is particularly common in multi-staff music. For example, the stopping point for a slur may appear in staff 1 before the starting point for the slur appears in staff 2 later in the document.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	string expected = "The start-stop-continue type is used for an attribute of musical elements that can either start or stop, but also need to refer to an intermediate point in the symbol, as for complex slurs or for formatting of symbols across system breaks. The values of start, stop, and continue refer to how an element appears in musical score order, not in MusicXML document order. An element with a stop attribute may precede the corresponding element with a start attribute within a MusicXML document. This is particularly common in multi-staff music. For example, the stopping point for a slur may appear in staff 1 before the starting point for the slur appears in staff 2 later in the document.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	string expected = "The start-stop-continue type is used for an attribute of musical elements that can either start or stop, but also need to refer to an intermediate point in the symbol, as for complex slurs or for formatting of symbols across system breaks. The values of start, stop, and continue refer to how an element appears in musical score order, not in MusicXML document order. An element with a stop attribute may precede the corresponding element with a start attribute within a MusicXML document. This is particularly common in multi-staff music. For example, the stopping point for a slur may appear in staff 1 before the starting point for the slur appears in staff 2 later in the document.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
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
TEST( stream1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
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
TEST( stream2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
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
TEST( streamingOperator0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
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
TEST( streamingOperator1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
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
TEST( streamingOperator2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
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
TEST( equalsEquals_true_0equals0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPre_start1_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPre_start2_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPre_start0_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
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
TEST( incrementPre_start1_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
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
TEST( incrementPre_start2_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
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
TEST( decrementPre_start0_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPre_start1_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPre_start2_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPre_start0_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
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
TEST( decrementPre_start1_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
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
TEST( decrementPre_start2_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPost_start0_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPost_start1_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPost_start2_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPost_start0_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
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
TEST( incrementPost_start1_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPost_start2_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
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
TEST( decrementPost_start0_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPost_start1_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPost_start2_2times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPost_start0_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::start );
	MxEnumStartStopContinue e2( enums::StartStopContinue::start );
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
TEST( decrementPost_start1_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::stop );
	MxEnumStartStopContinue e2( enums::StartStopContinue::stop );
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
TEST( decrementPost_start2_3times , MxEnumStartStopContinue )
{
	MxEnumStartStopContinue e1( enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue e2( enums::StartStopContinue::continue_ );
	for( int i = 0; i < 3; ++i )
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

