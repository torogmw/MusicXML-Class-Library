
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "BarlineTest.h"
#include "EditorialGroupTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Barline )
{
    variant v = variant::one;
	BarlinePtr object = tgenBarline( v );
	stringstream expected;
	tgenBarlineExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Barline )
{
    variant v = variant::two;
	BarlinePtr object = tgenBarline( v );
	stringstream expected;
	tgenBarlineExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Barline )
{
    variant v = variant::three;
	BarlinePtr object = tgenBarline( v );
	stringstream expected;
	tgenBarlineExpected( expected, 1, v );
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
    BarlinePtr tgenBarline( variant v )
    {
        BarlinePtr o = makeBarline();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setEditorialGroup( tgenEditorialGroup( v ) );
                o->setHasCoda( true );
                o->getCoda()->getAttributes()->hasFontFamily = true;
                o->getCoda()->getAttributes()->fontFamily = CommaSeparatedText( "bish,and,bones" );
                o->addFermata( makeFermata() );
                o->getAttributes()->hasCoda = true;
                o->getAttributes()->coda = XsToken( "Loda" );
                
            }
                break;
            case variant::three:
            {
                o->getAttributes()->hasLocation = true;
                o->setHasWavyLine( true );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenBarlineExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<barline/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<barline coda="Loda">)" );
                tgenEditorialGroupExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i+1, R"(<coda font-family="bish,and,bones"/>)" );
                streamLine( os, i+1, R"(<fermata>normal</fermata>)" );
                streamLine( os, i, R"(</barline>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<barline location="right">)" );
                streamLine( os, i+1, R"(<wavy-line type="start"/>)" );
                streamLine( os, i, R"(</barline>)", false );
            }
                break;
            default:
                break;
        }
    }
}