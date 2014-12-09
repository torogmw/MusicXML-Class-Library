#include "TestHarness.h"
#include "MxNumberOrNormal.h"

using namespace lexicon;

TEST( ctor01, MxNumberOrNormal )
{
    MxNumberOrNormal object;
    std::string expected = "normal";
    std::string actual = object.toString();
    CHECK( object.isNormal() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}



TEST( ctor03, MxNumberOrNormal )
{
    MxNumberOrNormal object( 1.2 );
    MxNumberDecimal expected( 1.2 );
    MxNumberDecimal actual = object.getValue();
    CHECK( !object.isNormal() )
    CHECK( object.isNumeric() )
    CHECK_DOUBLES_EQUAL( expected, actual, 0.00001 )
}

TEST( ctor04, MxNumberOrNormal )
{
    
    MxNumberOrNormal object( "-1.20143000" );
    MxNumberDecimal expected( -1.20143 );
    MxNumberDecimal actual = object.getValue();
    CHECK( !object.isNormal() )
    CHECK( object.isNumeric() )
    CHECK_DOUBLES_EQUAL( expected, actual, 0.00000001 )
}

TEST( ctor05, MxNumberOrNormal )
{
    
    MxNumberOrNormal object( "normal" );
    std::string expected = "normal";
    std::string actual = object.toString();
    CHECK( object.isNormal() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString01, MxNumberOrNormal )
{
    MxNumberOrNormal object;
    std::string expected = "normal";
    std::string actual = object.toString();
    CHECK( object.isNormal() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString02, MxNumberOrNormal )
{
    std::string normal = "normal";
    MxNumberOrNormal object( normal );
    std::string expected = "normal";
    std::string actual = object.toString();
    CHECK( object.isNormal() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString03, MxNumberOrNormal )
{
    
    MxNumberOrNormal object( 1.2 );
    std::string expected = "1.2";
    std::string actual = object.toString();
    CHECK( !object.isNormal() )
    CHECK( object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString04, MxNumberOrNormal )
{
    
    MxNumberOrNormal object( "-1.20143000" );
    std::string expected = "-1.20143";
    std::string actual = object.toString();
    CHECK( !object.isNormal() )
    CHECK( object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString05, MxNumberOrNormal )
{
    
    MxNumberOrNormal object( "normal" );
    std::string expected = "normal";
    std::string actual = object.toString();
    CHECK( object.isNormal() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( getXmlTypeName, MxNumberOrNormal )
{
    MxNumberOrNormal object;
    std::string expected = "number-or-normal";
    std::string actual = object.getXmlTypeName();
    CHECK_EQUAL( expected, actual )
}

TEST( getClassName, MxNumberOrNormal )
{
    MxNumberOrNormal object;
    std::string expected = "MxNumberOrNormal";
    std::string actual = object.getClassName();
    CHECK_EQUAL( expected, actual )
}

TEST( getDocumentation, MxNumberOrNormal )
{
    MxNumberOrNormal object;
    std::string expected = "The number-or-normal values can be either a decimal number or the string 'normal'. This is used by the line-height and letter-spacing attributes.";
    std::string actual = object.getDocumentation();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString01, MxNumberOrNormal )
{
    MxNumberOrNormal object( "normal" );
    CHECK( !object.fromString( "blah" ) );
    CHECK( object.isNormal() );
    MxNumberOrNormal expected( "normal" );
    MxNumberOrNormal actual = object;
    CHECK_EQUAL( expected, actual )
}

TEST( fromString02, MxNumberOrNormal )
{
    MxNumberOrNormal object( "normal" );
    CHECK( !object.fromString( "noo" ) );
    CHECK( object.isNormal() );
    MxNumberOrNormal expected( "normal" );
    MxNumberOrNormal actual = object;
    CHECK_EQUAL( expected, actual )
}

TEST( fromString03, MxNumberOrNormal )
{
    MxNumberOrNormal object( "normal" );
    CHECK( object.fromString( "normal" ) );
    CHECK( object.isNormal() );
    MxNumberOrNormal expected( "normal" );
    MxNumberOrNormal actual = object;
    CHECK_EQUAL( expected, actual )
}

TEST( fromString04, MxNumberOrNormal )
{
    MxNumberOrNormal object( "normal" );
    CHECK( object.isNormal() );
    CHECK( object.fromString( "0.1" ) );
    CHECK( ! object.isNormal() );
    CHECK( object.isNumeric() );
    MxNumberDecimal expected( 0.1L );
    MxNumberDecimal actual( object.getValue() );
    CHECK_EQUAL( expected, actual )
}

TEST( fromString05, MxNumberOrNormal )
{
    MxNumberOrNormal object( "0.333" );
    CHECK( ! object.isNormal() );
    CHECK( object.isNumeric() );
    CHECK( object.fromString( "normal" ) );
    CHECK( object.isNormal() );
    CHECK( ! object.isNumeric() );
    std::string expected = "normal";
    std::string actual( object.toString() );
    CHECK_EQUAL( expected, actual )
}


TEST( CopyCtor01, MxNumberOrNormal )
{
    MxNumberOrNormal object1( "0.938" );
    MxNumberOrNormal object2( object1 );
    std::string expected = "0.938";
    std::string actual = object2.toString();
    CHECK_EQUAL( expected, actual )
    object2.fromString( "88.88" );
    expected = "88.88";
    actual = object2.toString();
    CHECK_EQUAL( expected, actual )
    expected = "0.938";
    actual = object1.toString();
    CHECK_EQUAL( expected, actual )
    object1.fromString( "normal" );
    expected = "normal";
    actual = object1.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( operatorEqual, MxNumberOrNormal )
{
    MxNumberOrNormal object1( "0.938" );
    MxNumberOrNormal object2 = object1;
    std::string expected = "0.938";
    std::string actual = object2.toString();
    CHECK_EQUAL( expected, actual )
    object2.fromString( "88.88" );
    expected = "88.88";
    actual = object2.toString();
    CHECK_EQUAL( expected, actual )
    expected = "0.938";
    actual = object1.toString();
    CHECK_EQUAL( expected, actual )
    object1.fromString( "normal" );
    expected = "normal";
    actual = object1.toString();
    CHECK_EQUAL( expected, actual )
}

