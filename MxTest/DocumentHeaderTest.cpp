
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "DocumentHeaderTest.h"


using namespace mx::d;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE5_TESTS

TEST( Test01, DocumentHeader )
{
	stringstream expected;
	stringstream actual;
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )

}

#endif
namespace MxTestHelpers
{
    DocumentHeaderPtr tgenDocumentHeader( variant v )
    {
        DocumentHeaderPtr o;// = makeDocumentHeader();
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
    void tgenDocumentHeaderExpected( std::ostream& os, int i, variant v )
    {
        
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
    }
}
