#include "TestHarness.h"
#include "MxEnumShowTuplet.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( e1 );
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
TEST( copyCtor1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( e1 );
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
TEST( copyCtor2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( e1 );
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
TEST( assignmentOp0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	e1 = e2;
	string expected = "actual";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumShowTuplet e3( enums::ShowTuplet::both );
	e2 = e3;
	expected = "both";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "actual";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "actual";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	e1 = e2;
	string expected = "both";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumShowTuplet e3( enums::ShowTuplet::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "both";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "both";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumShowTuplet e3( enums::ShowTuplet::actual );
	e2 = e3;
	expected = "actual";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "none";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	CHECK( e1.getValue() == enums::ShowTuplet::actual )
}
TEST( getValue1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	CHECK( e1.getValue() == enums::ShowTuplet::both )
}
TEST( getValue2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	CHECK( e1.getValue() == enums::ShowTuplet::none )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	string expected = "actual";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	string expected = "actual";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	string expected = "both";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	e1.setValue( enums::ShowTuplet::actual );
	CHECK( e1.getValue() == enums::ShowTuplet::actual )
}
TEST( setValue1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	e1.setValue( enums::ShowTuplet::both );
	CHECK( e1.getValue() == enums::ShowTuplet::both )
}
TEST( setValue2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	e1.setValue( enums::ShowTuplet::none );
	CHECK( e1.getValue() == enums::ShowTuplet::none )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::ShowTuplet::both )
}
TEST( setValueInt0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::ShowTuplet::both )
}
TEST( setValueInt1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::ShowTuplet::none )
}
TEST( setValueInt2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::ShowTuplet::actual )
}
TEST( setValueInt3 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::ShowTuplet::none )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::ShowTuplet::both )
}
TEST( fromString0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	CHECK( e1.fromString( "both" ) )
	CHECK( e1.getValue() == enums::ShowTuplet::both )
}
TEST( fromString1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::ShowTuplet::none )
}
TEST( fromString2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	CHECK( e1.fromString( "actual" ) )
	CHECK( e1.getValue() == enums::ShowTuplet::actual )
}
TEST( fromString3 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::ShowTuplet::none )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	string expected = "show-tuplet";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	string expected = "show-tuplet";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	string expected = "show-tuplet";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	string expected = "MxEnumShowTuplet";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	string expected = "MxEnumShowTuplet";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	string expected = "MxEnumShowTuplet";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	string expected = "The show-tuplet type indicates whether to show a part of a tuplet relating to the tuplet-actual element, both the tuplet-actual and tuplet-normal elements, or neither.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	string expected = "The show-tuplet type indicates whether to show a part of a tuplet relating to the tuplet-actual element, both the tuplet-actual and tuplet-normal elements, or neither.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	string expected = "The show-tuplet type indicates whether to show a part of a tuplet relating to the tuplet-actual element, both the tuplet-actual and tuplet-normal elements, or neither.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	stringstream ss;
	e1.stream( ss );
	string expected = "actual";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "actual";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	stringstream ss;
	e1.stream( ss );
	string expected = "both";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "both";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
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


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	stringstream ss;
	ss << e1;
	string expected = "actual";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "actual";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	stringstream ss;
	ss << e1;
	string expected = "both";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "both";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
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


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
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
TEST( incrementPre_start1_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "actual";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "actual";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "actual";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "actual";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
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
TEST( decrementPre_start0_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
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
TEST( decrementPre_start2_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "actual";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "actual";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "actual";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "actual";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
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
TEST( incrementPost_start0_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "actual";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "actual";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "actual";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "actual";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "actual";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "actual";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::actual );
	MxEnumShowTuplet e2( enums::ShowTuplet::actual );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "actual";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "both";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::both );
	MxEnumShowTuplet e2( enums::ShowTuplet::both );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "both";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumShowTuplet )
{
	MxEnumShowTuplet e1( enums::ShowTuplet::none );
	MxEnumShowTuplet e2( enums::ShowTuplet::none );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "actual";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

