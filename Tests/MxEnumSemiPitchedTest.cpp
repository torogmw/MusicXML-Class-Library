#include "TestHarness.h"
#include "MxEnumSemiPitched.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumLow );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::low );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( e1 );
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
TEST( copyCtor1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( e1 );
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
TEST( copyCtor2 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	MxEnumSemiPitched e2( e1 );
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
TEST( copyCtor3 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumLow );
	MxEnumSemiPitched e2( e1 );
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
TEST( copyCtor4 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::low );
	MxEnumSemiPitched e2( e1 );
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
TEST( copyCtor5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( e1 );
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
TEST( assignmentOp0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	e1 = e2;
	string expected = "high";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSemiPitched e3( enums::SemiPitched::mediumHigh );
	e2 = e3;
	expected = "medium-high";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "high";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "high";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	e1 = e2;
	string expected = "medium-high";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSemiPitched e3( enums::SemiPitched::medium );
	e2 = e3;
	expected = "medium";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "medium-high";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "medium-high";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumLow );
	MxEnumSemiPitched e2( enums::SemiPitched::medium );
	e1 = e2;
	string expected = "medium";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSemiPitched e3( enums::SemiPitched::mediumLow );
	e2 = e3;
	expected = "medium-low";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "medium";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "medium";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::low );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumLow );
	e1 = e2;
	string expected = "medium-low";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSemiPitched e3( enums::SemiPitched::low );
	e2 = e3;
	expected = "low";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "medium-low";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "medium-low";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::low );
	e1 = e2;
	string expected = "low";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSemiPitched e3( enums::SemiPitched::veryLow );
	e2 = e3;
	expected = "very-low";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "low";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "low";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	e1 = e2;
	string expected = "very-low";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSemiPitched e3( enums::SemiPitched::high );
	e2 = e3;
	expected = "high";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "very-low";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "very-low";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	CHECK( e1.getValue() == enums::SemiPitched::high )
}
TEST( getValue1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	CHECK( e1.getValue() == enums::SemiPitched::mediumHigh )
}
TEST( getValue2 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	CHECK( e1.getValue() == enums::SemiPitched::medium )
}
TEST( getValue4 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::low );
	CHECK( e1.getValue() == enums::SemiPitched::low )
}
TEST( getValue5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	CHECK( e1.getValue() == enums::SemiPitched::veryLow )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumLow );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::low );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	string expected = "high";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	string expected = "mediumHigh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumLow );
	string expected = "mediumLow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::low );
	string expected = "low";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	string expected = "veryLow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	string expected = "high";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	string expected = "medium-high";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	string expected = "medium";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumLow );
	string expected = "medium-low";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::low );
	string expected = "low";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	string expected = "very-low";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	e1.setValue( enums::SemiPitched::high );
	CHECK( e1.getValue() == enums::SemiPitched::high )
}
TEST( setValue1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	e1.setValue( enums::SemiPitched::mediumHigh );
	CHECK( e1.getValue() == enums::SemiPitched::mediumHigh )
}
TEST( setValue2 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumLow );
	e1.setValue( enums::SemiPitched::medium );
	CHECK( e1.getValue() == enums::SemiPitched::medium )
}
TEST( setValue4 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	e1.setValue( enums::SemiPitched::low );
	CHECK( e1.getValue() == enums::SemiPitched::low )
}
TEST( setValue5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	e1.setValue( enums::SemiPitched::veryLow );
	CHECK( e1.getValue() == enums::SemiPitched::veryLow )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::SemiPitched::mediumHigh )
}
TEST( setValueInt0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::SemiPitched::mediumHigh )
}
TEST( setValueInt1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumLow );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::SemiPitched::medium )
}
TEST( setValueInt2 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::low );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::SemiPitched::mediumLow )
}
TEST( setValueInt4 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	CHECK( e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::SemiPitched::veryLow )
}
TEST( setValueInt5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::SemiPitched::high )
}
TEST( setValueInt6 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	CHECK( ! e1.setValueInt( 6 ) )
	CHECK( e1.getValue() == enums::SemiPitched::medium )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::SemiPitched::mediumHigh )
}
TEST( fromString0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	CHECK( e1.fromString( "medium-high" ) )
	CHECK( e1.getValue() == enums::SemiPitched::mediumHigh )
}
TEST( fromString1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumLow );
	CHECK( e1.fromString( "medium" ) )
	CHECK( e1.getValue() == enums::SemiPitched::medium )
}
TEST( fromString2 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::low );
	CHECK( e1.fromString( "medium-low" ) )
	CHECK( e1.getValue() == enums::SemiPitched::mediumLow )
}
TEST( fromString3 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	CHECK( e1.fromString( "low" ) )
	CHECK( e1.getValue() == enums::SemiPitched::low )
}
TEST( fromString4 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	CHECK( e1.fromString( "very-low" ) )
	CHECK( e1.getValue() == enums::SemiPitched::veryLow )
}
TEST( fromString5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	CHECK( e1.fromString( "high" ) )
	CHECK( e1.getValue() == enums::SemiPitched::high )
}
TEST( fromString6 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::medium );
	CHECK( ! e1.fromString( "crazyErrantValue6" ) )
	CHECK( e1.getValue() == enums::SemiPitched::medium )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	int expected = 6;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	int expected = 6;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	int expected = 6;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	string expected = "semi-pitched";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	string expected = "semi-pitched";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	string expected = "semi-pitched";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	string expected = "MxEnumSemiPitched";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	string expected = "MxEnumSemiPitched";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	string expected = "MxEnumSemiPitched";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	string expected = "The semi-pitched type represents categories of indefinite pitch for percussion instruments.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	string expected = "The semi-pitched type represents categories of indefinite pitch for percussion instruments.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	string expected = "The semi-pitched type represents categories of indefinite pitch for percussion instruments.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	stringstream ss;
	e1.stream( ss );
	string expected = "high";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "high";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	stringstream ss;
	e1.stream( ss );
	string expected = "medium-high";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "medium-high";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	stringstream ss;
	e1.stream( ss );
	string expected = "very-low";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "very-low";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	stringstream ss;
	ss << e1;
	string expected = "high";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "high";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	stringstream ss;
	ss << e1;
	string expected = "medium-high";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "medium-high";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	stringstream ss;
	ss << e1;
	string expected = "very-low";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "very-low";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_5equals0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_5equals1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_5equals5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_5equals0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_5equals1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_5equals5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_5islessthanoreq0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_5islessthanoreq1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_5islessthanoreq5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthanoreq0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthanoreq1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthanoreq5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_5islessthan0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_5islessthan1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_5islessthan5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthan0 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthan1 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_5isgreaterthan5 , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "veryLow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "veryLow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "high";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "high";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start5_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "low";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "low";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "high";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "high";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "mediumHigh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mediumHigh";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start5_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "veryLow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "veryLow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "mediumHigh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mediumHigh";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "medium";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start5_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "high";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "high";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "high";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "high";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "mediumHigh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mediumHigh";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start5_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "veryLow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "veryLow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "veryLow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "low";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "high";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "veryLow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start5_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "low";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mediumLow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "high";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "veryLow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "mediumHigh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "high";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start5_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "veryLow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "low";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "mediumHigh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "medium";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mediumLow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start5_5times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "high";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mediumHigh";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::high );
	MxEnumSemiPitched e2( enums::SemiPitched::high );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "high";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mediumHigh";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::mediumHigh );
	MxEnumSemiPitched e2( enums::SemiPitched::mediumHigh );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "mediumHigh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "medium";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start5_6times , MxEnumSemiPitched )
{
	MxEnumSemiPitched e1( enums::SemiPitched::veryLow );
	MxEnumSemiPitched e2( enums::SemiPitched::veryLow );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "veryLow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "high";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

