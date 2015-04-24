
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "PartwisePartTest.h"
#include "PartwiseMeasureTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, PartwisePart )
{
    variant v = variant::one;
	PartwisePartPtr object = tgenPartwisePart( v );
	stringstream expected;
	tgenPartwisePartExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, PartwisePart )
{
    variant v = variant::two;
	PartwisePartPtr object = tgenPartwisePart( v );
	stringstream expected;
	tgenPartwisePartExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, PartwisePart )
{
    variant v = variant::three;
	PartwisePartPtr object = tgenPartwisePart( v );
	stringstream expected;
	tgenPartwisePartExpected( expected, 1, v );
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
    PartwisePartPtr tgenPartwisePart( variant v )
    {
        PartwisePartPtr o = makePartwisePart();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getAttributes()->id = XsIDREF( "ID2" );
                o->addPartwiseMeasure( tgenPartwiseMeasure( v ) );
                o->removePartwiseMeasure( o->getPartwiseMeasureSet().cbegin() );
                o->addPartwiseMeasure( tgenPartwiseMeasure( variant::three ) );
            }
                break;
            case variant::three:
            {
                o->getAttributes()->id = XsIDREF( "ID3" );
                o->addPartwiseMeasure( tgenPartwiseMeasure( v ) );
                o->removePartwiseMeasure( o->getPartwiseMeasureSet().cbegin() );
                o->addPartwiseMeasure( tgenPartwiseMeasure( variant::two ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenPartwisePartExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<part id="ID">)" );
                tgenPartwiseMeasureExpected( os, i+1,  v );
                os << std::endl;
                streamLine( os, i, R"(</part>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<part id="ID2">)" );
                tgenPartwiseMeasureExpected( os, i+1,  v );
                os << std::endl;
                tgenPartwiseMeasureExpected( os, i+1,  variant::three );
                os << std::endl;
                streamLine( os, i, R"(</part>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<part id="ID3">)" );
                tgenPartwiseMeasureExpected( os, i+1,  v );
                os << std::endl;
                tgenPartwiseMeasureExpected( os, i+1,  variant::two );
                os << std::endl;
                streamLine( os, i, R"(</part>)", false );
            }
                break;
            default:
                break;
        }
    }
}
