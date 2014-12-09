#include "TestHarness.h"
#include "MxEnumTextDirection.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumTextDirection )
{
	MxEnumTextDirection e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( e1 );
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
TEST( copyCtor1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( e1 );
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
TEST( copyCtor2 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	MxEnumTextDirection e2( e1 );
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
TEST( copyCtor3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( e1 );
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
TEST( assignmentOp0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	e1 = e2;
	string expected = "ltr";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTextDirection e3( enums::TextDirection::rtl );
	e2 = e3;
	expected = "rtl";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ltr";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ltr";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	e1 = e2;
	string expected = "rtl";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTextDirection e3( enums::TextDirection::lro );
	e2 = e3;
	expected = "lro";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rtl";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rtl";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::lro );
	e1 = e2;
	string expected = "lro";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTextDirection e3( enums::TextDirection::rlo );
	e2 = e3;
	expected = "rlo";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "lro";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "lro";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	e1 = e2;
	string expected = "rlo";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTextDirection e3( enums::TextDirection::ltr );
	e2 = e3;
	expected = "ltr";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rlo";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rlo";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	CHECK( e1.getValue() == enums::TextDirection::ltr )
}
TEST( getValue1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	CHECK( e1.getValue() == enums::TextDirection::rtl )
}
TEST( getValue2 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	CHECK( e1.getValue() == enums::TextDirection::lro )
}
TEST( getValue3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	CHECK( e1.getValue() == enums::TextDirection::rlo )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	string expected = "ltr";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	string expected = "rtl";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	string expected = "lro";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	string expected = "rlo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	string expected = "ltr";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	string expected = "rtl";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	string expected = "lro";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	string expected = "rlo";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	e1.setValue( enums::TextDirection::ltr );
	CHECK( e1.getValue() == enums::TextDirection::ltr )
}
TEST( setValue1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	e1.setValue( enums::TextDirection::rtl );
	CHECK( e1.getValue() == enums::TextDirection::rtl )
}
TEST( setValue2 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	e1.setValue( enums::TextDirection::lro );
	CHECK( e1.getValue() == enums::TextDirection::lro )
}
TEST( setValue3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	e1.setValue( enums::TextDirection::rlo );
	CHECK( e1.getValue() == enums::TextDirection::rlo )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::TextDirection::rtl )
}
TEST( setValueInt0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::TextDirection::rtl )
}
TEST( setValueInt1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::TextDirection::lro )
}
TEST( setValueInt2 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::TextDirection::rlo )
}
TEST( setValueInt3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::TextDirection::ltr )
}
TEST( setValueInt4 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	CHECK( ! e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::TextDirection::lro )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::TextDirection::rtl )
}
TEST( fromString0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	CHECK( e1.fromString( "rtl" ) )
	CHECK( e1.getValue() == enums::TextDirection::rtl )
}
TEST( fromString1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	CHECK( e1.fromString( "lro" ) )
	CHECK( e1.getValue() == enums::TextDirection::lro )
}
TEST( fromString2 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	CHECK( e1.fromString( "rlo" ) )
	CHECK( e1.getValue() == enums::TextDirection::rlo )
}
TEST( fromString3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	CHECK( e1.fromString( "ltr" ) )
	CHECK( e1.getValue() == enums::TextDirection::ltr )
}
TEST( fromString4 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::lro );
	CHECK( ! e1.fromString( "crazyErrantValue4" ) )
	CHECK( e1.getValue() == enums::TextDirection::lro )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	int expected = 4;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	string expected = "text-direction";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	string expected = "text-direction";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	string expected = "text-direction";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	string expected = "MxEnumTextDirection";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	string expected = "MxEnumTextDirection";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	string expected = "MxEnumTextDirection";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	string expected = "The text-direction type is used to adjust and override the Unicode bidirectional text algorithm, similar to the W3C Internationalization Tag Set recommendation. Values are ltr (left-to-right embed), rtl (right-to-left embed), lro (left-to-right bidi-override), and rlo (right-to-left bidi-override). The default value is ltr. This type is typically used by applications that store text in left-to-right visual order rather than logical order. Such applications can use the lro value to better communicate with other applications that more fully support bidirectional text.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	string expected = "The text-direction type is used to adjust and override the Unicode bidirectional text algorithm, similar to the W3C Internationalization Tag Set recommendation. Values are ltr (left-to-right embed), rtl (right-to-left embed), lro (left-to-right bidi-override), and rlo (right-to-left bidi-override). The default value is ltr. This type is typically used by applications that store text in left-to-right visual order rather than logical order. Such applications can use the lro value to better communicate with other applications that more fully support bidirectional text.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	string expected = "The text-direction type is used to adjust and override the Unicode bidirectional text algorithm, similar to the W3C Internationalization Tag Set recommendation. Values are ltr (left-to-right embed), rtl (right-to-left embed), lro (left-to-right bidi-override), and rlo (right-to-left bidi-override). The default value is ltr. This type is typically used by applications that store text in left-to-right visual order rather than logical order. Such applications can use the lro value to better communicate with other applications that more fully support bidirectional text.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	stringstream ss;
	e1.stream( ss );
	string expected = "ltr";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "ltr";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	stringstream ss;
	e1.stream( ss );
	string expected = "rtl";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "rtl";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	stringstream ss;
	e1.stream( ss );
	string expected = "rlo";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "rlo";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	stringstream ss;
	ss << e1;
	string expected = "ltr";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "ltr";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	stringstream ss;
	ss << e1;
	string expected = "rtl";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "rtl";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	stringstream ss;
	ss << e1;
	string expected = "rlo";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "rlo";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_3equals1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_3equals3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_3equals1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_3equals3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_3islessthanoreq1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_3islessthanoreq3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthanoreq3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_3islessthan3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan0 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_3isgreaterthan1 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_3isgreaterthan3 , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "rlo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rlo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "ltr";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ltr";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "lro";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "lro";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "ltr";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ltr";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "rtl";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rtl";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start3_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "rlo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rlo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "rtl";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rtl";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "lro";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "lro";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "ltr";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ltr";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "ltr";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ltr";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "rtl";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rtl";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start3_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "rlo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rlo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "rlo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "lro";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "ltr";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rlo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "lro";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rtl";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "ltr";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rlo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "rtl";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ltr";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start3_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "rlo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "lro";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "rtl";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "lro";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "lro";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rlo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_3times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "ltr";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rtl";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::ltr );
	MxEnumTextDirection e2( enums::TextDirection::ltr );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "ltr";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rtl";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rtl );
	MxEnumTextDirection e2( enums::TextDirection::rtl );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "rtl";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "lro";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start3_4times , MxEnumTextDirection )
{
	MxEnumTextDirection e1( enums::TextDirection::rlo );
	MxEnumTextDirection e2( enums::TextDirection::rlo );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "rlo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ltr";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

