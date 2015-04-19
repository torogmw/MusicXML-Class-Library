
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "TechnicalChoiceTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, TechnicalChoice )
{
    variant v = variant::one;
	TechnicalChoicePtr object = tgenTechnicalChoice( v );
	stringstream expected;
	tgenTechnicalChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, TechnicalChoice )
{
    variant v = variant::two;
	TechnicalChoicePtr object = tgenTechnicalChoice( v );
	stringstream expected;
	tgenTechnicalChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, TechnicalChoice )
{
    variant v = variant::three;
	TechnicalChoicePtr object = tgenTechnicalChoice( v );
	stringstream expected;
	tgenTechnicalChoiceExpected( expected, 1, v );
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
    TechnicalChoicePtr tgenTechnicalChoice( variant v )
    {
        TechnicalChoicePtr o = makeTechnicalChoice();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setChoice( TechnicalChoice::Choice::touchingPitch );
            }
                break;
            case variant::three:
            {
                o->setChoice( TechnicalChoice::Choice::soundingPitch );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenTechnicalChoiceExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<base-pitch/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<touching-pitch/>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<sounding-pitch/>)", false );
            }
                break;
            default:
                break;
        }
    }
}