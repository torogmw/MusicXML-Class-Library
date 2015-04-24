
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "DocumentPartwiseTest.h"
#include "ScorePartwiseTest.h"
#include "DocumentHeaderTest.h"


using namespace mx::e;
using namespace mx::d;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE5_TESTS

TEST( Test01, DocumentPartwise )
{
    variant v = variant::one;
	DocumentPartwisePtr object = tgenDocumentPartwise( v );
	stringstream expected;
	tgenDocumentPartwiseExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, DocumentPartwise )
{
    variant v = variant::two;
	DocumentPartwisePtr object = tgenDocumentPartwise( v );
	stringstream expected;
	tgenDocumentPartwiseExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, DocumentPartwise )
{
    variant v = variant::three;
	DocumentPartwisePtr object = tgenDocumentPartwise( v );
	stringstream expected;
	tgenDocumentPartwiseExpected( expected, 1, v );
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
    DocumentPartwisePtr tgenDocumentPartwise( variant v )
    {
        DocumentPartwisePtr o = makeDocumentPartwise();
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
                o->addPartwisePart( tgenPartwisePart( v ) );
                o->removePartwisePart( o->getPartwisePartSet().cbegin() );
            }
                break;
            case variant::three:
            {
                o->setScoreHeaderGroup( tgenScoreHeaderGroup( v ) );
                o->addPartwisePart( tgenPartwisePart( v ) );
                o->removePartwisePart( o->getPartwisePartSet().cbegin() );
                o->addPartwisePart( tgenPartwisePart( variant::one ) );
                o->addPartwisePart( tgenPartwisePart( variant::two ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenDocumentPartwiseExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<score-partwise>)" );
                tgenScoreHeaderGroupExpected( os, i+1,  v );
                os << std::endl;
                tgenPartwisePartExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</score-partwise>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<score-partwise version="3.0">)" );
                tgenScoreHeaderGroupExpected( os, i+1,  v );
                os << std::endl;
                tgenPartwisePartExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</score-partwise>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<score-partwise>)" );
                tgenScoreHeaderGroupExpected( os, i+1,  v );
                os << std::endl;
                tgenPartwisePartExpected( os, i+1, v );
                os << std::endl;
                tgenPartwisePartExpected( os, i+1, variant::one );
                os << std::endl;
                tgenPartwisePartExpected( os, i+1, variant::two );
                os << std::endl;
                streamLine( os, i, R"(</score-partwise>)", false );
            }
                break;
            default:
                break;
        }
    }
}
