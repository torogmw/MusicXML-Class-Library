
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "TupletTest.h"
#include "TupletActualTest.h"
#include "TupletNormalTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, Tuplet )
{
    variant v = variant::one;
	TupletPtr object = tgenTuplet( v );
	stringstream expected;
	tgenTupletExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Tuplet )
{
    variant v = variant::two;
	TupletPtr object = tgenTuplet( v );
	stringstream expected;
	tgenTupletExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Tuplet )
{
    variant v = variant::three;
	TupletPtr object = tgenTuplet( v );
	stringstream expected;
	tgenTupletExpected( expected, 1, v );
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
    TupletPtr tgenTuplet( variant v )
    {
        TupletPtr o = makeTuplet();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getAttributes()->type = StartStop::stop;
                o->setHasTupletActual( true );
                o->setTupletActual( tgenTupletActual( v ) );
                o->setHasTupletNormal( true );
                o->setTupletNormal( tgenTupletNormal( v ) );
            }
                break;
            case variant::three:
            {
                o->getAttributes()->hasBracket = true;
                o->getAttributes()->bracket = YesNo::yes;
                o->getAttributes()->hasLineShape = true;
                o->getAttributes()->lineShape = LineShape::curved;
                o->setHasTupletActual( false );
                o->setTupletActual( tgenTupletActual( v ) );
                o->setHasTupletNormal( true );
                o->setTupletNormal( tgenTupletNormal( v ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenTupletExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<tuplet type="start"/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<tuplet type="stop">)" );
                tgenTupletActualExpected( os, i+1, v );
                os << std::endl;
                tgenTupletNormalExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</tuplet>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<tuplet type="start" bracket="yes" line-shape="curved">)" );
                tgenTupletNormalExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</tuplet>)", false );
            }
                break;
            default:
                break;
        }
    }
}