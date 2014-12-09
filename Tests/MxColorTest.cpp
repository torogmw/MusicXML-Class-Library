#include "TestHarness.h"
#include "MxColor.h"

using namespace lexicon;

TEST( ctor01, MxColor)
{
    MxColor object( "#12131415" );
    CHECK( object.hasAlpha() );
}

TEST( ctor05, MxColor)
{
    MxColor object( "#131415" );
    CHECK( ! object.hasAlpha() );
}

TEST( ctor02, MxColor)
{
    MxColor object( 34, 145, 192 );
    CHECK( ! object.hasAlpha() );
}

TEST( ctor03, MxColor)
{
    MxColor object( 155, 34, 145, 192 );
    CHECK( object.hasAlpha() );
}

TEST( ctor04, MxColor)
{
    MxColor object;
    CHECK( ! object.hasAlpha() );
}

TEST( getARGB, MxColor)
{
    MxColor object( "#aB0566Fb" );
    CHECK( object.hasAlpha() );
    int expected = 0xAB;
    int actual = (int)object.getAlpha();
    CHECK_EQUAL( expected, actual )
    expected = 0x05;
    actual = (int)object.getRed();
    CHECK_EQUAL( expected, actual )
    expected = 0x66;
    actual = (int)object.getGreen();
    CHECK_EQUAL( expected, actual )
    expected = 0xFB;
    actual = (int)object.getBlue();
    CHECK_EQUAL( expected, actual )
}
TEST( setARGB, MxColor)
{
    MxColor object( "#Ab0566fB" );
    CHECK( object.hasAlpha() );
    object.setAlpha( 1 );
    object.setRed( 2 );
    object.setGreen( 3 );
    object.setBlue( 4 );
    int expected = 0x01;
    int actual = (int)object.getAlpha();
    CHECK_EQUAL( expected, actual )
    expected = 0x02;
    actual = (int)object.getRed();
    CHECK_EQUAL( expected, actual )
    expected = 0x03;
    actual = (int)object.getGreen();
    CHECK_EQUAL( expected, actual )
    expected = 0x04;
    actual = (int)object.getBlue();
    CHECK_EQUAL( expected, actual )
}
TEST( copyCtor, MxColor)
{
    MxColor objectOrig( "#AB0566FB" );
    
    objectOrig.setAlpha( 55 );
    objectOrig.setRed( 66 );
    objectOrig.setGreen( 77 );
    objectOrig.setBlue( 88 );
    
    MxColor objectCopy( objectOrig );
    
    objectOrig.setAlpha( 99 );
    objectOrig.setRed( 111 );
    objectOrig.setGreen( 122 );
    objectOrig.setBlue( 133 );
    
    int expected = 55;
    int actual = (int)objectCopy.getAlpha();
    CHECK_EQUAL( expected, actual )
    expected = 99;
    actual = objectOrig.getAlpha();
    CHECK_EQUAL( expected, actual )
    
    expected = 66;
    actual = (int)objectCopy.getRed();
    CHECK_EQUAL( expected, actual )
    expected = 111;
    actual = objectOrig.getRed();
    CHECK_EQUAL( expected, actual )
    
    expected = 77;
    actual = (int)objectCopy.getGreen();
    CHECK_EQUAL( expected, actual )
    expected = 122;
    actual = objectOrig.getGreen();
    CHECK_EQUAL( expected, actual )
    
    expected = 88;
    actual = (int)objectCopy.getBlue();
    CHECK_EQUAL( expected, actual )
    expected = 133;
    actual = objectOrig.getBlue();
    CHECK_EQUAL( expected, actual )
}

TEST( streamRGB, MxColor)
{
    unsigned char red = 0xBF;
    unsigned char green = 0x34;
    unsigned char blue = 0xC9;
    std::string expected = "#BF34C9";
    MxColor object( red, green, blue );
    CHECK( !object.hasAlpha() )
    std::stringstream sstr;
    object.stream( sstr );
    std::string actual = sstr.str();
    CHECK_EQUAL( expected, actual )
}

TEST( streamARGB, MxColor)
{
    unsigned char alpha = 0x99;
    unsigned char red = 0xBF;
    unsigned char green = 0x34;
    unsigned char blue = 0xC9;
    std::string expected = "#99BF34C9";
    MxColor object( alpha, red, green, blue );
    CHECK( object.hasAlpha() )
    std::stringstream sstr;
    object.stream( sstr );
    std::string actual = sstr.str();
    CHECK_EQUAL( expected, actual )
}

TEST( toStringRGB, MxColor)
{
    unsigned char red = 0xBF;
    unsigned char green = 0x34;
    unsigned char blue = 0xC9;
    std::string expected = "#BF34C9";
    MxColor object( red, green, blue );
    CHECK( !object.hasAlpha() )
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( toStringARGB, MxColor)
{
    unsigned char alpha = 0x99;
    unsigned char red = 0xBF;
    unsigned char green = 0x34;
    unsigned char blue = 0xC9;
    std::string expected = "#99BF34C9";
    MxColor object( alpha, red, green, blue );
    CHECK( object.hasAlpha() )
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( getXmlTypeName, MxColor)
{
    unsigned char alpha = 0x99;
    unsigned char red = 0xBF;
    unsigned char green = 0x34;
    unsigned char blue = 0xC9;
    MxColor object( alpha, red, green, blue );
    std::string expected = "color";
    std::string actual = object.getXmlTypeName();
    CHECK_EQUAL( expected, actual )
}

TEST( getClassName, MxColor)
{
    unsigned char alpha = 0x99;
    unsigned char red = 0xBF;
    unsigned char green = 0x34;
    unsigned char blue = 0xC9;
    MxColor object( alpha, red, green, blue );
    std::string expected = "MxColor";
    std::string actual = object.getClassName();
    CHECK_EQUAL( expected, actual )
}


TEST( getDocumentation, MxColor)
{
    unsigned char alpha = 0x99;
    unsigned char red = 0xBF;
    unsigned char green = 0x34;
    unsigned char blue = 0xC9;
    MxColor object( alpha, red, green, blue );
    std::string expected = "The color type indicates the color of an element. Color may be represented as hexadecimal RGB triples, as in HTML, or as hexadecimal ARGB tuples, with the A indicating alpha of transparency. An alpha value of 00 is totally transparent; FF is totally opaque. If RGB is used, the A value is assumed to be FF. For instance, the RGB value \"#800080\" represents purple. An ARGB value of \"#40800080\" would be a transparent purple. As in SVG 1.1, colors are defined in terms of the sRGB color space (IEC 61966).";
    std::string actual = object.getDocumentation();
    CHECK_EQUAL( expected, actual )
}

TEST( fromStringBad, MxColor)
{
    //unsigned char alpha = 0x81;
    //unsigned char red = 0xFA;
    //unsigned char green = 0x01;
    //unsigned char blue = 0xBA;
    MxColor object( 0, 0, 0, 0 );
    CHECK( ! object.fromString( "badstring" ) )
    std::string expected = "#00000000";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( fromStringGood, MxColor)
{
    //unsigned char alpha = 0x81;
    //unsigned char red = 0xFA;
    //unsigned char green = 0x01;
    //unsigned char blue = 0xBA;
    MxColor object( 0, 0, 0, 0 );
    CHECK( object.fromString( "#81fa01BA" ) )
    std::string expected = "#81FA01BA";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( fromStringGood02, MxColor)
{
    //unsigned char alpha = 0x81;
    //unsigned char red = 0xFA;
    //unsigned char green = 0x01;
    //unsigned char blue = 0xBA;
    MxColor object( 0, 0, 0, 0 );
    CHECK( object.fromString( "#fa01BA" ) )
    std::string expected = "#FA01BA";
    std::string actual = object.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( comparisons, MxColor)
{
    MxColor left( 0x81, 0xFA, 0x01, 0xBA );
    MxColor greater( 0x81, 0xFA, 0x01, 0xBB );
    MxColor lesser( 0x81, 0xFA, 0x00, 0xBA );
    MxColor equal( 0x81, 0xFA, 0x01, 0xBA );
    CHECK( left == equal )
    CHECK( ! ( left == greater ) )
    CHECK( left != greater )
    CHECK( ! ( left != equal ) )
    CHECK( left > lesser )
    CHECK( ! ( left > greater ) )
    CHECK( left < greater )
    CHECK( ! ( left < lesser ) )
    CHECK( left >= lesser )
    CHECK( ! ( left >= greater ) )
    CHECK( left <= greater )
    CHECK( ! ( left <= lesser ) )
    CHECK( left >= equal )
    CHECK( ! ( left >= greater ) )
    CHECK( left <= equal )
    CHECK( ! ( left <= lesser ) )
}
