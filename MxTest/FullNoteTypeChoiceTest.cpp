
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "FullNoteTypeChoiceTest.h"
#include "PitchTest.h"
#include "RestTest.h"
#include "UnpitchedTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, FullNoteTypeChoice )
{
    variant v = variant::one;
	FullNoteTypeChoicePtr object = tgenFullNoteTypeChoice( v );
	stringstream expected;
	tgenFullNoteTypeChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, FullNoteTypeChoice )
{
    variant v = variant::two;
	FullNoteTypeChoicePtr object = tgenFullNoteTypeChoice( v );
	stringstream expected;
	tgenFullNoteTypeChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, FullNoteTypeChoice )
{
    variant v = variant::three;
	FullNoteTypeChoicePtr object = tgenFullNoteTypeChoice( v );
	stringstream expected;
	tgenFullNoteTypeChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    FullNoteTypeChoicePtr tgenFullNoteTypeChoice( variant v )
    {
        FullNoteTypeChoicePtr o = makeFullNoteTypeChoice();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setChoice( FullNoteTypeChoice::Choice::unpitched );
                o->setUnpitched( tgenUnpitched( v ) );
            }
                break;
            case variant::three:
            {
                o->setChoice( FullNoteTypeChoice::Choice::rest );
                o->setRest( tgenRest( v ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenFullNoteTypeChoiceExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                tgenPitchExpected( os, i, v );
            }
                break;
            case variant::two:
            {
                tgenUnpitchedExpected( os, i, v );
            }
                break;
            case variant::three:
            {
                tgenRestExpected( os, i, v );
            }
                break;
            default:
                break;
        }
    }
}