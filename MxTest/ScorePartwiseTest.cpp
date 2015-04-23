
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ScorePartwiseTest.h"
#include "PartTest.h"
#include "ScoreHeaderGroupTest.h"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, ScorePartwise )
{
    variant v = variant::one;
	ScorePartwisePtr object = tgenScorePartwise( v );
	stringstream expected;
	tgenScorePartwiseExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, ScorePartwise )
{
    variant v = variant::two;
	ScorePartwisePtr object = tgenScorePartwise( v );
	stringstream expected;
	tgenScorePartwiseExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, ScorePartwise )
{
    variant v = variant::three;
	ScorePartwisePtr object = tgenScorePartwise( v );
	stringstream expected;
	tgenScorePartwiseExpected( expected, 1, v );
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
    ScorePartwisePtr tgenScorePartwise( variant v )
    {
        ScorePartwisePtr o = makeScorePartwise();
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
                o->addPart( tgenPart( v ) );
                o->removePart( o->getPartSet().cbegin() );
            }
                break;
            case variant::three:
            {
                o->setScoreHeaderGroup( tgenScoreHeaderGroup( v ) );
                o->addPart( tgenPart( v ) );
                o->removePart( o->getPartSet().cbegin() );
                o->addPart( tgenPart( variant::one ) );
                o->addPart( tgenPart( variant::two ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenScorePartwiseExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<score-partwise>)" );
                tgenScoreHeaderGroupExpected( os, i+1,  v );
                os << std::endl;
                tgenPartExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</score-partwise>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<score-partwise version="3.0">)" );
                tgenScoreHeaderGroupExpected( os, i+1,  v );
                os << std::endl;
                tgenPartExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</score-partwise>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<score-partwise>)" );
                tgenScoreHeaderGroupExpected( os, i+1,  v );
                os << std::endl;
                tgenPartExpected( os, i+1, v );
                os << std::endl;
                tgenPartExpected( os, i+1, variant::one );
                os << std::endl;
                tgenPartExpected( os, i+1, variant::two );
                os << std::endl;
                streamLine( os, i, R"(</score-partwise>)", false );
            }
                break;
            default:
                break;
        }
    }
}
