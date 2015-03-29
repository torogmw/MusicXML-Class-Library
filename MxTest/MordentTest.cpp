
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "MordentTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, Mordent )
{
    variant v = variant::one;
	MordentPtr object = tgenMordent( v );
	stringstream expected;
	tgenMordentExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Mordent )
{
    variant v = variant::two;
	MordentPtr object = tgenMordent( v );
	stringstream expected;
	tgenMordentExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test03, Mordent )
{
    variant v = variant::three;
	MordentPtr object = tgenMordent( v );
	stringstream expected;
	tgenMordentExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    MordentPtr tgenMordent( variant v )
    {
        MordentPtr o = makeMordent();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getAttributes()->hasBeats = true;
                o->getAttributes()->beats = TrillBeats( 1.2 );
                o->getAttributes()->hasApproach = true;
                o->getAttributes()->approach = AboveBelow::above;
                o->getAttributes()->hasAccelerate = true;
                o->getAttributes()->accelerate = YesNo::yes;
            }
                break;
            case variant::three:
            {
                o->getAttributes()->hasDeparture = true;
                o->getAttributes()->departure = AboveBelow::below;
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenMordentExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<mordent/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<mordent accelerate="yes" beats="2" approach="above"/>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<mordent departure="below"/>)", false );
            }
                break;
            default:
                break;
        }
    }
}