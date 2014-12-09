#include "TestHarness.h"
#include "MxEnumMetal.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumMetal )
{
	MxEnumMetal e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::brakeDrum );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::chineseCymbal );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cowbell );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crashCymbals );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crotale );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cymbalTongs );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::domedGong );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::fingerCymbals );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::flexatone );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::gong );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum13 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::hiHat );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum14 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::highHatCymbals );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum15 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::handbell );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum16 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sistrum );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum17 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sizzleCymbal );
	int expected = 17;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum18 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sleighBells );
	int expected = 18;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum19 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::suspendedCymbal );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum20 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::tamTam );
	int expected = 20;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum21 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::triangle );
	int expected = 21;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	int expected = 22;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor2 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor3 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::brakeDrum );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor4 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::chineseCymbal );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor5 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cowbell );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor6 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crashCymbals );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor7 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crotale );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor8 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cymbalTongs );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor9 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::domedGong );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor10 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::fingerCymbals );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor11 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::flexatone );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor12 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::gong );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor13 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::hiHat );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor14 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::highHatCymbals );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor15 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::handbell );
	MxEnumMetal e2( e1 );
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
TEST( copyCtor16 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sistrum );
	MxEnumMetal e2( e1 );
	int expected = 16;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 17 );
	expected = 16;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 17;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor17 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sizzleCymbal );
	MxEnumMetal e2( e1 );
	int expected = 17;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 18 );
	expected = 17;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 18;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor18 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sleighBells );
	MxEnumMetal e2( e1 );
	int expected = 18;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 19 );
	expected = 18;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 19;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor19 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::suspendedCymbal );
	MxEnumMetal e2( e1 );
	int expected = 19;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 20 );
	expected = 19;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 20;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor20 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::tamTam );
	MxEnumMetal e2( e1 );
	int expected = 20;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 21 );
	expected = 20;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 21;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor21 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::triangle );
	MxEnumMetal e2( e1 );
	int expected = 21;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 22 );
	expected = 21;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 22;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( e1 );
	int expected = 22;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 22;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::almglocken );
	e1 = e2;
	string expected = "almglocken";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::bell );
	e2 = e3;
	expected = "bell";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "almglocken";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "almglocken";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	MxEnumMetal e2( enums::Metal::bell );
	e1 = e2;
	string expected = "bell";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::bellPlate );
	e2 = e3;
	expected = "bell plate";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bell";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bell";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::brakeDrum );
	MxEnumMetal e2( enums::Metal::bellPlate );
	e1 = e2;
	string expected = "bell plate";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::brakeDrum );
	e2 = e3;
	expected = "brake drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bell plate";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bell plate";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::chineseCymbal );
	MxEnumMetal e2( enums::Metal::brakeDrum );
	e1 = e2;
	string expected = "brake drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::chineseCymbal );
	e2 = e3;
	expected = "Chinese cymbal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "brake drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "brake drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cowbell );
	MxEnumMetal e2( enums::Metal::chineseCymbal );
	e1 = e2;
	string expected = "Chinese cymbal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::cowbell );
	e2 = e3;
	expected = "cowbell";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Chinese cymbal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Chinese cymbal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crashCymbals );
	MxEnumMetal e2( enums::Metal::cowbell );
	e1 = e2;
	string expected = "cowbell";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::crashCymbals );
	e2 = e3;
	expected = "crash cymbals";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cowbell";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cowbell";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crotale );
	MxEnumMetal e2( enums::Metal::crashCymbals );
	e1 = e2;
	string expected = "crash cymbals";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::crotale );
	e2 = e3;
	expected = "crotale";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "crash cymbals";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "crash cymbals";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cymbalTongs );
	MxEnumMetal e2( enums::Metal::crotale );
	e1 = e2;
	string expected = "crotale";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::cymbalTongs );
	e2 = e3;
	expected = "cymbal tongs";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "crotale";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "crotale";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::domedGong );
	MxEnumMetal e2( enums::Metal::cymbalTongs );
	e1 = e2;
	string expected = "cymbal tongs";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::domedGong );
	e2 = e3;
	expected = "domed gong";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cymbal tongs";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cymbal tongs";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::fingerCymbals );
	MxEnumMetal e2( enums::Metal::domedGong );
	e1 = e2;
	string expected = "domed gong";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::fingerCymbals );
	e2 = e3;
	expected = "finger cymbals";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "domed gong";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "domed gong";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::flexatone );
	MxEnumMetal e2( enums::Metal::fingerCymbals );
	e1 = e2;
	string expected = "finger cymbals";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::flexatone );
	e2 = e3;
	expected = "flexatone";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "finger cymbals";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "finger cymbals";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::gong );
	MxEnumMetal e2( enums::Metal::flexatone );
	e1 = e2;
	string expected = "flexatone";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::gong );
	e2 = e3;
	expected = "gong";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flexatone";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flexatone";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::hiHat );
	MxEnumMetal e2( enums::Metal::gong );
	e1 = e2;
	string expected = "gong";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::hiHat );
	e2 = e3;
	expected = "hi-hat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "gong";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "gong";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp13 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::highHatCymbals );
	MxEnumMetal e2( enums::Metal::hiHat );
	e1 = e2;
	string expected = "hi-hat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::highHatCymbals );
	e2 = e3;
	expected = "high-hat cymbals";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hi-hat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hi-hat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp14 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::handbell );
	MxEnumMetal e2( enums::Metal::highHatCymbals );
	e1 = e2;
	string expected = "high-hat cymbals";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::handbell );
	e2 = e3;
	expected = "handbell";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "high-hat cymbals";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "high-hat cymbals";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp15 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sistrum );
	MxEnumMetal e2( enums::Metal::handbell );
	e1 = e2;
	string expected = "handbell";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::sistrum );
	e2 = e3;
	expected = "sistrum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "handbell";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "handbell";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp16 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sizzleCymbal );
	MxEnumMetal e2( enums::Metal::sistrum );
	e1 = e2;
	string expected = "sistrum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::sizzleCymbal );
	e2 = e3;
	expected = "sizzle cymbal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sistrum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sistrum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp17 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sleighBells );
	MxEnumMetal e2( enums::Metal::sizzleCymbal );
	e1 = e2;
	string expected = "sizzle cymbal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::sleighBells );
	e2 = e3;
	expected = "sleigh bells";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sizzle cymbal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sizzle cymbal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp18 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::suspendedCymbal );
	MxEnumMetal e2( enums::Metal::sleighBells );
	e1 = e2;
	string expected = "sleigh bells";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::suspendedCymbal );
	e2 = e3;
	expected = "suspended cymbal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sleigh bells";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sleigh bells";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp19 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::tamTam );
	MxEnumMetal e2( enums::Metal::suspendedCymbal );
	e1 = e2;
	string expected = "suspended cymbal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::tamTam );
	e2 = e3;
	expected = "tam tam";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "suspended cymbal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "suspended cymbal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp20 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::triangle );
	MxEnumMetal e2( enums::Metal::tamTam );
	e1 = e2;
	string expected = "tam tam";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::triangle );
	e2 = e3;
	expected = "triangle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tam tam";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tam tam";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp21 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::triangle );
	e1 = e2;
	string expected = "triangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::vietnameseHat );
	e2 = e3;
	expected = "Vietnamese hat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triangle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triangle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	e1 = e2;
	string expected = "Vietnamese hat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMetal e3( enums::Metal::almglocken );
	e2 = e3;
	expected = "almglocken";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Vietnamese hat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Vietnamese hat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	CHECK( e1.getValue() == enums::Metal::almglocken )
}
TEST( getValue1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	CHECK( e1.getValue() == enums::Metal::bell )
}
TEST( getValue2 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	CHECK( e1.getValue() == enums::Metal::bellPlate )
}
TEST( getValue21 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::triangle );
	CHECK( e1.getValue() == enums::Metal::triangle )
}
TEST( getValue22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	CHECK( e1.getValue() == enums::Metal::vietnameseHat )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::brakeDrum );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::chineseCymbal );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cowbell );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crashCymbals );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crotale );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cymbalTongs );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::domedGong );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::fingerCymbals );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::flexatone );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::gong );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt13 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::hiHat );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt14 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::highHatCymbals );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt15 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::handbell );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt16 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sistrum );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt17 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sizzleCymbal );
	int expected = 17;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt18 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sleighBells );
	int expected = 18;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt19 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::suspendedCymbal );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt20 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::tamTam );
	int expected = 20;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt21 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::triangle );
	int expected = 21;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	int expected = 22;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	string expected = "almglocken";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	string expected = "bell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	string expected = "bellPlate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::brakeDrum );
	string expected = "brakeDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::chineseCymbal );
	string expected = "chineseCymbal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cowbell );
	string expected = "cowbell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crashCymbals );
	string expected = "crashCymbals";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crotale );
	string expected = "crotale";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cymbalTongs );
	string expected = "cymbalTongs";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::domedGong );
	string expected = "domedGong";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::fingerCymbals );
	string expected = "fingerCymbals";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::flexatone );
	string expected = "flexatone";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::gong );
	string expected = "gong";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString13 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::hiHat );
	string expected = "hiHat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString14 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::highHatCymbals );
	string expected = "highHatCymbals";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString15 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::handbell );
	string expected = "handbell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString16 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sistrum );
	string expected = "sistrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString17 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sizzleCymbal );
	string expected = "sizzleCymbal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString18 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sleighBells );
	string expected = "sleighBells";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString19 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::suspendedCymbal );
	string expected = "suspendedCymbal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString20 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::tamTam );
	string expected = "tamTam";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString21 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::triangle );
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	string expected = "vietnameseHat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	string expected = "almglocken";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	string expected = "bell";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	string expected = "bell plate";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::brakeDrum );
	string expected = "brake drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::chineseCymbal );
	string expected = "Chinese cymbal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cowbell );
	string expected = "cowbell";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crashCymbals );
	string expected = "crash cymbals";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crotale );
	string expected = "crotale";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cymbalTongs );
	string expected = "cymbal tongs";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::domedGong );
	string expected = "domed gong";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::fingerCymbals );
	string expected = "finger cymbals";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::flexatone );
	string expected = "flexatone";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::gong );
	string expected = "gong";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString13 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::hiHat );
	string expected = "hi-hat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString14 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::highHatCymbals );
	string expected = "high-hat cymbals";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString15 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::handbell );
	string expected = "handbell";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString16 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sistrum );
	string expected = "sistrum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString17 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sizzleCymbal );
	string expected = "sizzle cymbal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString18 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sleighBells );
	string expected = "sleigh bells";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString19 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::suspendedCymbal );
	string expected = "suspended cymbal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString20 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::tamTam );
	string expected = "tam tam";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString21 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::triangle );
	string expected = "triangle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	string expected = "Vietnamese hat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	e1.setValue( enums::Metal::almglocken );
	CHECK( e1.getValue() == enums::Metal::almglocken )
}
TEST( setValue1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	e1.setValue( enums::Metal::bell );
	CHECK( e1.getValue() == enums::Metal::bell )
}
TEST( setValue2 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::brakeDrum );
	e1.setValue( enums::Metal::bellPlate );
	CHECK( e1.getValue() == enums::Metal::bellPlate )
}
TEST( setValue21 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	e1.setValue( enums::Metal::triangle );
	CHECK( e1.getValue() == enums::Metal::triangle )
}
TEST( setValue22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	e1.setValue( enums::Metal::vietnameseHat );
	CHECK( e1.getValue() == enums::Metal::vietnameseHat )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Metal::bell )
}
TEST( setValueInt0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Metal::bell )
}
TEST( setValueInt1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::brakeDrum );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Metal::bellPlate )
}
TEST( setValueInt2 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::chineseCymbal );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Metal::brakeDrum )
}
TEST( setValueInt21 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	CHECK( e1.setValueInt( 22 ) )
	CHECK( e1.getValue() == enums::Metal::vietnameseHat )
}
TEST( setValueInt22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Metal::almglocken )
}
TEST( setValueInt23 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	CHECK( ! e1.setValueInt( 23 ) )
	CHECK( e1.getValue() == enums::Metal::bellPlate )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Metal::bell )
}
TEST( fromString0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	CHECK( e1.fromString( "bell" ) )
	CHECK( e1.getValue() == enums::Metal::bell )
}
TEST( fromString1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::brakeDrum );
	CHECK( e1.fromString( "bell plate" ) )
	CHECK( e1.getValue() == enums::Metal::bellPlate )
}
TEST( fromString2 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::chineseCymbal );
	CHECK( e1.fromString( "brake drum" ) )
	CHECK( e1.getValue() == enums::Metal::brakeDrum )
}
TEST( fromString3 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cowbell );
	CHECK( e1.fromString( "Chinese cymbal" ) )
	CHECK( e1.getValue() == enums::Metal::chineseCymbal )
}
TEST( fromString4 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crashCymbals );
	CHECK( e1.fromString( "cowbell" ) )
	CHECK( e1.getValue() == enums::Metal::cowbell )
}
TEST( fromString5 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::crotale );
	CHECK( e1.fromString( "crash cymbals" ) )
	CHECK( e1.getValue() == enums::Metal::crashCymbals )
}
TEST( fromString6 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::cymbalTongs );
	CHECK( e1.fromString( "crotale" ) )
	CHECK( e1.getValue() == enums::Metal::crotale )
}
TEST( fromString7 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::domedGong );
	CHECK( e1.fromString( "cymbal tongs" ) )
	CHECK( e1.getValue() == enums::Metal::cymbalTongs )
}
TEST( fromString8 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::fingerCymbals );
	CHECK( e1.fromString( "domed gong" ) )
	CHECK( e1.getValue() == enums::Metal::domedGong )
}
TEST( fromString9 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::flexatone );
	CHECK( e1.fromString( "finger cymbals" ) )
	CHECK( e1.getValue() == enums::Metal::fingerCymbals )
}
TEST( fromString10 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::gong );
	CHECK( e1.fromString( "flexatone" ) )
	CHECK( e1.getValue() == enums::Metal::flexatone )
}
TEST( fromString11 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::hiHat );
	CHECK( e1.fromString( "gong" ) )
	CHECK( e1.getValue() == enums::Metal::gong )
}
TEST( fromString12 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::highHatCymbals );
	CHECK( e1.fromString( "hi-hat" ) )
	CHECK( e1.getValue() == enums::Metal::hiHat )
}
TEST( fromString13 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::handbell );
	CHECK( e1.fromString( "high-hat cymbals" ) )
	CHECK( e1.getValue() == enums::Metal::highHatCymbals )
}
TEST( fromString14 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sistrum );
	CHECK( e1.fromString( "handbell" ) )
	CHECK( e1.getValue() == enums::Metal::handbell )
}
TEST( fromString15 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sizzleCymbal );
	CHECK( e1.fromString( "sistrum" ) )
	CHECK( e1.getValue() == enums::Metal::sistrum )
}
TEST( fromString16 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::sleighBells );
	CHECK( e1.fromString( "sizzle cymbal" ) )
	CHECK( e1.getValue() == enums::Metal::sizzleCymbal )
}
TEST( fromString17 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::suspendedCymbal );
	CHECK( e1.fromString( "sleigh bells" ) )
	CHECK( e1.getValue() == enums::Metal::sleighBells )
}
TEST( fromString18 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::tamTam );
	CHECK( e1.fromString( "suspended cymbal" ) )
	CHECK( e1.getValue() == enums::Metal::suspendedCymbal )
}
TEST( fromString19 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::triangle );
	CHECK( e1.fromString( "tam tam" ) )
	CHECK( e1.getValue() == enums::Metal::tamTam )
}
TEST( fromString20 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	CHECK( e1.fromString( "triangle" ) )
	CHECK( e1.getValue() == enums::Metal::triangle )
}
TEST( fromString21 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	CHECK( e1.fromString( "Vietnamese hat" ) )
	CHECK( e1.getValue() == enums::Metal::vietnameseHat )
}
TEST( fromString22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	CHECK( e1.fromString( "almglocken" ) )
	CHECK( e1.getValue() == enums::Metal::almglocken )
}
TEST( fromString23 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bellPlate );
	CHECK( ! e1.fromString( "crazyErrantValue23" ) )
	CHECK( e1.getValue() == enums::Metal::bellPlate )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	int expected = 23;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	int expected = 23;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	int expected = 23;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	string expected = "metal";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	string expected = "metal";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	string expected = "metal";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	string expected = "MxEnumMetal";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	string expected = "MxEnumMetal";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	string expected = "MxEnumMetal";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	string expected = "The metal type represents pictograms for metal percussion instruments. The hi-hat value refers to a pictogram like Stone's high-hat cymbals but without the long vertical line at the bottom.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	string expected = "The metal type represents pictograms for metal percussion instruments. The hi-hat value refers to a pictogram like Stone's high-hat cymbals but without the long vertical line at the bottom.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	string expected = "The metal type represents pictograms for metal percussion instruments. The hi-hat value refers to a pictogram like Stone's high-hat cymbals but without the long vertical line at the bottom.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	stringstream ss;
	e1.stream( ss );
	string expected = "almglocken";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "almglocken";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	stringstream ss;
	e1.stream( ss );
	string expected = "bell";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "bell";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	stringstream ss;
	e1.stream( ss );
	string expected = "Vietnamese hat";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "Vietnamese hat";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	stringstream ss;
	ss << e1;
	string expected = "almglocken";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "almglocken";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	stringstream ss;
	ss << e1;
	string expected = "bell";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "bell";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	stringstream ss;
	ss << e1;
	string expected = "Vietnamese hat";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "Vietnamese hat";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_22equals0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_22equals1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_22equals22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_22equals0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_22equals1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_22equals22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_22islessthanoreq0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_22islessthanoreq1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_22islessthanoreq22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_22isgreaterthanoreq0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_22isgreaterthanoreq1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_22isgreaterthanoreq22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_22islessthan0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_22islessthan1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_22islessthan22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_22isgreaterthan0 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::almglocken );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_22isgreaterthan1 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::bell );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_22isgreaterthan22 , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	for( int i = 0; i < 22; ++i )
	{
		e2 = ++e1;
	}
	string expected = "vietnameseHat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vietnameseHat";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	for( int i = 0; i < 22; ++i )
	{
		e2 = ++e1;
	}
	string expected = "almglocken";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "almglocken";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start22_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	for( int i = 0; i < 22; ++i )
	{
		e2 = ++e1;
	}
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	for( int i = 0; i < 23; ++i )
	{
		e2 = ++e1;
	}
	string expected = "almglocken";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "almglocken";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	for( int i = 0; i < 23; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start22_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	for( int i = 0; i < 23; ++i )
	{
		e2 = ++e1;
	}
	string expected = "vietnameseHat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vietnameseHat";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	for( int i = 0; i < 22; ++i )
	{
		e2 = --e1;
	}
	string expected = "bell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	for( int i = 0; i < 22; ++i )
	{
		e2 = --e1;
	}
	string expected = "bellPlate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bellPlate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start22_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	for( int i = 0; i < 22; ++i )
	{
		e2 = --e1;
	}
	string expected = "almglocken";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "almglocken";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	for( int i = 0; i < 23; ++i )
	{
		e2 = --e1;
	}
	string expected = "almglocken";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "almglocken";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	for( int i = 0; i < 23; ++i )
	{
		e2 = --e1;
	}
	string expected = "bell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start22_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	for( int i = 0; i < 23; ++i )
	{
		e2 = --e1;
	}
	string expected = "vietnameseHat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vietnameseHat";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	for( int i = 0; i < 22; ++i )
	{
		e2 = e1++;
	}
	string expected = "vietnameseHat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	for( int i = 0; i < 22; ++i )
	{
		e2 = e1++;
	}
	string expected = "almglocken";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vietnameseHat";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start22_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	for( int i = 0; i < 22; ++i )
	{
		e2 = e1++;
	}
	string expected = "triangle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tamTam";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	for( int i = 0; i < 23; ++i )
	{
		e2 = e1++;
	}
	string expected = "almglocken";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vietnameseHat";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	for( int i = 0; i < 23; ++i )
	{
		e2 = e1++;
	}
	string expected = "bell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "almglocken";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start22_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	for( int i = 0; i < 23; ++i )
	{
		e2 = e1++;
	}
	string expected = "vietnameseHat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "triangle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	for( int i = 0; i < 22; ++i )
	{
		e2 = e1--;
	}
	string expected = "bell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bellPlate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	for( int i = 0; i < 22; ++i )
	{
		e2 = e1--;
	}
	string expected = "bellPlate";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "brakeDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start22_22times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	for( int i = 0; i < 22; ++i )
	{
		e2 = e1--;
	}
	string expected = "almglocken";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::almglocken );
	MxEnumMetal e2( enums::Metal::almglocken );
	for( int i = 0; i < 23; ++i )
	{
		e2 = e1--;
	}
	string expected = "almglocken";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bell";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::bell );
	MxEnumMetal e2( enums::Metal::bell );
	for( int i = 0; i < 23; ++i )
	{
		e2 = e1--;
	}
	string expected = "bell";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bellPlate";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start22_23times , MxEnumMetal )
{
	MxEnumMetal e1( enums::Metal::vietnameseHat );
	MxEnumMetal e2( enums::Metal::vietnameseHat );
	for( int i = 0; i < 23; ++i )
	{
		e2 = e1--;
	}
	string expected = "vietnameseHat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "almglocken";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

