#include "TestHarness.h"
#include "MxEnumValignImage.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumValignImage )
{
	MxEnumValignImage e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( e1 );
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
TEST( copyCtor1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( e1 );
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
TEST( copyCtor2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( e1 );
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
TEST( assignmentOp0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::top );
	e1 = e2;
	string expected = "top";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumValignImage e3( enums::ValignImage::middle );
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
TEST( assignmentOp1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::middle );
	e1 = e2;
	string expected = "middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumValignImage e3( enums::ValignImage::bottom );
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
TEST( assignmentOp2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	e1 = e2;
	string expected = "bottom";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumValignImage e3( enums::ValignImage::top );
	e2 = e3;
	expected = "top";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bottom";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bottom";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	CHECK( e1.getValue() == enums::ValignImage::top )
}
TEST( getValue1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	CHECK( e1.getValue() == enums::ValignImage::middle )
}
TEST( getValue2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	CHECK( e1.getValue() == enums::ValignImage::bottom )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	string expected = "middle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	string expected = "top";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	string expected = "middle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	string expected = "bottom";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	e1.setValue( enums::ValignImage::top );
	CHECK( e1.getValue() == enums::ValignImage::top )
}
TEST( setValue1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	e1.setValue( enums::ValignImage::middle );
	CHECK( e1.getValue() == enums::ValignImage::middle )
}
TEST( setValue2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	e1.setValue( enums::ValignImage::bottom );
	CHECK( e1.getValue() == enums::ValignImage::bottom )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::ValignImage::middle )
}
TEST( setValueInt0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::ValignImage::middle )
}
TEST( setValueInt1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::ValignImage::bottom )
}
TEST( setValueInt2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::ValignImage::top )
}
TEST( setValueInt3 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::ValignImage::bottom )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::ValignImage::middle )
}
TEST( fromString0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	CHECK( e1.fromString( "middle" ) )
	CHECK( e1.getValue() == enums::ValignImage::middle )
}
TEST( fromString1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	CHECK( e1.fromString( "bottom" ) )
	CHECK( e1.getValue() == enums::ValignImage::bottom )
}
TEST( fromString2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	CHECK( e1.fromString( "top" ) )
	CHECK( e1.getValue() == enums::ValignImage::top )
}
TEST( fromString3 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::ValignImage::bottom )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	string expected = "valign-image";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	string expected = "valign-image";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	string expected = "valign-image";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	string expected = "MxEnumValignImage";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	string expected = "MxEnumValignImage";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	string expected = "MxEnumValignImage";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	string expected = "The valign-image type is used to indicate vertical alignment for images and graphics, so it does not include a baseline value. Defaults are implementation-dependent.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	string expected = "The valign-image type is used to indicate vertical alignment for images and graphics, so it does not include a baseline value. Defaults are implementation-dependent.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	string expected = "The valign-image type is used to indicate vertical alignment for images and graphics, so it does not include a baseline value. Defaults are implementation-dependent.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
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
TEST( stream1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
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
TEST( stream2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
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


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
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
TEST( streamingOperator1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
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
TEST( streamingOperator2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
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


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::top );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::middle );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPre_start1_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPre_start2_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPre_start0_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
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
TEST( incrementPre_start1_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPre_start2_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
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
TEST( decrementPre_start0_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPre_start1_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPre_start2_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPre_start0_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
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
TEST( decrementPre_start1_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
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
TEST( decrementPre_start2_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
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
TEST( incrementPost_start0_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPost_start1_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPost_start0_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "top";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bottom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPost_start2_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
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
TEST( decrementPost_start0_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPost_start1_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPost_start0_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::top );
	MxEnumValignImage e2( enums::ValignImage::top );
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
TEST( decrementPost_start1_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::middle );
	MxEnumValignImage e2( enums::ValignImage::middle );
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
TEST( decrementPost_start2_3times , MxEnumValignImage )
{
	MxEnumValignImage e1( enums::ValignImage::bottom );
	MxEnumValignImage e2( enums::ValignImage::bottom );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "bottom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "top";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

