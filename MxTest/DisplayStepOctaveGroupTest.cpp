
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "DisplayStepOctaveGroupTest.h"
#include "SystemMarginsTest.h"
#include "SystemDividersTest.h"
/* #include "MidiDeviceTest.cpp" */


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, DisplayStepOctaveGroup )
{
    variant v = variant::one;
	DisplayStepOctaveGroupPtr object = tgenDisplayStepOctaveGroup( v );
	stringstream expected;
	tgenDisplayStepOctaveGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = false;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, DisplayStepOctaveGroup )
{
    variant v = variant::two;
	DisplayStepOctaveGroupPtr object = tgenDisplayStepOctaveGroup( v );
	stringstream expected;
	tgenDisplayStepOctaveGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = false;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, DisplayStepOctaveGroup )
{
    variant v = variant::three;
	DisplayStepOctaveGroupPtr object = tgenDisplayStepOctaveGroup( v );
	stringstream expected;
	tgenDisplayStepOctaveGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = false;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    DisplayStepOctaveGroupPtr tgenDisplayStepOctaveGroup( variant v )
    {
        DisplayStepOctaveGroupPtr o = makeDisplayStepOctaveGroup();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getDisplayOctave()->setValue( OctaveValue( 7 ) );
                o->getDisplayStep()->setValue( StepEnum::g );
            }
                break;
            case variant::three:
            {
                o->getDisplayOctave()->setValue( OctaveValue( 5 ) );
                o->getDisplayStep()->setValue( StepEnum::b );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenDisplayStepOctaveGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<display-step>A</display-step>)" );
                streamLine( os, i, R"(<display-octave>0</display-octave>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<display-step>G</display-step>)" );
                streamLine( os, i, R"(<display-octave>7</display-octave>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<display-step>B</display-step>)" );
                streamLine( os, i, R"(<display-octave>5</display-octave>)", false );
            }
                break;
            default:
                break;
        }
    }
}