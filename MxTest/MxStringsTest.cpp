#include "TestHarness.h"
#include "MxStrings.h"
#include <sstream>

using namespace mx::types;

TEST( XsString01, MxStrings )
{
    XsString x;
    StringType expected = "";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsString02, MxStrings )
{
    XsString x( "Test" );
    StringType expected = "Test";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsString03, MxStrings )
{
    XsString x( "Test" );
    x.setValue( "Different" );
    StringType expected = "Different";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsString04, MxStrings )
{
    XsString x( "Test" );
    x.setValue( "Think" );
    std::stringstream ss;
    toStream( ss, x );
    StringType expected = "Think";
    StringType actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( XsString05, MxStrings )
{
    XsString x( "Test" );
    x.setValue( "Hello" );
    std::stringstream ss;
    ss << x;
    StringType expected = "Hello";
    StringType actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( XsString06, MxStrings )
{
    XsString x( "Test" );
    x.setValue( "Hello" );
    std::stringstream ss;
    ss << x;
    StringType expected = "Hello";
    StringType actual = toString( x );
    CHECK_EQUAL( expected, actual )
}
TEST( XsToken01, MxStrings )
{
    XsToken x;
    StringType expected = "";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsToken02, MxStrings )
{
    XsToken x( "Test" );
    StringType expected = "Test";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsToken03, MxStrings )
{
    XsToken x( "\n\t  Test \r \t \n String  \t" );
    StringType expected = "Test String";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsNMToken01, MxStrings )
{
    XsNMToken x;
    StringType expected = "";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsNMToken02, MxStrings )
{
    XsNMToken x( "Test" );
    StringType expected = "Test";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsNMToken03, MxStrings )
{
    XsNMToken x( "\n\t  Test \r \t \n String  \t" );
    StringType expected = "Test String";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST( XsID01, MxStrings )
{
    XsID x( "$%#1" );
    StringType expected = "___1";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsID02, MxStrings )
{
    XsID x( "" );
    StringType expected = "ID";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsID03, MxStrings )
{
    XsID x( "123" );
    StringType expected = "ID123";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsID04, MxStrings )
{
    XsID x( "ABC045" );
    StringType expected = "ABC045";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST( XsID05, MxStrings )
{
    XsID x( "X 21" );
    StringType expected = "X_21";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST(  XsIDREF01, MxStrings )
{
     XsIDREF x( "$%#1" );
    StringType expected = "___1";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST(  XsIDREF02, MxStrings )
{
     XsIDREF x( "" );
    StringType expected = "ID";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST(  XsIDREF03, MxStrings )
{
     XsIDREF x( "123" );
    StringType expected = "ID123";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST(  XsIDREF04, MxStrings )
{
     XsIDREF x( "ABC045" );
    StringType expected = "ABC045";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST(  XsIDREF05, MxStrings )
{
     XsIDREF x( "X 21" );
    StringType expected = "X_21";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST( XmlLang01, MxStrings )
{
    XmlLang x;
    StringType expected = "";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XmlLang02, MxStrings )
{
    XmlLang x( "Test" );
    StringType expected = "Test";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XmlLang03, MxStrings )
{
    XmlLang x( "Test" );
    x.setValue( "Different" );
    StringType expected = "Different";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XmlLang04, MxStrings )
{
    XmlLang x( "Test" );
    x.setValue( "Think" );
    std::stringstream ss;
    toStream( ss, x );
    StringType expected = "Think";
    StringType actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( XmlLang05, MxStrings )
{
    XmlLang x( "Test" );
    x.setValue( "Hello" );
    std::stringstream ss;
    ss << x;
    StringType expected = "Hello";
    StringType actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( XmlLang06, MxStrings )
{
    XmlLang x( "Test" );
    x.setValue( "Hello" );
    std::stringstream ss;
    ss << x;
    StringType expected = "Hello";
    StringType actual = toString( x );
    CHECK_EQUAL( expected, actual )
}



TEST( XsAnyUri01, MxStrings )
{
    XsAnyUri x;
    StringType expected = "";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsAnyUri02, MxStrings )
{
    XsAnyUri x( "Test" );
    StringType expected = "Test";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsAnyUri03, MxStrings )
{
    XsAnyUri x( "Test" );
    x.setValue( "Different" );
    StringType expected = "Different";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XsAnyUri04, MxStrings )
{
    XsAnyUri x( "Test" );
    x.setValue( "Think" );
    std::stringstream ss;
    toStream( ss, x );
    StringType expected = "Think";
    StringType actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( XsAnyUri05, MxStrings )
{
    XsAnyUri x( "Test" );
    x.setValue( "Hello" );
    std::stringstream ss;
    ss << x;
    StringType expected = "Hello";
    StringType actual = ss.str();
    CHECK_EQUAL( expected, actual )
}
TEST( XsAnyUri06, MxStrings )
{
    XsAnyUri x( "Test" );
    x.setValue( "Hello" );
    std::stringstream ss;
    ss << x;
    StringType expected = "Hello";
    StringType actual = toString( x );
    CHECK_EQUAL( expected, actual )
}

TEST( XlinkRole01, MxStrings )
{
    XlinkRole x;
    StringType expected = "";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XlinkRole02, MxStrings )
{
    XlinkRole x( "Test" );
    StringType expected = "Test";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XlinkRole03, MxStrings )
{
    XlinkRole x( "\n\t  Test \r \t \n String  \t" );
    StringType expected = "Test String";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST( XlinkTitle01, MxStrings )
{
    XlinkTitle x;
    StringType expected = "";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XlinkTitle02, MxStrings )
{
    XlinkTitle x( "Test" );
    StringType expected = "Test";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( XlinkTitle03, MxStrings )
{
    XlinkTitle x( "\n\t  Test \r \t \n String  \t" );
    StringType expected = "Test String";
    StringType actual = x.getValue();
    CHECK_EQUAL( expected, actual )
}

TEST( CommaSeparatedText01, MxStrings )
{
    CommaSeparatedText x( " Hello , \nWorld$#&" );
    StringType expected = "Hello,World$#&";
    StringType actual = toString( x );
    CHECK_EQUAL( expected, actual )
}
TEST( CommaSeparatedText02, MxStrings )
{
    CommaSeparatedText x;
    x.parse( " One, two, Three,     \nFOUR" );
    auto it = x.getValues().cbegin();
    
    StringType expected = "One";
    StringType actual = toString( *it );
    CHECK_EQUAL( expected, actual )
    
    ++it;
    expected = "two";
    actual = toString( *it );
    CHECK_EQUAL( expected, actual )
    
    ++it;
    expected = "Three";
    actual = toString( *it );
    CHECK_EQUAL( expected, actual )
    
    ++it;
    expected = "FOUR";
    actual = toString( *it );
    CHECK_EQUAL( expected, actual )
    
    expected = "One,two,Three,FOUR";
    actual = toString( x );
    CHECK_EQUAL( expected, actual )
}

TEST( CommaSeparatedText03, MxStrings )
{
    CommaSeparatedText x;
    x.parse( " One, two, Three,     \nFOUR" );
    CHECK( x.getValuesBegin() != x.getValuesEnd() );
    CHECK( x.getValuesBeginConst() != x.getValuesEndConst() );
    
    StringType expected = "One";
    StringType actual = toString((*x.getValuesBegin()));
    CHECK_EQUAL( expected, actual )
    
    expected = "two";
    actual = toString((*(++x.getValuesBeginConst())));
    CHECK_EQUAL( expected, actual )
    
    auto it = ++(x.getValuesBegin());
    *it = XsToken( " Bones  &  Bish " );
    expected = "Bones & Bish";
    actual = toString((*(++x.getValuesBeginConst())));
    CHECK_EQUAL( expected, actual )
    
}

TEST( EndingNumber01, MxStrings )
{
    EndingNumber x;
    CHECK( x.getValuesBegin() == x.getValuesEnd() )
    CHECK_EQUAL( "", toString( x ) )
}
TEST( EndingNumber02, MxStrings )
{
    EndingNumber x( "-2,-1,,,,XYZ, 0,  @#$@*&#^1,2,3,3,3,3,3" );
    CHECK( x.getValuesBegin() != x.getValuesEnd() )
    CHECK( x.getValuesBeginConst() != x.getValuesEndConst() )
    StringType expected = "1,2,3";
    StringType actual = toString( x );
    CHECK_EQUAL( expected, actual );
    CHECK_EQUAL( 1, *(x.getValues().begin()) )
    CHECK_EQUAL( 2, *( ++( x.getValuesBegin() ) ) )
    CHECK_EQUAL( 2, *( ++( x.getValuesBeginConst() ) ) )
    CHECK_EQUAL( 3, *( --( x.getValuesEnd() ) ) )
    CHECK_EQUAL( 3, *( --( x.getValuesEndConst() ) ) )
    std::stringstream ss;
    ss << x;
    expected = "1,2,3";
    actual = ss.str();
    CHECK_EQUAL( expected, actual );
    ss.str( "" );
    toStream( ss, x );
    expected = "1,2,3";
    actual = ss.str();
    CHECK_EQUAL( expected, actual );
}
TEST( TimeOnly01, MxStrings )
{
    TimeOnly x;
    CHECK( x.getValuesBegin() == x.getValuesEnd() )
    CHECK_EQUAL( "", toString( x ) )
}
TEST( TimeOnly02, MxStrings )
{
    TimeOnly x( "-2,-1,,,,XYZ, 0,  @#$@*&#^1,2,3,3,3,3,3" );
    CHECK( x.getValuesBegin() != x.getValuesEnd() )
    CHECK( x.getValuesBeginConst() != x.getValuesEndConst() )
    StringType expected = "1,2,3";
    StringType actual = toString( x );
    CHECK_EQUAL( expected, actual );
    CHECK_EQUAL( 1, *(x.getValues().begin()) )
    CHECK_EQUAL( 2, *( ++( x.getValuesBegin() ) ) )
    CHECK_EQUAL( 2, *( ++( x.getValuesBeginConst() ) ) )
    CHECK_EQUAL( 3, *( --( x.getValuesEnd() ) ) )
    CHECK_EQUAL( 3, *( --( x.getValuesEndConst() ) ) )
    std::stringstream ss;
    ss << x;
    expected = "1,2,3";
    actual = ss.str();
    CHECK_EQUAL( expected, actual );
    ss.str( "" );
    toStream( ss, x );
    expected = "1,2,3";
    actual = ss.str();
    CHECK_EQUAL( expected, actual );
}