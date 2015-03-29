
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "TupletActualTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, TupletActual )
{
    variant v = variant::one;
	TupletActualPtr object = tgenTupletActual( v );
	stringstream expected;
	tgenTupletActualExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, TupletActual )
{
    variant v = variant::two;
	TupletActualPtr object = tgenTupletActual( v );
	stringstream expected;
	tgenTupletActualExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, TupletActual )
{
    variant v = variant::three;
	TupletActualPtr object = tgenTupletActual( v );
	stringstream expected;
	tgenTupletActualExpected( expected, 1, v );
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
    TupletActualPtr tgenTupletActual( variant v )
    {
        TupletActualPtr o = makeTupletActual();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasTupletNumber( true );
                o->getTupletNumber()->setValue( NonNegativeInteger( 2 ) );
                o->setHasTupletType( true );
                o->getTupletType()->setValue( NoteTypeValue::sixteenth );
                o->addTupletDot( makeTupletDot() );
            }
                break;
            case variant::three:
            {
                o->setHasTupletNumber( true );
                o->getTupletNumber()->setValue( NonNegativeInteger( 3 ) );
                o->setHasTupletType( true );
                o->getTupletType()->setValue( NoteTypeValue::half );
                o->addTupletDot( makeTupletDot() );
                o->addTupletDot( makeTupletDot() );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenTupletActualExpected( std::ostream& os, int i, variant v )
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