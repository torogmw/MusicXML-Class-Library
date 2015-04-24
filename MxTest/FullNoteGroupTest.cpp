
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "FullNoteGroupTest.h"
#include "FullNoteTypeChoiceTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, FullNoteGroup )
{
    variant v = variant::one;
	FullNoteGroupPtr object = tgenFullNoteGroup( v );
	stringstream expected;
	tgenFullNoteGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, FullNoteGroup )
{
    variant v = variant::two;
	FullNoteGroupPtr object = tgenFullNoteGroup( v );
	stringstream expected;
	tgenFullNoteGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, FullNoteGroup )
{
    variant v = variant::three;
	FullNoteGroupPtr object = tgenFullNoteGroup( v );
	stringstream expected;
	tgenFullNoteGroupExpected( expected, 1, v );
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
    FullNoteGroupPtr tgenFullNoteGroup( variant v )
    {
        FullNoteGroupPtr o = makeFullNoteGroup();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setFullNoteTypeChoice( tgenFullNoteTypeChoice( v ) );
            }
                break;
            case variant::three:
            {
                o->setHasChord( true );
                o->setFullNoteTypeChoice( tgenFullNoteTypeChoice( v ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenFullNoteGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                tgenFullNoteTypeChoiceExpected( os, i, v );
            }
                break;
            case variant::two:
            {
                tgenFullNoteTypeChoiceExpected( os, i, v );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<chord/>)" );
                tgenFullNoteTypeChoiceExpected( os, i, v );
            }
                break;
            default:
                break;
        }
    }
}