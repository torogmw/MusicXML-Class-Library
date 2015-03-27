#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, Frame )
{
	Frame object;
	stringstream expected;
	streamLine( expected, 1, R"(<frame>)" );
	streamLine( expected, 2, R"(<frame-strings>1</frame-strings>)" );
	streamLine( expected, 2, R"(<frame-frets>1</frame-frets>)" );
	streamLine( expected, 2, R"(<frame-note>)" );
	streamLine( expected, 3, R"(<string>1</string>)" );
	streamLine( expected, 3, R"(<fret>1</fret>)" );
	streamLine( expected, 2, R"(</frame-note>)" );
    streamLine( expected, 1, R"(</frame>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, Frame )
{
	Frame object;
    object.getAttributes()->hasHeight = true;
    object.getAttributes()->height = TenthsValue{ 2.3 };
    object.setHasFirstFret( true );
    auto f = makeFrameNote();
    f->setHasBarre( true );
    f->setHasFingering( true );
    f->getFingering()->setValue( XsString( "Bish" ) );
    f->getString()->setValue( StringNumber( 8 ) );
    f->getFret()->setValue( NonNegativeInteger( 3 ) );
    object.addFrameNote( f );
    (*object.getFrameNoteSet().cbegin())->getString()->setValue( StringNumber( 2 ) );
	stringstream expected;
	streamLine( expected, 1, R"(<frame height="2.3">)" );
	streamLine( expected, 2, R"(<frame-strings>1</frame-strings>)" );
	streamLine( expected, 2, R"(<frame-frets>1</frame-frets>)" );
	streamLine( expected, 2, R"(<first-fret>1</first-fret>)" );
	streamLine( expected, 2, R"(<frame-note>)" );
    streamLine( expected, 3, R"(<string>2</string>)" );
    streamLine( expected, 3, R"(<fret>1</fret>)" );
    streamLine( expected, 2, R"(</frame-note>)" );
    streamLine( expected, 2, R"(<frame-note>)" );
    streamLine( expected, 3, R"(<string>8</string>)" );
    streamLine( expected, 3, R"(<fret>3</fret>)" );
    streamLine( expected, 3, R"(<fingering>Bish</fingering>)" );
    streamLine( expected, 3, R"(<barre type="start"/>)" );
    streamLine( expected, 2, R"(</frame-note>)" );
    streamLine( expected, 1, R"(</frame>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object.hasAttributes() )
	CHECK( object.hasContents() )
}
#endif