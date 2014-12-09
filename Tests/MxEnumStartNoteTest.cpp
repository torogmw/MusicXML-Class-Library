#include "TestHarness.h"
#include "MxEnumStartNote.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStartNote )
{
	MxEnumStartNote e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( e1 );
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
TEST( copyCtor1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( e1 );
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
TEST( copyCtor2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( e1 );
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
TEST( assignmentOp0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::upper );
	e1 = e2;
	string expected = "upper";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartNote e3( enums::StartNote::main );
	e2 = e3;
	expected = "main";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "upper";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "upper";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::main );
	e1 = e2;
	string expected = "main";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartNote e3( enums::StartNote::below );
	e2 = e3;
	expected = "below";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "main";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "main";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::below );
	e1 = e2;
	string expected = "below";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStartNote e3( enums::StartNote::upper );
	e2 = e3;
	expected = "upper";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "below";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "below";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	CHECK( e1.getValue() == enums::StartNote::upper )
}
TEST( getValue1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	CHECK( e1.getValue() == enums::StartNote::main )
}
TEST( getValue2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	CHECK( e1.getValue() == enums::StartNote::below )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	string expected = "upper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	string expected = "main";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	string expected = "upper";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	string expected = "main";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	string expected = "below";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	e1.setValue( enums::StartNote::upper );
	CHECK( e1.getValue() == enums::StartNote::upper )
}
TEST( setValue1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	e1.setValue( enums::StartNote::main );
	CHECK( e1.getValue() == enums::StartNote::main )
}
TEST( setValue2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	e1.setValue( enums::StartNote::below );
	CHECK( e1.getValue() == enums::StartNote::below )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StartNote::main )
}
TEST( setValueInt0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StartNote::main )
}
TEST( setValueInt1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StartNote::below )
}
TEST( setValueInt2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StartNote::upper )
}
TEST( setValueInt3 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::StartNote::below )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StartNote::main )
}
TEST( fromString0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	CHECK( e1.fromString( "main" ) )
	CHECK( e1.getValue() == enums::StartNote::main )
}
TEST( fromString1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	CHECK( e1.fromString( "below" ) )
	CHECK( e1.getValue() == enums::StartNote::below )
}
TEST( fromString2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	CHECK( e1.fromString( "upper" ) )
	CHECK( e1.getValue() == enums::StartNote::upper )
}
TEST( fromString3 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::StartNote::below )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	string expected = "start-note";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	string expected = "start-note";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	string expected = "start-note";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	string expected = "MxEnumStartNote";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	string expected = "MxEnumStartNote";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	string expected = "MxEnumStartNote";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	string expected = "The start-note type describes the starting note of trills and mordents for playback, relative to the current note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	string expected = "The start-note type describes the starting note of trills and mordents for playback, relative to the current note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	string expected = "The start-note type describes the starting note of trills and mordents for playback, relative to the current note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	stringstream ss;
	e1.stream( ss );
	string expected = "upper";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "upper";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	stringstream ss;
	e1.stream( ss );
	string expected = "main";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "main";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	stringstream ss;
	e1.stream( ss );
	string expected = "below";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "below";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	stringstream ss;
	ss << e1;
	string expected = "upper";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "upper";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	stringstream ss;
	ss << e1;
	string expected = "main";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "main";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	stringstream ss;
	ss << e1;
	string expected = "below";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "below";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::upper );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::main );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "upper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "main";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "main";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "upper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "main";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "main";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "main";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "main";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "upper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "upper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "main";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "main";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "main";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "upper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "main";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "upper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "main";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "main";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "main";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "upper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "main";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::upper );
	MxEnumStartNote e2( enums::StartNote::upper );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "upper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "main";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::main );
	MxEnumStartNote e2( enums::StartNote::main );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "main";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "below";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumStartNote )
{
	MxEnumStartNote e1( enums::StartNote::below );
	MxEnumStartNote e2( enums::StartNote::below );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "below";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "upper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

