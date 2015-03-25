#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, PedalTuning )
{
	PedalTuning object;
	stringstream expected;
	streamLine( expected, 1, R"(<pedal-tuning>)" );
	streamLine( expected, 2, R"(<pedal-step>A</pedal-step>)" );
	streamLine( expected, 2, R"(<pedal-alter>0</pedal-alter>)" );
	streamLine( expected, 1, R"(</pedal-tuning>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, PedalTuning )
{
	PedalTuning object;
    object.getPedalStep()->setValue( StepEnum::e );
    object.getPedalAlter()->setValue( Semitones( -1 ) );
	stringstream expected;
	streamLine( expected, 1, R"(<pedal-tuning>)" );
	streamLine( expected, 2, R"(<pedal-step>E</pedal-step>)" );
	streamLine( expected, 2, R"(<pedal-alter>-1</pedal-alter>)" );
	streamLine( expected, 1, R"(</pedal-tuning>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
