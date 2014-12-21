
#include "TestHarness.h"
#include "MxSeqSmpNode4104.h"
#include "streamLinesTestHelper.h"

using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::string expected;
	std::string actual;
	expected = "node-4104";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode4104";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* MiscellaneousField Functions --------------------------------------------- */

TEST( Test0004_getMiscellaneousFieldCount, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	std::size_t expected;
	std::size_t actual;
	expected = 0;
	actual = object.getMiscellaneousFieldCount();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getMiscellaneousFieldBegin, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	MxEsMiscellaneousFieldsIter expected;
	MxEsMiscellaneousFieldsIter actual;
	CHECK( object.getMiscellaneousFieldBegin() == object.getMiscellaneousFieldEnd() )
    object.addMiscellaneousField( std::make_shared<MxEsMiscellaneousField>( XsString( "Hello" ) ) );
    CHECK( object.getMiscellaneousFieldBegin() != object.getMiscellaneousFieldEnd() )
}
TEST( Test0006_getMiscellaneousFieldBeginConst, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	MxEsMiscellaneousFieldsIterConst expected;
	MxEsMiscellaneousFieldsIterConst actual;
	CHECK( object.getMiscellaneousFieldBeginConst() == object.getMiscellaneousFieldEndConst() )
    object.addMiscellaneousField( std::make_shared<MxEsMiscellaneousField>( XsString( "Hello" ) ) );
    CHECK( object.getMiscellaneousFieldBeginConst() != object.getMiscellaneousFieldEndConst() )
}
TEST( Test0007_addMiscellaneousField, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
    object.addMiscellaneousField( std::make_shared<MxEsMiscellaneousField>( XsString( "Hello" ) ) );
    object.addMiscellaneousField( std::make_shared<MxEsMiscellaneousField>( XsString( "World" ) ) );
    object.addMiscellaneousField( std::make_shared<MxEsMiscellaneousField>( XsString( "!" ) ) );
	std::string expected = "<feature>World</feature>";
    auto it = object.getMiscellaneousFieldBegin();
    ++it;
	std::string actual( (*it)->toString() );
	CHECK_EQUAL( expected, actual )
    CHECK( object.removeMiscellaneousField( it ) );
    expected = "<feature>!</feature>";
    it = object.getMiscellaneousFieldBegin();
    ++it;
	actual = (*it)->toString();
	CHECK_EQUAL( expected, actual )
    it = object.getMiscellaneousFieldEnd();
    CHECK( ! object.removeMiscellaneousField( it ) );
}
TEST( Test0009_getMiscellaneousFieldMinOccurs, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	int expected = 0;
	int actual = object.getMiscellaneousFieldMinOccurs();
    CHECK_EQUAL( expected, actual )
}
TEST( Test0010_getMiscellaneousFieldMaxOccurs, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	int expected;
	int actual;
	expected = 32767;
	actual = object.getMiscellaneousFieldMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_getIsMiscellaneousFieldUnbounded, MxSeqSmpNode4104 )
{
	MxSeqSmpNode4104 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsMiscellaneousFieldUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: MiscellaneousField Functions ---------------------------------------- */

TEST( toString, MxSeqSmpNode4104 )
{
    MxSeqSmpNode4104 object;
    std::string expected;
    std::string actual;
    
    object.addMiscellaneousField( std::make_shared<MxEsMiscellaneousField>( XsString( "Hello" ) ) );
    object.addMiscellaneousField( std::make_shared<MxEsMiscellaneousField>( XsString( "World" ) ) );
    object.addMiscellaneousField( std::make_shared<MxEsMiscellaneousField>( XsString( "!" ) ) );
    
    std::vector<std::string> expectedStrings;
    expectedStrings.push_back( "<feature>Hello</feature>" );
    expectedStrings.push_back( "<feature>World</feature>" );
    expectedStrings.push_back( "<feature>!</feature>" );
    
    std::stringstream acss;
    object.stream( acss, 2 );
    std::stringstream exss;
    std::string whitespace = "\t\t";
    streamLinesTestHelper( whitespace, expectedStrings, exss );
    expected = exss.str();
	actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    exss.str( "" );
    object.stream( acss, 1, "\t" );
    whitespace = "\t";
    streamLinesTestHelper( whitespace, expectedStrings, exss );
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    exss.str( "" );
    object.stream( acss, 3, ".-" );
    whitespace = ".-.-.-";
    streamLinesTestHelper( whitespace, expectedStrings, exss );
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    exss.str( "" );
    object.stream( acss );
    exss.str( "" );
    whitespace = "";
    streamLinesTestHelper( whitespace, expectedStrings, exss );
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    acss.str( "" );
    exss.str( "" );
    acss << object;
    exss.str( "" );
    whitespace = "";
    streamLinesTestHelper( whitespace, expectedStrings, exss );
    expected = exss.str();
    actual = acss.str();
	CHECK_EQUAL( expected, actual )
    
    exss.str( "" );
    whitespace = "";
    streamLinesTestHelper( whitespace, expectedStrings, exss );
    expected = exss.str();
    actual = object.toString();
	CHECK_EQUAL( expected, actual )
}
