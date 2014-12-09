#include "TestHarness.h"
#include "MxTimeOnly.h"

using namespace lexicon;

TEST( ctor01, MxTimeOnly )
{
    MxTimeOnly object;
    CHECK( true )
}

TEST( ctor02, MxTimeOnly )
{
    MxTimeOnly object("1, 2, 3" );
    CHECK( object.getCount() == 3 )
    int expected = 1;
    int actual = object.getValue( 0 );
    CHECK_EQUAL( expected, actual )
    expected = 2;
    actual = object.getValue( 1 );
    CHECK_EQUAL( expected, actual )
    expected = 3;
    actual = object.getValue( 2 );
    CHECK_EQUAL( expected, actual )
}

TEST( copyCtor01, MxTimeOnly )
{
    MxTimeOnly original("1, 2, 3" );
    int expected = 3;
    int actual = original.getCount();
    MxTimeOnly copy( original );
    CHECK_EQUAL( expected, actual )
    actual = copy.getCount();
    CHECK_EQUAL( expected, actual )
    original.addValue( 4 );
    expected = 4;
    actual = original.getCount();
    CHECK_EQUAL( expected, actual )
    expected = 3;
    actual = copy.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( operatorEq01, MxTimeOnly )
{
    MxTimeOnly original("1, 2,3" );
    int expected = 3;
    int actual = original.getCount();
    MxTimeOnly copy;
    copy = original;
    CHECK_EQUAL( expected, actual )
    actual = copy.getCount();
    CHECK_EQUAL( expected, actual )
    original.addValue( 4 );
    expected = 4;
    actual = original.getCount();
    CHECK_EQUAL( expected, actual )
    expected = 3;
    actual = copy.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( getXmlTypeName, MxTimeOnly )
{
    MxTimeOnly object("1, 2, 3" );
    std::string expected = "time-only";
    std::string actual = object.getXmlTypeName();
    CHECK_EQUAL( expected, actual )
}

TEST( getClassName, MxTimeOnly )
{
    MxTimeOnly object("1, 2, 3" );
    std::string expected = "MxTimeOnly";
    std::string actual = object.getClassName();
    CHECK_EQUAL( expected, actual )
}

TEST( getDocumentation, MxTimeOnly )
{
    MxTimeOnly object("1, 2, 3" );
    std::string expected = "The time-only type is used to indicate that a particular playback-related element only applies particular times through a repeated section. The value is a comma-separated list of positive integers arranged in ascending order, indicating which times through the repeated section that the element applies.";
    std::string actual = object.getDocumentation();
    CHECK_EQUAL( expected, actual )
}

TEST( stream, MxTimeOnly )
{
    MxTimeOnly object("1, 2, 3" );
    std::string expected = "1,2,3";
    std::stringstream ss;
    object.stream( ss );
    std::string actual = ss.str();
    CHECK_EQUAL( expected, actual )
}

TEST( toString, MxTimeOnly )
{
    MxTimeOnly object("5,66,99" );
    std::string expected = "5,66,99";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
}


TEST( clearValues, MxTimeOnly )
{
    MxTimeOnly object( "1,2,3" );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.clearValues();
    expected = 0;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString01, MxTimeOnly )
{
    MxTimeOnly object( "1,2,3" );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.fromString( "" );
    expected = 3;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString02, MxTimeOnly )
{
    MxTimeOnly object( "1,2,3" );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.fromString( " " );
    expected = 3;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString03, MxTimeOnly )
{
    MxTimeOnly object( "1,2,3" );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.fromString( "," );
    expected = 3;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( setValues, MxTimeOnly )
{
    MxTimeOnly object( "9,10,8,6,5" );
    std::set<int> ints;
    ints.insert( 11 );
    ints.insert( 22 );
    ints.insert( 33 );
    ints.insert( 44 );
    ints.insert( 55 );
    std::set<int>::iterator intsIterator = ints.begin();
    object.setValues( ints );
    for ( int i = 0; i < 5; ++i )
    {
        int expected = *intsIterator;
        int actual = object.getValue( i );
        CHECK_EQUAL( expected, actual )
        ++intsIterator;
    }
    int expected = 5;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( getValues, MxTimeOnly )
{
    MxTimeOnly object( "11,22,33,44,55" );
    std::set<int> ints;
    ints.insert( 11 );
    ints.insert( 22 );
    ints.insert( 33 );
    ints.insert( 44 );
    ints.insert( 55 );
    std::set<int>::iterator intsIterator = ints.begin();
    std::set<int> actualValues = object.getValues();
    std::set<int>::iterator actualValuesIterator = actualValues.begin();
    for ( int i = 0; i < 5; ++i )
    {
        int expected = *intsIterator;
        int actual = *actualValuesIterator;
        CHECK_EQUAL( expected, actual )
        ++intsIterator;
        ++actualValuesIterator;
    }
    int expected = 5;
    int actual = (int)actualValues.size();
    CHECK_EQUAL( expected, actual )
}

