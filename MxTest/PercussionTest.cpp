#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "PercussionTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, Percussion )
{
    variant v = variant::one;
	PercussionPtr object = tgenPercussion( v );
	stringstream expected;
	tgenPercussionExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, Percussion )
{
    variant v = variant::two;
	PercussionPtr object = tgenPercussion( v );
	stringstream expected;
	tgenPercussionExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Percussion )
{
    variant v = variant::three;
	PercussionPtr object = tgenPercussion( v );
	stringstream expected;
	tgenPercussionExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
namespace MxTestHelpers
{
    PercussionPtr tgenPercussion( variant v )
    {
        PercussionPtr o = makePercussion();
        switch ( v )
        {
            case variant::one:
            {
                ;
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
    void tgenPercussionExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<part-name-display></part-name-display>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<part-name-display print-object="no">)" );
                streamLine( os, i+1, R"(<accidental-text enclosure="oval">flat-flat</accidental-text>)" );
                streamLine( os, i+1, R"(<display-text justify="center">two</display-text>)" );
                streamLine( os, i, R"(</part-name-display>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<part-name-display print-object="yes">)" );
                streamLine( os, i+1, R"(<display-text justify="center">two</display-text>)" );
                streamLine( os, i+1, R"(<display-text font-weight="bold" halign="right">three</display-text>)" );
                streamLine( os, i+1, R"(<display-text justify="center">two</display-text>)" );
                streamLine( os, i+1, R"(<display-text font-weight="bold" halign="right">three</display-text>)" );
                streamLine( os, i+1, R"(<display-text justify="center">two</display-text>)" );
                streamLine( os, i+1, R"(<accidental-text enclosure="oval">flat-flat</accidental-text>)" );
                streamLine( os, i, R"(</part-name-display>)", false );
            }
                break;
            default:
                break;
        }
    }
    PercussionChoicePtr tgenPercussionChoice( variant v )
    {
        PercussionChoicePtr o = makePercussionChoice();
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
}