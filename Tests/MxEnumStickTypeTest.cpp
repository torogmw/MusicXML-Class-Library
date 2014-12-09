#include "TestHarness.h"
#include "MxEnumStickType.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStickType )
{
	MxEnumStickType e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::xylophone );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( e1 );
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
TEST( copyCtor1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( e1 );
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
TEST( copyCtor2 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	MxEnumStickType e2( e1 );
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
TEST( copyCtor3 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::xylophone );
	MxEnumStickType e2( e1 );
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
TEST( copyCtor4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( e1 );
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
TEST( assignmentOp0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	e1 = e2;
	string expected = "bass drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickType e3( enums::StickType::doubleBassDrum );
	e2 = e3;
	expected = "double bass drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bass drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bass drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	e1 = e2;
	string expected = "double bass drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickType e3( enums::StickType::timpani );
	e2 = e3;
	expected = "timpani";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double bass drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double bass drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::xylophone );
	MxEnumStickType e2( enums::StickType::timpani );
	e1 = e2;
	string expected = "timpani";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickType e3( enums::StickType::xylophone );
	e2 = e3;
	expected = "xylophone";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "timpani";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "timpani";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::xylophone );
	e1 = e2;
	string expected = "xylophone";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickType e3( enums::StickType::yarn );
	e2 = e3;
	expected = "yarn";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "xylophone";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "xylophone";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	e1 = e2;
	string expected = "yarn";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStickType e3( enums::StickType::bassDrum );
	e2 = e3;
	expected = "bass drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "yarn";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "yarn";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	CHECK( e1.getValue() == enums::StickType::bassDrum )
}
TEST( getValue1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	CHECK( e1.getValue() == enums::StickType::doubleBassDrum )
}
TEST( getValue2 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	CHECK( e1.getValue() == enums::StickType::timpani )
}
TEST( getValue3 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::xylophone );
	CHECK( e1.getValue() == enums::StickType::xylophone )
}
TEST( getValue4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	CHECK( e1.getValue() == enums::StickType::yarn )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::xylophone );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	string expected = "doubleBassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	string expected = "timpani";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::xylophone );
	string expected = "xylophone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	string expected = "yarn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	string expected = "bass drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	string expected = "double bass drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	string expected = "timpani";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::xylophone );
	string expected = "xylophone";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	string expected = "yarn";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	e1.setValue( enums::StickType::bassDrum );
	CHECK( e1.getValue() == enums::StickType::bassDrum )
}
TEST( setValue1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	e1.setValue( enums::StickType::doubleBassDrum );
	CHECK( e1.getValue() == enums::StickType::doubleBassDrum )
}
TEST( setValue2 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::xylophone );
	e1.setValue( enums::StickType::timpani );
	CHECK( e1.getValue() == enums::StickType::timpani )
}
TEST( setValue3 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	e1.setValue( enums::StickType::xylophone );
	CHECK( e1.getValue() == enums::StickType::xylophone )
}
TEST( setValue4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	e1.setValue( enums::StickType::yarn );
	CHECK( e1.getValue() == enums::StickType::yarn )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StickType::doubleBassDrum )
}
TEST( setValueInt0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StickType::doubleBassDrum )
}
TEST( setValueInt1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::xylophone );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StickType::timpani )
}
TEST( setValueInt2 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::StickType::xylophone )
}
TEST( setValueInt3 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	CHECK( e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::StickType::yarn )
}
TEST( setValueInt4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StickType::bassDrum )
}
TEST( setValueInt5 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	CHECK( ! e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::StickType::timpani )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StickType::doubleBassDrum )
}
TEST( fromString0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	CHECK( e1.fromString( "double bass drum" ) )
	CHECK( e1.getValue() == enums::StickType::doubleBassDrum )
}
TEST( fromString1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::xylophone );
	CHECK( e1.fromString( "timpani" ) )
	CHECK( e1.getValue() == enums::StickType::timpani )
}
TEST( fromString2 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	CHECK( e1.fromString( "xylophone" ) )
	CHECK( e1.getValue() == enums::StickType::xylophone )
}
TEST( fromString3 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	CHECK( e1.fromString( "yarn" ) )
	CHECK( e1.getValue() == enums::StickType::yarn )
}
TEST( fromString4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	CHECK( e1.fromString( "bass drum" ) )
	CHECK( e1.getValue() == enums::StickType::bassDrum )
}
TEST( fromString5 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::timpani );
	CHECK( ! e1.fromString( "crazyErrantValue5" ) )
	CHECK( e1.getValue() == enums::StickType::timpani )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	string expected = "stick-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	string expected = "stick-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	string expected = "stick-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	string expected = "MxEnumStickType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	string expected = "MxEnumStickType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	string expected = "MxEnumStickType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	string expected = "The stick-type type represents the shape of pictograms where the material in the stick, mallet, or beater is represented in the pictogram.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	string expected = "The stick-type type represents the shape of pictograms where the material in the stick, mallet, or beater is represented in the pictogram.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	string expected = "The stick-type type represents the shape of pictograms where the material in the stick, mallet, or beater is represented in the pictogram.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	stringstream ss;
	e1.stream( ss );
	string expected = "bass drum";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "bass drum";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	stringstream ss;
	e1.stream( ss );
	string expected = "double bass drum";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "double bass drum";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	stringstream ss;
	e1.stream( ss );
	string expected = "yarn";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "yarn";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	stringstream ss;
	ss << e1;
	string expected = "bass drum";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "bass drum";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	stringstream ss;
	ss << e1;
	string expected = "double bass drum";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "double bass drum";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	stringstream ss;
	ss << e1;
	string expected = "yarn";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "yarn";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_4equals4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_4equals4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_4islessthanoreq4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan0 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::bassDrum );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan1 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_4isgreaterthan4 , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "yarn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yarn";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "xylophone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xylophone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "doubleBassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleBassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "yarn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yarn";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "doubleBassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleBassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "timpani";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "timpani";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "doubleBassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleBassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "yarn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yarn";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "yarn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xylophone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yarn";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "xylophone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "timpani";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "yarn";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "doubleBassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "yarn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xylophone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "doubleBassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "timpani";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "timpani";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "xylophone";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_4times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleBassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::bassDrum );
	MxEnumStickType e2( enums::StickType::bassDrum );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleBassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::doubleBassDrum );
	MxEnumStickType e2( enums::StickType::doubleBassDrum );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "doubleBassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "timpani";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_5times , MxEnumStickType )
{
	MxEnumStickType e1( enums::StickType::yarn );
	MxEnumStickType e2( enums::StickType::yarn );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "yarn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

