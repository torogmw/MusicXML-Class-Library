#include "TestHarness.h"
#include "MxDecimals.h"

using namespace mx::types;

DecimalType kThreshold = 0.00000000000001;

// using DecimalType = double;
TEST( DecimalType, MxDecimals )
{
    DecimalType d = 0;
    CHECK_DOUBLES_EQUAL( 0, d, kThreshold )
}

// class Decimal
TEST( Decimal01, MxDecimals )
{
    Decimal d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Decimal02, MxDecimals )
{
    Decimal d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Decimal02b, MxDecimals )
{
    Decimal d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Decimal03, MxDecimals )
{
    Decimal d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Decimal04, MxDecimals )
{
    Decimal d( 1.234 );
    d.setValue( 0.00000384109 );
    std::string expected = "0.00000384109";
    std::string actual = toString( d, 11 );
    CHECK_EQUAL( expected, actual )

    std::stringstream ss;
    toStream( ss, d, 11 );
    actual = ss.str();
    CHECK_EQUAL( expected, actual )
    
    ss.str( "" );
    ss << d;
    actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( Decimal05, MxDecimals )
{
    Decimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-435.249" );
    DecimalType expected = -435.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Decimal06, MxDecimals )
{
    Decimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// class DecimalRange : public Decimal
TEST( DecimalRange01, MxDecimals )
{
    DecimalRange d( -1, 1, 0 );
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( DecimalRange02, MxDecimals )
{
    DecimalRange d( -1, 1, 1.234 );
    DecimalType expected = 1;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( DecimalRange02b, MxDecimals )
{
    DecimalRange d( -1, 123456789013, 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( DecimalRange03, MxDecimals )
{
    DecimalRange d( -100, 100, 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( DecimalRange04, MxDecimals )
{
    DecimalRange d( -1, 1, 1.234 );
    d.setValue( 0.00000384109 );
    std::string expected = "0.00000384109";
    std::string actual = toString( d, 11 );
    CHECK_EQUAL( expected, actual )
    
    std::stringstream ss;
    toStream( ss, d, 11 );
    actual = ss.str();
    CHECK_EQUAL( expected, actual )
    
    ss.str( "" );
    ss << d;
    actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( DecimalRange05, MxDecimals )
{
    DecimalRange d( -1, 1, 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-0.3164978546312" );
    DecimalType expected = -0.3164978546312;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( DecimalRange06, MxDecimals )
{
    DecimalRange d( -1, 1, 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// class PositiveDecimal: public Decimal
TEST( PositiveDecimal01, MxDecimals )
{
    PositiveDecimal d;
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDecimal02, MxDecimals )
{
    PositiveDecimal d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDecimal02b, MxDecimals )
{
    PositiveDecimal d( -123456789012.123456789012 );
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDecimal03, MxDecimals )
{
    PositiveDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDecimal04, MxDecimals )
{
    PositiveDecimal d( 1.234 );
    d.setValue( 0.00000384109 );
    std::string expected = "0.00000384109";
    std::string actual = toString( d, 11 );
    CHECK_EQUAL( expected, actual )
    
    std::stringstream ss;
    toStream( ss, d, 11 );
    actual = ss.str();
    CHECK_EQUAL( expected, actual )
    
    ss.str( "" );
    ss << d;
    actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( PositiveDecimal05, MxDecimals )
{
    PositiveDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-0.3164978546312" );
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDecimal06, MxDecimals )
{
    PositiveDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// class NonNegativeDecimal: public Decimal

// using Divisions = Decimal;

// using Millimeters = Decimal;

/* MIN = 0, MAX = 100, DEFAULT = 0 */
// class Percent : DecimalRange


// using PositiveDivisions = PositiveDecimal;

/* MIN = -180, MAX = 180, DEFAULT = 0 */
// class RotationalDegrees : DecimalRange


// using Semitones = Decimal;

// using Tenths = Decimal;

/* MIN = 2, MAX = N/A, DEFAULT = 2 */
// class TrillBeats: public Decimal
