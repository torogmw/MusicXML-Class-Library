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
TEST( NonNegativeDecimal01, MxDecimals )
{
    NonNegativeDecimal d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( NonNegativeDecimal02, MxDecimals )
{
    NonNegativeDecimal d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( NonNegativeDecimal02b, MxDecimals )
{
    NonNegativeDecimal d( -123456789012.123456789012 );
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( NonNegativeDecimal03, MxDecimals )
{
    NonNegativeDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( NonNegativeDecimal04, MxDecimals )
{
    NonNegativeDecimal d( 1.234 );
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
TEST( NonNegativeDecimal05, MxDecimals )
{
    NonNegativeDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-0.3164978546312" );
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( NonNegativeDecimal06, MxDecimals )
{
    NonNegativeDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// using Divisions = Decimal;
TEST( Divisions01, MxDecimals )
{
    Divisions d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Divisions02, MxDecimals )
{
    Divisions d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Divisions02b, MxDecimals )
{
    Divisions d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Divisions03, MxDecimals )
{
    Divisions d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Divisions04, MxDecimals )
{
    Divisions d( 1.234 );
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
TEST( Divisions05, MxDecimals )
{
    Divisions d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-435.249" );
    DecimalType expected = -435.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Divisions06, MxDecimals )
{
    Divisions d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// using Millimeters = Decimal;
TEST( Millimeters01, MxDecimals )
{
    Millimeters d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Millimeters02, MxDecimals )
{
    Millimeters d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Millimeters02b, MxDecimals )
{
    Millimeters d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Millimeters03, MxDecimals )
{
    Millimeters d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Millimeters04, MxDecimals )
{
    Millimeters d( 1.234 );
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
TEST( Millimeters05, MxDecimals )
{
    Millimeters d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-435.249" );
    DecimalType expected = -435.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Millimeters06, MxDecimals )
{
    Millimeters d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

/* MIN = 0, MAX = 100, DEFAULT = 0 */
// class Percent : DecimalRange
TEST( Percent01, MxDecimals )
{
    Percent d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent02, MxDecimals )
{
    Percent d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent02b, MxDecimals )
{
    Percent d( 123456789012.123456789012 );
    DecimalType expected = 100;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent03, MxDecimals )
{
    Percent d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent04, MxDecimals )
{
    Percent d( 1.234 );
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
TEST( Percent05, MxDecimals )
{
    Percent d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "4.249" );
    DecimalType expected = 4.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent05b, MxDecimals )
{
    Percent d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-4.249" );
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent06, MxDecimals )
{
    Percent d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// using PositiveDivisions = PositiveDecimal;
TEST( PositiveDivisions01, MxDecimals )
{
    PositiveDivisions d;
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDivisions02, MxDecimals )
{
    PositiveDivisions d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDivisions02b, MxDecimals )
{
    PositiveDivisions d( -123456789012.123456789012 );
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDivisions03, MxDecimals )
{
    PositiveDivisions d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDivisions04, MxDecimals )
{
    PositiveDivisions d( 1.234 );
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
TEST( PositiveDivisions05, MxDecimals )
{
    PositiveDivisions d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-0.3164978546312" );
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDivisions06, MxDecimals )
{
    PositiveDivisions d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

/* MIN = -180, MAX = 180, DEFAULT = 0 */
// class RotationalDegrees : DecimalRange
TEST( RotationalDegrees01, MxDecimals )
{
    RotationalDegrees d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees02, MxDecimals )
{
    RotationalDegrees d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees02b, MxDecimals )
{
    RotationalDegrees d( 123456789012.123456789012 );
    DecimalType expected = 180;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees03, MxDecimals )
{
    RotationalDegrees d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees04, MxDecimals )
{
    RotationalDegrees d( 1.234 );
    d.setValue( -999 );
    std::string expected = "-180"; // this sucks
    // todo fix the floating stream bullshit
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
TEST( RotationalDegrees05, MxDecimals )
{
    RotationalDegrees d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "4.249" );
    DecimalType expected = 4.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees05b, MxDecimals )
{
    RotationalDegrees d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-466.249" );
    DecimalType expected = -180;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees06, MxDecimals )
{
    RotationalDegrees d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// using Semitones = Decimal;
TEST( Semitones01, MxDecimals )
{
    Semitones d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Semitones02, MxDecimals )
{
    Semitones d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Semitones02b, MxDecimals )
{
    Semitones d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Semitones03, MxDecimals )
{
    Semitones d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Semitones04, MxDecimals )
{
    Semitones d( 1.234 );
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
TEST( Semitones05, MxDecimals )
{
    Semitones d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-435.249" );
    DecimalType expected = -435.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Semitones06, MxDecimals )
{
    Semitones d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// using Tenths = Decimal;
TEST( Tenths01, MxDecimals )
{
    Tenths d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Tenths02, MxDecimals )
{
    Tenths d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Tenths02b, MxDecimals )
{
    Tenths d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Tenths03, MxDecimals )
{
    Tenths d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Tenths04, MxDecimals )
{
    Tenths d( 1.234 );
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
TEST( Tenths05, MxDecimals )
{
    Tenths d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-435.249" );
    DecimalType expected = -435.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Tenths06, MxDecimals )
{
    Tenths d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

/* MIN = 2, MAX = N/A, DEFAULT = 2 */
// class TrillBeats: public Decimal
