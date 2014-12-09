#include "TestHarness.h"
#include "MxEnumDegreeSymbolValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::diminished );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( e1 );
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
TEST( copyCtor1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( e1 );
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
TEST( copyCtor2 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	MxEnumDegreeSymbolValue e2( e1 );
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
TEST( copyCtor3 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::diminished );
	MxEnumDegreeSymbolValue e2( e1 );
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
TEST( copyCtor4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( e1 );
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
TEST( assignmentOp0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	e1 = e2;
	string expected = "major";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDegreeSymbolValue e3( enums::DegreeSymbolValue::minor );
	e2 = e3;
	expected = "minor";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	e1 = e2;
	string expected = "minor";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDegreeSymbolValue e3( enums::DegreeSymbolValue::augmented );
	e2 = e3;
	expected = "augmented";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::diminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::augmented );
	e1 = e2;
	string expected = "augmented";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDegreeSymbolValue e3( enums::DegreeSymbolValue::diminished );
	e2 = e3;
	expected = "diminished";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "augmented";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "augmented";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::diminished );
	e1 = e2;
	string expected = "diminished";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDegreeSymbolValue e3( enums::DegreeSymbolValue::halfDiminished );
	e2 = e3;
	expected = "half-diminished";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diminished";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diminished";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	e1 = e2;
	string expected = "half-diminished";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDegreeSymbolValue e3( enums::DegreeSymbolValue::major );
	e2 = e3;
	expected = "major";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half-diminished";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half-diminished";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	CHECK( e1.getValue() == enums::DegreeSymbolValue::major )
}
TEST( getValue1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	CHECK( e1.getValue() == enums::DegreeSymbolValue::minor )
}
TEST( getValue2 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	CHECK( e1.getValue() == enums::DegreeSymbolValue::augmented )
}
TEST( getValue3 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::diminished );
	CHECK( e1.getValue() == enums::DegreeSymbolValue::diminished )
}
TEST( getValue4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	CHECK( e1.getValue() == enums::DegreeSymbolValue::halfDiminished )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::diminished );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	string expected = "augmented";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::diminished );
	string expected = "diminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	string expected = "halfDiminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	string expected = "major";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	string expected = "minor";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	string expected = "augmented";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::diminished );
	string expected = "diminished";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	string expected = "half-diminished";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	e1.setValue( enums::DegreeSymbolValue::major );
	CHECK( e1.getValue() == enums::DegreeSymbolValue::major )
}
TEST( setValue1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	e1.setValue( enums::DegreeSymbolValue::minor );
	CHECK( e1.getValue() == enums::DegreeSymbolValue::minor )
}
TEST( setValue2 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::diminished );
	e1.setValue( enums::DegreeSymbolValue::augmented );
	CHECK( e1.getValue() == enums::DegreeSymbolValue::augmented )
}
TEST( setValue3 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	e1.setValue( enums::DegreeSymbolValue::diminished );
	CHECK( e1.getValue() == enums::DegreeSymbolValue::diminished )
}
TEST( setValue4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	e1.setValue( enums::DegreeSymbolValue::halfDiminished );
	CHECK( e1.getValue() == enums::DegreeSymbolValue::halfDiminished )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::minor )
}
TEST( setValueInt0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::minor )
}
TEST( setValueInt1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::diminished );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::augmented )
}
TEST( setValueInt2 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::diminished )
}
TEST( setValueInt3 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	CHECK( e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::halfDiminished )
}
TEST( setValueInt4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::major )
}
TEST( setValueInt5 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	CHECK( ! e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::augmented )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::minor )
}
TEST( fromString0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	CHECK( e1.fromString( "minor" ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::minor )
}
TEST( fromString1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::diminished );
	CHECK( e1.fromString( "augmented" ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::augmented )
}
TEST( fromString2 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	CHECK( e1.fromString( "diminished" ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::diminished )
}
TEST( fromString3 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	CHECK( e1.fromString( "half-diminished" ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::halfDiminished )
}
TEST( fromString4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	CHECK( e1.fromString( "major" ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::major )
}
TEST( fromString5 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::augmented );
	CHECK( ! e1.fromString( "crazyErrantValue5" ) )
	CHECK( e1.getValue() == enums::DegreeSymbolValue::augmented )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	string expected = "degree-symbol-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	string expected = "degree-symbol-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	string expected = "degree-symbol-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	string expected = "MxEnumDegreeSymbolValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	string expected = "MxEnumDegreeSymbolValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	string expected = "MxEnumDegreeSymbolValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	string expected = "The degree-symbol-value type indicates indicates that a symbol should be used in specifying the degree.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	string expected = "The degree-symbol-value type indicates indicates that a symbol should be used in specifying the degree.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	string expected = "The degree-symbol-value type indicates indicates that a symbol should be used in specifying the degree.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	stringstream ss;
	e1.stream( ss );
	string expected = "major";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "major";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	stringstream ss;
	e1.stream( ss );
	string expected = "minor";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "minor";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	stringstream ss;
	e1.stream( ss );
	string expected = "half-diminished";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "half-diminished";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	stringstream ss;
	ss << e1;
	string expected = "major";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "major";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	stringstream ss;
	ss << e1;
	string expected = "minor";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "minor";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	stringstream ss;
	ss << e1;
	string expected = "half-diminished";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "half-diminished";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_4equals4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_4equals4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_4islessthanoreq4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan0 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan1 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_4isgreaterthan4 , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "halfDiminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "halfDiminished";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "diminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminished";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "halfDiminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "halfDiminished";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "augmented";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "augmented";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "halfDiminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "halfDiminished";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "halfDiminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminished";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "halfDiminished";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "diminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "augmented";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "halfDiminished";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "halfDiminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminished";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "augmented";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "augmented";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminished";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_4times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::major );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::major );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::minor );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::minor );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "augmented";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_5times , MxEnumDegreeSymbolValue )
{
	MxEnumDegreeSymbolValue e1( enums::DegreeSymbolValue::halfDiminished );
	MxEnumDegreeSymbolValue e2( enums::DegreeSymbolValue::halfDiminished );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "halfDiminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

