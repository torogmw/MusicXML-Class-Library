
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "TimewisePartTest.h"
#include "MusicDataGroupTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, TimewisePart )
{
    variant v = variant::one;
	TimewisePartPtr object = tgenTimewisePart( v );
	stringstream expected;
	tgenTimewisePartExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, TimewisePart )
{
    variant v = variant::two;
	TimewisePartPtr object = tgenTimewisePart( v );
	stringstream expected;
	tgenTimewisePartExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, TimewisePart )
{
    variant v = variant::three;
	TimewisePartPtr object = tgenTimewisePart( v );
	stringstream expected;
	tgenTimewisePartExpected( expected, 1, v );
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
    TimewisePartPtr tgenTimewisePart( variant v )
    {
        TimewisePartPtr o = makeTimewisePart();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getAttributes()->id = XsID( "ID200" );
                o->setMusicDataGroup( tgenMusicDataGroup( v ) );
            }
                break;
            case variant::three:
            {
                o->getAttributes()->id = XsID( "ID300" );
                o->setMusicDataGroup( tgenMusicDataGroup( v ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenTimewisePartExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<part id="ID"/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<part id="ID200">)" );
                tgenMusicDataGroupExpected( os, i+1,  v );
                os << std::endl;
                streamLine( os, i, R"(</part>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<part id="ID300">)" );
                tgenMusicDataGroupExpected( os, i+1,  v );
                os << std::endl;
                streamLine( os, i, R"(</part>)", false );
            }
                break;
            default:
                break;
        }
    }
}
