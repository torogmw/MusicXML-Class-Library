
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ScoreTimewiseTest.h"
#include "TimewiseMeasureTest.h"
#include "ScoreHeaderGroupTest.h"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, ScoreTimewise )
{
    variant v = variant::one;
	ScoreTimewisePtr object = tgenScoreTimewise( v );
	stringstream expected;
	tgenScoreTimewiseExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, ScoreTimewise )
{
    variant v = variant::two;
	ScoreTimewisePtr object = tgenScoreTimewise( v );
	stringstream expected;
	tgenScoreTimewiseExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, ScoreTimewise )
{
    variant v = variant::three;
	ScoreTimewisePtr object = tgenScoreTimewise( v );
	stringstream expected;
	tgenScoreTimewiseExpected( expected, 1, v );
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
    ScoreTimewisePtr tgenScoreTimewise( variant v )
    {
        ScoreTimewisePtr o = makeScoreTimewise();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getAttributes()->hasVersion = true;
                o->getAttributes()->version = XsToken( "3.0" );
                o->setScoreHeaderGroup( tgenScoreHeaderGroup( v ) );
                o->addTimewiseMeasure( tgenTimewiseMeasure( v ) );
                o->removeTimewiseMeasure( o->getTimewiseMeasureSet().cbegin() );
            }
                break;
            case variant::three:
            {
                o->setScoreHeaderGroup( tgenScoreHeaderGroup( v ) );
                o->addTimewiseMeasure( tgenTimewiseMeasure( v ) );
                o->removeTimewiseMeasure( o->getTimewiseMeasureSet().cbegin() );
                o->addTimewiseMeasure( tgenTimewiseMeasure( variant::one ) );
                o->addTimewiseMeasure( tgenTimewiseMeasure( variant::two ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenScoreTimewiseExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<score-partwise>)" );
                tgenScoreHeaderGroupExpected( os, i+1,  v );
                os << std::endl;
                tgenTimewiseMeasureExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</score-partwise>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<score-partwise version="3.0">)" );
                tgenScoreHeaderGroupExpected( os, i+1,  v );
                os << std::endl;
                tgenTimewiseMeasureExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</score-partwise>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<score-partwise>)" );
                tgenScoreHeaderGroupExpected( os, i+1,  v );
                os << std::endl;
                tgenTimewiseMeasureExpected( os, i+1, v );
                os << std::endl;
                tgenTimewiseMeasureExpected( os, i+1, variant::one );
                os << std::endl;
                tgenTimewiseMeasureExpected( os, i+1, variant::two );
                os << std::endl;
                streamLine( os, i, R"(</score-partwise>)", false );
            }
                break;
            default:
                break;
        }
    }
}
