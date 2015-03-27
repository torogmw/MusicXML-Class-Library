#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, BeatRepeat )
{
	BeatRepeat object;
	stringstream expected;
	streamLine( expected, 1, R"(<beat-repeat type="start">)" );
	streamLine( expected, 2, R"(<slash-type>eighth</slash-type>)" );
	streamLine( expected, 1, R"(</beat-repeat>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, BeatRepeat )
{
	BeatRepeat object;
    object.getAttributes()->type = StartStop::stop;
    object.getAttributes()->hasUseDots = true;
    object.getAttributes()->useDots = YesNo::yes;
    object.getAttributes()->hasSlashes = true;
    object.addSlashDot( makeSlashDot() );
	object.addSlashDot( makeSlashDot() );
	stringstream expected;
	streamLine( expected, 1, R"(<beat-repeat type="stop" slashes="1" use-dots="yes">)" );
	streamLine( expected, 2, R"(<slash-type>eighth</slash-type>)" );
	streamLine( expected, 2, R"(<slash-dot/>)" );
	streamLine( expected, 2, R"(<slash-dot/>)" );
	streamLine( expected, 1, R"(</beat-repeat>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object.hasAttributes() )
	CHECK( object.hasContents() )
}
#endif