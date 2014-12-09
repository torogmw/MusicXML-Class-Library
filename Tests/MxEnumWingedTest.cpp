#include "TestHarness.h"
#include "MxEnumWinged.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumWinged )
{
	MxEnumWinged e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleStraight );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( e1 );
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
TEST( copyCtor1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( e1 );
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
TEST( copyCtor2 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	MxEnumWinged e2( e1 );
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
TEST( copyCtor3 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleStraight );
	MxEnumWinged e2( e1 );
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
TEST( copyCtor4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( e1 );
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
TEST( assignmentOp0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWinged e3( enums::Winged::straight );
	e2 = e3;
	expected = "straight";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	MxEnumWinged e2( enums::Winged::straight );
	e1 = e2;
	string expected = "straight";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWinged e3( enums::Winged::curved );
	e2 = e3;
	expected = "curved";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "straight";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "straight";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleStraight );
	MxEnumWinged e2( enums::Winged::curved );
	e1 = e2;
	string expected = "curved";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWinged e3( enums::Winged::doubleStraight );
	e2 = e3;
	expected = "double-straight";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "curved";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "curved";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleStraight );
	e1 = e2;
	string expected = "double-straight";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWinged e3( enums::Winged::doubleCurved );
	e2 = e3;
	expected = "double-curved";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double-straight";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double-straight";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	e1 = e2;
	string expected = "double-curved";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWinged e3( enums::Winged::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double-curved";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double-curved";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	CHECK( e1.getValue() == enums::Winged::none )
}
TEST( getValue1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	CHECK( e1.getValue() == enums::Winged::straight )
}
TEST( getValue2 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	CHECK( e1.getValue() == enums::Winged::curved )
}
TEST( getValue3 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleStraight );
	CHECK( e1.getValue() == enums::Winged::doubleStraight )
}
TEST( getValue4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	CHECK( e1.getValue() == enums::Winged::doubleCurved )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleStraight );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleStraight );
	string expected = "doubleStraight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	string expected = "doubleCurved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	string expected = "straight";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	string expected = "curved";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleStraight );
	string expected = "double-straight";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	string expected = "double-curved";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	e1.setValue( enums::Winged::none );
	CHECK( e1.getValue() == enums::Winged::none )
}
TEST( setValue1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	e1.setValue( enums::Winged::straight );
	CHECK( e1.getValue() == enums::Winged::straight )
}
TEST( setValue2 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleStraight );
	e1.setValue( enums::Winged::curved );
	CHECK( e1.getValue() == enums::Winged::curved )
}
TEST( setValue3 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	e1.setValue( enums::Winged::doubleStraight );
	CHECK( e1.getValue() == enums::Winged::doubleStraight )
}
TEST( setValue4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	e1.setValue( enums::Winged::doubleCurved );
	CHECK( e1.getValue() == enums::Winged::doubleCurved )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Winged::straight )
}
TEST( setValueInt0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Winged::straight )
}
TEST( setValueInt1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleStraight );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Winged::curved )
}
TEST( setValueInt2 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Winged::doubleStraight )
}
TEST( setValueInt3 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	CHECK( e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::Winged::doubleCurved )
}
TEST( setValueInt4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Winged::none )
}
TEST( setValueInt5 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	CHECK( ! e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::Winged::curved )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Winged::straight )
}
TEST( fromString0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	CHECK( e1.fromString( "straight" ) )
	CHECK( e1.getValue() == enums::Winged::straight )
}
TEST( fromString1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleStraight );
	CHECK( e1.fromString( "curved" ) )
	CHECK( e1.getValue() == enums::Winged::curved )
}
TEST( fromString2 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	CHECK( e1.fromString( "double-straight" ) )
	CHECK( e1.getValue() == enums::Winged::doubleStraight )
}
TEST( fromString3 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	CHECK( e1.fromString( "double-curved" ) )
	CHECK( e1.getValue() == enums::Winged::doubleCurved )
}
TEST( fromString4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::Winged::none )
}
TEST( fromString5 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::curved );
	CHECK( ! e1.fromString( "crazyErrantValue5" ) )
	CHECK( e1.getValue() == enums::Winged::curved )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	string expected = "winged";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	string expected = "winged";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	string expected = "winged";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	string expected = "MxEnumWinged";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	string expected = "MxEnumWinged";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	string expected = "MxEnumWinged";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	string expected = "The winged attribute indicates whether the repeat has winged extensions that appear above and below the barline. The straight and curved values represent single wings, while the double-straight and double-curved values represent double wings. The none value indicates no wings and is the default.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	string expected = "The winged attribute indicates whether the repeat has winged extensions that appear above and below the barline. The straight and curved values represent single wings, while the double-straight and double-curved values represent double wings. The none value indicates no wings and is the default.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	string expected = "The winged attribute indicates whether the repeat has winged extensions that appear above and below the barline. The straight and curved values represent single wings, while the double-straight and double-curved values represent double wings. The none value indicates no wings and is the default.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
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
TEST( stream1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	stringstream ss;
	e1.stream( ss );
	string expected = "straight";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "straight";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	stringstream ss;
	e1.stream( ss );
	string expected = "double-curved";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "double-curved";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
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
TEST( streamingOperator1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	stringstream ss;
	ss << e1;
	string expected = "straight";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "straight";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	stringstream ss;
	ss << e1;
	string expected = "double-curved";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "double-curved";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_4equals4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_4equals4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_4islessthanoreq4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan0 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::none );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan1 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::straight );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_4isgreaterthan4 , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "doubleCurved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleCurved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
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
TEST( incrementPre_start4_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "doubleStraight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleStraight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
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
TEST( incrementPre_start1_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "doubleCurved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleCurved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
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
TEST( decrementPre_start0_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
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
TEST( decrementPre_start1_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "doubleCurved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleCurved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "doubleCurved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleStraight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleCurved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "doubleStraight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleCurved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "doubleCurved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleStraight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "curved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleStraight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_4times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::none );
	MxEnumWinged e2( enums::Winged::none );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "straight";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::straight );
	MxEnumWinged e2( enums::Winged::straight );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "straight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "curved";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_5times , MxEnumWinged )
{
	MxEnumWinged e1( enums::Winged::doubleCurved );
	MxEnumWinged e2( enums::Winged::doubleCurved );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "doubleCurved";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

