
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "MeasureTest.h"
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
	MeasurePtr object = tgenMeasure( v );
	stringstream expected;
	tgenMeasureExpected( expected, 1, v );
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
	MeasurePtr object = tgenMeasure( v );
	stringstream expected;
	tgenMeasureExpected( expected, 1, v );
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
	MeasurePtr object = tgenMeasure( v );
	stringstream expected;
	tgenMeasureExpected( expected, 1, v );
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
    MeasurePtr tgenMeasure( variant v )
    {
        MeasurePtr o = makeMeasure();
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
    void tgenMeasureExpected( std::ostream& os, int i, variant v )
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
