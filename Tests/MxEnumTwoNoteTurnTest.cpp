#include "TestHarness.h"
#include "MxEnumTwoNoteTurn.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( e1 );
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
TEST( copyCtor1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( e1 );
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
TEST( copyCtor2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( e1 );
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
TEST( assignmentOp0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	e1 = e2;
	string expected = "whole";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTwoNoteTurn e3( enums::TwoNoteTurn::half );
	e2 = e3;
	expected = "half";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "whole";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "whole";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	e1 = e2;
	string expected = "half";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTwoNoteTurn e3( enums::TwoNoteTurn::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTwoNoteTurn e3( enums::TwoNoteTurn::whole );
	e2 = e3;
	expected = "whole";
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
TEST( getValue0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	CHECK( e1.getValue() == enums::TwoNoteTurn::whole )
}
TEST( getValue1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	CHECK( e1.getValue() == enums::TwoNoteTurn::half )
}
TEST( getValue2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	CHECK( e1.getValue() == enums::TwoNoteTurn::none )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	string expected = "whole";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	string expected = "half";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	e1.setValue( enums::TwoNoteTurn::whole );
	CHECK( e1.getValue() == enums::TwoNoteTurn::whole )
}
TEST( setValue1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	e1.setValue( enums::TwoNoteTurn::half );
	CHECK( e1.getValue() == enums::TwoNoteTurn::half )
}
TEST( setValue2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	e1.setValue( enums::TwoNoteTurn::none );
	CHECK( e1.getValue() == enums::TwoNoteTurn::none )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::TwoNoteTurn::half )
}
TEST( setValueInt0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::TwoNoteTurn::half )
}
TEST( setValueInt1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::TwoNoteTurn::none )
}
TEST( setValueInt2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::TwoNoteTurn::whole )
}
TEST( setValueInt3 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::TwoNoteTurn::none )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::TwoNoteTurn::half )
}
TEST( fromString0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	CHECK( e1.fromString( "half" ) )
	CHECK( e1.getValue() == enums::TwoNoteTurn::half )
}
TEST( fromString1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::TwoNoteTurn::none )
}
TEST( fromString2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	CHECK( e1.fromString( "whole" ) )
	CHECK( e1.getValue() == enums::TwoNoteTurn::whole )
}
TEST( fromString3 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::TwoNoteTurn::none )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	string expected = "two-note-turn";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	string expected = "two-note-turn";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	string expected = "two-note-turn";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	string expected = "MxEnumTwoNoteTurn";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	string expected = "MxEnumTwoNoteTurn";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	string expected = "MxEnumTwoNoteTurn";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	string expected = "The two-note-turn type describes the ending notes of trills and mordents for playback, relative to the current note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	string expected = "The two-note-turn type describes the ending notes of trills and mordents for playback, relative to the current note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	string expected = "The two-note-turn type describes the ending notes of trills and mordents for playback, relative to the current note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	stringstream ss;
	e1.stream( ss );
	string expected = "whole";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "whole";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	stringstream ss;
	e1.stream( ss );
	string expected = "half";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "half";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
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
TEST( streamingOperator0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	stringstream ss;
	ss << e1;
	string expected = "whole";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "whole";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	stringstream ss;
	ss << e1;
	string expected = "half";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "half";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
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
TEST( equalsEquals_true_0equals0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPre_start1_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "whole";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "whole";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
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
TEST( decrementPre_start0_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPre_start2_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "whole";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "whole";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPost_start0_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "whole";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "whole";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "whole";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::whole );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::whole );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::half );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::half );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumTwoNoteTurn )
{
	MxEnumTwoNoteTurn e1( enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn e2( enums::TwoNoteTurn::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "whole";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

