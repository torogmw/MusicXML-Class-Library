#include "TestHarness.h"
#include "MxEnumSyllabic.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumSyllabic )
{
	MxEnumSyllabic e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( e1 );
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
TEST( copyCtor1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( e1 );
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
TEST( copyCtor2 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	MxEnumSyllabic e2( e1 );
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
TEST( copyCtor3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( e1 );
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
TEST( assignmentOp0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::single );
	e1 = e2;
	string expected = "single";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSyllabic e3( enums::Syllabic::begin );
	e2 = e3;
	expected = "begin";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "single";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "single";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	e1 = e2;
	string expected = "begin";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSyllabic e3( enums::Syllabic::end );
	e2 = e3;
	expected = "end";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "begin";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "begin";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::end );
	e1 = e2;
	string expected = "end";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSyllabic e3( enums::Syllabic::middle );
	e2 = e3;
	expected = "middle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "end";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "end";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	e1 = e2;
	string expected = "middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSyllabic e3( enums::Syllabic::single );
	e2 = e3;
	expected = "single";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "middle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "middle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	CHECK( e1.getValue() == enums::Syllabic::single )
}
TEST( getValue1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	CHECK( e1.getValue() == enums::Syllabic::begin )
}
TEST( getValue2 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	CHECK( e1.getValue() == enums::Syllabic::end )
}
TEST( getValue3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	CHECK( e1.getValue() == enums::Syllabic::middle )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	string expected = "end";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	string expected = "single";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	string expected = "begin";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	string expected = "end";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	string expected = "middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	e1.setValue( enums::Syllabic::single );
	CHECK( e1.getValue() == enums::Syllabic::single )
}
TEST( setValue1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	e1.setValue( enums::Syllabic::begin );
	CHECK( e1.getValue() == enums::Syllabic::begin )
}
TEST( setValue2 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	e1.setValue( enums::Syllabic::end );
	CHECK( e1.getValue() == enums::Syllabic::end )
}
TEST( setValue3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	e1.setValue( enums::Syllabic::middle );
	CHECK( e1.getValue() == enums::Syllabic::middle )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Syllabic::begin )
}
TEST( setValueInt0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Syllabic::begin )
}
TEST( setValueInt1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Syllabic::end )
}
TEST( setValueInt2 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Syllabic::middle )
}
TEST( setValueInt3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Syllabic::single )
}
TEST( setValueInt4 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::Syllabic::end )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Syllabic::begin )
}
TEST( fromString0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	CHECK( e1.fromString( "begin" ) )
	CHECK( e1.getValue() == enums::Syllabic::begin )
}
TEST( fromString1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	CHECK( e1.fromString( "end" ) )
	CHECK( e1.getValue() == enums::Syllabic::end )
}
TEST( fromString2 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	CHECK( e1.fromString( "middle" ) )
	CHECK( e1.getValue() == enums::Syllabic::middle )
}
TEST( fromString3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	CHECK( e1.fromString( "single" ) )
	CHECK( e1.getValue() == enums::Syllabic::single )
}
TEST( fromString4 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::end );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::Syllabic::end )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	string expected = "syllabic";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	string expected = "syllabic";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	string expected = "syllabic";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	string expected = "MxEnumSyllabic";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	string expected = "MxEnumSyllabic";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	string expected = "MxEnumSyllabic";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	string expected = "Lyric hyphenation is indicated by the syllabic type. The single, begin, end, and middle values represent single-syllable words, word-beginning syllables, word-ending syllables, and mid-word syllables, respectively.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	string expected = "Lyric hyphenation is indicated by the syllabic type. The single, begin, end, and middle values represent single-syllable words, word-beginning syllables, word-ending syllables, and mid-word syllables, respectively.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	string expected = "Lyric hyphenation is indicated by the syllabic type. The single, begin, end, and middle values represent single-syllable words, word-beginning syllables, word-ending syllables, and mid-word syllables, respectively.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	stringstream ss;
	e1.stream( ss );
	string expected = "single";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "single";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
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
TEST( stream3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	stringstream ss;
	e1.stream( ss );
	string expected = "middle";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "middle";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	stringstream ss;
	ss << e1;
	string expected = "single";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "single";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
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
TEST( streamingOperator3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	stringstream ss;
	ss << e1;
	string expected = "middle";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "middle";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::single );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "end";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
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
TEST( incrementPre_start3_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPre_start1_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPre_start3_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
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
TEST( decrementPre_start3_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "end";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "end";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::single );
	MxEnumSyllabic e2( enums::Syllabic::single );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "single";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::begin );
	MxEnumSyllabic e2( enums::Syllabic::begin );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "begin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumSyllabic )
{
	MxEnumSyllabic e1( enums::Syllabic::middle );
	MxEnumSyllabic e2( enums::Syllabic::middle );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "single";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

