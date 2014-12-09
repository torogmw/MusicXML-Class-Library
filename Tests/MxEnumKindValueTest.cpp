#include "TestHarness.h"
#include "MxEnumKindValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumKindValue )
{
	MxEnumKindValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminished );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSeventh );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSeventh );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminishedSeventh );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmentedSeventh );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::halfDiminished );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorMinor );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSixth );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSixth );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum13 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominantNinth );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum14 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorNinth );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum15 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorNinth );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum16 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant11th );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum17 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major11th );
	int expected = 17;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum18 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor11th );
	int expected = 18;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum19 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant13th );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum20 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major13th );
	int expected = 20;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum21 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor13th );
	int expected = 21;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum22 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedSecond );
	int expected = 22;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum23 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedFourth );
	int expected = 23;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum24 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::neapolitan );
	int expected = 24;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum25 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::italian );
	int expected = 25;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum26 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::french );
	int expected = 26;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum27 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::german );
	int expected = 27;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum28 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::pedal );
	int expected = 28;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum29 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::power );
	int expected = 29;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum30 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::tristan );
	int expected = 30;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum31 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::other );
	int expected = 31;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	int expected = 32;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor2 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor3 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminished );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor4 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor5 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSeventh );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor6 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSeventh );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor7 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminishedSeventh );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor8 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmentedSeventh );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor9 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::halfDiminished );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor10 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorMinor );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor11 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSixth );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor12 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSixth );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor13 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominantNinth );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor14 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorNinth );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor15 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorNinth );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor16 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant11th );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor17 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major11th );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor18 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor11th );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor19 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant13th );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor20 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major13th );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor21 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor13th );
	MxEnumKindValue e2( e1 );
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
TEST( copyCtor22 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedSecond );
	MxEnumKindValue e2( e1 );
	int expected = 22;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 23 );
	expected = 22;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 23;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor23 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedFourth );
	MxEnumKindValue e2( e1 );
	int expected = 23;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 24 );
	expected = 23;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 24;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor24 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::neapolitan );
	MxEnumKindValue e2( e1 );
	int expected = 24;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 25 );
	expected = 24;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 25;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor25 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::italian );
	MxEnumKindValue e2( e1 );
	int expected = 25;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 26 );
	expected = 25;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 26;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor26 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::french );
	MxEnumKindValue e2( e1 );
	int expected = 26;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 27 );
	expected = 26;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 27;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor27 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::german );
	MxEnumKindValue e2( e1 );
	int expected = 27;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 28 );
	expected = 27;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 28;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor28 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::pedal );
	MxEnumKindValue e2( e1 );
	int expected = 28;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 29 );
	expected = 28;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 29;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor29 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::power );
	MxEnumKindValue e2( e1 );
	int expected = 29;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 30 );
	expected = 29;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 30;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor30 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::tristan );
	MxEnumKindValue e2( e1 );
	int expected = 30;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 31 );
	expected = 30;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 31;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor31 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::other );
	MxEnumKindValue e2( e1 );
	int expected = 31;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 32 );
	expected = 31;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 32;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( e1 );
	int expected = 32;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 32;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::major );
	e1 = e2;
	string expected = "major";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::minor );
	e2 = e3;
	expected = "minor";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	MxEnumKindValue e2( enums::KindValue::minor );
	e1 = e2;
	string expected = "minor";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::augmented );
	e2 = e3;
	expected = "augmented";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminished );
	MxEnumKindValue e2( enums::KindValue::augmented );
	e1 = e2;
	string expected = "augmented";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::diminished );
	e2 = e3;
	expected = "diminished";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "augmented";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "augmented";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant );
	MxEnumKindValue e2( enums::KindValue::diminished );
	e1 = e2;
	string expected = "diminished";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::dominant );
	e2 = e3;
	expected = "dominant";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diminished";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diminished";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSeventh );
	MxEnumKindValue e2( enums::KindValue::dominant );
	e1 = e2;
	string expected = "dominant";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::majorSeventh );
	e2 = e3;
	expected = "major-seventh";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dominant";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dominant";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSeventh );
	MxEnumKindValue e2( enums::KindValue::majorSeventh );
	e1 = e2;
	string expected = "major-seventh";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::minorSeventh );
	e2 = e3;
	expected = "minor-seventh";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-seventh";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-seventh";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminishedSeventh );
	MxEnumKindValue e2( enums::KindValue::minorSeventh );
	e1 = e2;
	string expected = "minor-seventh";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::diminishedSeventh );
	e2 = e3;
	expected = "diminished-seventh";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor-seventh";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor-seventh";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmentedSeventh );
	MxEnumKindValue e2( enums::KindValue::diminishedSeventh );
	e1 = e2;
	string expected = "diminished-seventh";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::augmentedSeventh );
	e2 = e3;
	expected = "augmented-seventh";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diminished-seventh";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "diminished-seventh";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::halfDiminished );
	MxEnumKindValue e2( enums::KindValue::augmentedSeventh );
	e1 = e2;
	string expected = "augmented-seventh";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::halfDiminished );
	e2 = e3;
	expected = "half-diminished";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "augmented-seventh";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "augmented-seventh";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorMinor );
	MxEnumKindValue e2( enums::KindValue::halfDiminished );
	e1 = e2;
	string expected = "half-diminished";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::majorMinor );
	e2 = e3;
	expected = "major-minor";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half-diminished";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "half-diminished";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSixth );
	MxEnumKindValue e2( enums::KindValue::majorMinor );
	e1 = e2;
	string expected = "major-minor";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::majorSixth );
	e2 = e3;
	expected = "major-sixth";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-minor";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-minor";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSixth );
	MxEnumKindValue e2( enums::KindValue::majorSixth );
	e1 = e2;
	string expected = "major-sixth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::minorSixth );
	e2 = e3;
	expected = "minor-sixth";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-sixth";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-sixth";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominantNinth );
	MxEnumKindValue e2( enums::KindValue::minorSixth );
	e1 = e2;
	string expected = "minor-sixth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::dominantNinth );
	e2 = e3;
	expected = "dominant-ninth";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor-sixth";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor-sixth";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp13 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorNinth );
	MxEnumKindValue e2( enums::KindValue::dominantNinth );
	e1 = e2;
	string expected = "dominant-ninth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::majorNinth );
	e2 = e3;
	expected = "major-ninth";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dominant-ninth";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dominant-ninth";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp14 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorNinth );
	MxEnumKindValue e2( enums::KindValue::majorNinth );
	e1 = e2;
	string expected = "major-ninth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::minorNinth );
	e2 = e3;
	expected = "minor-ninth";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-ninth";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-ninth";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp15 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant11th );
	MxEnumKindValue e2( enums::KindValue::minorNinth );
	e1 = e2;
	string expected = "minor-ninth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::dominant11th );
	e2 = e3;
	expected = "dominant-11th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor-ninth";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor-ninth";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp16 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major11th );
	MxEnumKindValue e2( enums::KindValue::dominant11th );
	e1 = e2;
	string expected = "dominant-11th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::major11th );
	e2 = e3;
	expected = "major-11th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dominant-11th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dominant-11th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp17 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor11th );
	MxEnumKindValue e2( enums::KindValue::major11th );
	e1 = e2;
	string expected = "major-11th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::minor11th );
	e2 = e3;
	expected = "minor-11th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-11th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-11th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp18 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant13th );
	MxEnumKindValue e2( enums::KindValue::minor11th );
	e1 = e2;
	string expected = "minor-11th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::dominant13th );
	e2 = e3;
	expected = "dominant-13th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor-11th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor-11th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp19 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major13th );
	MxEnumKindValue e2( enums::KindValue::dominant13th );
	e1 = e2;
	string expected = "dominant-13th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::major13th );
	e2 = e3;
	expected = "major-13th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dominant-13th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "dominant-13th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp20 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor13th );
	MxEnumKindValue e2( enums::KindValue::major13th );
	e1 = e2;
	string expected = "major-13th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::minor13th );
	e2 = e3;
	expected = "minor-13th";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-13th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "major-13th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp21 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedSecond );
	MxEnumKindValue e2( enums::KindValue::minor13th );
	e1 = e2;
	string expected = "minor-13th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::suspendedSecond );
	e2 = e3;
	expected = "suspended-second";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor-13th";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "minor-13th";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp22 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedFourth );
	MxEnumKindValue e2( enums::KindValue::suspendedSecond );
	e1 = e2;
	string expected = "suspended-second";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::suspendedFourth );
	e2 = e3;
	expected = "suspended-fourth";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "suspended-second";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "suspended-second";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp23 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::neapolitan );
	MxEnumKindValue e2( enums::KindValue::suspendedFourth );
	e1 = e2;
	string expected = "suspended-fourth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::neapolitan );
	e2 = e3;
	expected = "Neapolitan";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "suspended-fourth";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "suspended-fourth";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp24 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::italian );
	MxEnumKindValue e2( enums::KindValue::neapolitan );
	e1 = e2;
	string expected = "Neapolitan";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::italian );
	e2 = e3;
	expected = "Italian";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Neapolitan";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Neapolitan";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp25 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::french );
	MxEnumKindValue e2( enums::KindValue::italian );
	e1 = e2;
	string expected = "Italian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::french );
	e2 = e3;
	expected = "French";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Italian";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Italian";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp26 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::german );
	MxEnumKindValue e2( enums::KindValue::french );
	e1 = e2;
	string expected = "French";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::german );
	e2 = e3;
	expected = "German";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "French";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "French";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp27 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::pedal );
	MxEnumKindValue e2( enums::KindValue::german );
	e1 = e2;
	string expected = "German";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::pedal );
	e2 = e3;
	expected = "pedal";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "German";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "German";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp28 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::power );
	MxEnumKindValue e2( enums::KindValue::pedal );
	e1 = e2;
	string expected = "pedal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::power );
	e2 = e3;
	expected = "power";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "pedal";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "pedal";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp29 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::tristan );
	MxEnumKindValue e2( enums::KindValue::power );
	e1 = e2;
	string expected = "power";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::tristan );
	e2 = e3;
	expected = "Tristan";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "power";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "power";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp30 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::other );
	MxEnumKindValue e2( enums::KindValue::tristan );
	e1 = e2;
	string expected = "Tristan";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::other );
	e2 = e3;
	expected = "other";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Tristan";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "Tristan";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp31 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::other );
	e1 = e2;
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::none );
	e2 = e3;
	expected = "none";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "other";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "other";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::none );
	e1 = e2;
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumKindValue e3( enums::KindValue::major );
	e2 = e3;
	expected = "major";
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
TEST( getValue0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	CHECK( e1.getValue() == enums::KindValue::major )
}
TEST( getValue1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	CHECK( e1.getValue() == enums::KindValue::minor )
}
TEST( getValue2 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	CHECK( e1.getValue() == enums::KindValue::augmented )
}
TEST( getValue31 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::other );
	CHECK( e1.getValue() == enums::KindValue::other )
}
TEST( getValue32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	CHECK( e1.getValue() == enums::KindValue::none )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminished );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSeventh );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSeventh );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminishedSeventh );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmentedSeventh );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::halfDiminished );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorMinor );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSixth );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSixth );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt13 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominantNinth );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt14 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorNinth );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt15 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorNinth );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt16 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant11th );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt17 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major11th );
	int expected = 17;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt18 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor11th );
	int expected = 18;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt19 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant13th );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt20 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major13th );
	int expected = 20;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt21 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor13th );
	int expected = 21;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt22 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedSecond );
	int expected = 22;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt23 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedFourth );
	int expected = 23;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt24 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::neapolitan );
	int expected = 24;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt25 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::italian );
	int expected = 25;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt26 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::french );
	int expected = 26;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt27 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::german );
	int expected = 27;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt28 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::pedal );
	int expected = 28;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt29 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::power );
	int expected = 29;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt30 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::tristan );
	int expected = 30;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt31 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::other );
	int expected = 31;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	int expected = 32;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	string expected = "augmented";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminished );
	string expected = "diminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant );
	string expected = "dominant";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSeventh );
	string expected = "majorSeventh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSeventh );
	string expected = "minorSeventh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminishedSeventh );
	string expected = "diminishedSeventh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmentedSeventh );
	string expected = "augmentedSeventh";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::halfDiminished );
	string expected = "halfDiminished";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorMinor );
	string expected = "majorMinor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSixth );
	string expected = "majorSixth";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSixth );
	string expected = "minorSixth";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString13 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominantNinth );
	string expected = "dominantNinth";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString14 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorNinth );
	string expected = "majorNinth";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString15 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorNinth );
	string expected = "minorNinth";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString16 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant11th );
	string expected = "dominant11th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString17 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major11th );
	string expected = "major11th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString18 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor11th );
	string expected = "minor11th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString19 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant13th );
	string expected = "dominant13th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString20 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major13th );
	string expected = "major13th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString21 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor13th );
	string expected = "minor13th";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString22 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedSecond );
	string expected = "suspendedSecond";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString23 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedFourth );
	string expected = "suspendedFourth";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString24 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::neapolitan );
	string expected = "neapolitan";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString25 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::italian );
	string expected = "italian";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString26 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::french );
	string expected = "french";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString27 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::german );
	string expected = "german";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString28 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::pedal );
	string expected = "pedal";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString29 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::power );
	string expected = "power";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString30 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::tristan );
	string expected = "tristan";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString31 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::other );
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	string expected = "major";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	string expected = "minor";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	string expected = "augmented";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminished );
	string expected = "diminished";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant );
	string expected = "dominant";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSeventh );
	string expected = "major-seventh";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSeventh );
	string expected = "minor-seventh";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminishedSeventh );
	string expected = "diminished-seventh";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmentedSeventh );
	string expected = "augmented-seventh";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::halfDiminished );
	string expected = "half-diminished";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorMinor );
	string expected = "major-minor";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSixth );
	string expected = "major-sixth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSixth );
	string expected = "minor-sixth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString13 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominantNinth );
	string expected = "dominant-ninth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString14 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorNinth );
	string expected = "major-ninth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString15 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorNinth );
	string expected = "minor-ninth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString16 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant11th );
	string expected = "dominant-11th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString17 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major11th );
	string expected = "major-11th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString18 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor11th );
	string expected = "minor-11th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString19 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant13th );
	string expected = "dominant-13th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString20 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major13th );
	string expected = "major-13th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString21 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor13th );
	string expected = "minor-13th";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString22 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedSecond );
	string expected = "suspended-second";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString23 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedFourth );
	string expected = "suspended-fourth";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString24 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::neapolitan );
	string expected = "Neapolitan";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString25 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::italian );
	string expected = "Italian";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString26 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::french );
	string expected = "French";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString27 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::german );
	string expected = "German";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString28 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::pedal );
	string expected = "pedal";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString29 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::power );
	string expected = "power";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString30 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::tristan );
	string expected = "Tristan";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString31 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::other );
	string expected = "other";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	string expected = "none";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	e1.setValue( enums::KindValue::major );
	CHECK( e1.getValue() == enums::KindValue::major )
}
TEST( setValue1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	e1.setValue( enums::KindValue::minor );
	CHECK( e1.getValue() == enums::KindValue::minor )
}
TEST( setValue2 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminished );
	e1.setValue( enums::KindValue::augmented );
	CHECK( e1.getValue() == enums::KindValue::augmented )
}
TEST( setValue31 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	e1.setValue( enums::KindValue::other );
	CHECK( e1.getValue() == enums::KindValue::other )
}
TEST( setValue32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	e1.setValue( enums::KindValue::none );
	CHECK( e1.getValue() == enums::KindValue::none )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::KindValue::minor )
}
TEST( setValueInt0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::KindValue::minor )
}
TEST( setValueInt1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminished );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::KindValue::augmented )
}
TEST( setValueInt2 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::KindValue::diminished )
}
TEST( setValueInt31 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	CHECK( e1.setValueInt( 32 ) )
	CHECK( e1.getValue() == enums::KindValue::none )
}
TEST( setValueInt32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::KindValue::major )
}
TEST( setValueInt33 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	CHECK( ! e1.setValueInt( 33 ) )
	CHECK( e1.getValue() == enums::KindValue::augmented )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::KindValue::minor )
}
TEST( fromString0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	CHECK( e1.fromString( "minor" ) )
	CHECK( e1.getValue() == enums::KindValue::minor )
}
TEST( fromString1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminished );
	CHECK( e1.fromString( "augmented" ) )
	CHECK( e1.getValue() == enums::KindValue::augmented )
}
TEST( fromString2 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant );
	CHECK( e1.fromString( "diminished" ) )
	CHECK( e1.getValue() == enums::KindValue::diminished )
}
TEST( fromString3 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSeventh );
	CHECK( e1.fromString( "dominant" ) )
	CHECK( e1.getValue() == enums::KindValue::dominant )
}
TEST( fromString4 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSeventh );
	CHECK( e1.fromString( "major-seventh" ) )
	CHECK( e1.getValue() == enums::KindValue::majorSeventh )
}
TEST( fromString5 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::diminishedSeventh );
	CHECK( e1.fromString( "minor-seventh" ) )
	CHECK( e1.getValue() == enums::KindValue::minorSeventh )
}
TEST( fromString6 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmentedSeventh );
	CHECK( e1.fromString( "diminished-seventh" ) )
	CHECK( e1.getValue() == enums::KindValue::diminishedSeventh )
}
TEST( fromString7 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::halfDiminished );
	CHECK( e1.fromString( "augmented-seventh" ) )
	CHECK( e1.getValue() == enums::KindValue::augmentedSeventh )
}
TEST( fromString8 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorMinor );
	CHECK( e1.fromString( "half-diminished" ) )
	CHECK( e1.getValue() == enums::KindValue::halfDiminished )
}
TEST( fromString9 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorSixth );
	CHECK( e1.fromString( "major-minor" ) )
	CHECK( e1.getValue() == enums::KindValue::majorMinor )
}
TEST( fromString10 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorSixth );
	CHECK( e1.fromString( "major-sixth" ) )
	CHECK( e1.getValue() == enums::KindValue::majorSixth )
}
TEST( fromString11 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominantNinth );
	CHECK( e1.fromString( "minor-sixth" ) )
	CHECK( e1.getValue() == enums::KindValue::minorSixth )
}
TEST( fromString12 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::majorNinth );
	CHECK( e1.fromString( "dominant-ninth" ) )
	CHECK( e1.getValue() == enums::KindValue::dominantNinth )
}
TEST( fromString13 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minorNinth );
	CHECK( e1.fromString( "major-ninth" ) )
	CHECK( e1.getValue() == enums::KindValue::majorNinth )
}
TEST( fromString14 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant11th );
	CHECK( e1.fromString( "minor-ninth" ) )
	CHECK( e1.getValue() == enums::KindValue::minorNinth )
}
TEST( fromString15 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major11th );
	CHECK( e1.fromString( "dominant-11th" ) )
	CHECK( e1.getValue() == enums::KindValue::dominant11th )
}
TEST( fromString16 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor11th );
	CHECK( e1.fromString( "major-11th" ) )
	CHECK( e1.getValue() == enums::KindValue::major11th )
}
TEST( fromString17 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::dominant13th );
	CHECK( e1.fromString( "minor-11th" ) )
	CHECK( e1.getValue() == enums::KindValue::minor11th )
}
TEST( fromString18 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major13th );
	CHECK( e1.fromString( "dominant-13th" ) )
	CHECK( e1.getValue() == enums::KindValue::dominant13th )
}
TEST( fromString19 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor13th );
	CHECK( e1.fromString( "major-13th" ) )
	CHECK( e1.getValue() == enums::KindValue::major13th )
}
TEST( fromString20 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedSecond );
	CHECK( e1.fromString( "minor-13th" ) )
	CHECK( e1.getValue() == enums::KindValue::minor13th )
}
TEST( fromString21 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::suspendedFourth );
	CHECK( e1.fromString( "suspended-second" ) )
	CHECK( e1.getValue() == enums::KindValue::suspendedSecond )
}
TEST( fromString22 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::neapolitan );
	CHECK( e1.fromString( "suspended-fourth" ) )
	CHECK( e1.getValue() == enums::KindValue::suspendedFourth )
}
TEST( fromString23 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::italian );
	CHECK( e1.fromString( "Neapolitan" ) )
	CHECK( e1.getValue() == enums::KindValue::neapolitan )
}
TEST( fromString24 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::french );
	CHECK( e1.fromString( "Italian" ) )
	CHECK( e1.getValue() == enums::KindValue::italian )
}
TEST( fromString25 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::german );
	CHECK( e1.fromString( "French" ) )
	CHECK( e1.getValue() == enums::KindValue::french )
}
TEST( fromString26 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::pedal );
	CHECK( e1.fromString( "German" ) )
	CHECK( e1.getValue() == enums::KindValue::german )
}
TEST( fromString27 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::power );
	CHECK( e1.fromString( "pedal" ) )
	CHECK( e1.getValue() == enums::KindValue::pedal )
}
TEST( fromString28 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::tristan );
	CHECK( e1.fromString( "power" ) )
	CHECK( e1.getValue() == enums::KindValue::power )
}
TEST( fromString29 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::other );
	CHECK( e1.fromString( "Tristan" ) )
	CHECK( e1.getValue() == enums::KindValue::tristan )
}
TEST( fromString30 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	CHECK( e1.fromString( "other" ) )
	CHECK( e1.getValue() == enums::KindValue::other )
}
TEST( fromString31 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	CHECK( e1.fromString( "none" ) )
	CHECK( e1.getValue() == enums::KindValue::none )
}
TEST( fromString32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	CHECK( e1.fromString( "major" ) )
	CHECK( e1.getValue() == enums::KindValue::major )
}
TEST( fromString33 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::augmented );
	CHECK( ! e1.fromString( "crazyErrantValue33" ) )
	CHECK( e1.getValue() == enums::KindValue::augmented )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	int expected = 33;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	int expected = 33;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	int expected = 33;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	string expected = "kind-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	string expected = "kind-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	string expected = "kind-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	string expected = "MxEnumKindValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	string expected = "MxEnumKindValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	string expected = "MxEnumKindValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	string expected = "A kind-value indicates the type of chord. Degree elements can then add, subtract, or alter from these starting points. Values include: Triads: major (major third, perfect fifth) minor (minor third, perfect fifth) augmented (major third, augmented fifth) diminished (minor third, diminished fifth) Sevenths: dominant (major triad, minor seventh) major-seventh (major triad, major seventh) minor-seventh (minor triad, minor seventh) diminished-seventh (diminished triad, diminished seventh) augmented-seventh (augmented triad, minor seventh) half-diminished (diminished triad, minor seventh) major-minor (minor triad, major seventh) Sixths: major-sixth (major triad, added sixth) minor-sixth (minor triad, added sixth) Ninths: dominant-ninth (dominant-seventh, major ninth) major-ninth (major-seventh, major ninth) minor-ninth (minor-seventh, major ninth) 11ths (usually as the basis for alteration): dominant-11th (dominant-ninth, perfect 11th) major-11th (major-ninth, perfect 11th) minor-11th (minor-ninth, perfect 11th) 13ths (usually as the basis for alteration): dominant-13th (dominant-11th, major 13th) major-13th (major-11th, major 13th) minor-13th (minor-11th, major 13th) Suspended: suspended-second (major second, perfect fifth) suspended-fourth (perfect fourth, perfect fifth) Functional sixths: Neapolitan Italian French German Other: pedal (pedal-point bass) power (perfect fifth) Tristan The 'other' kind is used when the harmony is entirely composed of add elements. The 'none' kind is used to explicitly encode absence of chords or functional harmony.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	string expected = "A kind-value indicates the type of chord. Degree elements can then add, subtract, or alter from these starting points. Values include: Triads: major (major third, perfect fifth) minor (minor third, perfect fifth) augmented (major third, augmented fifth) diminished (minor third, diminished fifth) Sevenths: dominant (major triad, minor seventh) major-seventh (major triad, major seventh) minor-seventh (minor triad, minor seventh) diminished-seventh (diminished triad, diminished seventh) augmented-seventh (augmented triad, minor seventh) half-diminished (diminished triad, minor seventh) major-minor (minor triad, major seventh) Sixths: major-sixth (major triad, added sixth) minor-sixth (minor triad, added sixth) Ninths: dominant-ninth (dominant-seventh, major ninth) major-ninth (major-seventh, major ninth) minor-ninth (minor-seventh, major ninth) 11ths (usually as the basis for alteration): dominant-11th (dominant-ninth, perfect 11th) major-11th (major-ninth, perfect 11th) minor-11th (minor-ninth, perfect 11th) 13ths (usually as the basis for alteration): dominant-13th (dominant-11th, major 13th) major-13th (major-11th, major 13th) minor-13th (minor-11th, major 13th) Suspended: suspended-second (major second, perfect fifth) suspended-fourth (perfect fourth, perfect fifth) Functional sixths: Neapolitan Italian French German Other: pedal (pedal-point bass) power (perfect fifth) Tristan The 'other' kind is used when the harmony is entirely composed of add elements. The 'none' kind is used to explicitly encode absence of chords or functional harmony.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	string expected = "A kind-value indicates the type of chord. Degree elements can then add, subtract, or alter from these starting points. Values include: Triads: major (major third, perfect fifth) minor (minor third, perfect fifth) augmented (major third, augmented fifth) diminished (minor third, diminished fifth) Sevenths: dominant (major triad, minor seventh) major-seventh (major triad, major seventh) minor-seventh (minor triad, minor seventh) diminished-seventh (diminished triad, diminished seventh) augmented-seventh (augmented triad, minor seventh) half-diminished (diminished triad, minor seventh) major-minor (minor triad, major seventh) Sixths: major-sixth (major triad, added sixth) minor-sixth (minor triad, added sixth) Ninths: dominant-ninth (dominant-seventh, major ninth) major-ninth (major-seventh, major ninth) minor-ninth (minor-seventh, major ninth) 11ths (usually as the basis for alteration): dominant-11th (dominant-ninth, perfect 11th) major-11th (major-ninth, perfect 11th) minor-11th (minor-ninth, perfect 11th) 13ths (usually as the basis for alteration): dominant-13th (dominant-11th, major 13th) major-13th (major-11th, major 13th) minor-13th (minor-11th, major 13th) Suspended: suspended-second (major second, perfect fifth) suspended-fourth (perfect fourth, perfect fifth) Functional sixths: Neapolitan Italian French German Other: pedal (pedal-point bass) power (perfect fifth) Tristan The 'other' kind is used when the harmony is entirely composed of add elements. The 'none' kind is used to explicitly encode absence of chords or functional harmony.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	stringstream ss;
	e1.stream( ss );
	string expected = "major";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "major";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	stringstream ss;
	e1.stream( ss );
	string expected = "minor";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "minor";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
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
TEST( streamingOperator0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	stringstream ss;
	ss << e1;
	string expected = "major";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "major";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	stringstream ss;
	ss << e1;
	string expected = "minor";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "minor";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
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
TEST( equalsEquals_true_0equals0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_32equals0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_32equals1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_32equals32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_32equals0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_32equals1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_32equals32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_32islessthanoreq0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_32islessthanoreq1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_32islessthanoreq32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_32isgreaterthanoreq0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_32isgreaterthanoreq1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_32isgreaterthanoreq32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_32islessthan0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_32islessthan1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_32islessthan32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_32isgreaterthan0 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::major );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_32isgreaterthan1 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::minor );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_32isgreaterthan32 , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	for( int i = 0; i < 32; ++i )
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
TEST( incrementPre_start1_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	for( int i = 0; i < 32; ++i )
	{
		e2 = ++e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start32_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	for( int i = 0; i < 32; ++i )
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
TEST( incrementPre_start0_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	for( int i = 0; i < 33; ++i )
	{
		e2 = ++e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	for( int i = 0; i < 33; ++i )
	{
		e2 = ++e1;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start32_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	for( int i = 0; i < 33; ++i )
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
TEST( decrementPre_start0_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	for( int i = 0; i < 32; ++i )
	{
		e2 = --e1;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	for( int i = 0; i < 32; ++i )
	{
		e2 = --e1;
	}
	string expected = "augmented";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "augmented";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start32_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	for( int i = 0; i < 32; ++i )
	{
		e2 = --e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	for( int i = 0; i < 33; ++i )
	{
		e2 = --e1;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	for( int i = 0; i < 33; ++i )
	{
		e2 = --e1;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start32_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	for( int i = 0; i < 33; ++i )
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
TEST( incrementPost_start0_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	for( int i = 0; i < 32; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	for( int i = 0; i < 32; ++i )
	{
		e2 = e1++;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start32_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	for( int i = 0; i < 32; ++i )
	{
		e2 = e1++;
	}
	string expected = "other";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tristan";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1++;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "none";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1++;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start32_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1++;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "other";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	for( int i = 0; i < 32; ++i )
	{
		e2 = e1--;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "augmented";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	for( int i = 0; i < 32; ++i )
	{
		e2 = e1--;
	}
	string expected = "augmented";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "diminished";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start32_32times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	for( int i = 0; i < 32; ++i )
	{
		e2 = e1--;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::major );
	MxEnumKindValue e2( enums::KindValue::major );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1--;
	}
	string expected = "major";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "minor";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::minor );
	MxEnumKindValue e2( enums::KindValue::minor );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1--;
	}
	string expected = "minor";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "augmented";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start32_33times , MxEnumKindValue )
{
	MxEnumKindValue e1( enums::KindValue::none );
	MxEnumKindValue e2( enums::KindValue::none );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1--;
	}
	string expected = "none";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "major";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

