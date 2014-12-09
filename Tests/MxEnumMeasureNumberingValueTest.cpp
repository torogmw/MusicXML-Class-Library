#include "TestHarness.h"
#include "MxEnumMeasureNumberingValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( e1 );
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
TEST( copyCtor1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( e1 );
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
TEST( copyCtor2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( e1 );
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
TEST( assignmentOp0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMeasureNumberingValue e3( enums::MeasureNumberingValue::measure );
	e2 = e3;
	expected = "measure";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	e1 = e2;
	string expected = "measure";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMeasureNumberingValue e3( enums::MeasureNumberingValue::system );
	e2 = e3;
	expected = "system";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "measure";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "measure";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	e1 = e2;
	string expected = "system";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMeasureNumberingValue e3( enums::MeasureNumberingValue::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "system";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "system";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	CHECK( e1.getValue() == enums::MeasureNumberingValue::none )
}
TEST( getValue1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	CHECK( e1.getValue() == enums::MeasureNumberingValue::measure )
}
TEST( getValue2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	CHECK( e1.getValue() == enums::MeasureNumberingValue::system )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	string expected = "measure";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	string expected = "system";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	string expected = "measure";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	string expected = "system";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	e1.setValue( enums::MeasureNumberingValue::none );
	CHECK( e1.getValue() == enums::MeasureNumberingValue::none )
}
TEST( setValue1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	e1.setValue( enums::MeasureNumberingValue::measure );
	CHECK( e1.getValue() == enums::MeasureNumberingValue::measure )
}
TEST( setValue2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	e1.setValue( enums::MeasureNumberingValue::system );
	CHECK( e1.getValue() == enums::MeasureNumberingValue::system )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::MeasureNumberingValue::measure )
}
TEST( setValueInt0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::MeasureNumberingValue::measure )
}
TEST( setValueInt1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::MeasureNumberingValue::system )
}
TEST( setValueInt2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::MeasureNumberingValue::none )
}
TEST( setValueInt3 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::MeasureNumberingValue::system )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::MeasureNumberingValue::measure )
}
TEST( fromString0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	CHECK( e1.fromString( "measure" ) )
	CHECK( e1.getValue() == enums::MeasureNumberingValue::measure )
}
TEST( fromString1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	CHECK( e1.fromString( "system" ) )
	CHECK( e1.getValue() == enums::MeasureNumberingValue::system )
}
TEST( fromString2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::MeasureNumberingValue::none )
}
TEST( fromString3 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::MeasureNumberingValue::system )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	string expected = "measure-numbering-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	string expected = "measure-numbering-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	string expected = "measure-numbering-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	string expected = "MxEnumMeasureNumberingValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	string expected = "MxEnumMeasureNumberingValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	string expected = "MxEnumMeasureNumberingValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	string expected = "The measure-numbering-value type describes how measure numbers are displayed on this part: no numbers, numbers every measure, or numbers every system.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	string expected = "The measure-numbering-value type describes how measure numbers are displayed on this part: no numbers, numbers every measure, or numbers every system.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	string expected = "The measure-numbering-value type describes how measure numbers are displayed on this part: no numbers, numbers every measure, or numbers every system.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
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
TEST( stream1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	stringstream ss;
	e1.stream( ss );
	string expected = "measure";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "measure";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	stringstream ss;
	e1.stream( ss );
	string expected = "system";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "system";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
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
TEST( streamingOperator1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	stringstream ss;
	ss << e1;
	string expected = "measure";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "measure";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	stringstream ss;
	ss << e1;
	string expected = "system";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "system";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "system";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "system";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	for( int i = 0; i < 2; ++i )
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
TEST( incrementPre_start2_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "measure";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "measure";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	for( int i = 0; i < 3; ++i )
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
TEST( incrementPre_start1_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "measure";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "measure";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "system";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "system";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "measure";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "measure";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "system";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "system";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	for( int i = 0; i < 2; ++i )
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
TEST( decrementPre_start0_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	for( int i = 0; i < 3; ++i )
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
TEST( decrementPre_start1_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "measure";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "measure";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "system";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "system";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "system";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "measure";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "system";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "measure";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "system";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "measure";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "system";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "measure";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "measure";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "system";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "system";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "measure";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::none );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "measure";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::measure );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::measure );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "measure";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "system";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumMeasureNumberingValue )
{
	MxEnumMeasureNumberingValue e1( enums::MeasureNumberingValue::system );
	MxEnumMeasureNumberingValue e2( enums::MeasureNumberingValue::system );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "system";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

