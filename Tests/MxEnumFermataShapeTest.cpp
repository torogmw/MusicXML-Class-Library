#include "TestHarness.h"
#include "MxEnumFermataShape.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumFermataShape )
{
	MxEnumFermataShape e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( e1 );
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
TEST( copyCtor1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( e1 );
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
TEST( copyCtor2 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	MxEnumFermataShape e2( e1 );
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
TEST( copyCtor3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( e1 );
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
TEST( assignmentOp0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	e1 = e2;
	string expected = "normal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFermataShape e3( enums::FermataShape::angled );
	e2 = e3;
	expected = "angled";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "normal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "normal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	e1 = e2;
	string expected = "angled";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFermataShape e3( enums::FermataShape::square );
	e2 = e3;
	expected = "square";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "angled";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "angled";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::square );
	e1 = e2;
	string expected = "square";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFermataShape e3( enums::FermataShape::empty );
	e2 = e3;
	expected = "";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "square";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "square";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	e1 = e2;
	string expected = "";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumFermataShape e3( enums::FermataShape::normal );
	e2 = e3;
	expected = "normal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	CHECK( e1.getValue() == enums::FermataShape::normal )
}
TEST( getValue1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	CHECK( e1.getValue() == enums::FermataShape::angled )
}
TEST( getValue2 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	CHECK( e1.getValue() == enums::FermataShape::square )
}
TEST( getValue3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	CHECK( e1.getValue() == enums::FermataShape::empty )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	string expected = "angled";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	string expected = "normal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	string expected = "angled";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	string expected = "square";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	string expected = "";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	e1.setValue( enums::FermataShape::normal );
	CHECK( e1.getValue() == enums::FermataShape::normal )
}
TEST( setValue1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	e1.setValue( enums::FermataShape::angled );
	CHECK( e1.getValue() == enums::FermataShape::angled )
}
TEST( setValue2 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	e1.setValue( enums::FermataShape::square );
	CHECK( e1.getValue() == enums::FermataShape::square )
}
TEST( setValue3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	e1.setValue( enums::FermataShape::empty );
	CHECK( e1.getValue() == enums::FermataShape::empty )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::FermataShape::angled )
}
TEST( setValueInt0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::FermataShape::angled )
}
TEST( setValueInt1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::FermataShape::square )
}
TEST( setValueInt2 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::FermataShape::empty )
}
TEST( setValueInt3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::FermataShape::normal )
}
TEST( setValueInt4 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::FermataShape::square )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::FermataShape::angled )
}
TEST( fromString0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	CHECK( e1.fromString( "angled" ) )
	CHECK( e1.getValue() == enums::FermataShape::angled )
}
TEST( fromString1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	CHECK( e1.fromString( "square" ) )
	CHECK( e1.getValue() == enums::FermataShape::square )
}
TEST( fromString2 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	CHECK( e1.fromString( "" ) )
	CHECK( e1.getValue() == enums::FermataShape::empty )
}
TEST( fromString3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	CHECK( e1.fromString( "normal" ) )
	CHECK( e1.getValue() == enums::FermataShape::normal )
}
TEST( fromString4 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::square );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::FermataShape::square )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	string expected = "fermata-shape";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	string expected = "fermata-shape";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	string expected = "fermata-shape";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	string expected = "MxEnumFermataShape";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	string expected = "MxEnumFermataShape";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	string expected = "MxEnumFermataShape";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	string expected = "The fermata-shape type represents the shape of the fermata sign. The empty value is equivalent to the normal value.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	string expected = "The fermata-shape type represents the shape of the fermata sign. The empty value is equivalent to the normal value.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	string expected = "The fermata-shape type represents the shape of the fermata sign. The empty value is equivalent to the normal value.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	stringstream ss;
	e1.stream( ss );
	string expected = "normal";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "normal";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	stringstream ss;
	e1.stream( ss );
	string expected = "angled";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "angled";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	stringstream ss;
	e1.stream( ss );
	string expected = "";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	stringstream ss;
	ss << e1;
	string expected = "normal";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "normal";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	stringstream ss;
	ss << e1;
	string expected = "angled";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "angled";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	stringstream ss;
	ss << e1;
	string expected = "";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "angled";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "angled";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "angled";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "angled";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "angled";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "angled";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "angled";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "angled";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "angled";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "empty";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "angled";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::normal );
	MxEnumFermataShape e2( enums::FermataShape::normal );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "normal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "angled";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::angled );
	MxEnumFermataShape e2( enums::FermataShape::angled );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "angled";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumFermataShape )
{
	MxEnumFermataShape e1( enums::FermataShape::empty );
	MxEnumFermataShape e2( enums::FermataShape::empty );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "empty";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "normal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

