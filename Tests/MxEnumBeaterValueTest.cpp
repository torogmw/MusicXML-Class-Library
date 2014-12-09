#include "TestHarness.h"
#include "MxEnumBeaterValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::finger );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fingernail );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fist );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::guiroScraper );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hammer );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hand );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::jazzStick );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::knittingNeedle );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::metalHammer );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::snareStick );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum13 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::spoonMallet );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum14 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeater );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum15 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeaterPlain );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( e1 );
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
TEST( copyCtor1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( e1 );
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
TEST( copyCtor2 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	MxEnumBeaterValue e2( e1 );
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
TEST( copyCtor3 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::finger );
	MxEnumBeaterValue e2( e1 );
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
TEST( copyCtor4 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fingernail );
	MxEnumBeaterValue e2( e1 );
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
TEST( copyCtor5 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fist );
	MxEnumBeaterValue e2( e1 );
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
TEST( copyCtor6 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::guiroScraper );
	MxEnumBeaterValue e2( e1 );
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
TEST( copyCtor7 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hammer );
	MxEnumBeaterValue e2( e1 );
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
TEST( copyCtor8 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hand );
	MxEnumBeaterValue e2( e1 );
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
TEST( copyCtor9 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::jazzStick );
	MxEnumBeaterValue e2( e1 );
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
TEST( copyCtor10 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::knittingNeedle );
	MxEnumBeaterValue e2( e1 );
	int expected = 10;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 11 );
	expected = 10;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 11;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor11 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::metalHammer );
	MxEnumBeaterValue e2( e1 );
	int expected = 11;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 12 );
	expected = 11;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 12;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor12 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::snareStick );
	MxEnumBeaterValue e2( e1 );
	int expected = 12;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 13 );
	expected = 12;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 13;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor13 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::spoonMallet );
	MxEnumBeaterValue e2( e1 );
	int expected = 13;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 14 );
	expected = 13;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 14;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor14 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeater );
	MxEnumBeaterValue e2( e1 );
	int expected = 14;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 15 );
	expected = 14;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 15;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor15 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeaterPlain );
	MxEnumBeaterValue e2( e1 );
	int expected = 15;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 16 );
	expected = 15;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 16;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( e1 );
	int expected = 16;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 16;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	e1 = e2;
	string expected = "bow";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::chimeHammer );
	e2 = e3;
	expected = "chime hammer";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bow";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bow";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	e1 = e2;
	string expected = "chime hammer";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::coin );
	e2 = e3;
	expected = "coin";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "chime hammer";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "chime hammer";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::finger );
	MxEnumBeaterValue e2( enums::BeaterValue::coin );
	e1 = e2;
	string expected = "coin";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::finger );
	e2 = e3;
	expected = "finger";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "coin";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "coin";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fingernail );
	MxEnumBeaterValue e2( enums::BeaterValue::finger );
	e1 = e2;
	string expected = "finger";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::fingernail );
	e2 = e3;
	expected = "fingernail";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "finger";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "finger";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fist );
	MxEnumBeaterValue e2( enums::BeaterValue::fingernail );
	e1 = e2;
	string expected = "fingernail";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::fist );
	e2 = e3;
	expected = "fist";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "fingernail";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "fingernail";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::guiroScraper );
	MxEnumBeaterValue e2( enums::BeaterValue::fist );
	e1 = e2;
	string expected = "fist";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::guiroScraper );
	e2 = e3;
	expected = "guiro scraper";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "fist";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "fist";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hammer );
	MxEnumBeaterValue e2( enums::BeaterValue::guiroScraper );
	e1 = e2;
	string expected = "guiro scraper";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::hammer );
	e2 = e3;
	expected = "hammer";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "guiro scraper";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "guiro scraper";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hand );
	MxEnumBeaterValue e2( enums::BeaterValue::hammer );
	e1 = e2;
	string expected = "hammer";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::hand );
	e2 = e3;
	expected = "hand";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hammer";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hammer";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::jazzStick );
	MxEnumBeaterValue e2( enums::BeaterValue::hand );
	e1 = e2;
	string expected = "hand";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::jazzStick );
	e2 = e3;
	expected = "jazz stick";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hand";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hand";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::knittingNeedle );
	MxEnumBeaterValue e2( enums::BeaterValue::jazzStick );
	e1 = e2;
	string expected = "jazz stick";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::knittingNeedle );
	e2 = e3;
	expected = "knitting needle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "jazz stick";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "jazz stick";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::metalHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::knittingNeedle );
	e1 = e2;
	string expected = "knitting needle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::metalHammer );
	e2 = e3;
	expected = "metal hammer";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "knitting needle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "knitting needle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::snareStick );
	MxEnumBeaterValue e2( enums::BeaterValue::metalHammer );
	e1 = e2;
	string expected = "metal hammer";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::snareStick );
	e2 = e3;
	expected = "snare stick";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "metal hammer";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "metal hammer";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::spoonMallet );
	MxEnumBeaterValue e2( enums::BeaterValue::snareStick );
	e1 = e2;
	string expected = "snare stick";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::spoonMallet );
	e2 = e3;
	expected = "spoon mallet";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "snare stick";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "snare stick";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp13 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeater );
	MxEnumBeaterValue e2( enums::BeaterValue::spoonMallet );
	e1 = e2;
	string expected = "spoon mallet";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::triangleBeater );
	e2 = e3;
	expected = "triangle beater";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "spoon mallet";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "spoon mallet";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp14 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeaterPlain );
	MxEnumBeaterValue e2( enums::BeaterValue::triangleBeater );
	e1 = e2;
	string expected = "triangle beater";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::triangleBeaterPlain );
	e2 = e3;
	expected = "triangle beater plain";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triangle beater";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triangle beater";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp15 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::triangleBeaterPlain );
	e1 = e2;
	string expected = "triangle beater plain";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::wireBrush );
	e2 = e3;
	expected = "wire brush";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triangle beater plain";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triangle beater plain";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	e1 = e2;
	string expected = "wire brush";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumBeaterValue e3( enums::BeaterValue::bow );
	e2 = e3;
	expected = "bow";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wire brush";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wire brush";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	CHECK( e1.getValue() == enums::BeaterValue::bow )
}
TEST( getValue1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	CHECK( e1.getValue() == enums::BeaterValue::chimeHammer )
}
TEST( getValue2 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	CHECK( e1.getValue() == enums::BeaterValue::coin )
}
TEST( getValue15 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeaterPlain );
	CHECK( e1.getValue() == enums::BeaterValue::triangleBeaterPlain )
}
TEST( getValue16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	CHECK( e1.getValue() == enums::BeaterValue::wireBrush )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::finger );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fingernail );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fist );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::guiroScraper );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hammer );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hand );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::jazzStick );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::knittingNeedle );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::metalHammer );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::snareStick );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt13 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::spoonMallet );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt14 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeater );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt15 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeaterPlain );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	string expected = "bow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	string expected = "chimeHammer";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	string expected = "coin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::finger );
	string expected = "finger";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fingernail );
	string expected = "fingernail";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fist );
	string expected = "fist";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::guiroScraper );
	string expected = "guiroScraper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hammer );
	string expected = "hammer";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hand );
	string expected = "hand";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::jazzStick );
	string expected = "jazzStick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::knittingNeedle );
	string expected = "knittingNeedle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::metalHammer );
	string expected = "metalHammer";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::snareStick );
	string expected = "snareStick";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString13 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::spoonMallet );
	string expected = "spoonMallet";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString14 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeater );
	string expected = "triangleBeater";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString15 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeaterPlain );
	string expected = "triangleBeaterPlain";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	string expected = "wireBrush";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	string expected = "bow";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	string expected = "chime hammer";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	string expected = "coin";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::finger );
	string expected = "finger";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fingernail );
	string expected = "fingernail";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fist );
	string expected = "fist";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::guiroScraper );
	string expected = "guiro scraper";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hammer );
	string expected = "hammer";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hand );
	string expected = "hand";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::jazzStick );
	string expected = "jazz stick";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::knittingNeedle );
	string expected = "knitting needle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::metalHammer );
	string expected = "metal hammer";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::snareStick );
	string expected = "snare stick";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString13 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::spoonMallet );
	string expected = "spoon mallet";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString14 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeater );
	string expected = "triangle beater";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString15 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeaterPlain );
	string expected = "triangle beater plain";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	string expected = "wire brush";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	e1.setValue( enums::BeaterValue::bow );
	CHECK( e1.getValue() == enums::BeaterValue::bow )
}
TEST( setValue1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	e1.setValue( enums::BeaterValue::chimeHammer );
	CHECK( e1.getValue() == enums::BeaterValue::chimeHammer )
}
TEST( setValue2 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::finger );
	e1.setValue( enums::BeaterValue::coin );
	CHECK( e1.getValue() == enums::BeaterValue::coin )
}
TEST( setValue15 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	e1.setValue( enums::BeaterValue::triangleBeaterPlain );
	CHECK( e1.getValue() == enums::BeaterValue::triangleBeaterPlain )
}
TEST( setValue16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	e1.setValue( enums::BeaterValue::wireBrush );
	CHECK( e1.getValue() == enums::BeaterValue::wireBrush )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::BeaterValue::chimeHammer )
}
TEST( setValueInt0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::BeaterValue::chimeHammer )
}
TEST( setValueInt1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::finger );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::BeaterValue::coin )
}
TEST( setValueInt2 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fingernail );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::BeaterValue::finger )
}
TEST( setValueInt15 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	CHECK( e1.setValueInt( 16 ) )
	CHECK( e1.getValue() == enums::BeaterValue::wireBrush )
}
TEST( setValueInt16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::BeaterValue::bow )
}
TEST( setValueInt17 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	CHECK( ! e1.setValueInt( 17 ) )
	CHECK( e1.getValue() == enums::BeaterValue::coin )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::BeaterValue::chimeHammer )
}
TEST( fromString0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	CHECK( e1.fromString( "chime hammer" ) )
	CHECK( e1.getValue() == enums::BeaterValue::chimeHammer )
}
TEST( fromString1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::finger );
	CHECK( e1.fromString( "coin" ) )
	CHECK( e1.getValue() == enums::BeaterValue::coin )
}
TEST( fromString2 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fingernail );
	CHECK( e1.fromString( "finger" ) )
	CHECK( e1.getValue() == enums::BeaterValue::finger )
}
TEST( fromString3 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::fist );
	CHECK( e1.fromString( "fingernail" ) )
	CHECK( e1.getValue() == enums::BeaterValue::fingernail )
}
TEST( fromString4 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::guiroScraper );
	CHECK( e1.fromString( "fist" ) )
	CHECK( e1.getValue() == enums::BeaterValue::fist )
}
TEST( fromString5 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hammer );
	CHECK( e1.fromString( "guiro scraper" ) )
	CHECK( e1.getValue() == enums::BeaterValue::guiroScraper )
}
TEST( fromString6 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::hand );
	CHECK( e1.fromString( "hammer" ) )
	CHECK( e1.getValue() == enums::BeaterValue::hammer )
}
TEST( fromString7 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::jazzStick );
	CHECK( e1.fromString( "hand" ) )
	CHECK( e1.getValue() == enums::BeaterValue::hand )
}
TEST( fromString8 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::knittingNeedle );
	CHECK( e1.fromString( "jazz stick" ) )
	CHECK( e1.getValue() == enums::BeaterValue::jazzStick )
}
TEST( fromString9 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::metalHammer );
	CHECK( e1.fromString( "knitting needle" ) )
	CHECK( e1.getValue() == enums::BeaterValue::knittingNeedle )
}
TEST( fromString10 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::snareStick );
	CHECK( e1.fromString( "metal hammer" ) )
	CHECK( e1.getValue() == enums::BeaterValue::metalHammer )
}
TEST( fromString11 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::spoonMallet );
	CHECK( e1.fromString( "snare stick" ) )
	CHECK( e1.getValue() == enums::BeaterValue::snareStick )
}
TEST( fromString12 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeater );
	CHECK( e1.fromString( "spoon mallet" ) )
	CHECK( e1.getValue() == enums::BeaterValue::spoonMallet )
}
TEST( fromString13 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::triangleBeaterPlain );
	CHECK( e1.fromString( "triangle beater" ) )
	CHECK( e1.getValue() == enums::BeaterValue::triangleBeater )
}
TEST( fromString14 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	CHECK( e1.fromString( "triangle beater plain" ) )
	CHECK( e1.getValue() == enums::BeaterValue::triangleBeaterPlain )
}
TEST( fromString15 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	CHECK( e1.fromString( "wire brush" ) )
	CHECK( e1.getValue() == enums::BeaterValue::wireBrush )
}
TEST( fromString16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	CHECK( e1.fromString( "bow" ) )
	CHECK( e1.getValue() == enums::BeaterValue::bow )
}
TEST( fromString17 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::coin );
	CHECK( ! e1.fromString( "crazyErrantValue17" ) )
	CHECK( e1.getValue() == enums::BeaterValue::coin )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	int expected = 17;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	int expected = 17;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	int expected = 17;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	string expected = "beater-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	string expected = "beater-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	string expected = "beater-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	string expected = "MxEnumBeaterValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	string expected = "MxEnumBeaterValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	string expected = "MxEnumBeaterValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	string expected = "The beater-value type represents pictograms for beaters, mallets, and sticks that do not have different materials represented in the pictogram. The finger and hammer values are in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	string expected = "The beater-value type represents pictograms for beaters, mallets, and sticks that do not have different materials represented in the pictogram. The finger and hammer values are in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	string expected = "The beater-value type represents pictograms for beaters, mallets, and sticks that do not have different materials represented in the pictogram. The finger and hammer values are in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	stringstream ss;
	e1.stream( ss );
	string expected = "bow";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "bow";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	stringstream ss;
	e1.stream( ss );
	string expected = "chime hammer";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "chime hammer";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	stringstream ss;
	e1.stream( ss );
	string expected = "wire brush";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "wire brush";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	stringstream ss;
	ss << e1;
	string expected = "bow";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "bow";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	stringstream ss;
	ss << e1;
	string expected = "chime hammer";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "chime hammer";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	stringstream ss;
	ss << e1;
	string expected = "wire brush";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "wire brush";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_16equals0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_16equals1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_16equals16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_16equals0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_16equals1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_16equals16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_16islessthanoreq0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_16islessthanoreq1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_16islessthanoreq16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_16isgreaterthanoreq0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_16isgreaterthanoreq1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_16isgreaterthanoreq16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_16islessthan0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_16islessthan1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_16islessthan16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_16isgreaterthan0 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_16isgreaterthan1 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_16isgreaterthan16 , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	for( int i = 0; i < 16; ++i )
	{
		e2 = ++e1;
	}
	string expected = "wireBrush";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wireBrush";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	for( int i = 0; i < 16; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start16_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	for( int i = 0; i < 16; ++i )
	{
		e2 = ++e1;
	}
	string expected = "triangleBeaterPlain";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangleBeaterPlain";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	for( int i = 0; i < 17; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	for( int i = 0; i < 17; ++i )
	{
		e2 = ++e1;
	}
	string expected = "chimeHammer";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimeHammer";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start16_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	for( int i = 0; i < 17; ++i )
	{
		e2 = ++e1;
	}
	string expected = "wireBrush";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wireBrush";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	for( int i = 0; i < 16; ++i )
	{
		e2 = --e1;
	}
	string expected = "chimeHammer";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimeHammer";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	for( int i = 0; i < 16; ++i )
	{
		e2 = --e1;
	}
	string expected = "coin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "coin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start16_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	for( int i = 0; i < 16; ++i )
	{
		e2 = --e1;
	}
	string expected = "bow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	for( int i = 0; i < 17; ++i )
	{
		e2 = --e1;
	}
	string expected = "bow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	for( int i = 0; i < 17; ++i )
	{
		e2 = --e1;
	}
	string expected = "chimeHammer";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimeHammer";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start16_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	for( int i = 0; i < 17; ++i )
	{
		e2 = --e1;
	}
	string expected = "wireBrush";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wireBrush";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	for( int i = 0; i < 16; ++i )
	{
		e2 = e1++;
	}
	string expected = "wireBrush";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangleBeaterPlain";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	for( int i = 0; i < 16; ++i )
	{
		e2 = e1++;
	}
	string expected = "bow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wireBrush";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start16_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	for( int i = 0; i < 16; ++i )
	{
		e2 = e1++;
	}
	string expected = "triangleBeaterPlain";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangleBeater";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	for( int i = 0; i < 17; ++i )
	{
		e2 = e1++;
	}
	string expected = "bow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "wireBrush";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	for( int i = 0; i < 17; ++i )
	{
		e2 = e1++;
	}
	string expected = "chimeHammer";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start16_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	for( int i = 0; i < 17; ++i )
	{
		e2 = e1++;
	}
	string expected = "wireBrush";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangleBeaterPlain";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	for( int i = 0; i < 16; ++i )
	{
		e2 = e1--;
	}
	string expected = "chimeHammer";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "coin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	for( int i = 0; i < 16; ++i )
	{
		e2 = e1--;
	}
	string expected = "coin";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "finger";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start16_16times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	for( int i = 0; i < 16; ++i )
	{
		e2 = e1--;
	}
	string expected = "bow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimeHammer";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::bow );
	MxEnumBeaterValue e2( enums::BeaterValue::bow );
	for( int i = 0; i < 17; ++i )
	{
		e2 = e1--;
	}
	string expected = "bow";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "chimeHammer";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::chimeHammer );
	MxEnumBeaterValue e2( enums::BeaterValue::chimeHammer );
	for( int i = 0; i < 17; ++i )
	{
		e2 = e1--;
	}
	string expected = "chimeHammer";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "coin";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start16_17times , MxEnumBeaterValue )
{
	MxEnumBeaterValue e1( enums::BeaterValue::wireBrush );
	MxEnumBeaterValue e2( enums::BeaterValue::wireBrush );
	for( int i = 0; i < 17; ++i )
	{
		e2 = e1--;
	}
	string expected = "wireBrush";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bow";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

