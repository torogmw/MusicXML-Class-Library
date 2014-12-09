#include "TestHarness.h"
#include "MxEnumSymbolSize.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( e1 );
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
TEST( copyCtor1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( e1 );
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
TEST( copyCtor2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( e1 );
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
TEST( assignmentOp0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	e1 = e2;
	string expected = "full";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSymbolSize e3( enums::SymbolSize::cue );
	e2 = e3;
	expected = "cue";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "full";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "full";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	e1 = e2;
	string expected = "cue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSymbolSize e3( enums::SymbolSize::large );
	e2 = e3;
	expected = "large";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cue";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cue";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	e1 = e2;
	string expected = "large";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumSymbolSize e3( enums::SymbolSize::full );
	e2 = e3;
	expected = "full";
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
TEST( getValue0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	CHECK( e1.getValue() == enums::SymbolSize::full )
}
TEST( getValue1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	CHECK( e1.getValue() == enums::SymbolSize::cue )
}
TEST( getValue2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	CHECK( e1.getValue() == enums::SymbolSize::large )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	string expected = "full";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	string expected = "full";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	string expected = "cue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	string expected = "large";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	e1.setValue( enums::SymbolSize::full );
	CHECK( e1.getValue() == enums::SymbolSize::full )
}
TEST( setValue1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	e1.setValue( enums::SymbolSize::cue );
	CHECK( e1.getValue() == enums::SymbolSize::cue )
}
TEST( setValue2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	e1.setValue( enums::SymbolSize::large );
	CHECK( e1.getValue() == enums::SymbolSize::large )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::SymbolSize::cue )
}
TEST( setValueInt0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::SymbolSize::cue )
}
TEST( setValueInt1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::SymbolSize::large )
}
TEST( setValueInt2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::SymbolSize::full )
}
TEST( setValueInt3 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::SymbolSize::large )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::SymbolSize::cue )
}
TEST( fromString0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	CHECK( e1.fromString( "cue" ) )
	CHECK( e1.getValue() == enums::SymbolSize::cue )
}
TEST( fromString1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	CHECK( e1.fromString( "large" ) )
	CHECK( e1.getValue() == enums::SymbolSize::large )
}
TEST( fromString2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	CHECK( e1.fromString( "full" ) )
	CHECK( e1.getValue() == enums::SymbolSize::full )
}
TEST( fromString3 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::SymbolSize::large )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	string expected = "symbol-size";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	string expected = "symbol-size";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	string expected = "symbol-size";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	string expected = "MxEnumSymbolSize";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	string expected = "MxEnumSymbolSize";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	string expected = "MxEnumSymbolSize";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	string expected = "The symbol-size type is used to indicate full vs. cue-sized vs. oversized symbols. The large value for oversized symbols was added in version 1.1.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	string expected = "The symbol-size type is used to indicate full vs. cue-sized vs. oversized symbols. The large value for oversized symbols was added in version 1.1.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	string expected = "The symbol-size type is used to indicate full vs. cue-sized vs. oversized symbols. The large value for oversized symbols was added in version 1.1.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	stringstream ss;
	e1.stream( ss );
	string expected = "full";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "full";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
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
TEST( stream2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
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
TEST( streamingOperator0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	stringstream ss;
	ss << e1;
	string expected = "full";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "full";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
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
TEST( streamingOperator2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
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
TEST( equalsEquals_true_0equals0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
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
TEST( incrementPre_start1_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "full";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "full";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
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
TEST( incrementPre_start0_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "full";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "full";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
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
TEST( incrementPre_start2_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
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
TEST( decrementPre_start0_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
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
TEST( decrementPre_start1_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
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
TEST( decrementPre_start2_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "full";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "full";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "full";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "full";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
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
TEST( decrementPre_start2_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
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
TEST( incrementPost_start0_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "full";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "full";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "full";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "full";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "full";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "full";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::full );
	MxEnumSymbolSize e2( enums::SymbolSize::full );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "full";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::cue );
	MxEnumSymbolSize e2( enums::SymbolSize::cue );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "large";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumSymbolSize )
{
	MxEnumSymbolSize e1( enums::SymbolSize::large );
	MxEnumSymbolSize e2( enums::SymbolSize::large );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "large";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "full";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

