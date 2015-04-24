
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "HarmonicInfoChoiceTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, HarmonicInfoChoice )
{
    variant v = variant::one;
	HarmonicInfoChoicePtr object = tgenHarmonicInfoChoice( v );
	stringstream expected;
	tgenHarmonicInfoChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, HarmonicInfoChoice )
{
    variant v = variant::two;
	HarmonicInfoChoicePtr object = tgenHarmonicInfoChoice( v );
	stringstream expected;
	tgenHarmonicInfoChoiceExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, HarmonicInfoChoice )
{
    variant v = variant::three;
	HarmonicInfoChoicePtr object = tgenHarmonicInfoChoice( v );
	stringstream expected;
	tgenHarmonicInfoChoiceExpected( expected, 1, v );
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
    HarmonicInfoChoicePtr tgenHarmonicInfoChoice( variant v )
    {
        HarmonicInfoChoicePtr o = makeHarmonicInfoChoice();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setChoice( HarmonicInfoChoice::Choice::touchingPitch );
            }
                break;
            case variant::three:
            {
                o->setChoice( HarmonicInfoChoice::Choice::soundingPitch );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenHarmonicInfoChoiceExpected( std::ostream& os, int i, variant v )
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