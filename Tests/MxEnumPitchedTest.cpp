#include "TestHarness.h"
#include "MxEnumPitched.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumPitched )
{
	MxEnumPitched e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::marimba );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::tubularChimes );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::vibraphone );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( e1 );
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
TEST( copyCtor1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( e1 );
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
TEST( copyCtor2 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	MxEnumPitched e2( e1 );
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
TEST( copyCtor3 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::marimba );
	MxEnumPitched e2( e1 );
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
TEST( copyCtor4 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::tubularChimes );
	MxEnumPitched e2( e1 );
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
TEST( copyCtor5 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::vibraphone );
	MxEnumPitched e2( e1 );
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
TEST( copyCtor6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( e1 );
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
TEST( assignmentOp0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::chimes );
	e1 = e2;
	string expected = "chimes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPitched e3( enums::Pitched::glockenspiel );
	e2 = e3;
	expected = "glockenspiel";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "chimes";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "chimes";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	e1 = e2;
	string expected = "glockenspiel";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPitched e3( enums::Pitched::mallet );
	e2 = e3;
	expected = "mallet";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "glockenspiel";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "glockenspiel";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::marimba );
	MxEnumPitched e2( enums::Pitched::mallet );
	e1 = e2;
	string expected = "mallet";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPitched e3( enums::Pitched::marimba );
	e2 = e3;
	expected = "marimba";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "mallet";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "mallet";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::tubularChimes );
	MxEnumPitched e2( enums::Pitched::marimba );
	e1 = e2;
	string expected = "marimba";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPitched e3( enums::Pitched::tubularChimes );
	e2 = e3;
	expected = "tubular chimes";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "marimba";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "marimba";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::vibraphone );
	MxEnumPitched e2( enums::Pitched::tubularChimes );
	e1 = e2;
	string expected = "tubular chimes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPitched e3( enums::Pitched::vibraphone );
	e2 = e3;
	expected = "vibraphone";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tubular chimes";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tubular chimes";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::vibraphone );
	e1 = e2;
	string expected = "vibraphone";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPitched e3( enums::Pitched::xylophone );
	e2 = e3;
	expected = "xylophone";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "vibraphone";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "vibraphone";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::xylophone );
	e1 = e2;
	string expected = "xylophone";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPitched e3( enums::Pitched::chimes );
	e2 = e3;
	expected = "chimes";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "xylophone";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "xylophone";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	CHECK( e1.getValue() == enums::Pitched::chimes )
}
TEST( getValue1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	CHECK( e1.getValue() == enums::Pitched::glockenspiel )
}
TEST( getValue2 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	CHECK( e1.getValue() == enums::Pitched::mallet )
}
TEST( getValue5 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::vibraphone );
	CHECK( e1.getValue() == enums::Pitched::vibraphone )
}
TEST( getValue6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	CHECK( e1.getValue() == enums::Pitched::xylophone )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::marimba );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::tubularChimes );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::vibraphone );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	string expected = "chimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	string expected = "glockenspiel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	string expected = "mallet";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::marimba );
	string expected = "marimba";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::tubularChimes );
	string expected = "tubularChimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::vibraphone );
	string expected = "vibraphone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	string expected = "xylophone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	string expected = "chimes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	string expected = "glockenspiel";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	string expected = "mallet";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::marimba );
	string expected = "marimba";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::tubularChimes );
	string expected = "tubular chimes";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::vibraphone );
	string expected = "vibraphone";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	string expected = "xylophone";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	e1.setValue( enums::Pitched::chimes );
	CHECK( e1.getValue() == enums::Pitched::chimes )
}
TEST( setValue1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	e1.setValue( enums::Pitched::glockenspiel );
	CHECK( e1.getValue() == enums::Pitched::glockenspiel )
}
TEST( setValue2 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::marimba );
	e1.setValue( enums::Pitched::mallet );
	CHECK( e1.getValue() == enums::Pitched::mallet )
}
TEST( setValue5 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	e1.setValue( enums::Pitched::vibraphone );
	CHECK( e1.getValue() == enums::Pitched::vibraphone )
}
TEST( setValue6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	e1.setValue( enums::Pitched::xylophone );
	CHECK( e1.getValue() == enums::Pitched::xylophone )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Pitched::glockenspiel )
}
TEST( setValueInt0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Pitched::glockenspiel )
}
TEST( setValueInt1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::marimba );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Pitched::mallet )
}
TEST( setValueInt2 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::tubularChimes );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Pitched::marimba )
}
TEST( setValueInt5 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	CHECK( e1.setValueInt( 6 ) )
	CHECK( e1.getValue() == enums::Pitched::xylophone )
}
TEST( setValueInt6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Pitched::chimes )
}
TEST( setValueInt7 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	CHECK( ! e1.setValueInt( 7 ) )
	CHECK( e1.getValue() == enums::Pitched::mallet )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Pitched::glockenspiel )
}
TEST( fromString0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	CHECK( e1.fromString( "glockenspiel" ) )
	CHECK( e1.getValue() == enums::Pitched::glockenspiel )
}
TEST( fromString1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::marimba );
	CHECK( e1.fromString( "mallet" ) )
	CHECK( e1.getValue() == enums::Pitched::mallet )
}
TEST( fromString2 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::tubularChimes );
	CHECK( e1.fromString( "marimba" ) )
	CHECK( e1.getValue() == enums::Pitched::marimba )
}
TEST( fromString3 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::vibraphone );
	CHECK( e1.fromString( "tubular chimes" ) )
	CHECK( e1.getValue() == enums::Pitched::tubularChimes )
}
TEST( fromString4 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	CHECK( e1.fromString( "vibraphone" ) )
	CHECK( e1.getValue() == enums::Pitched::vibraphone )
}
TEST( fromString5 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	CHECK( e1.fromString( "xylophone" ) )
	CHECK( e1.getValue() == enums::Pitched::xylophone )
}
TEST( fromString6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	CHECK( e1.fromString( "chimes" ) )
	CHECK( e1.getValue() == enums::Pitched::chimes )
}
TEST( fromString7 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::mallet );
	CHECK( ! e1.fromString( "crazyErrantValue7" ) )
	CHECK( e1.getValue() == enums::Pitched::mallet )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	string expected = "pitched";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	string expected = "pitched";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	string expected = "pitched";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	string expected = "MxEnumPitched";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	string expected = "MxEnumPitched";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	string expected = "MxEnumPitched";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	string expected = "The pitched type represents pictograms for pitched percussion instruments. The chimes and tubular chimes values distinguish the single-line and double-line versions of the pictogram. The mallet value is in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	string expected = "The pitched type represents pictograms for pitched percussion instruments. The chimes and tubular chimes values distinguish the single-line and double-line versions of the pictogram. The mallet value is in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	string expected = "The pitched type represents pictograms for pitched percussion instruments. The chimes and tubular chimes values distinguish the single-line and double-line versions of the pictogram. The mallet value is in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	stringstream ss;
	e1.stream( ss );
	string expected = "chimes";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "chimes";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	stringstream ss;
	e1.stream( ss );
	string expected = "glockenspiel";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "glockenspiel";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	stringstream ss;
	e1.stream( ss );
	string expected = "xylophone";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "xylophone";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	stringstream ss;
	ss << e1;
	string expected = "chimes";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "chimes";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	stringstream ss;
	ss << e1;
	string expected = "glockenspiel";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "glockenspiel";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	stringstream ss;
	ss << e1;
	string expected = "xylophone";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "xylophone";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_6equals0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_6equals1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_6equals6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_6equals0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_6equals1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_6equals6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_6islessthanoreq0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_6islessthanoreq1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_6islessthanoreq6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthan0 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::chimes );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthan1 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_6isgreaterthan6 , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "xylophone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xylophone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "chimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start6_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "vibraphone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vibraphone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "chimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "glockenspiel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "glockenspiel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start6_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "xylophone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xylophone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "glockenspiel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "glockenspiel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "mallet";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mallet";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start6_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "chimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "chimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "glockenspiel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "glockenspiel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start6_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "xylophone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xylophone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "xylophone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vibraphone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "chimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xylophone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start6_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "vibraphone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tubularChimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "chimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xylophone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "glockenspiel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start6_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "xylophone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vibraphone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "glockenspiel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mallet";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "mallet";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "marimba";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start6_6times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "chimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "glockenspiel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::chimes );
	MxEnumPitched e2( enums::Pitched::chimes );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "chimes";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "glockenspiel";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::glockenspiel );
	MxEnumPitched e2( enums::Pitched::glockenspiel );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "glockenspiel";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mallet";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start6_7times , MxEnumPitched )
{
	MxEnumPitched e1( enums::Pitched::xylophone );
	MxEnumPitched e2( enums::Pitched::xylophone );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "xylophone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimes";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

