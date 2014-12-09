#include "TestHarness.h"
#include "MxEnumEnclosureShape.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::circle );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::bracket );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::triangle );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::diamond );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( e1 );
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
TEST( copyCtor1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( e1 );
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
TEST( copyCtor2 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	MxEnumEnclosureShape e2( e1 );
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
TEST( copyCtor3 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::circle );
	MxEnumEnclosureShape e2( e1 );
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
TEST( copyCtor4 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::bracket );
	MxEnumEnclosureShape e2( e1 );
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
TEST( copyCtor5 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::triangle );
	MxEnumEnclosureShape e2( e1 );
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
TEST( copyCtor6 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::diamond );
	MxEnumEnclosureShape e2( e1 );
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
TEST( copyCtor7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( e1 );
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
TEST( assignmentOp0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	e1 = e2;
	string expected = "rectangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEnclosureShape e3( enums::EnclosureShape::square );
	e2 = e3;
	expected = "square";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rectangle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "rectangle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	e1 = e2;
	string expected = "square";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEnclosureShape e3( enums::EnclosureShape::oval );
	e2 = e3;
	expected = "oval";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "square";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "square";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::circle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::oval );
	e1 = e2;
	string expected = "oval";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEnclosureShape e3( enums::EnclosureShape::circle );
	e2 = e3;
	expected = "circle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "oval";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "oval";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::bracket );
	MxEnumEnclosureShape e2( enums::EnclosureShape::circle );
	e1 = e2;
	string expected = "circle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEnclosureShape e3( enums::EnclosureShape::bracket );
	e2 = e3;
	expected = "bracket";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "circle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "circle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::triangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::bracket );
	e1 = e2;
	string expected = "bracket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEnclosureShape e3( enums::EnclosureShape::triangle );
	e2 = e3;
	expected = "triangle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bracket";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bracket";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::diamond );
	MxEnumEnclosureShape e2( enums::EnclosureShape::triangle );
	e1 = e2;
	string expected = "triangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEnclosureShape e3( enums::EnclosureShape::diamond );
	e2 = e3;
	expected = "diamond";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triangle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triangle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::diamond );
	e1 = e2;
	string expected = "diamond";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEnclosureShape e3( enums::EnclosureShape::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diamond";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diamond";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEnclosureShape e3( enums::EnclosureShape::rectangle );
	e2 = e3;
	expected = "rectangle";
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
TEST( getValue0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	CHECK( e1.getValue() == enums::EnclosureShape::rectangle )
}
TEST( getValue1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	CHECK( e1.getValue() == enums::EnclosureShape::square )
}
TEST( getValue2 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	CHECK( e1.getValue() == enums::EnclosureShape::oval )
}
TEST( getValue6 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::diamond );
	CHECK( e1.getValue() == enums::EnclosureShape::diamond )
}
TEST( getValue7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	CHECK( e1.getValue() == enums::EnclosureShape::none )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::circle );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::bracket );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::triangle );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::diamond );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	string expected = "rectangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	string expected = "oval";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::circle );
	string expected = "circle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::bracket );
	string expected = "bracket";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::triangle );
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::diamond );
	string expected = "diamond";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	string expected = "rectangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	string expected = "square";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	string expected = "oval";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::circle );
	string expected = "circle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::bracket );
	string expected = "bracket";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::triangle );
	string expected = "triangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::diamond );
	string expected = "diamond";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	e1.setValue( enums::EnclosureShape::rectangle );
	CHECK( e1.getValue() == enums::EnclosureShape::rectangle )
}
TEST( setValue1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	e1.setValue( enums::EnclosureShape::square );
	CHECK( e1.getValue() == enums::EnclosureShape::square )
}
TEST( setValue2 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::circle );
	e1.setValue( enums::EnclosureShape::oval );
	CHECK( e1.getValue() == enums::EnclosureShape::oval )
}
TEST( setValue6 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	e1.setValue( enums::EnclosureShape::diamond );
	CHECK( e1.getValue() == enums::EnclosureShape::diamond )
}
TEST( setValue7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	e1.setValue( enums::EnclosureShape::none );
	CHECK( e1.getValue() == enums::EnclosureShape::none )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::EnclosureShape::square )
}
TEST( setValueInt0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::EnclosureShape::square )
}
TEST( setValueInt1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::circle );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::EnclosureShape::oval )
}
TEST( setValueInt2 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::bracket );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::EnclosureShape::circle )
}
TEST( setValueInt6 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	CHECK( e1.setValueInt( 7 ) )
	CHECK( e1.getValue() == enums::EnclosureShape::none )
}
TEST( setValueInt7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::EnclosureShape::rectangle )
}
TEST( setValueInt8 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	CHECK( ! e1.setValueInt( 8 ) )
	CHECK( e1.getValue() == enums::EnclosureShape::oval )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::EnclosureShape::square )
}
TEST( fromString0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	CHECK( e1.fromString( "square" ) )
	CHECK( e1.getValue() == enums::EnclosureShape::square )
}
TEST( fromString1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::circle );
	CHECK( e1.fromString( "oval" ) )
	CHECK( e1.getValue() == enums::EnclosureShape::oval )
}
TEST( fromString2 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::bracket );
	CHECK( e1.fromString( "circle" ) )
	CHECK( e1.getValue() == enums::EnclosureShape::circle )
}
TEST( fromString3 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::triangle );
	CHECK( e1.fromString( "bracket" ) )
	CHECK( e1.getValue() == enums::EnclosureShape::bracket )
}
TEST( fromString4 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::diamond );
	CHECK( e1.fromString( "triangle" ) )
	CHECK( e1.getValue() == enums::EnclosureShape::triangle )
}
TEST( fromString5 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	CHECK( e1.fromString( "diamond" ) )
	CHECK( e1.getValue() == enums::EnclosureShape::diamond )
}
TEST( fromString6 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::EnclosureShape::none )
}
TEST( fromString7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	CHECK( e1.fromString( "rectangle" ) )
	CHECK( e1.getValue() == enums::EnclosureShape::rectangle )
}
TEST( fromString8 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::oval );
	CHECK( ! e1.fromString( "crazyErrantValue8" ) )
	CHECK( e1.getValue() == enums::EnclosureShape::oval )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	int expected = 8;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	int expected = 8;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	int expected = 8;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	string expected = "enclosure-shape";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	string expected = "enclosure-shape";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	string expected = "enclosure-shape";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	string expected = "MxEnumEnclosureShape";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	string expected = "MxEnumEnclosureShape";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	string expected = "MxEnumEnclosureShape";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	string expected = "The enclosure-shape type describes the shape and presence / absence of an enclosure around text or symbols. A bracket enclosure is similar to a rectangle with the bottom line missing, as is common in jazz notation.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	string expected = "The enclosure-shape type describes the shape and presence / absence of an enclosure around text or symbols. A bracket enclosure is similar to a rectangle with the bottom line missing, as is common in jazz notation.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	string expected = "The enclosure-shape type describes the shape and presence / absence of an enclosure around text or symbols. A bracket enclosure is similar to a rectangle with the bottom line missing, as is common in jazz notation.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	stringstream ss;
	e1.stream( ss );
	string expected = "rectangle";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "rectangle";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	stringstream ss;
	e1.stream( ss );
	string expected = "square";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "square";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
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
TEST( streamingOperator0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	stringstream ss;
	ss << e1;
	string expected = "rectangle";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "rectangle";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	stringstream ss;
	ss << e1;
	string expected = "square";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "square";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
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
TEST( equalsEquals_true_0equals0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_7equals0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_7equals1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_7equals7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_7equals0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_7equals1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_7equals7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_7islessthanoreq0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_7islessthanoreq1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_7islessthanoreq7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_7isgreaterthanoreq0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_7isgreaterthanoreq1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_7isgreaterthanoreq7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_7islessthan0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_7islessthan1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_7islessthan7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_7isgreaterthan0 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_7isgreaterthan1 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_7isgreaterthan7 , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	for( int i = 0; i < 7; ++i )
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
TEST( incrementPre_start1_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "rectangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rectangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start7_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	for( int i = 0; i < 7; ++i )
	{
		e2 = ++e1;
	}
	string expected = "diamond";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diamond";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	for( int i = 0; i < 8; ++i )
	{
		e2 = ++e1;
	}
	string expected = "rectangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rectangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	for( int i = 0; i < 8; ++i )
	{
		e2 = ++e1;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start7_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	for( int i = 0; i < 8; ++i )
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
TEST( decrementPre_start0_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "oval";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "oval";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start7_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	for( int i = 0; i < 7; ++i )
	{
		e2 = --e1;
	}
	string expected = "rectangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rectangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	for( int i = 0; i < 8; ++i )
	{
		e2 = --e1;
	}
	string expected = "rectangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rectangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	for( int i = 0; i < 8; ++i )
	{
		e2 = --e1;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start7_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	for( int i = 0; i < 8; ++i )
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
TEST( incrementPost_start0_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diamond";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "rectangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start7_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1++;
	}
	string expected = "diamond";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1++;
	}
	string expected = "rectangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1++;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rectangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start7_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diamond";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "oval";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "oval";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "circle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start7_7times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	for( int i = 0; i < 7; ++i )
	{
		e2 = e1--;
	}
	string expected = "rectangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::rectangle );
	MxEnumEnclosureShape e2( enums::EnclosureShape::rectangle );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1--;
	}
	string expected = "rectangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "square";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::square );
	MxEnumEnclosureShape e2( enums::EnclosureShape::square );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1--;
	}
	string expected = "square";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "oval";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start7_8times , MxEnumEnclosureShape )
{
	MxEnumEnclosureShape e1( enums::EnclosureShape::none );
	MxEnumEnclosureShape e2( enums::EnclosureShape::none );
	for( int i = 0; i < 8; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "rectangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

