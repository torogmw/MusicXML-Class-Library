#include "TestHarness.h"
#include "MxEnumHoleClosedLocation.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( e1 );
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
TEST( copyCtor1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( e1 );
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
TEST( copyCtor2 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	MxEnumHoleClosedLocation e2( e1 );
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
TEST( copyCtor3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( e1 );
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
TEST( assignmentOp0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	e1 = e2;
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHoleClosedLocation e3( enums::HoleClosedLocation::bottom );
	e2 = e3;
	expected = "bottom";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "right";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "right";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	e1 = e2;
	string expected = "bottom";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHoleClosedLocation e3( enums::HoleClosedLocation::left );
	e2 = e3;
	expected = "left";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bottom";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bottom";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::left );
	e1 = e2;
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHoleClosedLocation e3( enums::HoleClosedLocation::top );
	e2 = e3;
	expected = "top";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	e1 = e2;
	string expected = "top";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHoleClosedLocation e3( enums::HoleClosedLocation::right );
	e2 = e3;
	expected = "right";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "top";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "top";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	CHECK( e1.getValue() == enums::HoleClosedLocation::right )
}
TEST( getValue1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	CHECK( e1.getValue() == enums::HoleClosedLocation::bottom )
}
TEST( getValue2 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	CHECK( e1.getValue() == enums::HoleClosedLocation::left )
}
TEST( getValue3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	CHECK( e1.getValue() == enums::HoleClosedLocation::top )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	string expected = "bottom";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	string expected = "top";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	e1.setValue( enums::HoleClosedLocation::right );
	CHECK( e1.getValue() == enums::HoleClosedLocation::right )
}
TEST( setValue1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	e1.setValue( enums::HoleClosedLocation::bottom );
	CHECK( e1.getValue() == enums::HoleClosedLocation::bottom )
}
TEST( setValue2 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	e1.setValue( enums::HoleClosedLocation::left );
	CHECK( e1.getValue() == enums::HoleClosedLocation::left )
}
TEST( setValue3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	e1.setValue( enums::HoleClosedLocation::top );
	CHECK( e1.getValue() == enums::HoleClosedLocation::top )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::bottom )
}
TEST( setValueInt0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::bottom )
}
TEST( setValueInt1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::left )
}
TEST( setValueInt2 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::top )
}
TEST( setValueInt3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::right )
}
TEST( setValueInt4 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::left )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::bottom )
}
TEST( fromString0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	CHECK( e1.fromString( "bottom" ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::bottom )
}
TEST( fromString1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	CHECK( e1.fromString( "left" ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::left )
}
TEST( fromString2 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	CHECK( e1.fromString( "top" ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::top )
}
TEST( fromString3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	CHECK( e1.fromString( "right" ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::right )
}
TEST( fromString4 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::left );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::HoleClosedLocation::left )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	string expected = "hole-closed-location";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	string expected = "hole-closed-location";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	string expected = "hole-closed-location";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	string expected = "MxEnumHoleClosedLocation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	string expected = "MxEnumHoleClosedLocation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	string expected = "MxEnumHoleClosedLocation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	string expected = "The hole-closed-location type indicates which portion of the hole is filled in when the corresponding hole-closed-value is half.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	string expected = "The hole-closed-location type indicates which portion of the hole is filled in when the corresponding hole-closed-value is half.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	string expected = "The hole-closed-location type indicates which portion of the hole is filled in when the corresponding hole-closed-value is half.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	stringstream ss;
	e1.stream( ss );
	string expected = "right";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "right";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	stringstream ss;
	e1.stream( ss );
	string expected = "bottom";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "bottom";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
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


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	stringstream ss;
	ss << e1;
	string expected = "right";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "right";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	stringstream ss;
	ss << e1;
	string expected = "bottom";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "bottom";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
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


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
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
TEST( incrementPre_start1_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	for( int i = 0; i < 4; ++i )
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
TEST( incrementPre_start3_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
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
TEST( decrementPre_start0_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
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
TEST( decrementPre_start1_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	for( int i = 0; i < 4; ++i )
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
TEST( decrementPre_start3_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
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
TEST( incrementPost_start0_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::right );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::right );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::bottom );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::bottom );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumHoleClosedLocation )
{
	MxEnumHoleClosedLocation e1( enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation e2( enums::HoleClosedLocation::top );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

