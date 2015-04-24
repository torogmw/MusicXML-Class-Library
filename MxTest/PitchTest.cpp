
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "PitchTest.h"
#include "SystemMarginsTest.h"
#include "SystemDividersTest.h"
/* #include "MidiDeviceTest.cpp" */


using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Pitch )
{
    variant v = variant::one;
	PitchPtr object = tgenPitch( v );
	stringstream expected;
	tgenPitchExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, Pitch )
{
    variant v = variant::two;
	PitchPtr object = tgenPitch( v );
	stringstream expected;
	tgenPitchExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Pitch )
{
    variant v = variant::three;
	PitchPtr object = tgenPitch( v );
	stringstream expected;
	tgenPitchExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    PitchPtr tgenPitch( variant v )
    {
        PitchPtr o = makePitch();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getOctave()->setValue( OctaveValue( 3 ) );
                o->getStep()->setValue( StepEnum::d );
            }
                break;
            case variant::three:
            {
                o->getOctave()->setValue( OctaveValue( 6 ) );
                o->getStep()->setValue( StepEnum::e );
                o->setHasAlter( true );
                o->getAlter()->setValue( Semitones( -1.1 ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenPitchExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<pitch>)" );
                streamLine( os, i+1, R"(<step>A</step>)" );
                streamLine( os, i+1, R"(<octave>0</octave>)" );
                streamLine( os, i, R"(</pitch>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<pitch>)" );
                streamLine( os, i+1, R"(<step>D</step>)" );
                streamLine( os, i+1, R"(<octave>3</octave>)" );
                streamLine( os, i, R"(</pitch>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<pitch>)" );
                streamLine( os, i+1, R"(<step>E</step>)" );
                streamLine( os, i+1, R"(<alter>-1.1</alter>)" );
                streamLine( os, i+1, R"(<octave>6</octave>)" );
                streamLine( os, i, R"(</pitch>)", false );
            }
                break;
            default:
                break;
        }
    }
}