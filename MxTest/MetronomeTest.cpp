#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "MetronomeTestHelper.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, Metronome )
{
	Metronome object;
	stringstream expected;
	streamLine( expected, 1, R"(<metronome>)" );
	streamLine( expected, 2, R"(<beat-unit>eighth</beat-unit>)" );
	streamLine( expected, 2, R"(<per-minute></per-minute>)" );
	streamLine( expected, 2, R"(</metronome>)" );
	streamLine( expected, 1, R"()", false );
	stringstream actual;
	object.toStream( std::cout, 1 );
	// object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, Metronome )
{
	MetronomePtr object = tgenMetronome( variant::one );
	stringstream expected;
	streamLine( expected, 1, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 1, R"()", false );
	stringstream actual;
	object->toStream( std::cout, 1 );
	// object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
