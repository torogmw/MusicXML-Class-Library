#include "TestHarness.h"
#include "MxEndingNumber.h"

using namespace lexicon;

/* first the tests specific to Spaces */

TEST( spaces01, MxEndingNumber )
{
    MxEndingNumber object;
    CHECK( object.isSpaces() )
    int expected = 0;
    int actual = object.spaceCount();
    CHECK_EQUAL( expected, actual )
}

TEST( spaces02, MxEndingNumber )
{
    MxEndingNumber object( " " );
    CHECK( object.isSpaces() )
    int expected = 1;
    int actual = object.spaceCount();
    CHECK_EQUAL( expected, actual )
}

TEST( spaces03, MxEndingNumber )
{
    MxEndingNumber object( "1" );
    CHECK( ! object.isSpaces() )
    int expected = 0;
    int actual = object.spaceCount();
    CHECK_EQUAL( expected, actual )
}

TEST( spaces04, MxEndingNumber )
{
    MxEndingNumber object( "   " );
    CHECK( object.isSpaces() )
    std::string expected = "   ";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( spaces05, MxEndingNumber )
{
    MxEndingNumber object( "1, 2, 301" );
    CHECK( ! object.isSpaces() )
    std::string expected = "1,2,301";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
    object.isSpaces( true );
    CHECK( object.isSpaces() )
    expected = "";
    actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( spaces06, MxEndingNumber )
{
    MxEndingNumber object( "1, 2, 301" );
    CHECK( ! object.isSpaces() )
    std::string expected = "1,2,301";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
    object.setSpaceCount( 10 );
    CHECK( object.isSpaces() )
    expected = "          ";
    actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( ctor01, MxEndingNumber )
{
    MxEndingNumber object;
    CHECK( true )
}

TEST( ctor02, MxEndingNumber )
{
    MxEndingNumber object("1, 2, 3" );
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

TEST( copyCtor01, MxEndingNumber )
{
    MxEndingNumber original("1, 2, 3" );
    int expected = 3;
    int actual = original.getCount();
    MxEndingNumber copy( original );
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

TEST( operatorEq01, MxEndingNumber )
{
    MxEndingNumber original("1, 2,3" );
    int expected = 3;
    int actual = original.getCount();
    MxEndingNumber copy;
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

TEST( getXmlTypeName, MxEndingNumber )
{
    MxEndingNumber object("1, 2, 3" );
    std::string expected = "ending-number";
    std::string actual = object.getXmlTypeName();
    CHECK_EQUAL( expected, actual )
}

TEST( getClassName, MxEndingNumber )
{
    MxEndingNumber object("1, 2, 3" );
    std::string expected = "MxEndingNumber";
    std::string actual = object.getClassName();
    CHECK_EQUAL( expected, actual )
}

TEST( getDocumentation, MxEndingNumber )
{
    MxEndingNumber object("1, 2, 3" );
    std::string expected = "The ending-number type is used to specify either a comma-separated list of positive integers without leading zeros, or a string of zero or more spaces. It is used for the number attribute of the ending element. The zero or more spaces version is used when software knows that an ending is present, but cannot determine the type of the ending.";
    std::string actual = object.getDocumentation();
    CHECK_EQUAL( expected, actual )
}

TEST( stream, MxEndingNumber )
{
    MxEndingNumber object("1, 2, 3" );
    std::string expected = "1,2,3";
    std::stringstream ss;
    object.stream( ss );
    std::string actual = ss.str();
    CHECK_EQUAL( expected, actual )
}

TEST( toString, MxEndingNumber )
{
    MxEndingNumber object("5,66,99" );
    std::string expected = "5,66,99";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
}


TEST( clearValues, MxEndingNumber )
{
    MxEndingNumber object( "1,2,3" );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.clearValues();
    expected = 0;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString01, MxEndingNumber )
{
    MxEndingNumber object( "1,2,3" );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.fromString( "" );
    expected = 0;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString02, MxEndingNumber )
{
    MxEndingNumber object( "1,2,3" );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.fromString( " " );
    expected = 0;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString03, MxEndingNumber )
{
    MxEndingNumber object( "1,2,3" );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.fromString( "," );
    expected = 3;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( setValues, MxEndingNumber )
{
    MxEndingNumber object( "9,10,8,6,5" );
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

TEST( getValues, MxEndingNumber )
{
    MxEndingNumber object( "11,22,33,44,55" );
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

