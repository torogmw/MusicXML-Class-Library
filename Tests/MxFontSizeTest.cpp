#include "TestHarness.h"
#include "MxFontSize.h"

using namespace lexicon;

TEST( ctor01, MxFontSize )
{
    MxFontSize object;
    MxEnumCssFontSize expected( enums::CssFontSize::medium );
    MxEnumCssFontSize actual = object.getValueCssFontSize();
    CHECK( object.isCssFontSize() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( ctor02, MxFontSize )
{
    MxEnumCssFontSize yes( enums::CssFontSize::small );
    MxFontSize object( yes );
    MxEnumCssFontSize expected( enums::CssFontSize::small );
    MxEnumCssFontSize actual = object.getValueCssFontSize();
    CHECK( object.isCssFontSize() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( ctor03, MxFontSize )
{
    
    MxFontSize object( 1.2 );
    MxNumberDecimal expected( 1.2 );
    MxNumberDecimal actual = object.getValueNumeric();
    CHECK( !object.isCssFontSize() )
    CHECK( object.isNumeric() )
    CHECK_DOUBLES_EQUAL( expected, actual, 0.00001 )
}

TEST( ctor04, MxFontSize )
{
    
    MxFontSize object( "-1.20143000" );
    MxNumberDecimal expected( -1.20143 );
    MxNumberDecimal actual = object.getValueNumeric();
    CHECK( !object.isCssFontSize() )
    CHECK( object.isNumeric() )
    CHECK_DOUBLES_EQUAL( expected, actual, 0.00000001 )
}

TEST( ctor05, MxFontSize )
{
    
    MxFontSize object( "small" );
    MxEnumCssFontSize expected( enums::CssFontSize::small );
    MxEnumCssFontSize actual = object.getValueCssFontSize();
    CHECK( object.isCssFontSize() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString01, MxFontSize )
{
    MxFontSize object;
    std::string expected = "medium";
    std::string actual = object.toString();
    CHECK( object.isCssFontSize() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString02, MxFontSize )
{
    MxEnumCssFontSize yes( enums::CssFontSize::small );
    MxFontSize object( yes );
    std::string expected = "small";
    std::string actual = object.toString();
    CHECK( object.isCssFontSize() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString03, MxFontSize )
{
    
    MxFontSize object( 1.2 );
    std::string expected = "1.2";
    std::string actual = object.toString();
    CHECK( !object.isCssFontSize() )
    CHECK( object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString04, MxFontSize )
{
    
    MxFontSize object( "-1.20143000" );
    std::string expected = "-1.20143";
    std::string actual = object.toString();
    CHECK( !object.isCssFontSize() )
    CHECK( object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString05, MxFontSize )
{
    
    MxFontSize object( "small" );
    std::string expected = "small";
    std::string actual = object.toString();
    CHECK( object.isCssFontSize() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( getXmlTypeName, MxFontSize )
{
    MxFontSize object;
    std::string expected = "font-size";
    std::string actual = object.getXmlTypeName();
    CHECK_EQUAL( expected, actual )
}

TEST( getClassName, MxFontSize )
{
    MxFontSize object;
    std::string expected = "MxFontSize";
    std::string actual = object.getClassName();
    CHECK_EQUAL( expected, actual )
}

TEST( getDocumentation, MxFontSize )
{
    MxFontSize object;
    std::string expected = "The font-size can be one of the CSS font sizes or a numeric point size.";
    std::string actual = object.getDocumentation();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString01, MxFontSize )
{
    MxFontSize object( enums::CssFontSize::small );
    CHECK( !object.fromString( "blah" ) );
    CHECK( object.isCssFontSize() );
    MxFontSize expected( enums::CssFontSize::small );
    MxFontSize actual = object;
    CHECK_EQUAL( expected, actual )
}

TEST( fromString02, MxFontSize )
{
    MxFontSize object( enums::CssFontSize::medium );
    CHECK( !object.fromString( "noo" ) );
    CHECK( object.isCssFontSize() );
    MxFontSize expected( enums::CssFontSize::medium );
    MxFontSize actual = object;
    CHECK_EQUAL( expected, actual )
}

TEST( fromString03, MxFontSize )
{
    MxFontSize object( enums::CssFontSize::small );
    CHECK( object.fromString( "medium" ) );
    CHECK( object.isCssFontSize() );
    MxFontSize expected( enums::CssFontSize::medium );
    MxFontSize actual = object;
    CHECK_EQUAL( expected, actual )
}

TEST( fromString04, MxFontSize )
{
    MxFontSize object( "small" );
    CHECK( object.isCssFontSize() );
    CHECK( object.fromString( "0.1" ) );
    CHECK( ! object.isCssFontSize() );
    CHECK( object.isNumeric() );
    MxNumberDecimal expected( 0.1L );
    MxNumberDecimal actual( object.getValueNumeric() );
    CHECK_EQUAL( expected, actual )
}

TEST( fromString05, MxFontSize )
{
    MxFontSize object( "0.333" );
    CHECK( ! object.isCssFontSize() );
    CHECK( object.isNumeric() );
    CHECK( object.fromString( "small" ) );
    CHECK( object.isCssFontSize() );
    CHECK( ! object.isNumeric() );
    MxEnumCssFontSize expected( enums::CssFontSize::small );
    MxEnumCssFontSize actual( object.getValueCssFontSize() );
    CHECK_EQUAL( expected, actual )
}


TEST( CopyCtor01, MxFontSize )
{
    MxFontSize object1( "0.938" );
    MxFontSize object2( object1 );
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
    object1.fromString( "small" );
    expected = "small";
    actual = object1.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( operatorEqual, MxFontSize )
{
    MxFontSize object1( "0.938" );
    MxFontSize object2 = object1;
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
    object1.fromString( "small" );
    expected = "small";
    actual = object1.toString();
    CHECK_EQUAL( expected, actual )
}

