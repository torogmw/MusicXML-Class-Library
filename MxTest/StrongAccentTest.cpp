
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "StrongAccentTest.h"
#include "PlayTest.h"
#include "MidiInstrumentTest.h"
/* #include "MidiDeviceTest.cpp" */


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, StrongAccent )
{
    variant v = variant::one;
	StrongAccentPtr object = tgenStrongAccent( v );
	stringstream expected;
	tgenStrongAccentExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, StrongAccent )
{
    variant v = variant::two;
	StrongAccentPtr object = tgenStrongAccent( v );
	stringstream expected;
	tgenStrongAccentExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test03, StrongAccent )
{
    variant v = variant::three;
	StrongAccentPtr object = tgenStrongAccent( v );
	stringstream expected;
	tgenStrongAccentExpected( expected, 1, v );
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
    StrongAccentPtr tgenStrongAccent( variant v )
    {
        StrongAccentPtr o = makeStrongAccent();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getAttributes()->hasFontStyle = true;
                o->getAttributes()->hasRelativeX = true;
                o->getAttributes()->relativeX = TenthsValue( -1.1 );
            }
                break;
            case variant::three:
            {
                o->getAttributes()->hasDefaultY = true;
                o->getAttributes()->defaultY = TenthsValue( 2.2 );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenStrongAccentExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<strong-accent/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<strong-accent relative-x="-1.1" font-style="normal"/>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<strong-accent default-y="2.2"/>)", false );

            }
                break;
            default:
                break;
        }
    }
}