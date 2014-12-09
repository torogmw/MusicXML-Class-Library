#include "TestHarness.h"
#include "MxEnumClefSign.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumClefSign )
{
	MxEnumClefSign e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::percussion );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::tab );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::jianpu );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( e1 );
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
TEST( copyCtor1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( e1 );
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
TEST( copyCtor2 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	MxEnumClefSign e2( e1 );
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
TEST( copyCtor3 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::percussion );
	MxEnumClefSign e2( e1 );
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
TEST( copyCtor4 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::tab );
	MxEnumClefSign e2( e1 );
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
TEST( copyCtor5 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::jianpu );
	MxEnumClefSign e2( e1 );
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
TEST( copyCtor6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( e1 );
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
TEST( assignmentOp0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::g );
	e1 = e2;
	string expected = "G";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumClefSign e3( enums::ClefSign::f );
	e2 = e3;
	expected = "F";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "G";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "G";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	MxEnumClefSign e2( enums::ClefSign::f );
	e1 = e2;
	string expected = "F";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumClefSign e3( enums::ClefSign::c );
	e2 = e3;
	expected = "C";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "F";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "F";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::percussion );
	MxEnumClefSign e2( enums::ClefSign::c );
	e1 = e2;
	string expected = "C";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumClefSign e3( enums::ClefSign::percussion );
	e2 = e3;
	expected = "percussion";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "C";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "C";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::tab );
	MxEnumClefSign e2( enums::ClefSign::percussion );
	e1 = e2;
	string expected = "percussion";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumClefSign e3( enums::ClefSign::tab );
	e2 = e3;
	expected = "TAB";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "percussion";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "percussion";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::jianpu );
	MxEnumClefSign e2( enums::ClefSign::tab );
	e1 = e2;
	string expected = "TAB";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumClefSign e3( enums::ClefSign::jianpu );
	e2 = e3;
	expected = "jianpu";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "TAB";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "TAB";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::jianpu );
	e1 = e2;
	string expected = "jianpu";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumClefSign e3( enums::ClefSign::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "jianpu";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "jianpu";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumClefSign e3( enums::ClefSign::g );
	e2 = e3;
	expected = "G";
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
TEST( getValue0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	CHECK( e1.getValue() == enums::ClefSign::g )
}
TEST( getValue1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	CHECK( e1.getValue() == enums::ClefSign::f )
}
TEST( getValue2 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	CHECK( e1.getValue() == enums::ClefSign::c )
}
TEST( getValue5 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::jianpu );
	CHECK( e1.getValue() == enums::ClefSign::jianpu )
}
TEST( getValue6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	CHECK( e1.getValue() == enums::ClefSign::none )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::percussion );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::tab );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::jianpu );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	string expected = "f";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	string expected = "c";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::percussion );
	string expected = "percussion";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::tab );
	string expected = "tab";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::jianpu );
	string expected = "jianpu";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	string expected = "G";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	string expected = "F";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	string expected = "C";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::percussion );
	string expected = "percussion";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::tab );
	string expected = "TAB";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::jianpu );
	string expected = "jianpu";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	e1.setValue( enums::ClefSign::g );
	CHECK( e1.getValue() == enums::ClefSign::g )
}
TEST( setValue1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	e1.setValue( enums::ClefSign::f );
	CHECK( e1.getValue() == enums::ClefSign::f )
}
TEST( setValue2 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::percussion );
	e1.setValue( enums::ClefSign::c );
	CHECK( e1.getValue() == enums::ClefSign::c )
}
TEST( setValue5 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	e1.setValue( enums::ClefSign::jianpu );
	CHECK( e1.getValue() == enums::ClefSign::jianpu )
}
TEST( setValue6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	e1.setValue( enums::ClefSign::none );
	CHECK( e1.getValue() == enums::ClefSign::none )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::ClefSign::f )
}
TEST( setValueInt0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::ClefSign::f )
}
TEST( setValueInt1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::percussion );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::ClefSign::c )
}
TEST( setValueInt2 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::tab );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::ClefSign::percussion )
}
TEST( setValueInt5 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	CHECK( e1.setValueInt( 6 ) )
	CHECK( e1.getValue() == enums::ClefSign::none )
}
TEST( setValueInt6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::ClefSign::g )
}
TEST( setValueInt7 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	CHECK( ! e1.setValueInt( 7 ) )
	CHECK( e1.getValue() == enums::ClefSign::c )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::ClefSign::f )
}
TEST( fromString0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	CHECK( e1.fromString( "F" ) )
	CHECK( e1.getValue() == enums::ClefSign::f )
}
TEST( fromString1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::percussion );
	CHECK( e1.fromString( "C" ) )
	CHECK( e1.getValue() == enums::ClefSign::c )
}
TEST( fromString2 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::tab );
	CHECK( e1.fromString( "percussion" ) )
	CHECK( e1.getValue() == enums::ClefSign::percussion )
}
TEST( fromString3 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::jianpu );
	CHECK( e1.fromString( "TAB" ) )
	CHECK( e1.getValue() == enums::ClefSign::tab )
}
TEST( fromString4 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	CHECK( e1.fromString( "jianpu" ) )
	CHECK( e1.getValue() == enums::ClefSign::jianpu )
}
TEST( fromString5 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::ClefSign::none )
}
TEST( fromString6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	CHECK( e1.fromString( "G" ) )
	CHECK( e1.getValue() == enums::ClefSign::g )
}
TEST( fromString7 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::c );
	CHECK( ! e1.fromString( "crazyErrantValue7" ) )
	CHECK( e1.getValue() == enums::ClefSign::c )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	int expected = 7;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	string expected = "clef-sign";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	string expected = "clef-sign";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	string expected = "clef-sign";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	string expected = "MxEnumClefSign";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	string expected = "MxEnumClefSign";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	string expected = "MxEnumClefSign";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	string expected = "The clef-sign element represents the different clef symbols. The jianpu sign indicates that the music that follows should be in jianpu numbered notation, just as the TAB sign indicates that the music that follows should be in tablature notation. Unlike TAB, a jianpu sign does not correspond to a visual clef notation.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	string expected = "The clef-sign element represents the different clef symbols. The jianpu sign indicates that the music that follows should be in jianpu numbered notation, just as the TAB sign indicates that the music that follows should be in tablature notation. Unlike TAB, a jianpu sign does not correspond to a visual clef notation.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	string expected = "The clef-sign element represents the different clef symbols. The jianpu sign indicates that the music that follows should be in jianpu numbered notation, just as the TAB sign indicates that the music that follows should be in tablature notation. Unlike TAB, a jianpu sign does not correspond to a visual clef notation.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
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
TEST( stream1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	stringstream ss;
	e1.stream( ss );
	string expected = "F";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "F";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
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
TEST( streamingOperator0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
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
TEST( streamingOperator1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	stringstream ss;
	ss << e1;
	string expected = "F";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "F";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
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
TEST( equalsEquals_true_0equals0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_6equals0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_6equals1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_6equals6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_6equals0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_6equals1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_6equals6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_6islessthanoreq0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_6islessthanoreq1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_6islessthanoreq6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthanoreq6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_6islessthan6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthan0 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::g );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_6isgreaterthan1 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::f );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_6isgreaterthan6 , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	for( int i = 0; i < 6; ++i )
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
TEST( incrementPre_start1_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
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
TEST( incrementPre_start6_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	for( int i = 0; i < 6; ++i )
	{
		e2 = ++e1;
	}
	string expected = "jianpu";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "jianpu";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
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
TEST( incrementPre_start1_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	for( int i = 0; i < 7; ++i )
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
TEST( incrementPre_start6_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	for( int i = 0; i < 7; ++i )
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
TEST( decrementPre_start0_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	for( int i = 0; i < 6; ++i )
	{
		e2 = --e1;
	}
	string expected = "f";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "f";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
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
TEST( decrementPre_start6_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	for( int i = 0; i < 6; ++i )
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
TEST( decrementPre_start0_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
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
TEST( decrementPre_start1_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "f";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "f";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start6_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	for( int i = 0; i < 7; ++i )
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
TEST( incrementPost_start0_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "jianpu";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start6_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1++;
	}
	string expected = "jianpu";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tab";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "f";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "g";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start6_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "jianpu";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "f";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "c";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "c";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "percussion";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start6_6times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	for( int i = 0; i < 6; ++i )
	{
		e2 = e1--;
	}
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "f";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::g );
	MxEnumClefSign e2( enums::ClefSign::g );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "g";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "f";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::f );
	MxEnumClefSign e2( enums::ClefSign::f );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "f";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "c";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start6_7times , MxEnumClefSign )
{
	MxEnumClefSign e1( enums::ClefSign::none );
	MxEnumClefSign e2( enums::ClefSign::none );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "g";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

