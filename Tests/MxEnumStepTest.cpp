#include "TestHarness.h"
#include "MxEnumStep.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStep )
{
	MxEnumStep e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::d );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::e );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::f );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( e1 );
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
TEST( copyCtor1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( e1 );
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
TEST( copyCtor2 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	MxEnumStep e2( e1 );
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
TEST( copyCtor3 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::d );
	MxEnumStep e2( e1 );
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
TEST( copyCtor4 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::e );
	MxEnumStep e2( e1 );
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
TEST( copyCtor5 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::f );
	MxEnumStep e2( e1 );
	int expected = 5;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 6 );
	expected = 5;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 6;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( e1 );
	int expected = 6;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 6;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::a );
	e1 = e2;
	string expected = "A";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStep e3( enums::Step::b );
	e2 = e3;
	expected = "B";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "A";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "A";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	MxEnumStep e2( enums::Step::b );
	e1 = e2;
	string expected = "B";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStep e3( enums::Step::c );
	e2 = e3;
	expected = "C";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "B";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "B";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::d );
	MxEnumStep e2( enums::Step::c );
	e1 = e2;
	string expected = "C";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStep e3( enums::Step::d );
	e2 = e3;
	expected = "D";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "C";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "C";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::e );
	MxEnumStep e2( enums::Step::d );
	e1 = e2;
	string expected = "D";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStep e3( enums::Step::e );
	e2 = e3;
	expected = "E";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "D";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "D";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::f );
	MxEnumStep e2( enums::Step::e );
	e1 = e2;
	string expected = "E";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStep e3( enums::Step::f );
	e2 = e3;
	expected = "F";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "E";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "E";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::f );
	e1 = e2;
	string expected = "F";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStep e3( enums::Step::g );
	e2 = e3;
	expected = "G";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "F";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "F";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::g );
	e1 = e2;
	string expected = "G";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStep e3( enums::Step::a );
	e2 = e3;
	expected = "A";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "G";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "G";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	CHECK( e1.getValue() == enums::Step::a )
}
TEST( getValue1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	CHECK( e1.getValue() == enums::Step::b )
}
TEST( getValue2 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	CHECK( e1.getValue() == enums::Step::c )
}
TEST( getValue5 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::f );
	CHECK( e1.getValue() == enums::Step::f )
}
TEST( getValue6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	CHECK( e1.getValue() == enums::Step::g )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::d );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::e );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::f );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	string expected = "a";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	string expected = "b";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	string expected = "c";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::d );
	string expected = "d";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::e );
	string expected = "e";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::f );
	string expected = "f";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	string expected = "A";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	string expected = "B";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	string expected = "C";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::d );
	string expected = "D";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::e );
	string expected = "E";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::f );
	string expected = "F";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	string expected = "G";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	e1.setValue( enums::Step::a );
	CHECK( e1.getValue() == enums::Step::a )
}
TEST( setValue1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	e1.setValue( enums::Step::b );
	CHECK( e1.getValue() == enums::Step::b )
}
TEST( setValue2 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::d );
	e1.setValue( enums::Step::c );
	CHECK( e1.getValue() == enums::Step::c )
}
TEST( setValue5 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	e1.setValue( enums::Step::f );
	CHECK( e1.getValue() == enums::Step::f )
}
TEST( setValue6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	e1.setValue( enums::Step::g );
	CHECK( e1.getValue() == enums::Step::g )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Step::b )
}
TEST( setValueInt0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Step::b )
}
TEST( setValueInt1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::d );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Step::c )
}
TEST( setValueInt2 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::e );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Step::d )
}
TEST( setValueInt5 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	CHECK( e1.setValueInt( 6 ) )
	CHECK( e1.getValue() == enums::Step::g )
}
TEST( setValueInt6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Step::a )
}
TEST( setValueInt7 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	CHECK( ! e1.setValueInt( 7 ) )
	CHECK( e1.getValue() == enums::Step::c )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Step::b )
}
TEST( fromString0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	CHECK( e1.fromString( "B" ) )
	CHECK( e1.getValue() == enums::Step::b )
}
TEST( fromString1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::d );
	CHECK( e1.fromString( "C" ) )
	CHECK( e1.getValue() == enums::Step::c )
}
TEST( fromString2 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::e );
	CHECK( e1.fromString( "D" ) )
	CHECK( e1.getValue() == enums::Step::d )
}
TEST( fromString3 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::f );
	CHECK( e1.fromString( "E" ) )
	CHECK( e1.getValue() == enums::Step::e )
}
TEST( fromString4 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	CHECK( e1.fromString( "F" ) )
	CHECK( e1.getValue() == enums::Step::f )
}
TEST( fromString5 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	CHECK( e1.fromString( "G" ) )
	CHECK( e1.getValue() == enums::Step::g )
}
TEST( fromString6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	CHECK( e1.fromString( "A" ) )
	CHECK( e1.getValue() == enums::Step::a )
}
TEST( fromString7 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::c );
	CHECK( ! e1.fromString( "crazyErrantValue7" ) )
	CHECK( e1.getValue() == enums::Step::c )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	string expected = "step";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	string expected = "step";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	string expected = "step";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	string expected = "MxEnumStep";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	string expected = "MxEnumStep";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	string expected = "MxEnumStep";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	string expected = "The step type represents a step of the diatonic scale, represented using the English letters A through G.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	string expected = "The step type represents a step of the diatonic scale, represented using the English letters A through G.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	string expected = "The step type represents a step of the diatonic scale, represented using the English letters A through G.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	stringstream ss;
	e1.stream( ss );
	string expected = "A";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "A";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	stringstream ss;
	e1.stream( ss );
	string expected = "B";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "B";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	stringstream ss;
	e1.stream( ss );
	string expected = "G";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "G";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	stringstream ss;
	ss << e1;
	string expected = "A";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "A";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	stringstream ss;
	ss << e1;
	string expected = "B";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "B";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	stringstream ss;
	ss << e1;
	string expected = "G";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "G";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::a );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::a );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::b );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::b );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_6equals0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::g );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_6equals1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::g );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_6equals6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::a );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::a );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::b );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::b );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_6equals0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::g );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_6equals1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::g );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_6equals6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::a );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_6islessthanoreq0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::a );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::b );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_6islessthanoreq1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::b );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::g );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::g );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_6islessthanoreq6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::a );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::a );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::b );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::b );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::g );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::g );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::a );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::a );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::b );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::b );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::g );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::g );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::a );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthan0 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::a );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::b );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthan1 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::b );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::g );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::g );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_6isgreaterthan6 , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "g";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "a";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "a";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start6_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "f";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "f";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "a";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "a";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "b";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "b";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start6_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "g";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "b";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "b";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "c";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "c";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start6_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "a";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "a";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "a";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "a";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "b";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "b";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start6_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "g";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "f";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "a";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "g";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start6_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "f";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "e";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "a";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "g";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "b";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "a";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start6_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "f";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "b";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "c";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "c";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "d";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start6_6times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "a";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "b";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::a );
	MxEnumStep e2( enums::Step::a );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "a";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "b";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::b );
	MxEnumStep e2( enums::Step::b );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "b";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "c";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start6_7times , MxEnumStep )
{
	MxEnumStep e1( enums::Step::g );
	MxEnumStep e2( enums::Step::g );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "a";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

