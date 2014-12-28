#include "TestHarness.h"
#include "MxSeqSmpNode4143.h"
#include "streamLinesTestHelper.h"

using namespace lexicon;

TEST( Test0000_DefaultCtor, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	CHECK( true )
}
TEST( Test0001_getXmlTypeName, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	std::string expected;
	std::string actual;
	expected = "node-4143";
	actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0002_getClassName, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	std::string expected;
	std::string actual;
	expected = "MxSeqSmpNode4143";
	actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0003_getDocumentation, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	std::string expected;
	std::string actual;
	expected = "No XSD Documentation.";
	actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* LineWidth Functions ------------------------------------------------------ */

TEST( Test0004_getLineWidthCount, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	std::size_t expected;
	std::size_t actual;
	expected = 0;
	actual = object.getLineWidthCount();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0005_getLineWidthBegin, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	MxEsLineWidthsIter expected;
	MxEsLineWidthsIter actual;
	CHECK( object.getLineWidthBegin() == object.getLineWidthEnd() )
    object.addLineWidth( std::make_shared<MxEsLineWidth>( MxNumberTenths( 1.1 ) ) );
    CHECK( object.getLineWidthBegin() != object.getLineWidthEnd() )
}
TEST( Test0006_getLineWidthBeginConst, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	MxEsLineWidthsIter expected;
	MxEsLineWidthsIter actual;
	CHECK( object.getLineWidthBeginConst() == object.getLineWidthEndConst() )
    object.addLineWidth( std::make_shared<MxEsLineWidth>( MxNumberTenths( 1.1 ) ) );
    CHECK( object.getLineWidthBeginConst() != object.getLineWidthEndConst() )
}
TEST( Test0007_addLineWidth, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
    object.addLineWidth( std::make_shared<MxEsLineWidth>( MxNumberTenths( 1.2 ) ) );
    object.addLineWidth( std::make_shared<MxEsLineWidth>( MxNumberTenths( -3 ) ) );
    object.addLineWidth( std::make_shared<MxEsLineWidth>( MxNumberTenths( 0 ) ));
	std::string expected = "<line-width type=\"beam\">-3</line-width>";
    auto it = object.getLineWidthBegin();
    ++it;
	std::string actual( (*it)->toString() );
	CHECK_EQUAL( expected, actual )
    CHECK( object.removeLineWidth( it ) );
    it = object.getLineWidthBegin();
    ++it;
    expected = "<line-width type=\"beam\">0</line-width>";
	actual = (*it)->toString();
	CHECK_EQUAL( expected, actual )
    it = object.getLineWidthEnd();
    CHECK( ! object.removeLineWidth( it ) );
}
TEST( Test0009_getLineWidthMinOccurs, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getLineWidthMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0010_getLineWidthMaxOccurs, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	int expected;
	int actual;
	expected = 32767;
	actual = object.getLineWidthMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0011_getIsLineWidthUnbounded, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsLineWidthUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: LineWidth Functions ------------------------------------------------- */

/* NoteSize Functions ------------------------------------------------------- */

TEST( Test0012_getNoteSizeCount, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	std::size_t expected;
	std::size_t actual;
	expected = 0;
	actual = object.getNoteSizeCount();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0013_getNoteSizeBegin, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	MxEsNoteSizesIter expected;
	MxEsNoteSizesIter actual;
	CHECK( object.getNoteSizeBegin() == object.getNoteSizeEnd() )
    object.addNoteSize( std::make_shared<MxEsNoteSize>( MxNumberNonNegativeDecimal( 0.01 ) ) );
    CHECK( object.getNoteSizeBegin() != object.getNoteSizeEnd() )
}
TEST( Test0014_getNoteSizeBeginConst, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	MxEsNoteSizesIter expected;
	MxEsNoteSizesIter actual;
	CHECK( object.getNoteSizeBeginConst() == object.getNoteSizeEndConst() )
    object.addNoteSize( std::make_shared<MxEsNoteSize>( MxNumberNonNegativeDecimal( 0.01 ) ) );
    CHECK( object.getNoteSizeBeginConst() != object.getNoteSizeEndConst() )
}
TEST( Test0015_addNoteSize, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
    std::string expected;
	std::string actual;
    object.addNoteSize( std::make_shared<MxEsNoteSize>( MxNumberNonNegativeDecimal( 0.01 ) ) );
    object.addNoteSize( std::make_shared<MxEsNoteSize>( MxNumberNonNegativeDecimal( 0.02 ) ) );
    object.addNoteSize( std::make_shared<MxEsNoteSize>( MxNumberNonNegativeDecimal( 0.03 ) ) );
    auto it = object.getNoteSizeBegin();
    ++it;
	expected = "<note-size type=\"cue\">0.02</note-size>";
    actual = (*it)->toString();
	CHECK_EQUAL( expected, actual )
    CHECK( object.removeNoteSize( it ) );
    it = object.getNoteSizeBegin();
    ++it;
    expected = "<note-size type=\"cue\">0.03</note-size>";
	actual = (*it)->toString();
	CHECK_EQUAL( expected, actual )
    it = object.getNoteSizeEnd();
    CHECK( ! object.removeNoteSize( it ) );
}
TEST( Test0017_getNoteSizeMinOccurs, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	int expected;
	int actual;
    expected = 0;
    actual = object.getNoteSizeMinOccurs();
    CHECK_EQUAL( expected, actual )
}
TEST( Test0018_getNoteSizeMaxOccurs, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	int expected;
	int actual;
	expected = 32767;
	actual = object.getNoteSizeMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0019_getIsNoteSizeUnbounded, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsNoteSizeUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: NoteSize Functions -------------------------------------------------- */

/* Distance Functions ------------------------------------------------------- */

TEST( Test0020_getDistanceCount, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	std::size_t expected;
	std::size_t actual;
	expected = 0;
	actual = object.getDistanceCount();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0021_getDistanceBegin, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	MxEsDistancesIter expected;
	MxEsDistancesIter actual;
	CHECK( object.getDistanceBegin() == object.getDistanceEnd() )
    object.addDistance( std::make_shared<MxEsDistance>( MxNumberTenths( 0.1 ) ) );
    CHECK( object.getDistanceBegin() != object.getDistanceEnd() )
}
TEST( Test0022_getDistanceBeginConst, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	MxEsDistancesIter expected;
	MxEsDistancesIter actual;
	CHECK( object.getDistanceBeginConst() == object.getDistanceEndConst() )
    object.addDistance( std::make_shared<MxEsDistance>( MxNumberTenths( 0.1 ) ) );
    CHECK( object.getDistanceBeginConst() != object.getDistanceEndConst() )
}
TEST( Test0023_addDistance, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
    object.addDistance( std::make_shared<MxEsDistance>( MxNumberTenths( 0.1 ) ) );
    object.addDistance( std::make_shared<MxEsDistance>( MxNumberTenths( 0.2 ) ) );
    object.addDistance( std::make_shared<MxEsDistance>( MxNumberTenths( 0.3 ) ) );
    auto it = object.getDistanceBegin();
    ++it;
    std::string expected = "<distance type=\"beam\">0.2</distance>";
	std::string actual( (*it)->toString() );
	CHECK_EQUAL( expected, actual )
    CHECK( object.removeDistance( it ) );
    it = object.getDistanceBegin();
    ++it;
    expected = "<distance type=\"beam\">0.3</distance>";
	actual = (*it)->toString();
	CHECK_EQUAL( expected, actual )
    it = object.getDistanceEnd();
    CHECK( ! object.removeDistance( it ) );
}
TEST( Test0025_getDistanceMinOccurs, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getDistanceMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0026_getDistanceMaxOccurs, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	int expected;
	int actual;
	expected = 32767;
	actual = object.getDistanceMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0027_getIsDistanceUnbounded, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsDistanceUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: Distance Functions -------------------------------------------------- */

/* OtherAppearance Functions ------------------------------------------------ */

TEST( Test0028_getOtherAppearanceCount, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	std::size_t expected;
	std::size_t actual;
	expected = 0;
	actual = object.getOtherAppearanceCount();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0029_getOtherAppearanceBegin, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	MxEsOtherAppearancesIter expected;
	MxEsOtherAppearancesIter actual;
	CHECK( object.getOtherAppearanceBegin() == object.getOtherAppearanceEnd() )
    object.addOtherAppearance( std::make_shared<MxEsOtherAppearance>( XsString( "Hello" ) ) );
    CHECK( object.getOtherAppearanceBegin() != object.getOtherAppearanceEnd() )
}
TEST( Test0030_getOtherAppearanceBeginConst, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	MxEsOtherAppearancesIterConst expected;
	MxEsOtherAppearancesIterConst actual;
	CHECK( object.getOtherAppearanceBeginConst() == object.getOtherAppearanceEndConst() )
    object.addOtherAppearance( std::make_shared<MxEsOtherAppearance>( XsString( "Hello" ) ) );
    CHECK( object.getOtherAppearanceBeginConst() != object.getOtherAppearanceEndConst() )
}
TEST( Test0031_addOtherAppearance, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
    object.addOtherAppearance( std::make_shared<MxEsOtherAppearance>( XsString( "one" ) ) );
    object.addOtherAppearance( std::make_shared<MxEsOtherAppearance>( XsString( "two" ) ) );
    object.addOtherAppearance( std::make_shared<MxEsOtherAppearance>( XsString( "three" ) ) );
    auto it = object.getOtherAppearanceBegin();
    ++it;
    std::string expected = "<other-appearance type=\"\">two</other-appearance>";
	std::string actual( (*it)->toString() );
	CHECK_EQUAL( expected, actual )
    CHECK( object.removeOtherAppearance( it ) );
    it = object.getOtherAppearanceBegin();
    ++it;
    expected = "<other-appearance type=\"\">three</other-appearance>";
	actual = (*it)->toString();
	CHECK_EQUAL( expected, actual )
    it = object.getOtherAppearanceEnd();
    CHECK( ! object.removeOtherAppearance( it ) );
}
TEST( Test0033_getOtherAppearanceMinOccurs, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	int expected;
	int actual;
	expected = 0;
	actual = object.getOtherAppearanceMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0034_getOtherAppearanceMaxOccurs, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	int expected;
	int actual;
	expected = 32767;
	actual = object.getOtherAppearanceMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( Test0035_getIsOtherAppearanceUnbounded, MxSeqSmpNode4143 )
{
	MxSeqSmpNode4143 object;
	bool expected;
	bool actual;
	expected = true;
	actual = object.getIsOtherAppearanceUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: OtherAppearance Functions ------------------------------------------- */


TEST( toString, MxSeqSmpNode4143 )
{
    MxSeqSmpNode4143 object;
    std::string expected;
    std::string actual;
    
    HMxEsLineWidth temp1( std::make_shared<MxEsLineWidth>( MxNumberTenths( 0.01 ) ) );
    temp1->setType( enums::LineWidthType::enclosure );
    object.addLineWidth( temp1 );
    HMxEsLineWidth temp2( std::make_shared<MxEsLineWidth>( MxNumberTenths( 0.02 ) ) );
    temp1->setType( enums::LineWidthType::beam );
    object.addLineWidth( temp2 );
    
    HMxEsDistance temp3( std::make_shared<MxEsDistance>( MxNumberTenths( 0.11 ) ) );
    temp3->setType( enums::DistanceType::hyphen );
    object.addDistance( temp3 );
    
    HMxEsNoteSize temp4( std::make_shared<MxEsNoteSize>( MxNumberNonNegativeDecimal( 0.33 ) ) );
    temp4->setType( enums::NoteSizeType::large );
    object.addNoteSize( temp4 );
    
    HMxEsOtherAppearance temp5( std::make_shared<MxEsOtherAppearance>( XsString( "one" ) ) );
    temp5->setType( XsToken( "bones" ) );
    object.addOtherAppearance( temp5 );
    
    HMxEsOtherAppearance temp6( std::make_shared<MxEsOtherAppearance>( XsString( "one" ) ) );
    temp6->setType( XsToken( "bishop" ) );
    object.addOtherAppearance( temp6 );
    
    
    std::vector<std::string> expectedStrings;
    expectedStrings.push_back( "<line-width type=\"beam\">0.01</line-width>" );
    expectedStrings.push_back( "<line-width type=\"beam\">0.02</line-width>" );
    expectedStrings.push_back( "<note-size type=\"large\">0.33</note-size>" );
    expectedStrings.push_back( "<distance type=\"hyphen\">0.11</distance>" );
    expectedStrings.push_back( "<other-appearance type=\"bones\">one</other-appearance>" );
    expectedStrings.push_back( "<other-appearance type=\"bishop\">one</other-appearance>" );
    
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