
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "TupletNumberTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, TupletNumber )
{
    variant v = variant::one;
	TupletNumberPtr object = tgenTupletNumber( v );
	stringstream expected;
	tgenTupletNumberExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, TupletNumber )
{
    variant v = variant::two;
	TupletNumberPtr object = tgenTupletNumber( v );
	stringstream expected;
	tgenTupletNumberExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, TupletNumber )
{
    variant v = variant::three;
	TupletNumberPtr object = tgenTupletNumber( v );
	stringstream expected;
	tgenTupletNumberExpected( expected, 1, v );
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
    TupletNumberPtr tgenTupletNumber( variant v )
    {
        TupletNumberPtr o = makeTupletNumber();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getAttributes()->hasFontWeight = true;
                o->getAttributes()->fontWeight = FontWeight::bold;
            }
                break;
            case variant::three:
            {

            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenTupletNumberExpected( std::ostream& os, int i, variant v )
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