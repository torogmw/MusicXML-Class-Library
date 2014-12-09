#include "TestHarness.h"
#include "MxEnumTimeSeparator.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::vertical );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( e1 );
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
TEST( copyCtor1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( e1 );
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
TEST( copyCtor2 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	MxEnumTimeSeparator e2( e1 );
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
TEST( copyCtor3 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::vertical );
	MxEnumTimeSeparator e2( e1 );
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
TEST( copyCtor4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( e1 );
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
TEST( assignmentOp0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSeparator e3( enums::TimeSeparator::horizontal );
	e2 = e3;
	expected = "horizontal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	e1 = e2;
	string expected = "horizontal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSeparator e3( enums::TimeSeparator::diagonal );
	e2 = e3;
	expected = "diagonal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "horizontal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "horizontal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::vertical );
	MxEnumTimeSeparator e2( enums::TimeSeparator::diagonal );
	e1 = e2;
	string expected = "diagonal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSeparator e3( enums::TimeSeparator::vertical );
	e2 = e3;
	expected = "vertical";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diagonal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diagonal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::vertical );
	e1 = e2;
	string expected = "vertical";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSeparator e3( enums::TimeSeparator::adjacent );
	e2 = e3;
	expected = "adjacent";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "vertical";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "vertical";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	e1 = e2;
	string expected = "adjacent";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTimeSeparator e3( enums::TimeSeparator::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "adjacent";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "adjacent";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	CHECK( e1.getValue() == enums::TimeSeparator::none )
}
TEST( getValue1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	CHECK( e1.getValue() == enums::TimeSeparator::horizontal )
}
TEST( getValue2 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	CHECK( e1.getValue() == enums::TimeSeparator::diagonal )
}
TEST( getValue3 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::vertical );
	CHECK( e1.getValue() == enums::TimeSeparator::vertical )
}
TEST( getValue4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	CHECK( e1.getValue() == enums::TimeSeparator::adjacent )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::vertical );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	string expected = "horizontal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	string expected = "diagonal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::vertical );
	string expected = "vertical";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	string expected = "adjacent";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	string expected = "horizontal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	string expected = "diagonal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::vertical );
	string expected = "vertical";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	string expected = "adjacent";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	e1.setValue( enums::TimeSeparator::none );
	CHECK( e1.getValue() == enums::TimeSeparator::none )
}
TEST( setValue1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	e1.setValue( enums::TimeSeparator::horizontal );
	CHECK( e1.getValue() == enums::TimeSeparator::horizontal )
}
TEST( setValue2 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::vertical );
	e1.setValue( enums::TimeSeparator::diagonal );
	CHECK( e1.getValue() == enums::TimeSeparator::diagonal )
}
TEST( setValue3 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	e1.setValue( enums::TimeSeparator::vertical );
	CHECK( e1.getValue() == enums::TimeSeparator::vertical )
}
TEST( setValue4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	e1.setValue( enums::TimeSeparator::adjacent );
	CHECK( e1.getValue() == enums::TimeSeparator::adjacent )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::TimeSeparator::horizontal )
}
TEST( setValueInt0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::TimeSeparator::horizontal )
}
TEST( setValueInt1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::vertical );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::TimeSeparator::diagonal )
}
TEST( setValueInt2 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::TimeSeparator::vertical )
}
TEST( setValueInt3 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	CHECK( e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::TimeSeparator::adjacent )
}
TEST( setValueInt4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::TimeSeparator::none )
}
TEST( setValueInt5 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	CHECK( ! e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::TimeSeparator::diagonal )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::TimeSeparator::horizontal )
}
TEST( fromString0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	CHECK( e1.fromString( "horizontal" ) )
	CHECK( e1.getValue() == enums::TimeSeparator::horizontal )
}
TEST( fromString1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::vertical );
	CHECK( e1.fromString( "diagonal" ) )
	CHECK( e1.getValue() == enums::TimeSeparator::diagonal )
}
TEST( fromString2 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	CHECK( e1.fromString( "vertical" ) )
	CHECK( e1.getValue() == enums::TimeSeparator::vertical )
}
TEST( fromString3 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	CHECK( e1.fromString( "adjacent" ) )
	CHECK( e1.getValue() == enums::TimeSeparator::adjacent )
}
TEST( fromString4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::TimeSeparator::none )
}
TEST( fromString5 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::diagonal );
	CHECK( ! e1.fromString( "crazyErrantValue5" ) )
	CHECK( e1.getValue() == enums::TimeSeparator::diagonal )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	string expected = "time-separator";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	string expected = "time-separator";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	string expected = "time-separator";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	string expected = "MxEnumTimeSeparator";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	string expected = "MxEnumTimeSeparator";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	string expected = "MxEnumTimeSeparator";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	string expected = "The time-separator type indicates how to display the arrangement between the beats and beat-type values in a time signature. The default value is none. The horizontal, diagonal, and vertical values represent horizontal, diagonal lower-left to upper-right, and vertical lines respectively. For these values, the beats and beat-type values are arranged on either side of the separator line. The none value represents no separator with the beats and beat-type arranged vertically. The adjacent value represents no separator with the beats and beat-type arranged horizontally.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	string expected = "The time-separator type indicates how to display the arrangement between the beats and beat-type values in a time signature. The default value is none. The horizontal, diagonal, and vertical values represent horizontal, diagonal lower-left to upper-right, and vertical lines respectively. For these values, the beats and beat-type values are arranged on either side of the separator line. The none value represents no separator with the beats and beat-type arranged vertically. The adjacent value represents no separator with the beats and beat-type arranged horizontally.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	string expected = "The time-separator type indicates how to display the arrangement between the beats and beat-type values in a time signature. The default value is none. The horizontal, diagonal, and vertical values represent horizontal, diagonal lower-left to upper-right, and vertical lines respectively. For these values, the beats and beat-type values are arranged on either side of the separator line. The none value represents no separator with the beats and beat-type arranged vertically. The adjacent value represents no separator with the beats and beat-type arranged horizontally.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	stringstream ss;
	e1.stream( ss );
	string expected = "none";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "none";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	stringstream ss;
	e1.stream( ss );
	string expected = "horizontal";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "horizontal";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	stringstream ss;
	e1.stream( ss );
	string expected = "adjacent";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "adjacent";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	stringstream ss;
	ss << e1;
	string expected = "none";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "none";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	stringstream ss;
	ss << e1;
	string expected = "horizontal";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "horizontal";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	stringstream ss;
	ss << e1;
	string expected = "adjacent";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "adjacent";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_4equals4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_4equals4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_4islessthanoreq4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan0 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan1 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_4isgreaterthan4 , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "adjacent";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "adjacent";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "vertical";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vertical";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "horizontal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "horizontal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "adjacent";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "adjacent";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "horizontal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "horizontal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "diagonal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diagonal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "horizontal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "horizontal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "adjacent";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "adjacent";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "adjacent";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vertical";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "adjacent";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "vertical";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diagonal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "adjacent";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "horizontal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "adjacent";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vertical";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "horizontal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diagonal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "diagonal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vertical";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_4times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "horizontal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::none );
	MxEnumTimeSeparator e2( enums::TimeSeparator::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "horizontal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::horizontal );
	MxEnumTimeSeparator e2( enums::TimeSeparator::horizontal );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "horizontal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diagonal";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_5times , MxEnumTimeSeparator )
{
	MxEnumTimeSeparator e1( enums::TimeSeparator::adjacent );
	MxEnumTimeSeparator e2( enums::TimeSeparator::adjacent );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "adjacent";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

