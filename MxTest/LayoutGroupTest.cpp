
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "LayoutGroupTest.h"
#include "SystemLayoutTest.h"
#include "StaffLayoutTest.h"
#include "PageLayoutTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, LayoutGroup )
{
    variant v = variant::one;
	LayoutGroupPtr object = tgenLayoutGroup( v );
	stringstream expected;
	tgenLayoutGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = false;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
    CHECK( isOneLineOnly )
}
TEST( Test02, LayoutGroup )
{
    variant v = variant::two;
	LayoutGroupPtr object = tgenLayoutGroup( v );
	stringstream expected;
	tgenLayoutGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = false;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, LayoutGroup )
{
    variant v = variant::three;
	LayoutGroupPtr object = tgenLayoutGroup( v );
	stringstream expected;
	tgenLayoutGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = false;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    LayoutGroupPtr tgenLayoutGroup( variant v )
    {
        LayoutGroupPtr o = makeLayoutGroup();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasPageLayout( true );
                o->setPageLayout( tgenPageLayout( v ) );
                o->setHasSystemLayout( true );
                o->setSystemLayout( tgenSystemLayout( v ) );
            }
                break;
            case variant::three:
            {
                o->addStaffLayout( tgenStaffLayout( variant::one ) );
                o->addStaffLayout( tgenStaffLayout( variant::two ) );
                o->addStaffLayout( tgenStaffLayout( variant::three ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenLayoutGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                tgenPageLayoutExpected( os, i, v );
                os << std::endl;
                tgenSystemLayoutExpected( os, i, v );
            }
                break;
            case variant::three:
            {
                tgenStaffLayoutExpected( os, i, variant::one );
                os << std::endl;
                tgenStaffLayoutExpected( os, i, variant::two );
                os << std::endl;
                tgenStaffLayoutExpected( os, i, variant::three );
            }
                break;
            default:
                break;
        }
    }
}