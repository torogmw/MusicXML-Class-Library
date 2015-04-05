
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "OrnamentsChoiceTest.h"
#include "ScalingTest.h"
#include "LayoutGroupTest.h"
#include "AppearanceTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, OrnamentsChoice )
{
    variant v = variant::one;
	OrnamentsChoicePtr object = tgenOrnamentsChoice( v );
	stringstream expected;
	tgenOrnamentsChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = false;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, OrnamentsChoice )
{
    variant v = variant::two;
	OrnamentsChoicePtr object = tgenOrnamentsChoice( v );
	stringstream expected;
	tgenOrnamentsChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = false;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, OrnamentsChoice )
{
    variant v = variant::three;
	OrnamentsChoicePtr object = tgenOrnamentsChoice( v );
	stringstream expected;
	tgenOrnamentsChoiceExpected( expected, 1, v );
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
    OrnamentsChoicePtr tgenOrnamentsChoice( variant v )
    {
        OrnamentsChoicePtr o = makeOrnamentsChoice();
        switch ( v )
        {
            case variant::one:
            {
                o->getTrillMark()->getAttributes()->hasFontStyle = true;
                o->getTrillMark()->getAttributes()->fontStyle = FontStyle::italic;
            }
                break;
            case variant::two:
            {
                o->setChoice( OrnamentsChoice::Choice::otherOrnament );
                o->getOtherOrnament()->setValue( XsString( "Mordiarty" ) );
                o->getOtherOrnament()->getAttributes()->hasPlacement = true;
            }
                break;
            case variant::three:
            {
                o->setChoice( OrnamentsChoice::Choice::shake );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenOrnamentsChoiceExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<trill-mark font-style="italic"/>)", false );
            }
                break;
            case variant::two:
            {

                streamLine( os, i, R"(<other-ornament placement="above">Mordiarty</other-ornament>)", false );
            }
                break;
            case variant::three:
            {

                streamLine( os, i, R"(<shake/>)", false );
            }
                break;
            default:
                break;
        }
    }
}
