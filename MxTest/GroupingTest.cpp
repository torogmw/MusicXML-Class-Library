
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "GroupingTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Grouping )
{
    variant v = variant::one;
	GroupingPtr object = tgenGrouping( v );
	stringstream expected;
	tgenGroupingExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Grouping )
{
    variant v = variant::two;
	GroupingPtr object = tgenGrouping( v );
	stringstream expected;
	tgenGroupingExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Grouping )
{
    variant v = variant::three;
	GroupingPtr object = tgenGrouping( v );
	stringstream expected;
	tgenGroupingExpected( expected, 1, v );
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
    GroupingPtr tgenGrouping( variant v )
    {
        GroupingPtr o = makeGrouping();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                
            }
                break;
            case variant::three:
            {

            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenGroupingExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<grouping/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<grouping coda="Loda">)" );
                tgenEditorialGroupExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i+1, R"(<coda font-family="bish,and,bones"/>)" );
                streamLine( os, i+1, R"(<fermata>normal</fermata>)" );
                streamLine( os, i, R"(</grouping>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<grouping location="right">)" );
                streamLine( os, i+1, R"(<wavy-line type="start"/>)" );
                streamLine( os, i, R"(</grouping>)", false );
            }
                break;
            default:
                break;
        }
    }
}