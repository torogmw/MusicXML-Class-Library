#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, FrameNote )
{
	FrameNote object;
	stringstream expected;
	streamLine( expected, 1, R"(<frame-note>)" );
	streamLine( expected, 2, R"(<string>1</string>)" );
	streamLine( expected, 2, R"(<fret>1</fret>)" );
	streamLine( expected, 1, R"(</frame-note>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, FrameNote )
{
	FrameNote object;
    object.setHasBarre( true );
    object.setHasFingering( true );
    object.getFingering()->setValue( XsString( "t" ) );
    object.getFingering()->getAttributes()->hasAlternate = true;
    object.getFingering()->getAttributes()->alternate = YesNo::yes;
    object.getString()->setValue( StringNumber( 5 ) );
    object.getFret()->setValue( NonNegativeInteger( 2 ) );
	stringstream expected;
	streamLine( expected, 1, R"(<frame-note>)" );
	streamLine( expected, 2, R"(<string>5</string>)" );
	streamLine( expected, 2, R"(<fret>2</fret>)" );
	streamLine( expected, 2, R"(<fingering alternate="yes">t</fingering>)" );
	streamLine( expected, 2, R"(<barre type="start"/>)" );
	streamLine( expected, 1, R"(</frame-note>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
#endif