
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "FigureTest.h"
#include "MidiInstrumentTest.h"
/* #include "MidiDeviceTest.cpp" */


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, Figure )
{
    variant v = variant::one;
	FigurePtr object = tgenFigure( v );
	stringstream expected;
	tgenFigureExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Figure )
{
    variant v = variant::two;
	FigurePtr object = tgenFigure( v );
	stringstream expected;
	tgenFigureExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Figure )
{
    variant v = variant::three;
	FigurePtr object = tgenFigure( v );
	stringstream expected;
	tgenFigureExpected( expected, 1, v );
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
    FigurePtr tgenFigure( variant v )
    {
        FigurePtr o = makeFigure();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasExtend( true );
                o->setHasPrefix( true );
                o->getExtend()->getAttributes()->hasType = true;
                o->getPrefix()->setValue( XsString( "-" ) );
            }
                break;
            case variant::three:
            {
                o->setHasExtend( true );
                o->setHasPrefix( true );
                o->setHasSuffix( true );
                o->setHasFigureNumber( true );
                o->getFigureNumber()->setValue( XsString( "xx" ) );
                o->getExtend()->getAttributes()->hasType = true;
                o->getPrefix()->setValue( XsString( "-" ) );
                o->getSuffix()->setValue( XsString( "post" ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenFigureExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<figure/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<figure>)" );
                streamLine( os, i+1, R"(<prefix>-</prefix>)" );
                streamLine( os, i+1, R"(<extend type="start"/>)" );
                streamLine( os, i, R"(</figure>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<figure>)" );
                streamLine( os, i+1, R"(<prefix>-</prefix>)" );
                streamLine( os, i+1, R"(<figure-number>xx</figure-number>)" );
                streamLine( os, i+1, R"(<suffix>post</suffix>)" );
                streamLine( os, i+1, R"(<extend type="start"/>)" );
                streamLine( os, i, R"(</figure>)", false );
            }
                break;
            default:
                break;
        }
    }
}