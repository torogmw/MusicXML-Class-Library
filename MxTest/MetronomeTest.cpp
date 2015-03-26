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
	streamLine( expected, 1, R"(</metronome>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, Metronome )
{
	MetronomePtr object = tgenMetronome( variant::one );
	stringstream expected;
	streamLine( expected, 1, R"(<metronome font-family="Bone,and,Bish" color="#7BC909">)" );
	streamLine( expected, 2, R"(<beat-unit>16th</beat-unit>)" );
	streamLine( expected, 2, R"(<per-minute font-size="xx-large">104</per-minute>)" );
	streamLine( expected, 1, R"(</metronome>)", false );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Metronome )
{
	MetronomePtr object = tgenMetronome( variant::two );
	stringstream expected;
	streamLine( expected, 1, R"(<metronome halign="center" justify="center" parentheses="yes">)" );
	streamLine( expected, 2, R"(<metronome-note>)" );
	streamLine( expected, 3, R"(<metronome-type>64th</metronome-type>)" );
	streamLine( expected, 3, R"(<metronome-dot/>)" );
	streamLine( expected, 3, R"(<metronome-beam>begin</metronome-beam>)" );
	streamLine( expected, 3, R"(<metronome-tuplet type="start">)" );
	streamLine( expected, 4, R"(<actual-notes>33</actual-notes>)" );
	streamLine( expected, 4, R"(<normal-notes>24</normal-notes>)" );
	streamLine( expected, 3, R"(</metronome-tuplet>)" );
	streamLine( expected, 2, R"(</metronome-note>)" );
	streamLine( expected, 2, R"(<metronome-note>)" );
	streamLine( expected, 3, R"(<metronome-type>32nd</metronome-type>)" );
	streamLine( expected, 3, R"(<metronome-dot/>)" );
	streamLine( expected, 3, R"(<metronome-dot/>)" );
	streamLine( expected, 3, R"(<metronome-beam>begin</metronome-beam>)" );
	streamLine( expected, 3, R"(<metronome-beam>begin</metronome-beam>)" );
	streamLine( expected, 2, R"(</metronome-note>)" );
	streamLine( expected, 2, R"(<metronome-relation>equals</metronome-relation>)" );
	streamLine( expected, 2, R"(<metronome-note>)" );
	streamLine( expected, 3, R"(<metronome-type>64th</metronome-type>)" );
	streamLine( expected, 3, R"(<metronome-tuplet type="start">)" );
	streamLine( expected, 4, R"(<actual-notes>10</actual-notes>)" );
	streamLine( expected, 4, R"(<normal-notes>11</normal-notes>)" );
	streamLine( expected, 4, R"(<normal-type>eighth</normal-type>)" );
	streamLine( expected, 4, R"(<normal-dot/>)" );
	streamLine( expected, 3, R"(</metronome-tuplet>)" );
	streamLine( expected, 2, R"(</metronome-note>)" );
	streamLine( expected, 1, R"(</metronome>)", false );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test04, Metronome )
{
	MetronomePtr object = tgenMetronome( variant::three );
	stringstream expected;
	streamLine( expected, 1, R"(<metronome default-x="13.2">)" );
    streamLine( expected, 2, R"(<beat-unit>quarter</beat-unit>)" );
    streamLine( expected, 2, R"(<beat-unit-dot/>)" );
    streamLine( expected, 2, R"(<beat-unit>32nd</beat-unit>)" );
    streamLine( expected, 2, R"(<beat-unit-dot/>)" );
    streamLine( expected, 2, R"(<beat-unit-dot/>)" );
    streamLine( expected, 1, R"(</metronome>)", false );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}