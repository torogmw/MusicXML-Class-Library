#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "PlayTest.h"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, Play )
{
    variant v = variant::one;
	PlayPtr object = tgenPlay( v );
	stringstream expected;
	tgenPlayExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Play )
{
    variant v = variant::two;
	PlayPtr object = tgenPlay( v );
	stringstream expected;
	tgenPlayExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Play )
{
    variant v = variant::three;
	PlayPtr object = tgenPlay( v );
	stringstream expected;
	tgenPlayExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
namespace MxTestHelpers
{
    PlayPtr tgenPlay( variant v )
    {
        PlayPtr o = makePlay();
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
    void tgenPlayExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<midi-instrument id="ID"/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<midi-instrument id="M1">)" );
                streamLine( os, i+1, R"(<midi-channel>2</midi-channel>)" );
                streamLine( os, i+1, R"(<midi-name>Trumpet</midi-name>)" );
                streamLine( os, i+1, R"(<midi-bank>3</midi-bank>)" );
                streamLine( os, i+1, R"(<volume>55.5</volume>)" );
                streamLine( os, i+1, R"(<pan>-88.6</pan>)" );
                streamLine( os, i, R"(</midi-instrument>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<midi-instrument id="X2">)" );
                streamLine( os, i+1, R"(<midi-channel>3</midi-channel>)" );
                streamLine( os, i+1, R"(<midi-name>Bassoon</midi-name>)" );
                streamLine( os, i+1, R"(<midi-bank>4</midi-bank>)" );
                streamLine( os, i+1, R"(<midi-unpitched>97</midi-unpitched>)" );
                streamLine( os, i+1, R"(<volume>0.123</volume>)" );
                streamLine( os, i+1, R"(<elevation>-33.333</elevation>)" );
                streamLine( os, i, R"(</midi-instrument>)", false );
            }
                break;
            default:
                break;
        }
    }
}