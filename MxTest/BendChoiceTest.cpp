
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "BendChoiceTest.h"
#include "ScalingTest.h"
#include "LayoutGroupTest.h"
#include "AppearanceTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, BendChoice )
{
    variant v = variant::one;
	BendChoicePtr object = tgenBendChoice( v );
	stringstream expected;
	tgenBendChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = false;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, BendChoice )
{
    variant v = variant::two;
	BendChoicePtr object = tgenBendChoice( v );
	stringstream expected;
	tgenBendChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = false;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, BendChoice )
{
    variant v = variant::three;
	BendChoicePtr object = tgenBendChoice( v );
	stringstream expected;
	tgenBendChoiceExpected( expected, 1, v );
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
    BendChoicePtr tgenBendChoice( variant v )
    {
        BendChoicePtr o = makeBendChoice();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setChoice( BendChoice::Choice::release );
            }
                break;
            case variant::three:
            {
                o->setChoice( BendChoice::Choice::preBend );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenBendChoiceExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<pre-bend/>)", false );
            }
                break;
            case variant::two:
            {
                
                streamLine( os, i, R"(<release/>)", false );
            }
                break;
            case variant::three:
            {
                
                streamLine( os, i, R"(<pre-bend/>)", false );
            }
                break;
            default:
                break;
        }
    }
}
