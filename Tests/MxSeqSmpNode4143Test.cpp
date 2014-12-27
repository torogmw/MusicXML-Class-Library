#include "TestHarness.h"
#include "MxSeqSmpNode4143.h"
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
//TEST( Test0021_getDistanceBegin, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	MxEsDistancesIter expected;
//	MxEsDistancesIter actual;
//}
//TEST( Test0022_getDistanceBeginConst, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	MxEsDistancesIterConst expected;
//	MxEsDistancesIterConst actual;
//}
//TEST( Test0023_addDistance, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	std::size_t expected;
//	std::size_t actual;
//}
//TEST( Test0024_removeDistance, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	std::size_t expected;
//	std::size_t actual;
//	expected = 0;
//	// actual = object.removeDistance();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0025_getDistanceMinOccurs, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	int expected;
//	int actual;
//}
//TEST( Test0026_getDistanceMaxOccurs, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	int expected;
//	int actual;
//	expected = 32767;
//	actual = object.getDistanceMaxOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0027_getIsDistanceUnbounded, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	bool expected;
//	bool actual;
//	expected = true;
//	actual = object.getIsDistanceUnbounded();
//	CHECK_EQUAL( expected, actual )
//}
//
///* End: Distance Functions -------------------------------------------------- */
//
///* OtherAppearance Functions ------------------------------------------------ */
//
//TEST( Test0028_getOtherAppearanceCount, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	std::size_t expected;
//	std::size_t actual;
//	expected = 0;
//	actual = object.getOtherAppearanceCount();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0029_getOtherAppearanceBegin, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	MxEsOtherAppearancesIter expected;
//	MxEsOtherAppearancesIter actual;
//}
//TEST( Test0030_getOtherAppearanceBeginConst, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	MxEsOtherAppearancesIterConst expected;
//	MxEsOtherAppearancesIterConst actual;
//}
//TEST( Test0031_addOtherAppearance, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	std::size_t expected;
//	std::size_t actual;
//}
//TEST( Test0032_removeOtherAppearance, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	std::size_t expected;
//	std::size_t actual;
//	expected = 0;
//	// actual = object.removeOtherAppearance();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0033_getOtherAppearanceMinOccurs, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	int expected;
//	int actual;
//}
//TEST( Test0034_getOtherAppearanceMaxOccurs, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	int expected;
//	int actual;
//	expected = 32767;
//	actual = object.getOtherAppearanceMaxOccurs();
//	CHECK_EQUAL( expected, actual )
//}
//TEST( Test0035_getIsOtherAppearanceUnbounded, MxSeqSmpNode4143 )
//{
//	MxSeqSmpNode4143 object;
//	bool expected;
//	bool actual;
//	expected = true;
//	actual = object.getIsOtherAppearanceUnbounded();
//	CHECK_EQUAL( expected, actual )
//}
//
///* End: OtherAppearance Functions ------------------------------------------- */
//

//TEST( toString, MxSeqSmpNode4143 )
//{
//    CHECK( false )
//}