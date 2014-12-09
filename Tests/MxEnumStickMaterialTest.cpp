#include "TestHarness.h"
#include "MxEnumStickMaterial.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::shaded );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( e1 );
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
TEST( copyCtor1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( e1 );
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
TEST( copyCtor2 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	MxEnumStickMaterial e2( e1 );
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
TEST( copyCtor3 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::shaded );
	MxEnumStickMaterial e2( e1 );
	int expected = 3;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 4 );
	expected = 3;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 4;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( e1 );
	int expected = 4;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 4;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	e1 = e2;
	string expected = "soft";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickMaterial e3( enums::StickMaterial::medium );
	e2 = e3;
	expected = "medium";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "soft";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "soft";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	e1 = e2;
	string expected = "medium";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickMaterial e3( enums::StickMaterial::hard );
	e2 = e3;
	expected = "hard";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "medium";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "medium";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::shaded );
	MxEnumStickMaterial e2( enums::StickMaterial::hard );
	e1 = e2;
	string expected = "hard";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickMaterial e3( enums::StickMaterial::shaded );
	e2 = e3;
	expected = "shaded";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hard";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hard";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::shaded );
	e1 = e2;
	string expected = "shaded";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickMaterial e3( enums::StickMaterial::x );
	e2 = e3;
	expected = "x";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "shaded";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "shaded";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	e1 = e2;
	string expected = "x";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickMaterial e3( enums::StickMaterial::soft );
	e2 = e3;
	expected = "soft";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "x";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "x";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	CHECK( e1.getValue() == enums::StickMaterial::soft )
}
TEST( getValue1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	CHECK( e1.getValue() == enums::StickMaterial::medium )
}
TEST( getValue2 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	CHECK( e1.getValue() == enums::StickMaterial::hard )
}
TEST( getValue3 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::shaded );
	CHECK( e1.getValue() == enums::StickMaterial::shaded )
}
TEST( getValue4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	CHECK( e1.getValue() == enums::StickMaterial::x )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::shaded );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	string expected = "soft";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	string expected = "hard";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::shaded );
	string expected = "shaded";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	string expected = "x";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	string expected = "soft";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	string expected = "medium";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	string expected = "hard";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::shaded );
	string expected = "shaded";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	string expected = "x";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	e1.setValue( enums::StickMaterial::soft );
	CHECK( e1.getValue() == enums::StickMaterial::soft )
}
TEST( setValue1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	e1.setValue( enums::StickMaterial::medium );
	CHECK( e1.getValue() == enums::StickMaterial::medium )
}
TEST( setValue2 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::shaded );
	e1.setValue( enums::StickMaterial::hard );
	CHECK( e1.getValue() == enums::StickMaterial::hard )
}
TEST( setValue3 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	e1.setValue( enums::StickMaterial::shaded );
	CHECK( e1.getValue() == enums::StickMaterial::shaded )
}
TEST( setValue4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	e1.setValue( enums::StickMaterial::x );
	CHECK( e1.getValue() == enums::StickMaterial::x )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StickMaterial::medium )
}
TEST( setValueInt0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StickMaterial::medium )
}
TEST( setValueInt1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::shaded );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StickMaterial::hard )
}
TEST( setValueInt2 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::StickMaterial::shaded )
}
TEST( setValueInt3 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	CHECK( e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::StickMaterial::x )
}
TEST( setValueInt4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StickMaterial::soft )
}
TEST( setValueInt5 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	CHECK( ! e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::StickMaterial::hard )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StickMaterial::medium )
}
TEST( fromString0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	CHECK( e1.fromString( "medium" ) )
	CHECK( e1.getValue() == enums::StickMaterial::medium )
}
TEST( fromString1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::shaded );
	CHECK( e1.fromString( "hard" ) )
	CHECK( e1.getValue() == enums::StickMaterial::hard )
}
TEST( fromString2 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	CHECK( e1.fromString( "shaded" ) )
	CHECK( e1.getValue() == enums::StickMaterial::shaded )
}
TEST( fromString3 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	CHECK( e1.fromString( "x" ) )
	CHECK( e1.getValue() == enums::StickMaterial::x )
}
TEST( fromString4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	CHECK( e1.fromString( "soft" ) )
	CHECK( e1.getValue() == enums::StickMaterial::soft )
}
TEST( fromString5 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::hard );
	CHECK( ! e1.fromString( "crazyErrantValue5" ) )
	CHECK( e1.getValue() == enums::StickMaterial::hard )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	string expected = "stick-material";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	string expected = "stick-material";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	string expected = "stick-material";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	string expected = "MxEnumStickMaterial";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	string expected = "MxEnumStickMaterial";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	string expected = "MxEnumStickMaterial";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	string expected = "The stick-material type represents the material being displayed in a stick pictogram.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	string expected = "The stick-material type represents the material being displayed in a stick pictogram.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	string expected = "The stick-material type represents the material being displayed in a stick pictogram.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	stringstream ss;
	e1.stream( ss );
	string expected = "soft";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "soft";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	stringstream ss;
	e1.stream( ss );
	string expected = "medium";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "medium";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	stringstream ss;
	e1.stream( ss );
	string expected = "x";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "x";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	stringstream ss;
	ss << e1;
	string expected = "soft";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "soft";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	stringstream ss;
	ss << e1;
	string expected = "medium";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "medium";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	stringstream ss;
	ss << e1;
	string expected = "x";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "x";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_4equals4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_4equals4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_4islessthanoreq4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan0 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan1 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_4isgreaterthan4 , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "x";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "x";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "soft";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "soft";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "shaded";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "shaded";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "soft";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "soft";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "medium";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "x";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "x";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "medium";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "hard";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hard";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "soft";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "soft";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "soft";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "soft";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "medium";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "x";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "x";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "x";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "shaded";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "soft";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "x";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "shaded";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hard";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "soft";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "x";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "soft";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "x";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "shaded";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hard";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "hard";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "shaded";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_4times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "soft";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "medium";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::soft );
	MxEnumStickMaterial e2( enums::StickMaterial::soft );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "soft";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "medium";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::medium );
	MxEnumStickMaterial e2( enums::StickMaterial::medium );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "medium";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hard";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_5times , MxEnumStickMaterial )
{
	MxEnumStickMaterial e1( enums::StickMaterial::x );
	MxEnumStickMaterial e2( enums::StickMaterial::x );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "x";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "soft";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

