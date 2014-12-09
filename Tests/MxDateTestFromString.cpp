#include "TestHarness.h"
#include "MxDate.h"

using namespace lexicon;

TEST( fromString01_failSmallYear, MxDate )
{
    MxDate d;
    CHECK_EQUAL( d.getYear(), 1900 );
    CHECK_EQUAL( d.getMonth(), 1 );
    CHECK_EQUAL( d.getDay(), 1 );
    CHECK( ! d.fromString( "200-12-25" ) );
    CHECK_EQUAL( d.getYear(), 1900 );
    CHECK_EQUAL( d.getMonth(), 1 );
    CHECK_EQUAL( d.getDay(), 1 );
}

TEST( fromString01_okSmallYear, MxDate )
{
    MxDate d( 2001, 2, 27 );
    CHECK_EQUAL( d.getYear(), 2001 );
    CHECK_EQUAL( d.getMonth(), 2 );
    CHECK_EQUAL( d.getDay(), 27 );
    CHECK( d.fromString( "0010-12-05" ) );
    CHECK_EQUAL( d.getYear(), 10 );
    CHECK_EQUAL( d.getMonth(), 12 );
    CHECK_EQUAL( d.getDay(), 05 );
}

TEST( fromString01_failNormalDate, MxDate )
{
    MxDate d( 2005, 3, 15 );
    CHECK_EQUAL( d.getYear(), 2005 );
    CHECK_EQUAL( d.getMonth(), 3 );
    CHECK_EQUAL( d.getDay(), 15 );
    CHECK( ! d.fromString( "1996-15-05" ) );
    CHECK_EQUAL( d.getYear(), 2005 );
    CHECK_EQUAL( d.getMonth(), 3 );
    CHECK_EQUAL( d.getDay(), 15 );
}

TEST( fromString01_okNormalDate, MxDate )
{
    MxDate d( 2013, 12, 1 );
    CHECK_EQUAL( d.getYear(), 2013 );
    CHECK_EQUAL( d.getMonth(), 12 );
    CHECK_EQUAL( d.getDay(), 1 );
    CHECK( d.fromString( "2016-02-05" ) );
    CHECK_EQUAL( d.getYear(), 2016 );
    CHECK_EQUAL( d.getMonth(), 02 );
    CHECK_EQUAL( d.getDay(), 05 );
}