
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "PartwiseMeasureTest.h"
#include "MusicDataGroupTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Measure )
{
    variant v = variant::one;
	PartwiseMeasurePtr object = tgenPartwiseMeasure( v );
	stringstream expected;
	tgenPartwiseMeasureExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Measure )
{
    variant v = variant::two;
	PartwiseMeasurePtr object = tgenPartwiseMeasure( v );
	stringstream expected;
	tgenPartwiseMeasureExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Measure )
{
    variant v = variant::three;
	PartwiseMeasurePtr object = tgenPartwiseMeasure( v );
	stringstream expected;
	tgenPartwiseMeasureExpected( expected, 1, v );
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
    PartwiseMeasurePtr tgenPartwiseMeasure( variant v )
    {
        PartwiseMeasurePtr o = makePartwiseMeasure();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getAttributes()->number = XsToken( "200" );
                o->setMusicDataGroup( tgenMusicDataGroup( v ) );
            }
                break;
            case variant::three:
            {
                o->getAttributes()->number = XsToken( "300" );
                o->getAttributes()->hasImplicit = true;
                o->getAttributes()->implicit = YesNo::no;
                o->getAttributes()->hasWidth = true;
                o->getAttributes()->width = TenthsValue( 45.1 );
                o->setMusicDataGroup( tgenMusicDataGroup( v ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenPartwiseMeasureExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<measure number=""/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<measure number="200">)" );
                tgenMusicDataGroupExpected( os, i+1,  v );
                os << std::endl;
                streamLine( os, i, R"(</measure>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<measure number="300" implicit="no" width="45.1">)" );
                tgenMusicDataGroupExpected( os, i+1,  v );
                os << std::endl;
                streamLine( os, i, R"(</measure>)", false );
            }
                break;
            default:
                break;
        }
    }
}
