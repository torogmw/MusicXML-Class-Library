#include "TestHarness.h"
#include "MxEnumDistanceType.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* This MxEnum has the ability to hold custom strings
 in addition to the regular enum values (this is
 because the MusicXml specification defines this type
 as a string instead of an enumeration and the xsd
 technically does not restrict the values to the
 listed expected values.  Thus, this enum tests
 the custom value functionality first before testing
 all of the regular MxEnum functionality */

TEST( customValue01, MxEnumDistanceType )
{
    MxEnumDistanceType e1;
    e1.fromString( "somecustomstring" );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}

TEST( customValue02, MxEnumDistanceType )
{
    MxEnumDistanceType e1;
    e1.fromString( "anotherstring" );
    std::string expected = "anotherstring";
    std::string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}

/* default constructor test */
TEST( ctorDefault , MxEnumDistanceType )
{
	MxEnumDistanceType e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( e1 );
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
TEST( copyCtor1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( e1 );
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
TEST( copyCtor2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( e1 );
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
TEST( assignmentOp0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	e1 = e2;
	string expected = "beam";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDistanceType e3( enums::DistanceType::hyphen );
	e2 = e3;
	expected = "hyphen";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "beam";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "beam";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	e1 = e2;
	string expected = "hyphen";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDistanceType e3( enums::DistanceType::other );
	e2 = e3;
	expected = "other";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hyphen";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hyphen";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::other );
	e1 = e2;
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumDistanceType e3( enums::DistanceType::beam );
	e2 = e3;
	expected = "beam";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "other";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "other";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	CHECK( e1.getValue() == enums::DistanceType::beam )
}
TEST( getValue1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	CHECK( e1.getValue() == enums::DistanceType::hyphen )
}
TEST( getValue2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	CHECK( e1.getValue() == enums::DistanceType::other )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	string expected = "beam";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	string expected = "hyphen";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	e1.setValue( enums::DistanceType::beam );
	CHECK( e1.getValue() == enums::DistanceType::beam )
}
TEST( setValue1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	e1.setValue( enums::DistanceType::hyphen );
	CHECK( e1.getValue() == enums::DistanceType::hyphen )
}
TEST( setValue2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	e1.setValue( enums::DistanceType::other );
	CHECK( e1.getValue() == enums::DistanceType::other )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::DistanceType::hyphen )
}
TEST( setValueInt0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::DistanceType::hyphen )
}
TEST( setValueInt1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::DistanceType::other )
}
TEST( setValueInt2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::DistanceType::beam )
}
TEST( setValueInt3 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	CHECK( ! e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::DistanceType::other )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::DistanceType::other )
}
TEST( fromString0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	CHECK( e1.fromString( "hyphen" ) )
	CHECK( e1.getValue() == enums::DistanceType::hyphen )
}
TEST( fromString1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	CHECK( e1.fromString( "other" ) )
	CHECK( e1.getValue() == enums::DistanceType::other )
}
TEST( fromString2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	CHECK( e1.fromString( "beam" ) )
	CHECK( e1.getValue() == enums::DistanceType::beam )
}
TEST( fromString3 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	CHECK( ! e1.fromString( "crazyErrantValue3" ) )
	CHECK( e1.getValue() == enums::DistanceType::other )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	int expected = 3;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	string expected = "distance-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	string expected = "distance-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	string expected = "distance-type";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	string expected = "MxEnumDistanceType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	string expected = "MxEnumDistanceType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	string expected = "MxEnumDistanceType";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	string expected = "The distance-type defines what type of distance is being defined in a distance element. Values include beam and hyphen. This is left as a string so that other application-specific types can be defined, but it is made a separate type so that it can be redefined more strictly.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	string expected = "The distance-type defines what type of distance is being defined in a distance element. Values include beam and hyphen. This is left as a string so that other application-specific types can be defined, but it is made a separate type so that it can be redefined more strictly.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	string expected = "The distance-type defines what type of distance is being defined in a distance element. Values include beam and hyphen. This is left as a string so that other application-specific types can be defined, but it is made a separate type so that it can be redefined more strictly.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	stringstream ss;
	e1.stream( ss );
	string expected = "beam";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "beam";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	stringstream ss;
	e1.stream( ss );
	string expected = "hyphen";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "hyphen";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	stringstream ss;
	e1.stream( ss );
	string expected = "other";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "other";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	stringstream ss;
	ss << e1;
	string expected = "beam";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "beam";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	stringstream ss;
	ss << e1;
	string expected = "hyphen";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "hyphen";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	stringstream ss;
	ss << e1;
	string expected = "other";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "other";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_2equals1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_2equals2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_2equals1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_2equals2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_2islessthanoreq1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_2islessthanoreq2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthanoreq2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_2islessthan2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan0 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_2isgreaterthan1 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_2isgreaterthan2 , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	for( int i = 0; i < 2; ++i )
	{
		e2 = ++e1;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start2_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	for( int i = 0; i < 3; ++i )
	{
		e2 = ++e1;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	for( int i = 0; i < 2; ++i )
	{
		e2 = --e1;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start2_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	for( int i = 0; i < 3; ++i )
	{
		e2 = --e1;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1++;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start2_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_2times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	for( int i = 0; i < 2; ++i )
	{
		e2 = e1--;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::beam );
	MxEnumDistanceType e2( enums::DistanceType::beam );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "beam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "hyphen";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::hyphen );
	MxEnumDistanceType e2( enums::DistanceType::hyphen );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "hyphen";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start2_3times , MxEnumDistanceType )
{
	MxEnumDistanceType e1( enums::DistanceType::other );
	MxEnumDistanceType e2( enums::DistanceType::other );
	for( int i = 0; i < 3; ++i )
	{
		e2 = e1--;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "beam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

