#include "TestHarness.h"
#include "MxEnumStaffType.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumStaffType )
{
	MxEnumStaffType e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::regular );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( e1 );
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
TEST( copyCtor1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( e1 );
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
TEST( copyCtor2 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	MxEnumStaffType e2( e1 );
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
TEST( copyCtor3 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::regular );
	MxEnumStaffType e2( e1 );
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
TEST( copyCtor4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( e1 );
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
TEST( assignmentOp0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::ossia );
	e1 = e2;
	string expected = "ossia";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStaffType e3( enums::StaffType::cue );
	e2 = e3;
	expected = "cue";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ossia";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ossia";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	MxEnumStaffType e2( enums::StaffType::cue );
	e1 = e2;
	string expected = "cue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStaffType e3( enums::StaffType::editorial );
	e2 = e3;
	expected = "editorial";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cue";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cue";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::regular );
	MxEnumStaffType e2( enums::StaffType::editorial );
	e1 = e2;
	string expected = "editorial";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStaffType e3( enums::StaffType::regular );
	e2 = e3;
	expected = "regular";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "editorial";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "editorial";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::regular );
	e1 = e2;
	string expected = "regular";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStaffType e3( enums::StaffType::alternate );
	e2 = e3;
	expected = "alternate";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "regular";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "regular";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::alternate );
	e1 = e2;
	string expected = "alternate";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumStaffType e3( enums::StaffType::ossia );
	e2 = e3;
	expected = "ossia";
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
TEST( getValue0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	CHECK( e1.getValue() == enums::StaffType::ossia )
}
TEST( getValue1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	CHECK( e1.getValue() == enums::StaffType::cue )
}
TEST( getValue2 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	CHECK( e1.getValue() == enums::StaffType::editorial )
}
TEST( getValue3 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::regular );
	CHECK( e1.getValue() == enums::StaffType::regular )
}
TEST( getValue4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	CHECK( e1.getValue() == enums::StaffType::alternate )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::regular );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	string expected = "ossia";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	string expected = "editorial";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::regular );
	string expected = "regular";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	string expected = "ossia";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	string expected = "cue";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	string expected = "editorial";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::regular );
	string expected = "regular";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	string expected = "alternate";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	e1.setValue( enums::StaffType::ossia );
	CHECK( e1.getValue() == enums::StaffType::ossia )
}
TEST( setValue1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	e1.setValue( enums::StaffType::cue );
	CHECK( e1.getValue() == enums::StaffType::cue )
}
TEST( setValue2 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::regular );
	e1.setValue( enums::StaffType::editorial );
	CHECK( e1.getValue() == enums::StaffType::editorial )
}
TEST( setValue3 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	e1.setValue( enums::StaffType::regular );
	CHECK( e1.getValue() == enums::StaffType::regular )
}
TEST( setValue4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	e1.setValue( enums::StaffType::alternate );
	CHECK( e1.getValue() == enums::StaffType::alternate )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::StaffType::cue )
}
TEST( setValueInt0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::StaffType::cue )
}
TEST( setValueInt1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::regular );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::StaffType::editorial )
}
TEST( setValueInt2 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::StaffType::regular )
}
TEST( setValueInt3 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	CHECK( e1.setValueInt( 4 ) )
	CHECK( e1.getValue() == enums::StaffType::alternate )
}
TEST( setValueInt4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::StaffType::ossia )
}
TEST( setValueInt5 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	CHECK( ! e1.setValueInt( 5 ) )
	CHECK( e1.getValue() == enums::StaffType::editorial )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::StaffType::cue )
}
TEST( fromString0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	CHECK( e1.fromString( "cue" ) )
	CHECK( e1.getValue() == enums::StaffType::cue )
}
TEST( fromString1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::regular );
	CHECK( e1.fromString( "editorial" ) )
	CHECK( e1.getValue() == enums::StaffType::editorial )
}
TEST( fromString2 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	CHECK( e1.fromString( "regular" ) )
	CHECK( e1.getValue() == enums::StaffType::regular )
}
TEST( fromString3 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	CHECK( e1.fromString( "alternate" ) )
	CHECK( e1.getValue() == enums::StaffType::alternate )
}
TEST( fromString4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	CHECK( e1.fromString( "ossia" ) )
	CHECK( e1.getValue() == enums::StaffType::ossia )
}
TEST( fromString5 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::editorial );
	CHECK( ! e1.fromString( "crazyErrantValue5" ) )
	CHECK( e1.getValue() == enums::StaffType::editorial )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	int expected = 5;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	string expected = "staff-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	string expected = "staff-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	string expected = "staff-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	string expected = "MxEnumStaffType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	string expected = "MxEnumStaffType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	string expected = "MxEnumStaffType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	string expected = "The staff-type value can be ossia, cue, editorial, regular, or alternate. An alternate staff indicates one that shares the same musical data as the prior staff, but displayed differently (e.g., treble and bass clef, standard notation and tab).";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	string expected = "The staff-type value can be ossia, cue, editorial, regular, or alternate. An alternate staff indicates one that shares the same musical data as the prior staff, but displayed differently (e.g., treble and bass clef, standard notation and tab).";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	string expected = "The staff-type value can be ossia, cue, editorial, regular, or alternate. An alternate staff indicates one that shares the same musical data as the prior staff, but displayed differently (e.g., treble and bass clef, standard notation and tab).";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	stringstream ss;
	e1.stream( ss );
	string expected = "ossia";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "ossia";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	stringstream ss;
	e1.stream( ss );
	string expected = "cue";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "cue";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
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
TEST( streamingOperator0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	stringstream ss;
	ss << e1;
	string expected = "ossia";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "ossia";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	stringstream ss;
	ss << e1;
	string expected = "cue";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "cue";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
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
TEST( equalsEquals_true_0equals0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_4equals1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_4equals4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_4equals1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_4equals4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_4islessthanoreq1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_4islessthanoreq4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthanoreq4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_4islessthan4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan0 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::ossia );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_4isgreaterthan1 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::cue );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_4isgreaterthan4 , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	for( int i = 0; i < 4; ++i )
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
TEST( incrementPre_start1_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "ossia";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ossia";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	for( int i = 0; i < 4; ++i )
	{
		e2 = ++e1;
	}
	string expected = "regular";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "regular";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "ossia";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ossia";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	for( int i = 0; i < 5; ++i )
	{
		e2 = ++e1;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start4_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	for( int i = 0; i < 5; ++i )
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
TEST( decrementPre_start0_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "editorial";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "editorial";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	for( int i = 0; i < 4; ++i )
	{
		e2 = --e1;
	}
	string expected = "ossia";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ossia";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "ossia";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ossia";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	for( int i = 0; i < 5; ++i )
	{
		e2 = --e1;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start4_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	for( int i = 0; i < 5; ++i )
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
TEST( incrementPost_start0_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "regular";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "ossia";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alternate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1++;
	}
	string expected = "regular";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "editorial";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "ossia";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "alternate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ossia";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start4_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1++;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "regular";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "editorial";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "editorial";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "regular";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_4times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	for( int i = 0; i < 4; ++i )
	{
		e2 = e1--;
	}
	string expected = "ossia";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::ossia );
	MxEnumStaffType e2( enums::StaffType::ossia );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "ossia";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cue";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::cue );
	MxEnumStaffType e2( enums::StaffType::cue );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "cue";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "editorial";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start4_5times , MxEnumStaffType )
{
	MxEnumStaffType e1( enums::StaffType::alternate );
	MxEnumStaffType e2( enums::StaffType::alternate );
	for( int i = 0; i < 5; ++i )
	{
		e2 = e1--;
	}
	string expected = "alternate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "ossia";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

