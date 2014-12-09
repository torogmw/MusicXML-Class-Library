#include "TestHarness.h"
#include "MxEnumValign.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumValign )
{
	MxEnumValign e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( e1 );
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
TEST( copyCtor1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( e1 );
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
TEST( copyCtor2 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	MxEnumValign e2( e1 );
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
TEST( copyCtor3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( e1 );
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
TEST( assignmentOp0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::top );
	e1 = e2;
	string expected = "top";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumValign e3( enums::Valign::middle );
	e2 = e3;
	expected = "middle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "top";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "top";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	MxEnumValign e2( enums::Valign::middle );
	e1 = e2;
	string expected = "middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumValign e3( enums::Valign::bottom );
	e2 = e3;
	expected = "bottom";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "middle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "middle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::bottom );
	e1 = e2;
	string expected = "bottom";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumValign e3( enums::Valign::baseline );
	e2 = e3;
	expected = "baseline";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bottom";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bottom";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::baseline );
	e1 = e2;
	string expected = "baseline";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumValign e3( enums::Valign::top );
	e2 = e3;
	expected = "top";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "baseline";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "baseline";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	CHECK( e1.getValue() == enums::Valign::top )
}
TEST( getValue1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	CHECK( e1.getValue() == enums::Valign::middle )
}
TEST( getValue2 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	CHECK( e1.getValue() == enums::Valign::bottom )
}
TEST( getValue3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	CHECK( e1.getValue() == enums::Valign::baseline )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	string expected = "baseline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	string expected = "top";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	string expected = "middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	string expected = "bottom";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	string expected = "baseline";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	e1.setValue( enums::Valign::top );
	CHECK( e1.getValue() == enums::Valign::top )
}
TEST( setValue1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	e1.setValue( enums::Valign::middle );
	CHECK( e1.getValue() == enums::Valign::middle )
}
TEST( setValue2 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	e1.setValue( enums::Valign::bottom );
	CHECK( e1.getValue() == enums::Valign::bottom )
}
TEST( setValue3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	e1.setValue( enums::Valign::baseline );
	CHECK( e1.getValue() == enums::Valign::baseline )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Valign::middle )
}
TEST( setValueInt0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Valign::middle )
}
TEST( setValueInt1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Valign::bottom )
}
TEST( setValueInt2 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Valign::baseline )
}
TEST( setValueInt3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Valign::top )
}
TEST( setValueInt4 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::Valign::bottom )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Valign::middle )
}
TEST( fromString0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	CHECK( e1.fromString( "middle" ) )
	CHECK( e1.getValue() == enums::Valign::middle )
}
TEST( fromString1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	CHECK( e1.fromString( "bottom" ) )
	CHECK( e1.getValue() == enums::Valign::bottom )
}
TEST( fromString2 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	CHECK( e1.fromString( "baseline" ) )
	CHECK( e1.getValue() == enums::Valign::baseline )
}
TEST( fromString3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	CHECK( e1.fromString( "top" ) )
	CHECK( e1.getValue() == enums::Valign::top )
}
TEST( fromString4 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::bottom );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::Valign::bottom )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	string expected = "valign";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	string expected = "valign";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	string expected = "valign";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	string expected = "MxEnumValign";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	string expected = "MxEnumValign";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	string expected = "MxEnumValign";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	string expected = "The valign type is used to indicate vertical alignment to the top, middle, bottom, or baseline of the text. Defaults are implementation-dependent.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	string expected = "The valign type is used to indicate vertical alignment to the top, middle, bottom, or baseline of the text. Defaults are implementation-dependent.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	string expected = "The valign type is used to indicate vertical alignment to the top, middle, bottom, or baseline of the text. Defaults are implementation-dependent.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	stringstream ss;
	e1.stream( ss );
	string expected = "top";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "top";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
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
TEST( stream3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	stringstream ss;
	e1.stream( ss );
	string expected = "baseline";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "baseline";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	stringstream ss;
	ss << e1;
	string expected = "top";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "top";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
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
TEST( streamingOperator3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	stringstream ss;
	ss << e1;
	string expected = "baseline";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "baseline";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::top );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::top );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::top );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::top );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::top );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::top );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::top );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::top );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::top );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::top );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::top );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::top );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::middle );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "baseline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "baseline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
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
TEST( incrementPre_start3_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "baseline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "baseline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPre_start1_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
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
TEST( decrementPre_start3_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "baseline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "baseline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "baseline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "baseline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "baseline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "baseline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "baseline";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::top );
	MxEnumValign e2( enums::Valign::top );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "middle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::middle );
	MxEnumValign e2( enums::Valign::middle );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumValign )
{
	MxEnumValign e1( enums::Valign::baseline );
	MxEnumValign e2( enums::Valign::baseline );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "baseline";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

