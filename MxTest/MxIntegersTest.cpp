#include "TestHarness.h"
#include "MxIntegers.h"

using namespace mx::types;

TEST( Int01, MxIntegers )
{
    Int i( 5 );
    long expected = 5;
    long actual = i.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( Int02, MxIntegers )
{
    Int i;
    long expected = 0;
    long actual = i.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( Int03, MxIntegers )
{
    Int i;
    i.setValue( 51 );
    long expected = 51;
    long actual = i.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( Int04, MxIntegers )
{
    Int i( 1 );
    i.parse( "32" );
    long expected = 32;
    long actual = i.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( Int05, MxIntegers )
{
    Int i( 72 );
    i.parse( "xxx" );
    long expected = 72;
    long actual = i.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( Int06, MxIntegers )
{
    Int i( 124 );
    std::stringstream ss1;
    ss1 << i;
    std::string expected = "124";
    std::string actual = ss1.str();
    CHECK_EQUAL( expected, actual )
}
TEST( Int07, MxIntegers )
{
    Int i( 124 );
    std::stringstream ss1;
    toStream( ss1, i );
    std::string expected = "124";
    std::string actual = ss1.str();
    CHECK_EQUAL( expected, actual )
}
TEST( Int08, MxIntegers )
{
    Int i( 124 );
    std::stringstream ss1;
    std::string expected = "124";
    std::string actual = toString( i );
    CHECK_EQUAL( expected, actual )
}
TEST( IntRange01, MxIntegers )
{
    IntRange x( 1, 6, 0 );
    long expected = 1;
    long actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( IntRange02, MxIntegers )
{
    IntRange x( 21, 25, 100 );
    long expected = 25;
    long actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( IntRange03, MxIntegers )
{
    IntRange x( -100, -50, 100 );
    x.parse( "-90" );
    long expected = -90;
    long actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( IntRange04, MxIntegers )
{
    IntRange x( -1, -3, 100 );
    x.parse( "-2" );
    long expected = -1;
    long actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( IntRange05, MxIntegers )
{
    IntRange x( -15, 15, 10 );
    x.parse( "-%sf" );
    long expected = 10;
    long actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( IntRange06, MxIntegers )
{
    IntRange x( -15, 15, 10 );
    std::stringstream ss1;
    ss1 << x;
    std::string expected = "10";
    std::string actual = ss1.str();
    CHECK_EQUAL( expected, actual )
}
TEST( IntRange07, MxIntegers )
{
    IntRange x( -105, -15, 10 );
    std::stringstream ss1;
    toStream( ss1, x );
    std::string expected = "-15";
    std::string actual = ss1.str();
    CHECK_EQUAL( expected, actual )
}
TEST( IntRange08, MxIntegers )
{
    IntRange x( -105, -15, 10 );
    std::stringstream ss1;
    std::string expected = "-15";
    std::string actual = toString( x );
    CHECK_EQUAL( expected, actual )
}
TEST( PositiveInteger01, MxIntegers )
{
    PositiveInteger x( 10 );
    long expected = 10;
    long actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( PositiveInteger02, MxIntegers )
{
    PositiveInteger x( 0 );
    long expected = 1;
    long actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( PositiveInteger03, MxIntegers )
{
    PositiveInteger x( 0 );
    x.parse( "21" );
    long expected = 21;
    long actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( PositiveInteger04, MxIntegers )
{
    PositiveInteger x( 33 );
    x.parse( "2 2" );
    long expected = 33;
    long actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( PositiveInteger05, MxIntegers )
{
    PositiveInteger x( 10 );
    std::stringstream ss1;
    ss1 << x;
    std::string expected = "10";
    std::string actual = ss1.str();
    CHECK_EQUAL( expected, actual )
}
TEST( PositiveInteger06, MxIntegers )
{
    PositiveInteger x( 12 );
    std::stringstream ss1;
    toStream( ss1, x );
    std::string expected = "12";
    std::string actual = ss1.str();
    CHECK_EQUAL( expected, actual )
}
TEST( PositiveInteger07, MxIntegers )
{
    PositiveInteger x( 1038475030303 );
    std::stringstream ss1;
    std::string expected = "1038475030303";
    std::string actual = toString( x );
    CHECK_EQUAL( expected, actual )
}