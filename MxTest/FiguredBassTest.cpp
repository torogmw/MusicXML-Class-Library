
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "FiguredBassTest.h"
#include "EditorialGroupTest.h"
#include "FigureTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, FiguredBass )
{
    variant v = variant::one;
	FiguredBassPtr object = tgenFiguredBass( v );
	stringstream expected;
	tgenFiguredBassExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, FiguredBass )
{
    variant v = variant::two;
	FiguredBassPtr object = tgenFiguredBass( v );
	stringstream expected;
	tgenFiguredBassExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, FiguredBass )
{
    variant v = variant::three;
	FiguredBassPtr object = tgenFiguredBass( v );
	stringstream expected;
	tgenFiguredBassExpected( expected, 1, v );
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
    FiguredBassPtr tgenFiguredBass( variant v )
    {
        FiguredBassPtr o = makeFiguredBass();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasDuration( true );
                o->getDuration()->setValue( PositiveDivisionsValue( 29 ) );
                o->addFigure( tgenFigure( variant::three ) );
                o->addFigure( tgenFigure( v ) );
                o->removeFigure( o->getFigureSet().cbegin() );
                o->setEditorialGroup( tgenEditorialGroup( v ) );
                o->getAttributes()->hasParentheses = true;
                o->getAttributes()->parentheses = YesNo::yes;
            }
                break;
            case variant::three:
            {
                o->addFigure( tgenFigure( variant::one ) );
                o->addFigure( tgenFigure( v ) );
                o->removeFigure( o->getFigureSet().cbegin() );
                o->setEditorialGroup( tgenEditorialGroup( v ) );
                o->getAttributes()->hasParentheses = true;
                o->getAttributes()->parentheses = YesNo::yes;
                o->getAttributes()->hasPrintDot = true;
                o->getAttributes()->printDot = YesNo::no;
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenFiguredBassExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<figured-bass>)" );
                streamLine( os, i+1, R"(<figure/>)" );
                streamLine( os, i, R"(</figured-bass>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<figured-bass parentheses="yes">)" );
                tgenFigureExpected( os, i+1, variant::three );
                os << std::endl;
                tgenFigureExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i+1, R"(<duration>29</duration>)" );
                tgenEditorialGroupExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</figured-bass>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<figured-bass print-dot="no" parentheses="yes">)" );
                tgenFigureExpected( os, i+1, variant::one );
                os << std::endl;
                tgenFigureExpected( os, i+1, v );
                os << std::endl;
                tgenEditorialGroupExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</figured-bass>)", false );
            }
                break;
            default:
                break;
        }
    }
}