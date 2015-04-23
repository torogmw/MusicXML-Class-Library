
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "PartTest.h"
#include "MeasureTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Part )
{
    variant v = variant::one;
	PartPtr object = tgenPart( v );
	stringstream expected;
	tgenPartExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, Part )
{
    variant v = variant::two;
	PartPtr object = tgenPart( v );
	stringstream expected;
	tgenPartExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Part )
{
    variant v = variant::three;
	PartPtr object = tgenPart( v );
	stringstream expected;
	tgenPartExpected( expected, 1, v );
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
    PartPtr tgenPart( variant v )
    {
        PartPtr o = makePart();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getAttributes()->id = XsIDREF( "ID2" );
                o->addMeasure( tgenMeasure( v ) );
                o->removeMeasure( o->getMeasureSet().cbegin() );
                o->addMeasure( tgenMeasure( variant::three ) );
            }
                break;
            case variant::three:
            {
                o->getAttributes()->id = XsIDREF( "ID3" );
                o->addMeasure( tgenMeasure( v ) );
                o->removeMeasure( o->getMeasureSet().cbegin() );
                o->addMeasure( tgenMeasure( variant::two ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenPartExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<part id="ID">)" );
                tgenMeasureExpected( os, i+1,  v );
                os << std::endl;
                streamLine( os, i, R"(</part>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<part id="ID2">)" );
                tgenMeasureExpected( os, i+1,  v );
                os << std::endl;
                tgenMeasureExpected( os, i+1,  variant::three );
                os << std::endl;
                streamLine( os, i, R"(</part>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<part id="ID3">)" );
                tgenMeasureExpected( os, i+1,  v );
                os << std::endl;
                tgenMeasureExpected( os, i+1,  variant::two );
                os << std::endl;
                streamLine( os, i, R"(</part>)", false );
            }
                break;
            default:
                break;
        }
    }
}
