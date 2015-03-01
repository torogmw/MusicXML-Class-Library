#include "TestHarness.h"
#include "Decimals.h"

using namespace mx::types;

DecimalType kThreshold = 0.00000000000001;

// using DecimalType = double;
TEST( DecimalType, Decimals )
{
    DecimalType d = 0;
    CHECK_DOUBLES_EQUAL( 0, d, kThreshold )
}

// class Decimal
TEST( Decimal01, Decimals )
{
    Decimal d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Decimal02, Decimals )
{
    Decimal d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Decimal02b, Decimals )
{
    Decimal d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Decimal03, Decimals )
{
    Decimal d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Decimal04, Decimals )
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
TEST( Decimal05, Decimals )
{
    Decimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-435.249" );
    DecimalType expected = -435.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Decimal06, Decimals )
{
    Decimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// class DecimalRange : public Decimal
TEST( DecimalRange01, Decimals )
{
    DecimalRange d( -1, 1, 0 );
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( DecimalRange02, Decimals )
{
    DecimalRange d( -1, 1, 1.234 );
    DecimalType expected = 1;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( DecimalRange02b, Decimals )
{
    DecimalRange d( -1, 123456789013, 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( DecimalRange03, Decimals )
{
    DecimalRange d( -100, 100, 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( DecimalRange04, Decimals )
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
TEST( DecimalRange05, Decimals )
{
    DecimalRange d( -1, 1, 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-0.3164978546312" );
    DecimalType expected = -0.3164978546312;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( DecimalRange06, Decimals )
{
    DecimalRange d( -1, 1, 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// class PositiveDecimal: public Decimal
TEST( PositiveDecimal01, Decimals )
{
    PositiveDecimal d;
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDecimal02, Decimals )
{
    PositiveDecimal d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDecimal02b, Decimals )
{
    PositiveDecimal d( -123456789012.123456789012 );
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDecimal03, Decimals )
{
    PositiveDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDecimal04, Decimals )
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
TEST( PositiveDecimal05, Decimals )
{
    PositiveDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-0.3164978546312" );
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDecimal06, Decimals )
{
    PositiveDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// class NonNegativeDecimal: public Decimal
TEST( NonNegativeDecimal01, Decimals )
{
    NonNegativeDecimal d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( NonNegativeDecimal02, Decimals )
{
    NonNegativeDecimal d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( NonNegativeDecimal02b, Decimals )
{
    NonNegativeDecimal d( -123456789012.123456789012 );
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( NonNegativeDecimal03, Decimals )
{
    NonNegativeDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( NonNegativeDecimal04, Decimals )
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
TEST( NonNegativeDecimal05, Decimals )
{
    NonNegativeDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-0.3164978546312" );
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( NonNegativeDecimal06, Decimals )
{
    NonNegativeDecimal d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// using Divisions = Decimal;
TEST( Divisions01, Decimals )
{
    Divisions d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Divisions02, Decimals )
{
    Divisions d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Divisions02b, Decimals )
{
    Divisions d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Divisions03, Decimals )
{
    Divisions d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Divisions04, Decimals )
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
TEST( Divisions05, Decimals )
{
    Divisions d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-435.249" );
    DecimalType expected = -435.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Divisions06, Decimals )
{
    Divisions d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// using Millimeters = Decimal;
TEST( Millimeters01, Decimals )
{
    Millimeters d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Millimeters02, Decimals )
{
    Millimeters d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Millimeters02b, Decimals )
{
    Millimeters d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Millimeters03, Decimals )
{
    Millimeters d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Millimeters04, Decimals )
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
TEST( Millimeters05, Decimals )
{
    Millimeters d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-435.249" );
    DecimalType expected = -435.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Millimeters06, Decimals )
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
TEST( Percent01, Decimals )
{
    Percent d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent02, Decimals )
{
    Percent d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent02b, Decimals )
{
    Percent d( 123456789012.123456789012 );
    DecimalType expected = 100;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent03, Decimals )
{
    Percent d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent04, Decimals )
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
TEST( Percent05, Decimals )
{
    Percent d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "4.249" );
    DecimalType expected = 4.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent05b, Decimals )
{
    Percent d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-4.249" );
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Percent06, Decimals )
{
    Percent d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// using PositiveDivisions = PositiveDecimal;
TEST( PositiveDivisions01, Decimals )
{
    PositiveDivisions d;
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDivisions02, Decimals )
{
    PositiveDivisions d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDivisions02b, Decimals )
{
    PositiveDivisions d( -123456789012.123456789012 );
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDivisions03, Decimals )
{
    PositiveDivisions d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDivisions04, Decimals )
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
TEST( PositiveDivisions05, Decimals )
{
    PositiveDivisions d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-0.3164978546312" );
    DecimalType expected = kNonZeroAmount;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( PositiveDivisions06, Decimals )
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
TEST( RotationalDegrees01, Decimals )
{
    RotationalDegrees d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees02, Decimals )
{
    RotationalDegrees d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees02b, Decimals )
{
    RotationalDegrees d( 123456789012.123456789012 );
    DecimalType expected = 180;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees03, Decimals )
{
    RotationalDegrees d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees04, Decimals )
{
    RotationalDegrees d( 1.234 );
    d.setValue( -999 );
    std::string expected = "-180"; // this sucks
    // todo fix the floating stream b.s.
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
TEST( RotationalDegrees05, Decimals )
{
    RotationalDegrees d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "4.249" );
    DecimalType expected = 4.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees05b, Decimals )
{
    RotationalDegrees d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-466.249" );
    DecimalType expected = -180;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( RotationalDegrees06, Decimals )
{
    RotationalDegrees d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// using Semitones = Decimal;
TEST( Semitones01, Decimals )
{
    Semitones d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Semitones02, Decimals )
{
    Semitones d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Semitones02b, Decimals )
{
    Semitones d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Semitones03, Decimals )
{
    Semitones d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Semitones04, Decimals )
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
TEST( Semitones05, Decimals )
{
    Semitones d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-435.249" );
    DecimalType expected = -435.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Semitones06, Decimals )
{
    Semitones d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}

// using Tenths = Decimal;
TEST( Tenths01, Decimals )
{
    Tenths d;
    DecimalType expected = 0;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Tenths02, Decimals )
{
    Tenths d( 1.234 );
    DecimalType expected = 1.234;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Tenths02b, Decimals )
{
    Tenths d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Tenths03, Decimals )
{
    Tenths d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 0.00000384;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Tenths04, Decimals )
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
TEST( Tenths05, Decimals )
{
    Tenths d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-435.249" );
    DecimalType expected = -435.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( Tenths06, Decimals )
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
TEST( TrillBeats01, Decimals )
{
    TrillBeats d;
    DecimalType expected = 2;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( TrillBeats02, Decimals )
{
    TrillBeats d( 1.234 );
    DecimalType expected = 2;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( TrillBeats02b, Decimals )
{
    TrillBeats d( 123456789012.123456789012 );
    DecimalType expected = 123456789012.123456789012;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( TrillBeats03, Decimals )
{
    TrillBeats d( 1.234 );
    d.setValue( 0.00000384 );
    DecimalType expected = 2;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( TrillBeats04, Decimals )
{
    TrillBeats d( 1.234 );
    d.setValue( -999 );
    std::string expected = "2"; // this sucks
    // todo fix the floating stream b.s.
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
TEST( TrillBeats05, Decimals )
{
    TrillBeats d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "4.249" );
    DecimalType expected = 4.249;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( TrillBeats05b, Decimals )
{
    TrillBeats d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "-466.249" );
    DecimalType expected = 2;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
TEST( TrillBeats06, Decimals )
{
    TrillBeats d( 1.234 );
    d.setValue( 0.00000384 );
    d.parse( "- 435.249" );
    DecimalType expected = 2;
    DecimalType actual = d.getValue();
    CHECK_DOUBLES_EQUAL( expected, actual, kThreshold )
}
