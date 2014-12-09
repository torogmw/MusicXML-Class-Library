#include "TestHarness.h"
#include "MxEnumPrincipalVoiceSymbol.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( e1 );
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
TEST( copyCtor1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( e1 );
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
TEST( copyCtor2 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	MxEnumPrincipalVoiceSymbol e2( e1 );
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
TEST( copyCtor3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( e1 );
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
TEST( assignmentOp0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	e1 = e2;
	string expected = "Hauptstimme";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPrincipalVoiceSymbol e3( enums::PrincipalVoiceSymbol::nebenstimme );
	e2 = e3;
	expected = "Nebenstimme";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Hauptstimme";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Hauptstimme";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	e1 = e2;
	string expected = "Nebenstimme";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPrincipalVoiceSymbol e3( enums::PrincipalVoiceSymbol::plain );
	e2 = e3;
	expected = "plain";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Nebenstimme";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Nebenstimme";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::plain );
	e1 = e2;
	string expected = "plain";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPrincipalVoiceSymbol e3( enums::PrincipalVoiceSymbol::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "plain";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "plain";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumPrincipalVoiceSymbol e3( enums::PrincipalVoiceSymbol::hauptstimme );
	e2 = e3;
	expected = "Hauptstimme";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::hauptstimme )
}
TEST( getValue1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::nebenstimme )
}
TEST( getValue2 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::plain )
}
TEST( getValue3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::none )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	string expected = "hauptstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	string expected = "nebenstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	string expected = "plain";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	string expected = "Hauptstimme";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	string expected = "Nebenstimme";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	string expected = "plain";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	e1.setValue( enums::PrincipalVoiceSymbol::hauptstimme );
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::hauptstimme )
}
TEST( setValue1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	e1.setValue( enums::PrincipalVoiceSymbol::nebenstimme );
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::nebenstimme )
}
TEST( setValue2 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	e1.setValue( enums::PrincipalVoiceSymbol::plain );
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::plain )
}
TEST( setValue3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	e1.setValue( enums::PrincipalVoiceSymbol::none );
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::none )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::nebenstimme )
}
TEST( setValueInt0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::nebenstimme )
}
TEST( setValueInt1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::plain )
}
TEST( setValueInt2 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::none )
}
TEST( setValueInt3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::hauptstimme )
}
TEST( setValueInt4 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::plain )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::nebenstimme )
}
TEST( fromString0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	CHECK( e1.fromString( "Nebenstimme" ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::nebenstimme )
}
TEST( fromString1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	CHECK( e1.fromString( "plain" ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::plain )
}
TEST( fromString2 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::none )
}
TEST( fromString3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	CHECK( e1.fromString( "Hauptstimme" ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::hauptstimme )
}
TEST( fromString4 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::plain );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::PrincipalVoiceSymbol::plain )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	string expected = "principal-voice-symbol";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	string expected = "principal-voice-symbol";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	string expected = "principal-voice-symbol";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	string expected = "MxEnumPrincipalVoiceSymbol";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	string expected = "MxEnumPrincipalVoiceSymbol";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	string expected = "MxEnumPrincipalVoiceSymbol";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	string expected = "The principal-voice-symbol type represents the type of symbol used to indicate the start of a principal or secondary voice. The 'plain' value represents a plain square bracket. The value of 'none' is used for analysis markup when the principal-voice element does not have a corresponding appearance in the score.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	string expected = "The principal-voice-symbol type represents the type of symbol used to indicate the start of a principal or secondary voice. The 'plain' value represents a plain square bracket. The value of 'none' is used for analysis markup when the principal-voice element does not have a corresponding appearance in the score.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	string expected = "The principal-voice-symbol type represents the type of symbol used to indicate the start of a principal or secondary voice. The 'plain' value represents a plain square bracket. The value of 'none' is used for analysis markup when the principal-voice element does not have a corresponding appearance in the score.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	stringstream ss;
	e1.stream( ss );
	string expected = "Hauptstimme";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "Hauptstimme";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	stringstream ss;
	e1.stream( ss );
	string expected = "Nebenstimme";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "Nebenstimme";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	stringstream ss;
	e1.stream( ss );
	string expected = "none";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "none";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	stringstream ss;
	ss << e1;
	string expected = "Hauptstimme";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "Hauptstimme";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	stringstream ss;
	ss << e1;
	string expected = "Nebenstimme";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "Nebenstimme";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	stringstream ss;
	ss << e1;
	string expected = "none";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "none";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "hauptstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hauptstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "plain";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "plain";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "hauptstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hauptstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "nebenstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "nebenstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "nebenstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "nebenstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "plain";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "plain";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "hauptstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hauptstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "hauptstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hauptstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "nebenstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "nebenstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "plain";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "hauptstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "plain";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "nebenstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "hauptstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "nebenstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hauptstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "plain";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "nebenstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "plain";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "plain";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "hauptstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "nebenstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::hauptstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::hauptstimme );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "hauptstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "nebenstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::nebenstimme );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::nebenstimme );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "nebenstimme";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "plain";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumPrincipalVoiceSymbol )
{
	MxEnumPrincipalVoiceSymbol e1( enums::PrincipalVoiceSymbol::none );
	MxEnumPrincipalVoiceSymbol e2( enums::PrincipalVoiceSymbol::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hauptstimme";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

