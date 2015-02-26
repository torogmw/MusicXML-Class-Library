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
    d.setValue( 0.00000384109f );
    std::string expected = "0.00000384109";
    std::string actual = toString( d );
    CHECK_EQUAL( expected, actual )
}

// class DecimalRange : public Decimal


// class PositiveDecimal: public Decimal


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
