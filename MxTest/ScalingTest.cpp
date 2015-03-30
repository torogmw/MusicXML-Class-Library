
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "ScalingTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, Scaling )
{
    variant v = variant::one;
	ScalingPtr object = tgenScaling( v );
	stringstream expected;
	tgenScalingExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Scaling )
{
    variant v = variant::two;
	ScalingPtr object = tgenScaling( v );
	stringstream expected;
	tgenScalingExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Scaling )
{
    variant v = variant::three;
	ScalingPtr object = tgenScaling( v );
	stringstream expected;
	tgenScalingExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    ScalingPtr tgenScaling( variant v )
    {
        ScalingPtr o = makeScaling();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {

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
    void tgenScalingExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<tuplet-actual/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<tuplet-actual>)" );
                streamLine( os, i+1, R"(<tuplet-number>2</tuplet-number>)" );
                streamLine( os, i+1, R"(<tuplet-type>16th</tuplet-type>)" );
                streamLine( os, i+1, R"(<tuplet-dot/>)" );
                streamLine( os, i, R"(</tuplet-actual>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<tuplet-actual>)" );
                streamLine( os, i+1, R"(<tuplet-number>3</tuplet-number>)" );
                streamLine( os, i+1, R"(<tuplet-type>half</tuplet-type>)" );
                streamLine( os, i+1, R"(<tuplet-dot/>)" );
                streamLine( os, i+1, R"(<tuplet-dot/>)" );
                streamLine( os, i, R"(</tuplet-actual>)", false );
            }
                break;
            default:
                break;
        }
    }
}