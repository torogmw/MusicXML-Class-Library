
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "GraceNoteGroupTest.h"
#include "FullNoteGroupTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, GraceNoteGroup )
{
    variant v = variant::one;
	GraceNoteGroupPtr object = tgenGraceNoteGroup( v );
	stringstream expected;
	tgenGraceNoteGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, GraceNoteGroup )
{
    variant v = variant::two;
	GraceNoteGroupPtr object = tgenGraceNoteGroup( v );
	stringstream expected;
	tgenGraceNoteGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, GraceNoteGroup )
{
    variant v = variant::three;
	GraceNoteGroupPtr object = tgenGraceNoteGroup( v );
	stringstream expected;
	tgenGraceNoteGroupExpected( expected, 1, v );
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
    GraceNoteGroupPtr tgenGraceNoteGroup( variant v )
    {
        GraceNoteGroupPtr o = makeGraceNoteGroup();
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
                
            }
                break;
            case variant::three:
            {
                o->setFullNoteGroup( tgenFullNoteGroup( v ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenGraceNoteGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<grace/>)" );
                tgenFullNoteGroupExpected( os, i, v );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<grace/>)" );
                tgenFullNoteGroupExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<tie type="start"/>)" );
                streamLine( os, i, R"(<tie type="stop"/>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<grace/>)" );
                tgenFullNoteGroupExpected( os, i, v );
            }
                break;
            default:
                break;
        }
    }
}