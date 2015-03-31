
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "DisplayStepOctaveGroupTest.h"
#include "SystemMarginsTest.h"
#include "SystemDividersTest.h"
#include "MidiDeviceTest.cpp"


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

            }
                break;
            case variant::three:
            {

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