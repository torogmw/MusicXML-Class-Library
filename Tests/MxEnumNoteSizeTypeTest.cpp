#include "TestHarness.h"
#include "MxEnumNoteSizeType.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( e1 );
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
TEST( copyCtor1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( e1 );
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
TEST( copyCtor2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( e1 );
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
TEST( assignmentOp0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	e1 = e2;
	string expected = "cue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteSizeType e3( enums::NoteSizeType::grace );
	e2 = e3;
	expected = "grace";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cue";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cue";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	e1 = e2;
	string expected = "grace";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteSizeType e3( enums::NoteSizeType::large );
	e2 = e3;
	expected = "large";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "grace";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "grace";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	e1 = e2;
	string expected = "large";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumNoteSizeType e3( enums::NoteSizeType::cue );
	e2 = e3;
	expected = "cue";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "large";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "large";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	CHECK( e1.getValue() == enums::NoteSizeType::cue )
}
TEST( getValue1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	CHECK( e1.getValue() == enums::NoteSizeType::grace )
}
TEST( getValue2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	CHECK( e1.getValue() == enums::NoteSizeType::large )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	string expected = "grace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	string expected = "cue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	string expected = "grace";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	string expected = "large";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	e1.setValue( enums::NoteSizeType::cue );
	CHECK( e1.getValue() == enums::NoteSizeType::cue )
}
TEST( setValue1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	e1.setValue( enums::NoteSizeType::grace );
	CHECK( e1.getValue() == enums::NoteSizeType::grace )
}
TEST( setValue2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	e1.setValue( enums::NoteSizeType::large );
	CHECK( e1.getValue() == enums::NoteSizeType::large )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::NoteSizeType::grace )
}
TEST( setValueInt0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::NoteSizeType::grace )
}
TEST( setValueInt1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::NoteSizeType::large )
}
TEST( setValueInt2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::NoteSizeType::cue )
}
TEST( setValueInt3 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::NoteSizeType::large )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::NoteSizeType::grace )
}
TEST( fromString0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	CHECK( e1.fromString( "grace" ) )
	CHECK( e1.getValue() == enums::NoteSizeType::grace )
}
TEST( fromString1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	CHECK( e1.fromString( "large" ) )
	CHECK( e1.getValue() == enums::NoteSizeType::large )
}
TEST( fromString2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	CHECK( e1.fromString( "cue" ) )
	CHECK( e1.getValue() == enums::NoteSizeType::cue )
}
TEST( fromString3 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::NoteSizeType::large )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	string expected = "note-size-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	string expected = "note-size-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	string expected = "note-size-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	string expected = "MxEnumNoteSizeType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	string expected = "MxEnumNoteSizeType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	string expected = "MxEnumNoteSizeType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	string expected = "The note-size-type type indicates the type of note being defined by a note-size element. The grace type is used for notes of cue size that that include a grace element. The cue type is used for all other notes with cue size, whether defined explicitly or implicitly via a cue element. The large type is used for notes of large size.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	string expected = "The note-size-type type indicates the type of note being defined by a note-size element. The grace type is used for notes of cue size that that include a grace element. The cue type is used for all other notes with cue size, whether defined explicitly or implicitly via a cue element. The large type is used for notes of large size.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	string expected = "The note-size-type type indicates the type of note being defined by a note-size element. The grace type is used for notes of cue size that that include a grace element. The cue type is used for all other notes with cue size, whether defined explicitly or implicitly via a cue element. The large type is used for notes of large size.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	stringstream ss;
	e1.stream( ss );
	string expected = "cue";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "cue";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	stringstream ss;
	e1.stream( ss );
	string expected = "grace";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "grace";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	stringstream ss;
	e1.stream( ss );
	string expected = "large";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "large";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	stringstream ss;
	ss << e1;
	string expected = "cue";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "cue";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	stringstream ss;
	ss << e1;
	string expected = "grace";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "grace";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	stringstream ss;
	ss << e1;
	string expected = "large";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "large";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "grace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "grace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "grace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "grace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "grace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "grace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "grace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "grace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "grace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "grace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "grace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "grace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "grace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "grace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::cue );
	MxEnumNoteSizeType e2( enums::NoteSizeType::cue );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "grace";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::grace );
	MxEnumNoteSizeType e2( enums::NoteSizeType::grace );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "grace";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumNoteSizeType )
{
	MxEnumNoteSizeType e1( enums::NoteSizeType::large );
	MxEnumNoteSizeType e2( enums::NoteSizeType::large );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

