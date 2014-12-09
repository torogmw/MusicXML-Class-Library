#include "TestHarness.h"
#include "MxCommaSeparatedText.h"

using namespace lexicon;

TEST( ctor01, MxCommaSeparatedText )
{
    MxCommaSeparatedText object;
    CHECK( true )
}

TEST( ctor02, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two,  three! " );
    CHECK( object.getCount() == 3 )
    std::string expected = "one";
    std::string actual = object.getValue( 0 );
    CHECK_EQUAL( expected, actual )
    expected = "two";
    actual = object.getValue( 1 );
    CHECK_EQUAL( expected, actual )
    expected = "three!";
    actual = object.getValue( 2 );
    CHECK_EQUAL( expected, actual )
}

TEST( copyCtor01, MxCommaSeparatedText )
{
    MxCommaSeparatedText original(" one,  two,  three! " );
    int expected = 3;
    int actual = original.getCount();
    MxCommaSeparatedText copy( original );
    CHECK_EQUAL( expected, actual )
    actual = copy.getCount();
    CHECK_EQUAL( expected, actual )
    original.pushBack( "four?" );
    expected = 4;
    actual = original.getCount();
    CHECK_EQUAL( expected, actual )
    expected = 3;
    actual = copy.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( operatorEq01, MxCommaSeparatedText )
{
    MxCommaSeparatedText original(" one,  two,  three! " );
    int expected = 3;
    int actual = original.getCount();
    MxCommaSeparatedText copy;
    copy = original;
    CHECK_EQUAL( expected, actual )
    actual = copy.getCount();
    CHECK_EQUAL( expected, actual )
    original.pushBack( "four?" );
    expected = 4;
    actual = original.getCount();
    CHECK_EQUAL( expected, actual )
    expected = 3;
    actual = copy.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( getXmlTypeName, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two,  three! " );
    std::string expected = "comma-separated-text";
    std::string actual = object.getXmlTypeName();
    CHECK_EQUAL( expected, actual )
}

TEST( getClassName, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two,  three! " );
    std::string expected = "MxCommaSeparatedText";
    std::string actual = object.getClassName();
    CHECK_EQUAL( expected, actual )
}

TEST( getDocumentation, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two,  three! " );
    std::string expected = "The comma-separated-text type is used to specify a comma-separated list of text elements, as is used by the font-family attribute.";
    std::string actual = object.getDocumentation();
    CHECK_EQUAL( expected, actual )
}

TEST( stream, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two,  three! " );
    std::string expected = "one,two,three!";
    std::stringstream ss;
    object.stream( ss );
    std::string actual = ss.str();
    CHECK_EQUAL( expected, actual )
}

TEST( toString, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two, x three! " );
    std::string expected = "one,two,x three!";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( setValue, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two, x three! " );
    std::string expected = "one,two,x three!";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
    object.setValue( 2, "newValue!" );
    expected = "one,two,newValue!";
    actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( clearValues, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two, x three! " );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.clearValues();
    expected = 0;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString01, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two, x three! " );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.fromString( "" );
    expected = 0;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString02, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two, x three! " );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.fromString( " " );
    expected = 1;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString03, MxCommaSeparatedText )
{
    MxCommaSeparatedText object(" one,  two, x three! " );
    int expected = 3;
    int actual = object.getCount();
    CHECK_EQUAL( expected, actual )
    object.fromString( "," );
    expected = 2;
    actual = object.getCount();
    CHECK_EQUAL( expected, actual )
}

TEST( equality01, MxCommaSeparatedText )
{
    MxCommaSeparatedText object1(" one,  two, three " );
    MxCommaSeparatedText object2("one,two,three" );
    MxCommaSeparatedText object3("three,  two, one" );
    CHECK( ( object1 == object2 ) )
    CHECK( ! ( object1 != object2 ) )
    CHECK( ! ( object1 == object3 ) )
    CHECK( ( object1 != object3 ) )
}

