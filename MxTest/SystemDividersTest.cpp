
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "SystemDividersTest.h"
#include "PlayTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, SystemDividers )
{
    variant v = variant::one;
	SystemDividersPtr object = tgenSystemDividers( v );
	stringstream expected;
	tgenSystemDividersExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, SystemDividers )
{
    variant v = variant::two;
	SystemDividersPtr object = tgenSystemDividers( v );
	stringstream expected;
	tgenSystemDividersExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, SystemDividers )
{
    variant v = variant::three;
	SystemDividersPtr object = tgenSystemDividers( v );
	stringstream expected;
	tgenSystemDividersExpected( expected, 1, v );
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
    SystemDividersPtr tgenSystemDividers( variant v )
    {
        SystemDividersPtr o = makeSystemDividers();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getLeftDivider()->getAttributes()->hasHalign = true;
                o->getRightDivider()->getAttributes()->hasFontSize = true;
            }
                break;
            case variant::three:
            {
                o->getLeftDivider()->getAttributes()->hasDefaultY = true;
                o->getRightDivider()->getAttributes()->hasRelativeX = true;
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenSystemDividersExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<system-dividers>)" );
                streamLine( os, i+1, R"(<left-divider/>)" );
                streamLine( os, i+1, R"(<right-divider/>)" );
                streamLine( os, i, R"(</system-dividers>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<system-dividers>)" );
                streamLine( os, i+1, R"(<left-divider halign="center"/>)" );
                streamLine( os, i+1, R"(<right-divider font-size="medium"/>)" );
                streamLine( os, i, R"(</system-dividers>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<system-dividers>)" );
                streamLine( os, i+1, R"(<left-divider default-y="0"/>)" );
                streamLine( os, i+1, R"(<right-divider relative-x="0"/>)" );
                streamLine( os, i, R"(</system-dividers>)", false );
            }
                break;
            default:
                break;
        }
    }
}