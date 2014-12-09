#include "TestHarness.h"
#include "MxEnumTipDirection.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumTipDirection )
{
	MxEnumTipDirection e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::right );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northwest );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northeast );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southeast );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( e1 );
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
TEST( copyCtor1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( e1 );
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
TEST( copyCtor2 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	MxEnumTipDirection e2( e1 );
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
TEST( copyCtor3 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::right );
	MxEnumTipDirection e2( e1 );
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
TEST( copyCtor4 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northwest );
	MxEnumTipDirection e2( e1 );
	int expected = 4;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 5 );
	expected = 4;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 5;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor5 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northeast );
	MxEnumTipDirection e2( e1 );
	int expected = 5;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 6 );
	expected = 5;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 6;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor6 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southeast );
	MxEnumTipDirection e2( e1 );
	int expected = 6;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 7 );
	expected = 6;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 7;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( e1 );
	int expected = 7;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 7;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::up );
	e1 = e2;
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTipDirection e3( enums::TipDirection::down );
	e2 = e3;
	expected = "down";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "up";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "up";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	MxEnumTipDirection e2( enums::TipDirection::down );
	e1 = e2;
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTipDirection e3( enums::TipDirection::left );
	e2 = e3;
	expected = "left";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "down";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "down";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::right );
	MxEnumTipDirection e2( enums::TipDirection::left );
	e1 = e2;
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTipDirection e3( enums::TipDirection::right );
	e2 = e3;
	expected = "right";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "left";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northwest );
	MxEnumTipDirection e2( enums::TipDirection::right );
	e1 = e2;
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTipDirection e3( enums::TipDirection::northwest );
	e2 = e3;
	expected = "northwest";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "right";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "right";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northeast );
	MxEnumTipDirection e2( enums::TipDirection::northwest );
	e1 = e2;
	string expected = "northwest";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTipDirection e3( enums::TipDirection::northeast );
	e2 = e3;
	expected = "northeast";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northwest";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northwest";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southeast );
	MxEnumTipDirection e2( enums::TipDirection::northeast );
	e1 = e2;
	string expected = "northeast";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTipDirection e3( enums::TipDirection::southeast );
	e2 = e3;
	expected = "southeast";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northeast";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "northeast";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southeast );
	e1 = e2;
	string expected = "southeast";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTipDirection e3( enums::TipDirection::southwest );
	e2 = e3;
	expected = "southwest";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "southeast";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "southeast";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	e1 = e2;
	string expected = "southwest";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumTipDirection e3( enums::TipDirection::up );
	e2 = e3;
	expected = "up";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "southwest";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "southwest";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	CHECK( e1.getValue() == enums::TipDirection::up )
}
TEST( getValue1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	CHECK( e1.getValue() == enums::TipDirection::down )
}
TEST( getValue2 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	CHECK( e1.getValue() == enums::TipDirection::left )
}
TEST( getValue6 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southeast );
	CHECK( e1.getValue() == enums::TipDirection::southeast )
}
TEST( getValue7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	CHECK( e1.getValue() == enums::TipDirection::southwest )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::right );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northwest );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northeast );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southeast );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::right );
	string expected = "right";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northwest );
	string expected = "northwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northeast );
	string expected = "northeast";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southeast );
	string expected = "southeast";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	string expected = "southwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	string expected = "up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	string expected = "down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	string expected = "left";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::right );
	string expected = "right";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northwest );
	string expected = "northwest";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northeast );
	string expected = "northeast";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southeast );
	string expected = "southeast";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	string expected = "southwest";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	e1.setValue( enums::TipDirection::up );
	CHECK( e1.getValue() == enums::TipDirection::up )
}
TEST( setValue1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	e1.setValue( enums::TipDirection::down );
	CHECK( e1.getValue() == enums::TipDirection::down )
}
TEST( setValue2 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::right );
	e1.setValue( enums::TipDirection::left );
	CHECK( e1.getValue() == enums::TipDirection::left )
}
TEST( setValue6 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	e1.setValue( enums::TipDirection::southeast );
	CHECK( e1.getValue() == enums::TipDirection::southeast )
}
TEST( setValue7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	e1.setValue( enums::TipDirection::southwest );
	CHECK( e1.getValue() == enums::TipDirection::southwest )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::TipDirection::down )
}
TEST( setValueInt0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::TipDirection::down )
}
TEST( setValueInt1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::right );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::TipDirection::left )
}
TEST( setValueInt2 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northwest );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::TipDirection::right )
}
TEST( setValueInt6 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	CHECK( e1.setValueInt( 7 ) )
	CHECK( e1.getValue() == enums::TipDirection::southwest )
}
TEST( setValueInt7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::TipDirection::up )
}
TEST( setValueInt8 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	CHECK( ! e1.setValueInt( 8 ) )
	CHECK( e1.getValue() == enums::TipDirection::left )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::TipDirection::down )
}
TEST( fromString0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	CHECK( e1.fromString( "down" ) )
	CHECK( e1.getValue() == enums::TipDirection::down )
}
TEST( fromString1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::right );
	CHECK( e1.fromString( "left" ) )
	CHECK( e1.getValue() == enums::TipDirection::left )
}
TEST( fromString2 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northwest );
	CHECK( e1.fromString( "right" ) )
	CHECK( e1.getValue() == enums::TipDirection::right )
}
TEST( fromString3 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::northeast );
	CHECK( e1.fromString( "northwest" ) )
	CHECK( e1.getValue() == enums::TipDirection::northwest )
}
TEST( fromString4 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southeast );
	CHECK( e1.fromString( "northeast" ) )
	CHECK( e1.getValue() == enums::TipDirection::northeast )
}
TEST( fromString5 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	CHECK( e1.fromString( "southeast" ) )
	CHECK( e1.getValue() == enums::TipDirection::southeast )
}
TEST( fromString6 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	CHECK( e1.fromString( "southwest" ) )
	CHECK( e1.getValue() == enums::TipDirection::southwest )
}
TEST( fromString7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	CHECK( e1.fromString( "up" ) )
	CHECK( e1.getValue() == enums::TipDirection::up )
}
TEST( fromString8 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::left );
	CHECK( ! e1.fromString( "crazyErrantValue8" ) )
	CHECK( e1.getValue() == enums::TipDirection::left )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	int expected = 8;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	int expected = 8;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	int expected = 8;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	string expected = "tip-direction";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	string expected = "tip-direction";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	string expected = "tip-direction";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	string expected = "MxEnumTipDirection";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	string expected = "MxEnumTipDirection";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	string expected = "MxEnumTipDirection";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	string expected = "The tip-direction type represents the direction in which the tip of a stick or beater points, using Unicode arrow terminology.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	string expected = "The tip-direction type represents the direction in which the tip of a stick or beater points, using Unicode arrow terminology.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	string expected = "The tip-direction type represents the direction in which the tip of a stick or beater points, using Unicode arrow terminology.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	stringstream ss;
	e1.stream( ss );
	string expected = "up";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "up";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	stringstream ss;
	e1.stream( ss );
	string expected = "down";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "down";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	stringstream ss;
	e1.stream( ss );
	string expected = "southwest";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "southwest";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	stringstream ss;
	ss << e1;
	string expected = "up";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "up";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	stringstream ss;
	ss << e1;
	string expected = "down";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "down";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	stringstream ss;
	ss << e1;
	string expected = "southwest";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "southwest";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_7equals0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_7equals1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_7equals7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_7equals0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_7equals1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_7equals7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_7islessthanoreq0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_7islessthanoreq1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_7islessthanoreq7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_7isgreaterthanoreq0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_7isgreaterthanoreq1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_7isgreaterthanoreq7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_7islessthan0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_7islessthan1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_7islessthan7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_7isgreaterthan0 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::up );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_7isgreaterthan1 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::down );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_7isgreaterthan7 , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "southwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "southwest";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start7_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "southeast";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "southeast";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	for( int i = 0; i < 8; ++i )
	{
		e2 = ++e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	for( int i = 0; i < 8; ++i )
	{
		e2 = ++e1;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start7_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	for( int i = 0; i < 8; ++i )
	{
		e2 = ++e1;
	}
	string expected = "southwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "southwest";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start7_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	for( int i = 0; i < 8; ++i )
	{
		e2 = --e1;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	for( int i = 0; i < 8; ++i )
	{
		e2 = --e1;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start7_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	for( int i = 0; i < 8; ++i )
	{
		e2 = --e1;
	}
	string expected = "southwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "southwest";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "southwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "southeast";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "southwest";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start7_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "southeast";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "northeast";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1++;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "southwest";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1++;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start7_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1++;
	}
	string expected = "southwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "southeast";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "left";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "right";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start7_7times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::up );
	MxEnumTipDirection e2( enums::TipDirection::up );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1--;
	}
	string expected = "up";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::down );
	MxEnumTipDirection e2( enums::TipDirection::down );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1--;
	}
	string expected = "down";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "left";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start7_8times , MxEnumTipDirection )
{
	MxEnumTipDirection e1( enums::TipDirection::southwest );
	MxEnumTipDirection e2( enums::TipDirection::southwest );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1--;
	}
	string expected = "southwest";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "up";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

