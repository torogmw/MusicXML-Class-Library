
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "VirtualInstrumentTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, VirtualInstrument )
{
    variant v = variant::one;
	VirtualInstrumentPtr object = tgenVirtualInstrument( v );
	stringstream expected;
	tgenVirtualInstrumentExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, VirtualInstrument )
{
    variant v = variant::two;
	VirtualInstrumentPtr object = tgenVirtualInstrument( v );
	stringstream expected;
	tgenVirtualInstrumentExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, VirtualInstrument )
{
    variant v = variant::three;
	VirtualInstrumentPtr object = tgenVirtualInstrument( v );
	stringstream expected;
	tgenVirtualInstrumentExpected( expected, 1, v );
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
    VirtualInstrumentPtr tgenVirtualInstrument( variant v )
    {
        VirtualInstrumentPtr o = makeVirtualInstrument();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasVirtualName( true );
                o->getVirtualName()->setValue( XsString( "VI1" ) );
            }
                break;
            case variant::three:
            {
                o->setHasVirtualName( true );
                o->getVirtualName()->setValue( XsString( "VI2" ) );
                o->setHasVirtualLibrary( true );
                o->getVirtualLibrary()->setValue( XsString( "VL2" ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenVirtualInstrumentExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<virtual-instrument/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<virtual-instrument>)" );
                streamLine( os, i+1, R"(<virtual-name>VI1</virtual-name>)" );
                streamLine( os, i, R"(</virtual-instrument>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<virtual-instrument>)" );
                streamLine( os, i+1, R"(<virtual-library>VL2</virtual-library>)" );
                streamLine( os, i+1, R"(<virtual-name>VI2</virtual-name>)" );
                streamLine( os, i, R"(</virtual-instrument>)", false );
            }
                break;
            default:
                break;
        }
    }
}