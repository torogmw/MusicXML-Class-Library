
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "CueNoteGroupTest.h"
#include "FullNoteGroupTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, CueNoteGroup )
{
    variant v = variant::one;
	CueNoteGroupPtr object = tgenCueNoteGroup( v );
	stringstream expected;
	tgenCueNoteGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, CueNoteGroup )
{
    variant v = variant::two;
	CueNoteGroupPtr object = tgenCueNoteGroup( v );
	stringstream expected;
	tgenCueNoteGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, CueNoteGroup )
{
    variant v = variant::three;
	CueNoteGroupPtr object = tgenCueNoteGroup( v );
	stringstream expected;
	tgenCueNoteGroupExpected( expected, 1, v );
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
    CueNoteGroupPtr tgenCueNoteGroup( variant v )
    {
        CueNoteGroupPtr o = makeCueNoteGroup();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setFullNoteGroup( tgenFullNoteGroup( v ) );
                o->setDuration( makeDuration( PositiveDivisionsValue( 123 ) ) );
                
            }
                break;
            case variant::three:
            {
                o->setFullNoteGroup( tgenFullNoteGroup( v ) );
                
                o->setDuration( makeDuration( PositiveDivisionsValue( 321 ) ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenCueNoteGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<cue/>)" );
                tgenFullNoteGroupExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<duration>1</duration>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<cue/>)" );
                tgenFullNoteGroupExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<duration>123</duration>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<cue/>)" );
                tgenFullNoteGroupExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<duration>321</duration>)", false );
            }
                break;
            default:
                break;
        }
    }
}