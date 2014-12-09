#include "TestHarness.h"
#include "MxEnumTrillStep.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumTrillStep )
{
	MxEnumTrillStep e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( e1 );
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
TEST( copyCtor1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( e1 );
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
TEST( copyCtor2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( e1 );
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
TEST( assignmentOp0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	e1 = e2;
	string expected = "whole";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTrillStep e3( enums::TrillStep::half );
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
TEST( assignmentOp1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::half );
	e1 = e2;
	string expected = "half";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTrillStep e3( enums::TrillStep::unison );
	e2 = e3;
	expected = "unison";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	e1 = e2;
	string expected = "unison";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTrillStep e3( enums::TrillStep::whole );
	e2 = e3;
	expected = "whole";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "unison";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "unison";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	CHECK( e1.getValue() == enums::TrillStep::whole )
}
TEST( getValue1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	CHECK( e1.getValue() == enums::TrillStep::half )
}
TEST( getValue2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	CHECK( e1.getValue() == enums::TrillStep::unison )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	string expected = "unison";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	string expected = "whole";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	string expected = "half";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	string expected = "unison";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	e1.setValue( enums::TrillStep::whole );
	CHECK( e1.getValue() == enums::TrillStep::whole )
}
TEST( setValue1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	e1.setValue( enums::TrillStep::half );
	CHECK( e1.getValue() == enums::TrillStep::half )
}
TEST( setValue2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	e1.setValue( enums::TrillStep::unison );
	CHECK( e1.getValue() == enums::TrillStep::unison )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::TrillStep::half )
}
TEST( setValueInt0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::TrillStep::half )
}
TEST( setValueInt1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::TrillStep::unison )
}
TEST( setValueInt2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::TrillStep::whole )
}
TEST( setValueInt3 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::TrillStep::unison )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::TrillStep::half )
}
TEST( fromString0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	CHECK( e1.fromString( "half" ) )
	CHECK( e1.getValue() == enums::TrillStep::half )
}
TEST( fromString1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	CHECK( e1.fromString( "unison" ) )
	CHECK( e1.getValue() == enums::TrillStep::unison )
}
TEST( fromString2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	CHECK( e1.fromString( "whole" ) )
	CHECK( e1.getValue() == enums::TrillStep::whole )
}
TEST( fromString3 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::TrillStep::unison )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	string expected = "trill-step";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	string expected = "trill-step";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	string expected = "trill-step";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	string expected = "MxEnumTrillStep";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	string expected = "MxEnumTrillStep";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	string expected = "MxEnumTrillStep";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	string expected = "The trill-step type describes the alternating note of trills and mordents for playback, relative to the current note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	string expected = "The trill-step type describes the alternating note of trills and mordents for playback, relative to the current note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	string expected = "The trill-step type describes the alternating note of trills and mordents for playback, relative to the current note.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
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
TEST( stream1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
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
TEST( stream2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	stringstream ss;
	e1.stream( ss );
	string expected = "unison";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "unison";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
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
TEST( streamingOperator1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
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
TEST( streamingOperator2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	stringstream ss;
	ss << e1;
	string expected = "unison";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "unison";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::half );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "unison";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "unison";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
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
TEST( incrementPre_start2_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
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
TEST( incrementPre_start0_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
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
TEST( incrementPre_start1_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
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
TEST( incrementPre_start2_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "unison";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "unison";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
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
TEST( decrementPre_start1_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "unison";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "unison";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
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
TEST( decrementPre_start0_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
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
TEST( decrementPre_start1_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
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
TEST( decrementPre_start2_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "unison";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "unison";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "unison";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "unison";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
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
TEST( incrementPost_start0_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "whole";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "unison";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
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
TEST( incrementPost_start2_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "unison";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "unison";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "unison";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "whole";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
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
TEST( decrementPost_start0_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::whole );
	MxEnumTrillStep e2( enums::TrillStep::whole );
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
TEST( decrementPost_start1_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::half );
	MxEnumTrillStep e2( enums::TrillStep::half );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "half";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "unison";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumTrillStep )
{
	MxEnumTrillStep e1( enums::TrillStep::unison );
	MxEnumTrillStep e2( enums::TrillStep::unison );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "unison";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "whole";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

