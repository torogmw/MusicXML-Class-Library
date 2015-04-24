
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "HeelTest.h"
#include "MidiInstrumentTest.h"
/* #include "MidiDeviceTest.cpp" */


using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, Heel )
{
    variant v = variant::one;
	HeelPtr object = tgenHeel( v );
	stringstream expected;
	tgenHeelExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Heel )
{
    variant v = variant::two;
	HeelPtr object = tgenHeel( v );
	stringstream expected;
	tgenHeelExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test03, Heel )
{
    variant v = variant::three;
	HeelPtr object = tgenHeel( v );
	stringstream expected;
	tgenHeelExpected( expected, 1, v );
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
    HeelPtr tgenHeel( variant v )
    {
        HeelPtr o = makeHeel();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getAttributes()->hasSubstitution = true;
                o->getAttributes()->substitution = YesNo::yes;
                o->getAttributes()->hasFontStyle = true;
                o->getAttributes()->fontStyle = FontStyle::italic;
                o->getAttributes()->hasColor = true;
                o->getAttributes()->color = Color( 83, 102, 30, 22 );
            }
                break;
            case variant::three:
            {
                o->getAttributes()->hasFontFamily = true;
                o->getAttributes()->fontFamily = CommaSeparatedText( "Bish,and,Bones" );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenHeelExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<heel/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<heel font-style="italic" color="#53661E16" substitution="yes"/>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<heel font-family="Bish,and,Bones"/>)", false );
            }
                break;
            default:
                break;
        }
    }
}