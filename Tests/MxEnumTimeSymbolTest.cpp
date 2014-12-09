#include "TestHarness.h"
#include "MxEnumTimeSymbol.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::note );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::dottedNote );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( e1 );
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
TEST( copyCtor1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( e1 );
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
TEST( copyCtor2 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	MxEnumTimeSymbol e2( e1 );
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
TEST( copyCtor3 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::note );
	MxEnumTimeSymbol e2( e1 );
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
TEST( copyCtor4 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::dottedNote );
	MxEnumTimeSymbol e2( e1 );
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
TEST( copyCtor5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( e1 );
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
TEST( assignmentOp0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	e1 = e2;
	string expected = "common";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSymbol e3( enums::TimeSymbol::cut );
	e2 = e3;
	expected = "cut";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "common";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "common";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	e1 = e2;
	string expected = "cut";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSymbol e3( enums::TimeSymbol::singleNumber );
	e2 = e3;
	expected = "single-number";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cut";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cut";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::note );
	MxEnumTimeSymbol e2( enums::TimeSymbol::singleNumber );
	e1 = e2;
	string expected = "single-number";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSymbol e3( enums::TimeSymbol::note );
	e2 = e3;
	expected = "note";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "single-number";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "single-number";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::dottedNote );
	MxEnumTimeSymbol e2( enums::TimeSymbol::note );
	e1 = e2;
	string expected = "note";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSymbol e3( enums::TimeSymbol::dottedNote );
	e2 = e3;
	expected = "dotted-note";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "note";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "note";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::dottedNote );
	e1 = e2;
	string expected = "dotted-note";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSymbol e3( enums::TimeSymbol::normal );
	e2 = e3;
	expected = "normal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dotted-note";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dotted-note";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	e1 = e2;
	string expected = "normal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSymbol e3( enums::TimeSymbol::common );
	e2 = e3;
	expected = "common";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "normal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "normal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	CHECK( e1.getValue() == enums::TimeSymbol::common )
}
TEST( getValue1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	CHECK( e1.getValue() == enums::TimeSymbol::cut )
}
TEST( getValue2 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	CHECK( e1.getValue() == enums::TimeSymbol::singleNumber )
}
TEST( getValue4 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::dottedNote );
	CHECK( e1.getValue() == enums::TimeSymbol::dottedNote )
}
TEST( getValue5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	CHECK( e1.getValue() == enums::TimeSymbol::normal )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::note );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::dottedNote );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	string expected = "common";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	string expected = "cut";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	string expected = "singleNumber";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::note );
	string expected = "note";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::dottedNote );
	string expected = "dottedNote";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	string expected = "common";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	string expected = "cut";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	string expected = "single-number";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::note );
	string expected = "note";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::dottedNote );
	string expected = "dotted-note";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	string expected = "normal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	e1.setValue( enums::TimeSymbol::common );
	CHECK( e1.getValue() == enums::TimeSymbol::common )
}
TEST( setValue1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	e1.setValue( enums::TimeSymbol::cut );
	CHECK( e1.getValue() == enums::TimeSymbol::cut )
}
TEST( setValue2 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::note );
	e1.setValue( enums::TimeSymbol::singleNumber );
	CHECK( e1.getValue() == enums::TimeSymbol::singleNumber )
}
TEST( setValue4 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	e1.setValue( enums::TimeSymbol::dottedNote );
	CHECK( e1.getValue() == enums::TimeSymbol::dottedNote )
}
TEST( setValue5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	e1.setValue( enums::TimeSymbol::normal );
	CHECK( e1.getValue() == enums::TimeSymbol::normal )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::TimeSymbol::cut )
}
TEST( setValueInt0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::TimeSymbol::cut )
}
TEST( setValueInt1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::note );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::TimeSymbol::singleNumber )
}
TEST( setValueInt2 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::dottedNote );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::TimeSymbol::note )
}
TEST( setValueInt4 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	CHECK( e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::TimeSymbol::normal )
}
TEST( setValueInt5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::TimeSymbol::common )
}
TEST( setValueInt6 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	CHECK( ! e1.setValueInt( 6 ) )
	CHECK( e1.getValue() == enums::TimeSymbol::singleNumber )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::TimeSymbol::cut )
}
TEST( fromString0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	CHECK( e1.fromString( "cut" ) )
	CHECK( e1.getValue() == enums::TimeSymbol::cut )
}
TEST( fromString1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::note );
	CHECK( e1.fromString( "single-number" ) )
	CHECK( e1.getValue() == enums::TimeSymbol::singleNumber )
}
TEST( fromString2 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::dottedNote );
	CHECK( e1.fromString( "note" ) )
	CHECK( e1.getValue() == enums::TimeSymbol::note )
}
TEST( fromString3 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	CHECK( e1.fromString( "dotted-note" ) )
	CHECK( e1.getValue() == enums::TimeSymbol::dottedNote )
}
TEST( fromString4 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	CHECK( e1.fromString( "normal" ) )
	CHECK( e1.getValue() == enums::TimeSymbol::normal )
}
TEST( fromString5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	CHECK( e1.fromString( "common" ) )
	CHECK( e1.getValue() == enums::TimeSymbol::common )
}
TEST( fromString6 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::singleNumber );
	CHECK( ! e1.fromString( "crazyErrantValue6" ) )
	CHECK( e1.getValue() == enums::TimeSymbol::singleNumber )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	int expected = 6;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	int expected = 6;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	int expected = 6;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	string expected = "time-symbol";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	string expected = "time-symbol";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	string expected = "time-symbol";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	string expected = "MxEnumTimeSymbol";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	string expected = "MxEnumTimeSymbol";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	string expected = "MxEnumTimeSymbol";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	string expected = "The time-symbol type indicates how to display a time signature. The normal value is the usual fractional display, and is the implied symbol type if none is specified. Other options are the common and cut time symbols, as well as a single number with an implied denominator. The note symbol indicates that the beat-type should be represented with the corresponding downstem note rather than a number. The dotted-note symbol indicates that the beat-type should be represented with a dotted downstem note that corresponds to three times the beat-type value, and a numerator that is one third the beats value.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	string expected = "The time-symbol type indicates how to display a time signature. The normal value is the usual fractional display, and is the implied symbol type if none is specified. Other options are the common and cut time symbols, as well as a single number with an implied denominator. The note symbol indicates that the beat-type should be represented with the corresponding downstem note rather than a number. The dotted-note symbol indicates that the beat-type should be represented with a dotted downstem note that corresponds to three times the beat-type value, and a numerator that is one third the beats value.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	string expected = "The time-symbol type indicates how to display a time signature. The normal value is the usual fractional display, and is the implied symbol type if none is specified. Other options are the common and cut time symbols, as well as a single number with an implied denominator. The note symbol indicates that the beat-type should be represented with the corresponding downstem note rather than a number. The dotted-note symbol indicates that the beat-type should be represented with a dotted downstem note that corresponds to three times the beat-type value, and a numerator that is one third the beats value.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	stringstream ss;
	e1.stream( ss );
	string expected = "common";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "common";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	stringstream ss;
	e1.stream( ss );
	string expected = "cut";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "cut";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	stringstream ss;
	e1.stream( ss );
	string expected = "normal";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "normal";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	stringstream ss;
	ss << e1;
	string expected = "common";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "common";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	stringstream ss;
	ss << e1;
	string expected = "cut";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "cut";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	stringstream ss;
	ss << e1;
	string expected = "normal";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "normal";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_5equals0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_5equals1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_5equals5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_5equals0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_5equals1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_5equals5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_5islessthanoreq0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_5islessthanoreq1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_5islessthanoreq5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthanoreq0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthanoreq1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthanoreq5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_5islessthan0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_5islessthan1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_5islessthan5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthan0 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_5isgreaterthan1 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_5isgreaterthan5 , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "common";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "common";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start5_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "dottedNote";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dottedNote";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "common";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "common";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "cut";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cut";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start5_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "cut";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cut";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "singleNumber";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "singleNumber";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start5_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "common";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "common";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "common";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "common";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "cut";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cut";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start5_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dottedNote";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "common";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start5_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "dottedNote";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "note";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "common";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "cut";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "common";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start5_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dottedNote";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "cut";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "singleNumber";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "singleNumber";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "note";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start5_5times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "common";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cut";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::common );
	MxEnumTimeSymbol e2( enums::TimeSymbol::common );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "common";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cut";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::cut );
	MxEnumTimeSymbol e2( enums::TimeSymbol::cut );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "cut";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "singleNumber";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start5_6times , MxEnumTimeSymbol )
{
	MxEnumTimeSymbol e1( enums::TimeSymbol::normal );
	MxEnumTimeSymbol e2( enums::TimeSymbol::normal );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "common";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

