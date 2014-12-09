#include "TestHarness.h"
#include "MxEnumAccidentalValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSharp );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpSharp );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatFlat );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalSharp );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalFlat );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterFlat );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterSharp );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersFlat );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersSharp );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpDown );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum13 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpUp );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum14 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalDown );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum15 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalUp );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum16 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatDown );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum17 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatUp );
	int expected = 17;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum18 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleSharp );
	int expected = 18;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum19 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleFlat );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum20 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashQuarterSharp );
	int expected = 20;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum21 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashSharp );
	int expected = 21;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum22 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashFlat );
	int expected = 22;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum23 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSlashFlat );
	int expected = 23;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum24 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp1 );
	int expected = 24;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum25 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp2 );
	int expected = 25;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum26 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp3 );
	int expected = 26;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum27 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp5 );
	int expected = 27;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum28 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat1 );
	int expected = 28;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum29 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat2 );
	int expected = 29;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum30 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat3 );
	int expected = 30;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum31 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat4 );
	int expected = 31;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum32 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sori );
	int expected = 32;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	int expected = 33;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor2 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor3 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSharp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor4 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpSharp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor5 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatFlat );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor6 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalSharp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor7 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalFlat );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor8 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterFlat );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor9 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterSharp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor10 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersFlat );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor11 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersSharp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor12 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpDown );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor13 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpUp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor14 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalDown );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor15 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalUp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor16 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatDown );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor17 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatUp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor18 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleSharp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor19 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleFlat );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor20 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashQuarterSharp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor21 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashSharp );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor22 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashFlat );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor23 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSlashFlat );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor24 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp1 );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor25 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp2 );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor26 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp3 );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor27 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp5 );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor28 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat1 );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor29 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat2 );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor30 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat3 );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor31 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat4 );
	MxEnumAccidentalValue e2( e1 );
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
TEST( copyCtor32 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sori );
	MxEnumAccidentalValue e2( e1 );
	int expected = 32;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 33 );
	expected = 32;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 33;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( e1 );
	int expected = 33;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 33;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	e1 = e2;
	string expected = "sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::natural );
	e2 = e3;
	expected = "natural";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	e1 = e2;
	string expected = "natural";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::flat );
	e2 = e3;
	expected = "flat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "natural";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "natural";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::flat );
	e1 = e2;
	string expected = "flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::doubleSharp );
	e2 = e3;
	expected = "double-sharp";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpSharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::doubleSharp );
	e1 = e2;
	string expected = "double-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::sharpSharp );
	e2 = e3;
	expected = "sharp-sharp";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double-sharp";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double-sharp";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatFlat );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharpSharp );
	e1 = e2;
	string expected = "sharp-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::flatFlat );
	e2 = e3;
	expected = "flat-flat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-sharp";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-sharp";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalSharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::flatFlat );
	e1 = e2;
	string expected = "flat-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::naturalSharp );
	e2 = e3;
	expected = "natural-sharp";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-flat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-flat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalFlat );
	MxEnumAccidentalValue e2( enums::AccidentalValue::naturalSharp );
	e1 = e2;
	string expected = "natural-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::naturalFlat );
	e2 = e3;
	expected = "natural-flat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "natural-sharp";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "natural-sharp";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterFlat );
	MxEnumAccidentalValue e2( enums::AccidentalValue::naturalFlat );
	e1 = e2;
	string expected = "natural-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::quarterFlat );
	e2 = e3;
	expected = "quarter-flat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "natural-flat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "natural-flat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterSharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::quarterFlat );
	e1 = e2;
	string expected = "quarter-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::quarterSharp );
	e2 = e3;
	expected = "quarter-sharp";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "quarter-flat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "quarter-flat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersFlat );
	MxEnumAccidentalValue e2( enums::AccidentalValue::quarterSharp );
	e1 = e2;
	string expected = "quarter-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::threeQuartersFlat );
	e2 = e3;
	expected = "three-quarters-flat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "quarter-sharp";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "quarter-sharp";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersSharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::threeQuartersFlat );
	e1 = e2;
	string expected = "three-quarters-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::threeQuartersSharp );
	e2 = e3;
	expected = "three-quarters-sharp";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "three-quarters-flat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "three-quarters-flat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpDown );
	MxEnumAccidentalValue e2( enums::AccidentalValue::threeQuartersSharp );
	e1 = e2;
	string expected = "three-quarters-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::sharpDown );
	e2 = e3;
	expected = "sharp-down";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "three-quarters-sharp";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "three-quarters-sharp";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpUp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharpDown );
	e1 = e2;
	string expected = "sharp-down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::sharpUp );
	e2 = e3;
	expected = "sharp-up";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-down";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-down";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp13 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalDown );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharpUp );
	e1 = e2;
	string expected = "sharp-up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::naturalDown );
	e2 = e3;
	expected = "natural-down";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-up";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-up";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp14 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalUp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::naturalDown );
	e1 = e2;
	string expected = "natural-down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::naturalUp );
	e2 = e3;
	expected = "natural-up";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "natural-down";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "natural-down";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp15 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatDown );
	MxEnumAccidentalValue e2( enums::AccidentalValue::naturalUp );
	e1 = e2;
	string expected = "natural-up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::flatDown );
	e2 = e3;
	expected = "flat-down";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "natural-up";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "natural-up";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp16 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatUp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::flatDown );
	e1 = e2;
	string expected = "flat-down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::flatUp );
	e2 = e3;
	expected = "flat-up";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-down";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-down";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp17 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleSharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::flatUp );
	e1 = e2;
	string expected = "flat-up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::tripleSharp );
	e2 = e3;
	expected = "triple-sharp";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-up";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-up";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp18 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleFlat );
	MxEnumAccidentalValue e2( enums::AccidentalValue::tripleSharp );
	e1 = e2;
	string expected = "triple-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::tripleFlat );
	e2 = e3;
	expected = "triple-flat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triple-sharp";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triple-sharp";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp19 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashQuarterSharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::tripleFlat );
	e1 = e2;
	string expected = "triple-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::slashQuarterSharp );
	e2 = e3;
	expected = "slash-quarter-sharp";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triple-flat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "triple-flat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp20 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashSharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::slashQuarterSharp );
	e1 = e2;
	string expected = "slash-quarter-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::slashSharp );
	e2 = e3;
	expected = "slash-sharp";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slash-quarter-sharp";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slash-quarter-sharp";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp21 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashFlat );
	MxEnumAccidentalValue e2( enums::AccidentalValue::slashSharp );
	e1 = e2;
	string expected = "slash-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::slashFlat );
	e2 = e3;
	expected = "slash-flat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slash-sharp";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slash-sharp";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp22 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSlashFlat );
	MxEnumAccidentalValue e2( enums::AccidentalValue::slashFlat );
	e1 = e2;
	string expected = "slash-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::doubleSlashFlat );
	e2 = e3;
	expected = "double-slash-flat";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slash-flat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slash-flat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp23 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp1 );
	MxEnumAccidentalValue e2( enums::AccidentalValue::doubleSlashFlat );
	e1 = e2;
	string expected = "double-slash-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::sharp1 );
	e2 = e3;
	expected = "sharp-1";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double-slash-flat";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "double-slash-flat";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp24 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp2 );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp1 );
	e1 = e2;
	string expected = "sharp-1";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::sharp2 );
	e2 = e3;
	expected = "sharp-2";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-1";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-1";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp25 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp3 );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp2 );
	e1 = e2;
	string expected = "sharp-2";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::sharp3 );
	e2 = e3;
	expected = "sharp-3";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-2";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-2";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp26 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp5 );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp3 );
	e1 = e2;
	string expected = "sharp-3";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::sharp5 );
	e2 = e3;
	expected = "sharp-5";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-3";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-3";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp27 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat1 );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp5 );
	e1 = e2;
	string expected = "sharp-5";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::flat1 );
	e2 = e3;
	expected = "flat-1";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-5";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sharp-5";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp28 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat2 );
	MxEnumAccidentalValue e2( enums::AccidentalValue::flat1 );
	e1 = e2;
	string expected = "flat-1";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::flat2 );
	e2 = e3;
	expected = "flat-2";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-1";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-1";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp29 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat3 );
	MxEnumAccidentalValue e2( enums::AccidentalValue::flat2 );
	e1 = e2;
	string expected = "flat-2";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::flat3 );
	e2 = e3;
	expected = "flat-3";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-2";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-2";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp30 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat4 );
	MxEnumAccidentalValue e2( enums::AccidentalValue::flat3 );
	e1 = e2;
	string expected = "flat-3";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::flat4 );
	e2 = e3;
	expected = "flat-4";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-3";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-3";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp31 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sori );
	MxEnumAccidentalValue e2( enums::AccidentalValue::flat4 );
	e1 = e2;
	string expected = "flat-4";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::sori );
	e2 = e3;
	expected = "sori";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-4";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "flat-4";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp32 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sori );
	e1 = e2;
	string expected = "sori";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::koron );
	e2 = e3;
	expected = "koron";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sori";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sori";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	e1 = e2;
	string expected = "koron";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumAccidentalValue e3( enums::AccidentalValue::sharp );
	e2 = e3;
	expected = "sharp";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "koron";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "koron";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	CHECK( e1.getValue() == enums::AccidentalValue::sharp )
}
TEST( getValue1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	CHECK( e1.getValue() == enums::AccidentalValue::natural )
}
TEST( getValue2 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	CHECK( e1.getValue() == enums::AccidentalValue::flat )
}
TEST( getValue32 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sori );
	CHECK( e1.getValue() == enums::AccidentalValue::sori )
}
TEST( getValue33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	CHECK( e1.getValue() == enums::AccidentalValue::koron )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSharp );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpSharp );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatFlat );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalSharp );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalFlat );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterFlat );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterSharp );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersFlat );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersSharp );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpDown );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt13 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpUp );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt14 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalDown );
	int expected = 14;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt15 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalUp );
	int expected = 15;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt16 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatDown );
	int expected = 16;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt17 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatUp );
	int expected = 17;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt18 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleSharp );
	int expected = 18;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt19 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleFlat );
	int expected = 19;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt20 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashQuarterSharp );
	int expected = 20;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt21 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashSharp );
	int expected = 21;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt22 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashFlat );
	int expected = 22;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt23 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSlashFlat );
	int expected = 23;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt24 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp1 );
	int expected = 24;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt25 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp2 );
	int expected = 25;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt26 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp3 );
	int expected = 26;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt27 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp5 );
	int expected = 27;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt28 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat1 );
	int expected = 28;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt29 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat2 );
	int expected = 29;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt30 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat3 );
	int expected = 30;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt31 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat4 );
	int expected = 31;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt32 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sori );
	int expected = 32;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	int expected = 33;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	string expected = "sharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	string expected = "natural";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	string expected = "flat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSharp );
	string expected = "doubleSharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpSharp );
	string expected = "sharpSharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatFlat );
	string expected = "flatFlat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalSharp );
	string expected = "naturalSharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalFlat );
	string expected = "naturalFlat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterFlat );
	string expected = "quarterFlat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterSharp );
	string expected = "quarterSharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersFlat );
	string expected = "threeQuartersFlat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersSharp );
	string expected = "threeQuartersSharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpDown );
	string expected = "sharpDown";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString13 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpUp );
	string expected = "sharpUp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString14 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalDown );
	string expected = "naturalDown";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString15 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalUp );
	string expected = "naturalUp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString16 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatDown );
	string expected = "flatDown";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString17 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatUp );
	string expected = "flatUp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString18 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleSharp );
	string expected = "tripleSharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString19 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleFlat );
	string expected = "tripleFlat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString20 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashQuarterSharp );
	string expected = "slashQuarterSharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString21 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashSharp );
	string expected = "slashSharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString22 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashFlat );
	string expected = "slashFlat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString23 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSlashFlat );
	string expected = "doubleSlashFlat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString24 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp1 );
	string expected = "sharp1";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString25 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp2 );
	string expected = "sharp2";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString26 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp3 );
	string expected = "sharp3";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString27 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp5 );
	string expected = "sharp5";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString28 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat1 );
	string expected = "flat1";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString29 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat2 );
	string expected = "flat2";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString30 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat3 );
	string expected = "flat3";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString31 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat4 );
	string expected = "flat4";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString32 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sori );
	string expected = "sori";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	string expected = "koron";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	string expected = "sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	string expected = "natural";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	string expected = "flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSharp );
	string expected = "double-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpSharp );
	string expected = "sharp-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatFlat );
	string expected = "flat-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalSharp );
	string expected = "natural-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalFlat );
	string expected = "natural-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterFlat );
	string expected = "quarter-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterSharp );
	string expected = "quarter-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersFlat );
	string expected = "three-quarters-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersSharp );
	string expected = "three-quarters-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpDown );
	string expected = "sharp-down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString13 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpUp );
	string expected = "sharp-up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString14 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalDown );
	string expected = "natural-down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString15 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalUp );
	string expected = "natural-up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString16 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatDown );
	string expected = "flat-down";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString17 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatUp );
	string expected = "flat-up";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString18 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleSharp );
	string expected = "triple-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString19 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleFlat );
	string expected = "triple-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString20 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashQuarterSharp );
	string expected = "slash-quarter-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString21 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashSharp );
	string expected = "slash-sharp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString22 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashFlat );
	string expected = "slash-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString23 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSlashFlat );
	string expected = "double-slash-flat";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString24 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp1 );
	string expected = "sharp-1";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString25 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp2 );
	string expected = "sharp-2";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString26 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp3 );
	string expected = "sharp-3";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString27 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp5 );
	string expected = "sharp-5";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString28 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat1 );
	string expected = "flat-1";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString29 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat2 );
	string expected = "flat-2";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString30 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat3 );
	string expected = "flat-3";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString31 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat4 );
	string expected = "flat-4";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString32 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sori );
	string expected = "sori";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	string expected = "koron";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	e1.setValue( enums::AccidentalValue::sharp );
	CHECK( e1.getValue() == enums::AccidentalValue::sharp )
}
TEST( setValue1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	e1.setValue( enums::AccidentalValue::natural );
	CHECK( e1.getValue() == enums::AccidentalValue::natural )
}
TEST( setValue2 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSharp );
	e1.setValue( enums::AccidentalValue::flat );
	CHECK( e1.getValue() == enums::AccidentalValue::flat )
}
TEST( setValue32 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	e1.setValue( enums::AccidentalValue::sori );
	CHECK( e1.getValue() == enums::AccidentalValue::sori )
}
TEST( setValue33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	e1.setValue( enums::AccidentalValue::koron );
	CHECK( e1.getValue() == enums::AccidentalValue::koron )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::AccidentalValue::natural )
}
TEST( setValueInt0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::AccidentalValue::natural )
}
TEST( setValueInt1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSharp );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flat )
}
TEST( setValueInt2 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpSharp );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::AccidentalValue::doubleSharp )
}
TEST( setValueInt32 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	CHECK( e1.setValueInt( 33 ) )
	CHECK( e1.getValue() == enums::AccidentalValue::koron )
}
TEST( setValueInt33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::AccidentalValue::sharp )
}
TEST( setValueInt34 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	CHECK( ! e1.setValueInt( 34 ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flat )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::natural )
}
TEST( fromString0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	CHECK( e1.fromString( "natural" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::natural )
}
TEST( fromString1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSharp );
	CHECK( e1.fromString( "flat" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flat )
}
TEST( fromString2 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpSharp );
	CHECK( e1.fromString( "double-sharp" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::doubleSharp )
}
TEST( fromString3 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatFlat );
	CHECK( e1.fromString( "sharp-sharp" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::sharpSharp )
}
TEST( fromString4 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalSharp );
	CHECK( e1.fromString( "flat-flat" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flatFlat )
}
TEST( fromString5 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalFlat );
	CHECK( e1.fromString( "natural-sharp" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::naturalSharp )
}
TEST( fromString6 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterFlat );
	CHECK( e1.fromString( "natural-flat" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::naturalFlat )
}
TEST( fromString7 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::quarterSharp );
	CHECK( e1.fromString( "quarter-flat" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::quarterFlat )
}
TEST( fromString8 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersFlat );
	CHECK( e1.fromString( "quarter-sharp" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::quarterSharp )
}
TEST( fromString9 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::threeQuartersSharp );
	CHECK( e1.fromString( "three-quarters-flat" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::threeQuartersFlat )
}
TEST( fromString10 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpDown );
	CHECK( e1.fromString( "three-quarters-sharp" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::threeQuartersSharp )
}
TEST( fromString11 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharpUp );
	CHECK( e1.fromString( "sharp-down" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::sharpDown )
}
TEST( fromString12 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalDown );
	CHECK( e1.fromString( "sharp-up" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::sharpUp )
}
TEST( fromString13 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::naturalUp );
	CHECK( e1.fromString( "natural-down" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::naturalDown )
}
TEST( fromString14 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatDown );
	CHECK( e1.fromString( "natural-up" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::naturalUp )
}
TEST( fromString15 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flatUp );
	CHECK( e1.fromString( "flat-down" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flatDown )
}
TEST( fromString16 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleSharp );
	CHECK( e1.fromString( "flat-up" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flatUp )
}
TEST( fromString17 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::tripleFlat );
	CHECK( e1.fromString( "triple-sharp" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::tripleSharp )
}
TEST( fromString18 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashQuarterSharp );
	CHECK( e1.fromString( "triple-flat" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::tripleFlat )
}
TEST( fromString19 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashSharp );
	CHECK( e1.fromString( "slash-quarter-sharp" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::slashQuarterSharp )
}
TEST( fromString20 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::slashFlat );
	CHECK( e1.fromString( "slash-sharp" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::slashSharp )
}
TEST( fromString21 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::doubleSlashFlat );
	CHECK( e1.fromString( "slash-flat" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::slashFlat )
}
TEST( fromString22 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp1 );
	CHECK( e1.fromString( "double-slash-flat" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::doubleSlashFlat )
}
TEST( fromString23 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp2 );
	CHECK( e1.fromString( "sharp-1" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::sharp1 )
}
TEST( fromString24 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp3 );
	CHECK( e1.fromString( "sharp-2" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::sharp2 )
}
TEST( fromString25 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp5 );
	CHECK( e1.fromString( "sharp-3" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::sharp3 )
}
TEST( fromString26 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat1 );
	CHECK( e1.fromString( "sharp-5" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::sharp5 )
}
TEST( fromString27 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat2 );
	CHECK( e1.fromString( "flat-1" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flat1 )
}
TEST( fromString28 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat3 );
	CHECK( e1.fromString( "flat-2" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flat2 )
}
TEST( fromString29 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat4 );
	CHECK( e1.fromString( "flat-3" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flat3 )
}
TEST( fromString30 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sori );
	CHECK( e1.fromString( "flat-4" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flat4 )
}
TEST( fromString31 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	CHECK( e1.fromString( "sori" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::sori )
}
TEST( fromString32 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	CHECK( e1.fromString( "koron" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::koron )
}
TEST( fromString33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	CHECK( e1.fromString( "sharp" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::sharp )
}
TEST( fromString34 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::flat );
	CHECK( ! e1.fromString( "crazyErrantValue34" ) )
	CHECK( e1.getValue() == enums::AccidentalValue::flat )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	int expected = 34;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	int expected = 34;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	int expected = 34;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	string expected = "accidental-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	string expected = "accidental-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	string expected = "accidental-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	string expected = "MxEnumAccidentalValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	string expected = "MxEnumAccidentalValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	string expected = "MxEnumAccidentalValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	string expected = "The accidental-value type represents notated accidentals supported by MusicXML. In the MusicXML 2.0 DTD this was a string with values that could be included. The XSD strengthens the data typing to an enumerated list. The quarter- and three-quarters- accidentals are Tartini-style quarter-tone accidentals. The -down and -up accidentals are quarter-tone accidentals that include arrows pointing down or up. The slash- accidentals are used in Turkish classical music. The numbered sharp and flat accidentals are superscripted versions of the accidental signs, used in Turkish folk music. The sori and koron accidentals are microtonal sharp and flat accidentals used in Iranian and Persian music.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	string expected = "The accidental-value type represents notated accidentals supported by MusicXML. In the MusicXML 2.0 DTD this was a string with values that could be included. The XSD strengthens the data typing to an enumerated list. The quarter- and three-quarters- accidentals are Tartini-style quarter-tone accidentals. The -down and -up accidentals are quarter-tone accidentals that include arrows pointing down or up. The slash- accidentals are used in Turkish classical music. The numbered sharp and flat accidentals are superscripted versions of the accidental signs, used in Turkish folk music. The sori and koron accidentals are microtonal sharp and flat accidentals used in Iranian and Persian music.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	string expected = "The accidental-value type represents notated accidentals supported by MusicXML. In the MusicXML 2.0 DTD this was a string with values that could be included. The XSD strengthens the data typing to an enumerated list. The quarter- and three-quarters- accidentals are Tartini-style quarter-tone accidentals. The -down and -up accidentals are quarter-tone accidentals that include arrows pointing down or up. The slash- accidentals are used in Turkish classical music. The numbered sharp and flat accidentals are superscripted versions of the accidental signs, used in Turkish folk music. The sori and koron accidentals are microtonal sharp and flat accidentals used in Iranian and Persian music.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	stringstream ss;
	e1.stream( ss );
	string expected = "sharp";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "sharp";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	stringstream ss;
	e1.stream( ss );
	string expected = "natural";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "natural";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	stringstream ss;
	e1.stream( ss );
	string expected = "koron";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "koron";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	stringstream ss;
	ss << e1;
	string expected = "sharp";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "sharp";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	stringstream ss;
	ss << e1;
	string expected = "natural";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "natural";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	stringstream ss;
	ss << e1;
	string expected = "koron";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "koron";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_33equals0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_33equals1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_33equals33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_33equals0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_33equals1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_33equals33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_33islessthanoreq0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_33islessthanoreq1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_33islessthanoreq33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_33isgreaterthanoreq0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_33isgreaterthanoreq1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_33isgreaterthanoreq33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_33islessthan0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_33islessthan1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_33islessthan33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_33isgreaterthan0 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_33isgreaterthan1 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_33isgreaterthan33 , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	for( int i = 0; i < 33; ++i )
	{
		e2 = ++e1;
	}
	string expected = "koron";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "koron";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	for( int i = 0; i < 33; ++i )
	{
		e2 = ++e1;
	}
	string expected = "sharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "sharp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start33_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	for( int i = 0; i < 33; ++i )
	{
		e2 = ++e1;
	}
	string expected = "sori";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "sori";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	for( int i = 0; i < 34; ++i )
	{
		e2 = ++e1;
	}
	string expected = "sharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "sharp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	for( int i = 0; i < 34; ++i )
	{
		e2 = ++e1;
	}
	string expected = "natural";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "natural";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start33_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	for( int i = 0; i < 34; ++i )
	{
		e2 = ++e1;
	}
	string expected = "koron";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "koron";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	for( int i = 0; i < 33; ++i )
	{
		e2 = --e1;
	}
	string expected = "natural";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "natural";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	for( int i = 0; i < 33; ++i )
	{
		e2 = --e1;
	}
	string expected = "flat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "flat";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start33_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	for( int i = 0; i < 33; ++i )
	{
		e2 = --e1;
	}
	string expected = "sharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "sharp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	for( int i = 0; i < 34; ++i )
	{
		e2 = --e1;
	}
	string expected = "sharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "sharp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	for( int i = 0; i < 34; ++i )
	{
		e2 = --e1;
	}
	string expected = "natural";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "natural";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start33_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	for( int i = 0; i < 34; ++i )
	{
		e2 = --e1;
	}
	string expected = "koron";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "koron";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1++;
	}
	string expected = "koron";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "sori";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1++;
	}
	string expected = "sharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "koron";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start33_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1++;
	}
	string expected = "sori";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "flat4";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	for( int i = 0; i < 34; ++i )
	{
		e2 = e1++;
	}
	string expected = "sharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "koron";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	for( int i = 0; i < 34; ++i )
	{
		e2 = e1++;
	}
	string expected = "natural";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "sharp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start33_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	for( int i = 0; i < 34; ++i )
	{
		e2 = e1++;
	}
	string expected = "koron";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "sori";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1--;
	}
	string expected = "natural";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "flat";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1--;
	}
	string expected = "flat";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "doubleSharp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start33_33times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	for( int i = 0; i < 33; ++i )
	{
		e2 = e1--;
	}
	string expected = "sharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "natural";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::sharp );
	MxEnumAccidentalValue e2( enums::AccidentalValue::sharp );
	for( int i = 0; i < 34; ++i )
	{
		e2 = e1--;
	}
	string expected = "sharp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "natural";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::natural );
	MxEnumAccidentalValue e2( enums::AccidentalValue::natural );
	for( int i = 0; i < 34; ++i )
	{
		e2 = e1--;
	}
	string expected = "natural";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "flat";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start33_34times , MxEnumAccidentalValue )
{
	MxEnumAccidentalValue e1( enums::AccidentalValue::koron );
	MxEnumAccidentalValue e2( enums::AccidentalValue::koron );
	for( int i = 0; i < 34; ++i )
	{
		e2 = e1--;
	}
	string expected = "koron";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "sharp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

