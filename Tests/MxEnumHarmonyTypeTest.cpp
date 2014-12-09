#include "TestHarness.h"
#include "MxEnumHarmonyType.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( e1 );
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
TEST( copyCtor1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( e1 );
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
TEST( copyCtor2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( e1 );
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
TEST( assignmentOp0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	e1 = e2;
	string expected = "explicit";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHarmonyType e3( enums::HarmonyType::implied );
	e2 = e3;
	expected = "implied";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "explicit";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "explicit";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	e1 = e2;
	string expected = "implied";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHarmonyType e3( enums::HarmonyType::alternate );
	e2 = e3;
	expected = "alternate";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "implied";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "implied";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	e1 = e2;
	string expected = "alternate";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHarmonyType e3( enums::HarmonyType::explicit_ );
	e2 = e3;
	expected = "explicit";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "alternate";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "alternate";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	CHECK( e1.getValue() == enums::HarmonyType::explicit_ )
}
TEST( getValue1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	CHECK( e1.getValue() == enums::HarmonyType::implied )
}
TEST( getValue2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	CHECK( e1.getValue() == enums::HarmonyType::alternate )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	string expected = "explicit_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	string expected = "implied";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	string expected = "explicit";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	string expected = "implied";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	string expected = "alternate";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	e1.setValue( enums::HarmonyType::explicit_ );
	CHECK( e1.getValue() == enums::HarmonyType::explicit_ )
}
TEST( setValue1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	e1.setValue( enums::HarmonyType::implied );
	CHECK( e1.getValue() == enums::HarmonyType::implied )
}
TEST( setValue2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	e1.setValue( enums::HarmonyType::alternate );
	CHECK( e1.getValue() == enums::HarmonyType::alternate )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::HarmonyType::implied )
}
TEST( setValueInt0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::HarmonyType::implied )
}
TEST( setValueInt1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::HarmonyType::alternate )
}
TEST( setValueInt2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::HarmonyType::explicit_ )
}
TEST( setValueInt3 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::HarmonyType::alternate )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::HarmonyType::implied )
}
TEST( fromString0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	CHECK( e1.fromString( "implied" ) )
	CHECK( e1.getValue() == enums::HarmonyType::implied )
}
TEST( fromString1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	CHECK( e1.fromString( "alternate" ) )
	CHECK( e1.getValue() == enums::HarmonyType::alternate )
}
TEST( fromString2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	CHECK( e1.fromString( "explicit" ) )
	CHECK( e1.getValue() == enums::HarmonyType::explicit_ )
}
TEST( fromString3 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::HarmonyType::alternate )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	string expected = "harmony-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	string expected = "harmony-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	string expected = "harmony-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	string expected = "MxEnumHarmonyType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	string expected = "MxEnumHarmonyType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	string expected = "MxEnumHarmonyType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	string expected = "The harmony-type type differentiates different types of harmonies when alternate harmonies are possible. Explicit harmonies have all note present in the music; implied have some notes missing but implied; alternate represents alternate analyses.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	string expected = "The harmony-type type differentiates different types of harmonies when alternate harmonies are possible. Explicit harmonies have all note present in the music; implied have some notes missing but implied; alternate represents alternate analyses.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	string expected = "The harmony-type type differentiates different types of harmonies when alternate harmonies are possible. Explicit harmonies have all note present in the music; implied have some notes missing but implied; alternate represents alternate analyses.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	stringstream ss;
	e1.stream( ss );
	string expected = "explicit";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "explicit";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	stringstream ss;
	e1.stream( ss );
	string expected = "implied";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "implied";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	stringstream ss;
	e1.stream( ss );
	string expected = "alternate";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "alternate";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	stringstream ss;
	ss << e1;
	string expected = "explicit";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "explicit";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	stringstream ss;
	ss << e1;
	string expected = "implied";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "implied";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	stringstream ss;
	ss << e1;
	string expected = "alternate";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "alternate";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alternate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "explicit_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "explicit_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "implied";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "implied";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "explicit_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "explicit_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "implied";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "implied";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alternate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "implied";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "implied";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alternate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "explicit_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "explicit_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "explicit_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "explicit_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "implied";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "implied";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alternate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "implied";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "explicit_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alternate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "implied";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "explicit_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "explicit_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alternate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "implied";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "explicit_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "implied";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "implied";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alternate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "explicit_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "explicit_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "implied";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::explicit_ );
	MxEnumHarmonyType e2( enums::HarmonyType::explicit_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "explicit_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "implied";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::implied );
	MxEnumHarmonyType e2( enums::HarmonyType::implied );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "implied";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alternate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumHarmonyType )
{
	MxEnumHarmonyType e1( enums::HarmonyType::alternate );
	MxEnumHarmonyType e2( enums::HarmonyType::alternate );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "explicit_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

