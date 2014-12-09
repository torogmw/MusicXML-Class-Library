#include "TestHarness.h"
#include "MxEnumBarStyle.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumBarStyle )
{
	MxEnumBarStyle e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavy );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightLight );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightHeavy );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyLight );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyHeavy );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::tick );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::short_ );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( e1 );
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
TEST( copyCtor1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( e1 );
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
TEST( copyCtor2 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	MxEnumBarStyle e2( e1 );
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
TEST( copyCtor3 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavy );
	MxEnumBarStyle e2( e1 );
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
TEST( copyCtor4 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightLight );
	MxEnumBarStyle e2( e1 );
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
TEST( copyCtor5 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightHeavy );
	MxEnumBarStyle e2( e1 );
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
TEST( copyCtor6 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyLight );
	MxEnumBarStyle e2( e1 );
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
TEST( copyCtor7 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyHeavy );
	MxEnumBarStyle e2( e1 );
	int expected = 7;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 8 );
	expected = 7;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 8;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor8 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::tick );
	MxEnumBarStyle e2( e1 );
	int expected = 8;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 9 );
	expected = 8;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 9;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor9 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::short_ );
	MxEnumBarStyle e2( e1 );
	int expected = 9;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 10 );
	expected = 9;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 10;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( e1 );
	int expected = 10;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 10;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	e1 = e2;
	string expected = "regular";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::dotted );
	e2 = e3;
	expected = "dotted";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "regular";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "regular";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	e1 = e2;
	string expected = "dotted";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::dashed );
	e2 = e3;
	expected = "dashed";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dotted";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dotted";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavy );
	MxEnumBarStyle e2( enums::BarStyle::dashed );
	e1 = e2;
	string expected = "dashed";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::heavy );
	e2 = e3;
	expected = "heavy";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dashed";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dashed";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightLight );
	MxEnumBarStyle e2( enums::BarStyle::heavy );
	e1 = e2;
	string expected = "heavy";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::lightLight );
	e2 = e3;
	expected = "light-light";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "heavy";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "heavy";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightHeavy );
	MxEnumBarStyle e2( enums::BarStyle::lightLight );
	e1 = e2;
	string expected = "light-light";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::lightHeavy );
	e2 = e3;
	expected = "light-heavy";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "light-light";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "light-light";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyLight );
	MxEnumBarStyle e2( enums::BarStyle::lightHeavy );
	e1 = e2;
	string expected = "light-heavy";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::heavyLight );
	e2 = e3;
	expected = "heavy-light";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "light-heavy";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "light-heavy";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyHeavy );
	MxEnumBarStyle e2( enums::BarStyle::heavyLight );
	e1 = e2;
	string expected = "heavy-light";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::heavyHeavy );
	e2 = e3;
	expected = "heavy-heavy";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "heavy-light";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "heavy-light";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::tick );
	MxEnumBarStyle e2( enums::BarStyle::heavyHeavy );
	e1 = e2;
	string expected = "heavy-heavy";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::tick );
	e2 = e3;
	expected = "tick";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "heavy-heavy";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "heavy-heavy";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::short_ );
	MxEnumBarStyle e2( enums::BarStyle::tick );
	e1 = e2;
	string expected = "tick";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::short_ );
	e2 = e3;
	expected = "short";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tick";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tick";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::short_ );
	e1 = e2;
	string expected = "short";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "short";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "short";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBarStyle e3( enums::BarStyle::regular );
	e2 = e3;
	expected = "regular";
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
TEST( getValue0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	CHECK( e1.getValue() == enums::BarStyle::regular )
}
TEST( getValue1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	CHECK( e1.getValue() == enums::BarStyle::dotted )
}
TEST( getValue2 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	CHECK( e1.getValue() == enums::BarStyle::dashed )
}
TEST( getValue9 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::short_ );
	CHECK( e1.getValue() == enums::BarStyle::short_ )
}
TEST( getValue10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	CHECK( e1.getValue() == enums::BarStyle::none )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavy );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightLight );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightHeavy );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyLight );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyHeavy );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::tick );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::short_ );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	string expected = "regular";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	string expected = "dashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavy );
	string expected = "heavy";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightLight );
	string expected = "lightLight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightHeavy );
	string expected = "lightHeavy";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyLight );
	string expected = "heavyLight";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyHeavy );
	string expected = "heavyHeavy";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::tick );
	string expected = "tick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::short_ );
	string expected = "short_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	string expected = "regular";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	string expected = "dotted";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	string expected = "dashed";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavy );
	string expected = "heavy";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightLight );
	string expected = "light-light";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightHeavy );
	string expected = "light-heavy";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyLight );
	string expected = "heavy-light";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyHeavy );
	string expected = "heavy-heavy";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::tick );
	string expected = "tick";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::short_ );
	string expected = "short";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	e1.setValue( enums::BarStyle::regular );
	CHECK( e1.getValue() == enums::BarStyle::regular )
}
TEST( setValue1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	e1.setValue( enums::BarStyle::dotted );
	CHECK( e1.getValue() == enums::BarStyle::dotted )
}
TEST( setValue2 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavy );
	e1.setValue( enums::BarStyle::dashed );
	CHECK( e1.getValue() == enums::BarStyle::dashed )
}
TEST( setValue9 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	e1.setValue( enums::BarStyle::short_ );
	CHECK( e1.getValue() == enums::BarStyle::short_ )
}
TEST( setValue10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	e1.setValue( enums::BarStyle::none );
	CHECK( e1.getValue() == enums::BarStyle::none )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::BarStyle::dotted )
}
TEST( setValueInt0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::BarStyle::dotted )
}
TEST( setValueInt1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavy );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::BarStyle::dashed )
}
TEST( setValueInt2 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightLight );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::BarStyle::heavy )
}
TEST( setValueInt9 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	CHECK( e1.setValueInt( 10 ) )
	CHECK( e1.getValue() == enums::BarStyle::none )
}
TEST( setValueInt10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::BarStyle::regular )
}
TEST( setValueInt11 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	CHECK( ! e1.setValueInt( 11 ) )
	CHECK( e1.getValue() == enums::BarStyle::dashed )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::BarStyle::dotted )
}
TEST( fromString0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	CHECK( e1.fromString( "dotted" ) )
	CHECK( e1.getValue() == enums::BarStyle::dotted )
}
TEST( fromString1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavy );
	CHECK( e1.fromString( "dashed" ) )
	CHECK( e1.getValue() == enums::BarStyle::dashed )
}
TEST( fromString2 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightLight );
	CHECK( e1.fromString( "heavy" ) )
	CHECK( e1.getValue() == enums::BarStyle::heavy )
}
TEST( fromString3 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::lightHeavy );
	CHECK( e1.fromString( "light-light" ) )
	CHECK( e1.getValue() == enums::BarStyle::lightLight )
}
TEST( fromString4 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyLight );
	CHECK( e1.fromString( "light-heavy" ) )
	CHECK( e1.getValue() == enums::BarStyle::lightHeavy )
}
TEST( fromString5 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::heavyHeavy );
	CHECK( e1.fromString( "heavy-light" ) )
	CHECK( e1.getValue() == enums::BarStyle::heavyLight )
}
TEST( fromString6 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::tick );
	CHECK( e1.fromString( "heavy-heavy" ) )
	CHECK( e1.getValue() == enums::BarStyle::heavyHeavy )
}
TEST( fromString7 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::short_ );
	CHECK( e1.fromString( "tick" ) )
	CHECK( e1.getValue() == enums::BarStyle::tick )
}
TEST( fromString8 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	CHECK( e1.fromString( "short" ) )
	CHECK( e1.getValue() == enums::BarStyle::short_ )
}
TEST( fromString9 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::BarStyle::none )
}
TEST( fromString10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	CHECK( e1.fromString( "regular" ) )
	CHECK( e1.getValue() == enums::BarStyle::regular )
}
TEST( fromString11 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dashed );
	CHECK( ! e1.fromString( "crazyErrantValue11" ) )
	CHECK( e1.getValue() == enums::BarStyle::dashed )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	int expected = 11;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	int expected = 11;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	int expected = 11;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	string expected = "bar-style";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	string expected = "bar-style";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	string expected = "bar-style";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	string expected = "MxEnumBarStyle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	string expected = "MxEnumBarStyle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	string expected = "MxEnumBarStyle";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	string expected = "The bar-style type represents barline style information. Choices are regular, dotted, dashed, heavy, light-light, light-heavy, heavy-light, heavy-heavy, tick (a short stroke through the top line), short (a partial barline between the 2nd and 4th lines), and none.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	string expected = "The bar-style type represents barline style information. Choices are regular, dotted, dashed, heavy, light-light, light-heavy, heavy-light, heavy-heavy, tick (a short stroke through the top line), short (a partial barline between the 2nd and 4th lines), and none.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	string expected = "The bar-style type represents barline style information. Choices are regular, dotted, dashed, heavy, light-light, light-heavy, heavy-light, heavy-heavy, tick (a short stroke through the top line), short (a partial barline between the 2nd and 4th lines), and none.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	stringstream ss;
	e1.stream( ss );
	string expected = "regular";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "regular";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	stringstream ss;
	e1.stream( ss );
	string expected = "dotted";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "dotted";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
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
TEST( streamingOperator0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	stringstream ss;
	ss << e1;
	string expected = "regular";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "regular";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	stringstream ss;
	ss << e1;
	string expected = "dotted";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "dotted";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
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
TEST( equalsEquals_true_0equals0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_10equals0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_10equals1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_10equals10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_10equals0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_10equals1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_10equals10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_10islessthanoreq0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_10islessthanoreq1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_10islessthanoreq10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthanoreq0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthanoreq1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthanoreq10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_10islessthan0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_10islessthan1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_10islessthan10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthan0 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthan1 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_10isgreaterthan10 , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	for( int i = 0; i < 10; ++i )
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
TEST( incrementPre_start1_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	for( int i = 0; i < 10; ++i )
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
TEST( incrementPre_start10_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	for( int i = 0; i < 10; ++i )
	{
		e2 = ++e1;
	}
	string expected = "short_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "short_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	for( int i = 0; i < 11; ++i )
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
TEST( incrementPre_start1_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	for( int i = 0; i < 11; ++i )
	{
		e2 = ++e1;
	}
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start10_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	for( int i = 0; i < 11; ++i )
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
TEST( decrementPre_start0_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	for( int i = 0; i < 10; ++i )
	{
		e2 = --e1;
	}
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	for( int i = 0; i < 10; ++i )
	{
		e2 = --e1;
	}
	string expected = "dashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashed";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start10_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	for( int i = 0; i < 10; ++i )
	{
		e2 = --e1;
	}
	string expected = "regular";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "regular";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "regular";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "regular";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start10_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	for( int i = 0; i < 11; ++i )
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
TEST( incrementPost_start0_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "short_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1++;
	}
	string expected = "regular";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start10_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1++;
	}
	string expected = "short_";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tick";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "regular";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "regular";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start10_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "short_";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1--;
	}
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashed";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1--;
	}
	string expected = "dashed";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "heavy";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start10_10times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1--;
	}
	string expected = "regular";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::regular );
	MxEnumBarStyle e2( enums::BarStyle::regular );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "regular";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dotted";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::dotted );
	MxEnumBarStyle e2( enums::BarStyle::dotted );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "dotted";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "dashed";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start10_11times , MxEnumBarStyle )
{
	MxEnumBarStyle e1( enums::BarStyle::none );
	MxEnumBarStyle e2( enums::BarStyle::none );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "regular";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

