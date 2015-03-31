
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "StaffLayoutTest.h"
#include "SystemMarginsTest.h"
#include "SystemDividersTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, StaffLayout )
{
    variant v = variant::one;
	StaffLayoutPtr object = tgenStaffLayout( v );
	stringstream expected;
	tgenStaffLayoutExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, StaffLayout )
{
    variant v = variant::two;
	StaffLayoutPtr object = tgenStaffLayout( v );
	stringstream expected;
	tgenStaffLayoutExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, StaffLayout )
{
    variant v = variant::three;
	StaffLayoutPtr object = tgenStaffLayout( v );
	stringstream expected;
	tgenStaffLayoutExpected( expected, 1, v );
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
    StaffLayoutPtr tgenStaffLayout( variant v )
    {
        StaffLayoutPtr o = makeStaffLayout();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasStaffDistance( true );
                o->getStaffDistance()->setValue( TenthsValue( 12.1 ) );
                o->getAttributes()->hasNumber = true;
                o->getAttributes()->number = StaffNumber( 5 );
            }
                break;
            case variant::three:
            {
                o->setHasStaffDistance( true );
                o->getStaffDistance()->setValue( TenthsValue( 13.3 ) );
                o->getAttributes()->hasNumber = true;
                o->getAttributes()->number = StaffNumber( 7 );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenStaffLayoutExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<staff-layout/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<staff-layout number="5">)" );
                streamLine( os, i+1, R"(<staff-distance>12.1</staff-distance>)" );
                streamLine( os, i, R"(</staff-layout>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<staff-layout number="7">)" );
                streamLine( os, i+1, R"(<staff-distance>13.3</staff-distance>)" );
                streamLine( os, i, R"(</staff-layout>)", false );
            }
                break;
            default:
                break;
        }
    }
}