#include "TestHarness.h"
#include "MxEnumBeamValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumBeamValue )
{
	MxEnumBeamValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::forwardHook );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( e1 );
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
TEST( copyCtor1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( e1 );
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
TEST( copyCtor2 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	MxEnumBeamValue e2( e1 );
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
TEST( copyCtor3 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::forwardHook );
	MxEnumBeamValue e2( e1 );
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
TEST( copyCtor4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( e1 );
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
TEST( assignmentOp0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	e1 = e2;
	string expected = "begin";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeamValue e3( enums::BeamValue::continue_ );
	e2 = e3;
	expected = "continue";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "begin";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "begin";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	e1 = e2;
	string expected = "continue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeamValue e3( enums::BeamValue::end );
	e2 = e3;
	expected = "end";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "continue";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "continue";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::forwardHook );
	MxEnumBeamValue e2( enums::BeamValue::end );
	e1 = e2;
	string expected = "end";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeamValue e3( enums::BeamValue::forwardHook );
	e2 = e3;
	expected = "forward hook";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "end";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "end";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::forwardHook );
	e1 = e2;
	string expected = "forward hook";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeamValue e3( enums::BeamValue::backwardHook );
	e2 = e3;
	expected = "backward hook";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "forward hook";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "forward hook";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	e1 = e2;
	string expected = "backward hook";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeamValue e3( enums::BeamValue::begin );
	e2 = e3;
	expected = "begin";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "backward hook";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "backward hook";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	CHECK( e1.getValue() == enums::BeamValue::begin )
}
TEST( getValue1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	CHECK( e1.getValue() == enums::BeamValue::continue_ )
}
TEST( getValue2 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	CHECK( e1.getValue() == enums::BeamValue::end )
}
TEST( getValue3 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::forwardHook );
	CHECK( e1.getValue() == enums::BeamValue::forwardHook )
}
TEST( getValue4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	CHECK( e1.getValue() == enums::BeamValue::backwardHook )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::forwardHook );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	string expected = "end";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::forwardHook );
	string expected = "forwardHook";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	string expected = "backwardHook";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	string expected = "begin";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	string expected = "continue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	string expected = "end";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::forwardHook );
	string expected = "forward hook";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	string expected = "backward hook";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	e1.setValue( enums::BeamValue::begin );
	CHECK( e1.getValue() == enums::BeamValue::begin )
}
TEST( setValue1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	e1.setValue( enums::BeamValue::continue_ );
	CHECK( e1.getValue() == enums::BeamValue::continue_ )
}
TEST( setValue2 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::forwardHook );
	e1.setValue( enums::BeamValue::end );
	CHECK( e1.getValue() == enums::BeamValue::end )
}
TEST( setValue3 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	e1.setValue( enums::BeamValue::forwardHook );
	CHECK( e1.getValue() == enums::BeamValue::forwardHook )
}
TEST( setValue4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	e1.setValue( enums::BeamValue::backwardHook );
	CHECK( e1.getValue() == enums::BeamValue::backwardHook )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::BeamValue::continue_ )
}
TEST( setValueInt0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::BeamValue::continue_ )
}
TEST( setValueInt1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::forwardHook );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::BeamValue::end )
}
TEST( setValueInt2 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::BeamValue::forwardHook )
}
TEST( setValueInt3 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	CHECK( e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::BeamValue::backwardHook )
}
TEST( setValueInt4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::BeamValue::begin )
}
TEST( setValueInt5 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	CHECK( ! e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::BeamValue::end )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::BeamValue::continue_ )
}
TEST( fromString0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	CHECK( e1.fromString( "continue" ) )
	CHECK( e1.getValue() == enums::BeamValue::continue_ )
}
TEST( fromString1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::forwardHook );
	CHECK( e1.fromString( "end" ) )
	CHECK( e1.getValue() == enums::BeamValue::end )
}
TEST( fromString2 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	CHECK( e1.fromString( "forward hook" ) )
	CHECK( e1.getValue() == enums::BeamValue::forwardHook )
}
TEST( fromString3 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	CHECK( e1.fromString( "backward hook" ) )
	CHECK( e1.getValue() == enums::BeamValue::backwardHook )
}
TEST( fromString4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	CHECK( e1.fromString( "begin" ) )
	CHECK( e1.getValue() == enums::BeamValue::begin )
}
TEST( fromString5 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::end );
	CHECK( ! e1.fromString( "crazyErrantValue5" ) )
	CHECK( e1.getValue() == enums::BeamValue::end )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	string expected = "beam-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	string expected = "beam-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	string expected = "beam-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	string expected = "MxEnumBeamValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	string expected = "MxEnumBeamValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	string expected = "MxEnumBeamValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	string expected = "The beam-value type represents the type of beam associated with each of 8 beam levels (up to 1024th notes) available for each note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	string expected = "The beam-value type represents the type of beam associated with each of 8 beam levels (up to 1024th notes) available for each note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	string expected = "The beam-value type represents the type of beam associated with each of 8 beam levels (up to 1024th notes) available for each note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	stringstream ss;
	e1.stream( ss );
	string expected = "begin";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "begin";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
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
TEST( stream4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	stringstream ss;
	e1.stream( ss );
	string expected = "backward hook";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "backward hook";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	stringstream ss;
	ss << e1;
	string expected = "begin";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "begin";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
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
TEST( streamingOperator4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	stringstream ss;
	ss << e1;
	string expected = "backward hook";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "backward hook";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_4equals4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_4equals4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_4islessthanoreq4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan0 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan1 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_4isgreaterthan4 , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "backwardHook";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backwardHook";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "forwardHook";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forwardHook";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	for( int i = 0; i < 5; ++i )
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
TEST( incrementPre_start4_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "backwardHook";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backwardHook";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
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
TEST( decrementPre_start1_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "end";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	for( int i = 0; i < 5; ++i )
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
TEST( decrementPre_start4_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "backwardHook";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backwardHook";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "backwardHook";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forwardHook";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backwardHook";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "forwardHook";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "backwardHook";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "backwardHook";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forwardHook";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "end";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "forwardHook";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_4times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::begin );
	MxEnumBeamValue e2( enums::BeamValue::begin );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::continue_ );
	MxEnumBeamValue e2( enums::BeamValue::continue_ );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_5times , MxEnumBeamValue )
{
	MxEnumBeamValue e1( enums::BeamValue::backwardHook );
	MxEnumBeamValue e2( enums::BeamValue::backwardHook );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "backwardHook";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

