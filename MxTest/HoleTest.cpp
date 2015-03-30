
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "HoleTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, Hole )
{
    variant v = variant::one;
	HolePtr object = tgenHole( v );
	stringstream expected;
	tgenHoleExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, Hole )
{
    variant v = variant::two;
	HolePtr object = tgenHole( v );
	stringstream expected;
	tgenHoleExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Hole )
{
    variant v = variant::three;
	HolePtr object = tgenHole( v );
	stringstream expected;
	tgenHoleExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    HolePtr tgenHole( variant v )
    {
        HolePtr o = makeHole();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getHoleClosed()->setValue( HoleClosedValue::half );
                o->setHasHoleShape( true );
                o->getHoleShape()->setValue( XsString( "torus" ) );
                o->getAttributes()->hasColor = true;
                o->getAttributes()->color = Color( 1, 2, 3 );
            }
                break;
            case variant::three:
            {
                o->getHoleClosed()->setValue( HoleClosedValue::yes );
                o->setHasHoleShape( true );
                o->getHoleShape()->setValue( XsString( "smokes" ) );
                o->setHasHoleType( true );
                o->getHoleType()->setValue( XsString( "foobar" ) );
                o->getAttributes()->hasPlacement = true;
                o->getAttributes()->placement = AboveBelow::above;
                o->getAttributes()->hasDefaultY = true;
                o->getAttributes()->defaultY = TenthsValue( -1.1 );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenHoleExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<hole>)" );
                streamLine( os, i+1, R"(<hole-closed>no</hole-closed>)" );
                streamLine( os, i, R"(</hole>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<hole color="#010203">)" );
                streamLine( os, i+1, R"(<hole-closed>half</hole-closed>)" );
                streamLine( os, i+1, R"(<hole-shape>torus</hole-shape>)" );
                streamLine( os, i, R"(</hole>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<hole default-y="-1.1" placement="above">)" );
                streamLine( os, i+1, R"(<hole-type>foobar</hole-type>)" );
                streamLine( os, i+1, R"(<hole-closed>yes</hole-closed>)" );
                streamLine( os, i+1, R"(<hole-shape>smokes</hole-shape>)" );
                streamLine( os, i, R"(</hole>)", false );
            }
                break;
            default:
                break;
        }
    }
}