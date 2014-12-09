#include "TestHarness.h"
#include "MxEnumStickLocation.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStickLocation )
{
	MxEnumStickLocation e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( e1 );
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
TEST( copyCtor1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( e1 );
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
TEST( copyCtor2 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	MxEnumStickLocation e2( e1 );
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
TEST( copyCtor3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( e1 );
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
TEST( assignmentOp0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::center );
	e1 = e2;
	string expected = "center";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickLocation e3( enums::StickLocation::rim );
	e2 = e3;
	expected = "rim";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "center";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "center";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	e1 = e2;
	string expected = "rim";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickLocation e3( enums::StickLocation::cymbalBell );
	e2 = e3;
	expected = "cymbal bell";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rim";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rim";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalBell );
	e1 = e2;
	string expected = "cymbal bell";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickLocation e3( enums::StickLocation::cymbalEdge );
	e2 = e3;
	expected = "cymbal edge";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cymbal bell";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cymbal bell";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	e1 = e2;
	string expected = "cymbal edge";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickLocation e3( enums::StickLocation::center );
	e2 = e3;
	expected = "center";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cymbal edge";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cymbal edge";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	CHECK( e1.getValue() == enums::StickLocation::center )
}
TEST( getValue1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	CHECK( e1.getValue() == enums::StickLocation::rim )
}
TEST( getValue2 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	CHECK( e1.getValue() == enums::StickLocation::cymbalBell )
}
TEST( getValue3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	CHECK( e1.getValue() == enums::StickLocation::cymbalEdge )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	string expected = "rim";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	string expected = "cymbalBell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	string expected = "cymbalEdge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	string expected = "center";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	string expected = "rim";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	string expected = "cymbal bell";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	string expected = "cymbal edge";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	e1.setValue( enums::StickLocation::center );
	CHECK( e1.getValue() == enums::StickLocation::center )
}
TEST( setValue1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	e1.setValue( enums::StickLocation::rim );
	CHECK( e1.getValue() == enums::StickLocation::rim )
}
TEST( setValue2 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	e1.setValue( enums::StickLocation::cymbalBell );
	CHECK( e1.getValue() == enums::StickLocation::cymbalBell )
}
TEST( setValue3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	e1.setValue( enums::StickLocation::cymbalEdge );
	CHECK( e1.getValue() == enums::StickLocation::cymbalEdge )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StickLocation::rim )
}
TEST( setValueInt0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StickLocation::rim )
}
TEST( setValueInt1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StickLocation::cymbalBell )
}
TEST( setValueInt2 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::StickLocation::cymbalEdge )
}
TEST( setValueInt3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StickLocation::center )
}
TEST( setValueInt4 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::StickLocation::cymbalBell )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StickLocation::rim )
}
TEST( fromString0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	CHECK( e1.fromString( "rim" ) )
	CHECK( e1.getValue() == enums::StickLocation::rim )
}
TEST( fromString1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	CHECK( e1.fromString( "cymbal bell" ) )
	CHECK( e1.getValue() == enums::StickLocation::cymbalBell )
}
TEST( fromString2 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	CHECK( e1.fromString( "cymbal edge" ) )
	CHECK( e1.getValue() == enums::StickLocation::cymbalEdge )
}
TEST( fromString3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	CHECK( e1.fromString( "center" ) )
	CHECK( e1.getValue() == enums::StickLocation::center )
}
TEST( fromString4 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalBell );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::StickLocation::cymbalBell )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	string expected = "stick-location";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	string expected = "stick-location";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	string expected = "stick-location";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	string expected = "MxEnumStickLocation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	string expected = "MxEnumStickLocation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	string expected = "MxEnumStickLocation";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	string expected = "The stick-location type represents pictograms for the location of sticks, beaters, or mallets on cymbals, gongs, drums, and other instruments.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	string expected = "The stick-location type represents pictograms for the location of sticks, beaters, or mallets on cymbals, gongs, drums, and other instruments.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	string expected = "The stick-location type represents pictograms for the location of sticks, beaters, or mallets on cymbals, gongs, drums, and other instruments.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	stringstream ss;
	e1.stream( ss );
	string expected = "center";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "center";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	stringstream ss;
	e1.stream( ss );
	string expected = "rim";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "rim";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	stringstream ss;
	e1.stream( ss );
	string expected = "cymbal edge";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "cymbal edge";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	stringstream ss;
	ss << e1;
	string expected = "center";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "center";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	stringstream ss;
	ss << e1;
	string expected = "rim";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "rim";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	stringstream ss;
	ss << e1;
	string expected = "cymbal edge";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "cymbal edge";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::center );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "cymbalEdge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalEdge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "cymbalBell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalBell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "rim";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rim";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "cymbalEdge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalEdge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "rim";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rim";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "cymbalBell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalBell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "rim";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rim";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "cymbalEdge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalEdge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "cymbalEdge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalBell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalEdge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "cymbalBell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rim";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalEdge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "rim";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "cymbalEdge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalBell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "rim";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalBell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "cymbalBell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalEdge";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rim";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::center );
	MxEnumStickLocation e2( enums::StickLocation::center );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "center";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rim";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::rim );
	MxEnumStickLocation e2( enums::StickLocation::rim );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "rim";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cymbalBell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumStickLocation )
{
	MxEnumStickLocation e1( enums::StickLocation::cymbalEdge );
	MxEnumStickLocation e2( enums::StickLocation::cymbalEdge );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "cymbalEdge";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "center";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

