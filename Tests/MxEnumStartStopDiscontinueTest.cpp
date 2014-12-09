#include "TestHarness.h"
#include "MxEnumStartStopDiscontinue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( e1 );
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
TEST( copyCtor1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( e1 );
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
TEST( copyCtor2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( e1 );
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
TEST( assignmentOp0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	e1 = e2;
	string expected = "start";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopDiscontinue e3( enums::StartStopDiscontinue::stop );
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
TEST( assignmentOp1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	e1 = e2;
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopDiscontinue e3( enums::StartStopDiscontinue::discontinue );
	e2 = e3;
	expected = "discontinue";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	e1 = e2;
	string expected = "discontinue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartStopDiscontinue e3( enums::StartStopDiscontinue::start );
	e2 = e3;
	expected = "start";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "discontinue";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "discontinue";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	CHECK( e1.getValue() == enums::StartStopDiscontinue::start )
}
TEST( getValue1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	CHECK( e1.getValue() == enums::StartStopDiscontinue::stop )
}
TEST( getValue2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	CHECK( e1.getValue() == enums::StartStopDiscontinue::discontinue )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	string expected = "discontinue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	string expected = "start";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	string expected = "discontinue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	e1.setValue( enums::StartStopDiscontinue::start );
	CHECK( e1.getValue() == enums::StartStopDiscontinue::start )
}
TEST( setValue1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	e1.setValue( enums::StartStopDiscontinue::stop );
	CHECK( e1.getValue() == enums::StartStopDiscontinue::stop )
}
TEST( setValue2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	e1.setValue( enums::StartStopDiscontinue::discontinue );
	CHECK( e1.getValue() == enums::StartStopDiscontinue::discontinue )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StartStopDiscontinue::stop )
}
TEST( setValueInt0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StartStopDiscontinue::stop )
}
TEST( setValueInt1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StartStopDiscontinue::discontinue )
}
TEST( setValueInt2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StartStopDiscontinue::start )
}
TEST( setValueInt3 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::StartStopDiscontinue::discontinue )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StartStopDiscontinue::stop )
}
TEST( fromString0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	CHECK( e1.fromString( "stop" ) )
	CHECK( e1.getValue() == enums::StartStopDiscontinue::stop )
}
TEST( fromString1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	CHECK( e1.fromString( "discontinue" ) )
	CHECK( e1.getValue() == enums::StartStopDiscontinue::discontinue )
}
TEST( fromString2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	CHECK( e1.fromString( "start" ) )
	CHECK( e1.getValue() == enums::StartStopDiscontinue::start )
}
TEST( fromString3 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::StartStopDiscontinue::discontinue )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	string expected = "start-stop-discontinue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	string expected = "start-stop-discontinue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	string expected = "start-stop-discontinue";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	string expected = "MxEnumStartStopDiscontinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	string expected = "MxEnumStartStopDiscontinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	string expected = "MxEnumStartStopDiscontinue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	string expected = "The start-stop-discontinue type is used to specify ending types. Typically, the start type is associated with the left barline of the first measure in an ending. The stop and discontinue types are associated with the right barline of the last measure in an ending. Stop is used when the ending mark concludes with a downward jog, as is typical for first endings. Discontinue is used when there is no downward jog, as is typical for second endings that do not conclude a piece.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	string expected = "The start-stop-discontinue type is used to specify ending types. Typically, the start type is associated with the left barline of the first measure in an ending. The stop and discontinue types are associated with the right barline of the last measure in an ending. Stop is used when the ending mark concludes with a downward jog, as is typical for first endings. Discontinue is used when there is no downward jog, as is typical for second endings that do not conclude a piece.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	string expected = "The start-stop-discontinue type is used to specify ending types. Typically, the start type is associated with the left barline of the first measure in an ending. The stop and discontinue types are associated with the right barline of the last measure in an ending. Stop is used when the ending mark concludes with a downward jog, as is typical for first endings. Discontinue is used when there is no downward jog, as is typical for second endings that do not conclude a piece.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
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
TEST( stream1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
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
TEST( stream2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	stringstream ss;
	e1.stream( ss );
	string expected = "discontinue";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "discontinue";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
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
TEST( streamingOperator1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
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
TEST( streamingOperator2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	stringstream ss;
	ss << e1;
	string expected = "discontinue";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "discontinue";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "discontinue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "discontinue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
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
TEST( incrementPre_start2_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
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
TEST( incrementPre_start0_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
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
TEST( incrementPre_start1_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
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
TEST( incrementPre_start2_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "discontinue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "discontinue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
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
TEST( decrementPre_start1_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "discontinue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "discontinue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
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
TEST( decrementPre_start0_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
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
TEST( decrementPre_start1_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
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
TEST( decrementPre_start2_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "discontinue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "discontinue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "discontinue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "discontinue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
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
TEST( incrementPost_start0_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "start";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "discontinue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
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
TEST( incrementPost_start2_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "discontinue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "discontinue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "discontinue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
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
TEST( decrementPost_start0_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::start );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::start );
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
TEST( decrementPost_start1_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::stop );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::stop );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "discontinue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumStartStopDiscontinue )
{
	MxEnumStartStopDiscontinue e1( enums::StartStopDiscontinue::discontinue );
	MxEnumStartStopDiscontinue e2( enums::StartStopDiscontinue::discontinue );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "discontinue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "start";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

