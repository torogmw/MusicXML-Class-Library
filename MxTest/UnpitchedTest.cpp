
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "UnpitchedTest.h"
#include "DisplayStepOctaveGroupTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Unpitched )
{
    variant v = variant::one;
	UnpitchedPtr object = tgenUnpitched( v );
	stringstream expected;
	tgenUnpitchedExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Unpitched )
{
    variant v = variant::two;
	UnpitchedPtr object = tgenUnpitched( v );
	stringstream expected;
	tgenUnpitchedExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Unpitched )
{
    variant v = variant::three;
	UnpitchedPtr object = tgenUnpitched( v );
	stringstream expected;
	tgenUnpitchedExpected( expected, 1, v );
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
    UnpitchedPtr tgenUnpitched( variant v )
    {
        UnpitchedPtr o = makeUnpitched();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasDisplayStepOctaveGroup( true );
                o->setDisplayStepOctaveGroup( tgenDisplayStepOctaveGroup( v ) );
            }
                break;
            case variant::three:
            {
                o->setHasDisplayStepOctaveGroup( true );
                o->setDisplayStepOctaveGroup( tgenDisplayStepOctaveGroup( v ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenUnpitchedExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<unpitched/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<unpitched>)" );
                tgenDisplayStepOctaveGroupExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</unpitched>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<unpitched>)" );
                tgenDisplayStepOctaveGroupExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</unpitched>)", false );
            }
                break;
            default:
                break;
        }
    }
}