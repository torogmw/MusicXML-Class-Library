
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "SystemLayoutTest.h"
#include "SystemMarginsTest.h"
#include "SystemDividersTest.h"
/* #include "MidiDeviceTest.cpp" */


using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, SystemLayout )
{
    variant v = variant::one;
	SystemLayoutPtr object = tgenSystemLayout( v );
	stringstream expected;
	tgenSystemLayoutExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, SystemLayout )
{
    variant v = variant::two;
	SystemLayoutPtr object = tgenSystemLayout( v );
	stringstream expected;
	tgenSystemLayoutExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, SystemLayout )
{
    variant v = variant::three;
	SystemLayoutPtr object = tgenSystemLayout( v );
	stringstream expected;
	tgenSystemLayoutExpected( expected, 1, v );
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
    SystemLayoutPtr tgenSystemLayout( variant v )
    {
        SystemLayoutPtr o = makeSystemLayout();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasSystemMargins( true );
                o->setSystemMargins( tgenSystemMargins( v ) );
                o->setHasTopSystemDistance( true );
                o->getTopSystemDistance()->setValue( TenthsValue( 1.1 ) );
                o->setHasSystemDistance( true );
                o->getSystemDistance()->setValue( TenthsValue( 2.2 ) );
                o->setHasSystemDividers( true );
                o->setSystemDividers( tgenSystemDividers( v ) );
            }
                break;
            case variant::three:
            {
                o->setHasSystemMargins( true );
                o->setSystemMargins( tgenSystemMargins( v ) );
                o->setHasTopSystemDistance( true );
                o->getTopSystemDistance()->setValue( TenthsValue( 3.3 ) );
                o->setHasSystemDistance( true );
                o->getSystemDistance()->setValue( TenthsValue( 4.4 ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenSystemLayoutExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<system-layout/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<system-layout>)" );
                tgenSystemMarginsExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i+1, R"(<system-distance>2.2</system-distance>)" );
                streamLine( os, i+1, R"(<top-system-distance>1.1</top-system-distance>)" );
                tgenSystemDividersExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</system-layout>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<system-layout>)" );
                tgenSystemMarginsExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i+1, R"(<system-distance>4.4</system-distance>)" );
                streamLine( os, i+1, R"(<top-system-distance>3.3</top-system-distance>)" );
                streamLine( os, i, R"(</system-layout>)", false );
            }
                break;
            default:
                break;
        }
    }
}