
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "NormalNoteGroupTest.h"
#include "FullNoteGroupTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, NormalNoteGroup )
{
    variant v = variant::one;
	NormalNoteGroupPtr object = tgenNormalNoteGroup( v );
	stringstream expected;
	tgenNormalNoteGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, NormalNoteGroup )
{
    variant v = variant::two;
	NormalNoteGroupPtr object = tgenNormalNoteGroup( v );
	stringstream expected;
	tgenNormalNoteGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, NormalNoteGroup )
{
    variant v = variant::three;
	NormalNoteGroupPtr object = tgenNormalNoteGroup( v );
	stringstream expected;
	tgenNormalNoteGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    NormalNoteGroupPtr tgenNormalNoteGroup( variant v )
    {
        NormalNoteGroupPtr o = makeNormalNoteGroup();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setFullNoteGroup( tgenFullNoteGroup( v ) );
                auto start = makeTie();
                start->getAttributes()->type = StartStop::start;
                auto stop = makeTie();
                stop->getAttributes()->type = StartStop::stop;
                o->addTie( start );
                o->addTie( stop );
                o->addTie( stop ); // has no affect //
                o->getDuration()->setValue( PositiveDivisionsValue( 456 ) );
            }
                break;
            case variant::three:
            {
                o->setFullNoteGroup( tgenFullNoteGroup( v ) );
                o->getDuration()->setValue( PositiveDivisionsValue( 654 ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenNormalNoteGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                tgenFullNoteGroupExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<duration>1</duration>)", false );
            }
                break;
            case variant::two:
            {
                tgenFullNoteGroupExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<duration>456</duration>)" );
                streamLine( os, i, R"(<tie type="start"/>)" );
                streamLine( os, i, R"(<tie type="stop"/>)", false );
            }
                break;
            case variant::three:
            {
                tgenFullNoteGroupExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<duration>654</duration>)", false );
            }
                break;
            default:
                break;
        }
    }
}