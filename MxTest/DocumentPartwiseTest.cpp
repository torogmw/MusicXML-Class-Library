
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "DocumentPartwiseTest.h"
#include "ScorePartwiseTest.h"
#include "DocumentHeaderTest.h"


using namespace mx::e;
using namespace mx::d;
using namespace mx::t;
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
	object->toStream( actual );
	CHECK_EQUAL( expected.str(), actual.str() )
}
TEST( Test02, DocumentPartwise )
{
    variant v = variant::two;
	DocumentPartwisePtr object = tgenDocumentPartwise( v );
	stringstream expected;
	tgenDocumentPartwiseExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual );
	CHECK_EQUAL( expected.str(), actual.str() )
}
TEST( Test03, DocumentPartwise )
{
    variant v = variant::three;
	DocumentPartwisePtr object = tgenDocumentPartwise( v );
	stringstream expected;
	tgenDocumentPartwiseExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual );
	CHECK_EQUAL( expected.str(), actual.str() )
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
                o->setScorePartwise( tgenScorePartwise( v ) );
            }
                break;
            case variant::three:
            {
                o->setScorePartwise( tgenScorePartwise( v ) );
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
                tgenDocumentHeaderExpected( os, DocumentType::partwise );
                os << std::endl;
                tgenScorePartwiseExpected( os, 0, v );
            }
                break;
            case variant::two:
            {
                tgenDocumentHeaderExpected( os, DocumentType::partwise );
                os << std::endl;
                tgenScorePartwiseExpected( os, 0, v );
            }
                break;
            case variant::three:
            {
                tgenDocumentHeaderExpected( os, DocumentType::partwise );
                os << std::endl;
                tgenScorePartwiseExpected( os, 0, v );
            }
                break;
            default:
                break;
        }
    }
}
