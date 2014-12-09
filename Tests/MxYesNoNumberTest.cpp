#include "TestHarness.h"
#include "MxYesNoNumber.h"

using namespace lexicon;

TEST( ctor01, MxYesNoNumber )
{
    MxYesNoNumber object;
    MxEnumYesNo expected( enums::YesNo::no );
    MxEnumYesNo actual = object.getValueYesNo();
    CHECK( object.isYesNo() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( ctor02, MxYesNoNumber )
{
    MxEnumYesNo yes( enums::YesNo::yes );
    MxYesNoNumber object( yes );
    MxEnumYesNo expected( enums::YesNo::yes );
    MxEnumYesNo actual = object.getValueYesNo();
    CHECK( object.isYesNo() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( ctor03, MxYesNoNumber )
{
    
    MxYesNoNumber object( 1.2 );
    MxNumberDecimal expected( 1.2 );
    MxNumberDecimal actual = object.getValueNumeric();
    CHECK( !object.isYesNo() )
    CHECK( object.isNumeric() )
    CHECK_DOUBLES_EQUAL( expected, actual, 0.00001 )
}

TEST( ctor04, MxYesNoNumber )
{
    
    MxYesNoNumber object( "-1.20143000" );
    MxNumberDecimal expected( -1.20143 );
    MxNumberDecimal actual = object.getValueNumeric();
    CHECK( !object.isYesNo() )
    CHECK( object.isNumeric() )
    CHECK_DOUBLES_EQUAL( expected, actual, 0.00000001 )
}

TEST( ctor05, MxYesNoNumber )
{
    
    MxYesNoNumber object( "yes" );
    MxEnumYesNo expected( enums::YesNo::yes );
    MxEnumYesNo actual = object.getValueYesNo();
    CHECK( object.isYesNo() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString01, MxYesNoNumber )
{
    MxYesNoNumber object;
    std::string expected = "no";
    std::string actual = object.toString();
    CHECK( object.isYesNo() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString02, MxYesNoNumber )
{
    MxEnumYesNo yes( enums::YesNo::yes );
    MxYesNoNumber object( yes );
    std::string expected = "yes";
    std::string actual = object.toString();
    CHECK( object.isYesNo() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString03, MxYesNoNumber )
{
    
    MxYesNoNumber object( 1.2 );
    std::string expected = "1.2";
    std::string actual = object.toString();
    CHECK( !object.isYesNo() )
    CHECK( object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString04, MxYesNoNumber )
{
    
    MxYesNoNumber object( "-1.20143000" );
    std::string expected = "-1.20143";
    std::string actual = object.toString();
    CHECK( !object.isYesNo() )
    CHECK( object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( toString05, MxYesNoNumber )
{
    
    MxYesNoNumber object( "yes" );
    std::string expected = "yes";
    std::string actual = object.toString();
    CHECK( object.isYesNo() )
    CHECK( !object.isNumeric() )
    CHECK_EQUAL( expected, actual )
}

TEST( getXmlTypeName, MxYesNoNumber )
{
    MxYesNoNumber object;
    std::string expected = "yes-no-number";
    std::string actual = object.getXmlTypeName();
    CHECK_EQUAL( expected, actual )
}

TEST( getClassName, MxYesNoNumber )
{
    MxYesNoNumber object;
    std::string expected = "MxYesNoNumber";
    std::string actual = object.getClassName();
    CHECK_EQUAL( expected, actual )
}

TEST( getDocumentation, MxYesNoNumber )
{
    MxYesNoNumber object;
    std::string expected = "The yes-no-number type is used for attributes that can be either boolean or numeric values.";
    std::string actual = object.getDocumentation();
    CHECK_EQUAL( expected, actual )
}

TEST( fromString01, MxYesNoNumber )
{
    MxYesNoNumber object( enums::YesNo::yes );
    CHECK( !object.fromString( "blah" ) );
    CHECK( object.isYesNo() );
    MxYesNoNumber expected( enums::YesNo::yes );
    MxYesNoNumber actual = object;
    CHECK_EQUAL( expected, actual )
}

TEST( fromString02, MxYesNoNumber )
{
    MxYesNoNumber object( enums::YesNo::no );
    CHECK( !object.fromString( "noo" ) );
    CHECK( object.isYesNo() );
    MxYesNoNumber expected( enums::YesNo::no );
    MxYesNoNumber actual = object;
    CHECK_EQUAL( expected, actual )
}

TEST( fromString03, MxYesNoNumber )
{
    MxYesNoNumber object( enums::YesNo::yes );
    CHECK( object.fromString( "no" ) );
    CHECK( object.isYesNo() );
    MxYesNoNumber expected( enums::YesNo::no );
    MxYesNoNumber actual = object;
    CHECK_EQUAL( expected, actual )
}

TEST( fromString04, MxYesNoNumber )
{
    MxYesNoNumber object( "yes" );
    CHECK( object.isYesNo() );
    CHECK( object.fromString( "0.1" ) );
    CHECK( ! object.isYesNo() );
    CHECK( object.isNumeric() );
    MxNumberDecimal expected( 0.1L );
    MxNumberDecimal actual( object.getValueNumeric() );
    CHECK_EQUAL( expected, actual )
}

TEST( fromString05, MxYesNoNumber )
{
    MxYesNoNumber object( "0.333" );
    CHECK( ! object.isYesNo() );
    CHECK( object.isNumeric() );
    CHECK( object.fromString( "yes" ) );
    CHECK( object.isYesNo() );
    CHECK( ! object.isNumeric() );
    MxEnumYesNo expected( enums::YesNo::yes );
    MxEnumYesNo actual( object.getValueYesNo() );
    CHECK_EQUAL( expected, actual )
}


TEST( CopyCtor01, MxYesNoNumber )
{
    MxYesNoNumber object1( "0.938" );
    MxYesNoNumber object2( object1 );
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
    object1.fromString( "yes" );
    expected = "yes";
    actual = object1.toString();
    CHECK_EQUAL( expected, actual )
}

TEST( operatorEqual, MxYesNoNumber )
{
    MxYesNoNumber object1( "0.938" );
    MxYesNoNumber object2 = object1;
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
    object1.fromString( "yes" );
    expected = "yes";
    actual = object1.toString();
    CHECK_EQUAL( expected, actual )
}

