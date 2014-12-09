#include "TestHarness.h"
#include "MxEnumWedgeType.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumWedgeType )
{
	MxEnumWedgeType e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( e1 );
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
TEST( copyCtor1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( e1 );
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
TEST( copyCtor2 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	MxEnumWedgeType e2( e1 );
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
TEST( copyCtor3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( e1 );
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
TEST( assignmentOp0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	e1 = e2;
	string expected = "crescendo";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWedgeType e3( enums::WedgeType::diminuendo );
	e2 = e3;
	expected = "diminuendo";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "crescendo";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "crescendo";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	e1 = e2;
	string expected = "diminuendo";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWedgeType e3( enums::WedgeType::stop );
	e2 = e3;
	expected = "stop";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diminuendo";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diminuendo";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::stop );
	e1 = e2;
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWedgeType e3( enums::WedgeType::continue_ );
	e2 = e3;
	expected = "continue";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "stop";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	e1 = e2;
	string expected = "continue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWedgeType e3( enums::WedgeType::crescendo );
	e2 = e3;
	expected = "crescendo";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "continue";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "continue";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	CHECK( e1.getValue() == enums::WedgeType::crescendo )
}
TEST( getValue1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	CHECK( e1.getValue() == enums::WedgeType::diminuendo )
}
TEST( getValue2 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	CHECK( e1.getValue() == enums::WedgeType::stop )
}
TEST( getValue3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	CHECK( e1.getValue() == enums::WedgeType::continue_ )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	string expected = "crescendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	string expected = "diminuendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	string expected = "crescendo";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	string expected = "diminuendo";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	string expected = "stop";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	string expected = "continue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	e1.setValue( enums::WedgeType::crescendo );
	CHECK( e1.getValue() == enums::WedgeType::crescendo )
}
TEST( setValue1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	e1.setValue( enums::WedgeType::diminuendo );
	CHECK( e1.getValue() == enums::WedgeType::diminuendo )
}
TEST( setValue2 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	e1.setValue( enums::WedgeType::stop );
	CHECK( e1.getValue() == enums::WedgeType::stop )
}
TEST( setValue3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	e1.setValue( enums::WedgeType::continue_ );
	CHECK( e1.getValue() == enums::WedgeType::continue_ )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::WedgeType::diminuendo )
}
TEST( setValueInt0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::WedgeType::diminuendo )
}
TEST( setValueInt1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::WedgeType::stop )
}
TEST( setValueInt2 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::WedgeType::continue_ )
}
TEST( setValueInt3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::WedgeType::crescendo )
}
TEST( setValueInt4 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::WedgeType::stop )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::WedgeType::diminuendo )
}
TEST( fromString0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	CHECK( e1.fromString( "diminuendo" ) )
	CHECK( e1.getValue() == enums::WedgeType::diminuendo )
}
TEST( fromString1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	CHECK( e1.fromString( "stop" ) )
	CHECK( e1.getValue() == enums::WedgeType::stop )
}
TEST( fromString2 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	CHECK( e1.fromString( "continue" ) )
	CHECK( e1.getValue() == enums::WedgeType::continue_ )
}
TEST( fromString3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	CHECK( e1.fromString( "crescendo" ) )
	CHECK( e1.getValue() == enums::WedgeType::crescendo )
}
TEST( fromString4 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::stop );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::WedgeType::stop )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	string expected = "wedge-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	string expected = "wedge-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	string expected = "wedge-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	string expected = "MxEnumWedgeType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	string expected = "MxEnumWedgeType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	string expected = "MxEnumWedgeType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	string expected = "The wedge type is crescendo for the start of a wedge that is closed at the left side, diminuendo for the start of a wedge that is closed on the right side, and stop for the end of a wedge. The continue type is used for formatting wedges over a system break, or for other situations where a single wedge is divided into multiple segments.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	string expected = "The wedge type is crescendo for the start of a wedge that is closed at the left side, diminuendo for the start of a wedge that is closed on the right side, and stop for the end of a wedge. The continue type is used for formatting wedges over a system break, or for other situations where a single wedge is divided into multiple segments.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	string expected = "The wedge type is crescendo for the start of a wedge that is closed at the left side, diminuendo for the start of a wedge that is closed on the right side, and stop for the end of a wedge. The continue type is used for formatting wedges over a system break, or for other situations where a single wedge is divided into multiple segments.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	stringstream ss;
	e1.stream( ss );
	string expected = "crescendo";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "crescendo";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	stringstream ss;
	e1.stream( ss );
	string expected = "diminuendo";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "diminuendo";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	stringstream ss;
	e1.stream( ss );
	string expected = "continue";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "continue";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	stringstream ss;
	ss << e1;
	string expected = "crescendo";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "crescendo";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	stringstream ss;
	ss << e1;
	string expected = "diminuendo";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "diminuendo";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	stringstream ss;
	ss << e1;
	string expected = "continue";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "continue";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "crescendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "crescendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "crescendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "crescendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "diminuendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminuendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "diminuendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminuendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "crescendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "crescendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "crescendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "crescendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "diminuendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminuendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "crescendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminuendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "crescendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "diminuendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "crescendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "diminuendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "stop";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "continue_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "crescendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminuendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::crescendo );
	MxEnumWedgeType e2( enums::WedgeType::crescendo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "crescendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminuendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::diminuendo );
	MxEnumWedgeType e2( enums::WedgeType::diminuendo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "diminuendo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "stop";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumWedgeType )
{
	MxEnumWedgeType e1( enums::WedgeType::continue_ );
	MxEnumWedgeType e2( enums::WedgeType::continue_ );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "continue_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "crescendo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

