
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "ElisionSyllabicGroupTest.h"
#include "ElisionSyllabicTextGroupTest.h"
#include "SyllabicTextGroupTest.h"
#include "LyricTextChoiceTest.h"
#include "LyricTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, Lyric )
{
    variant v = variant::one;
	LyricPtr object = tgenLyric( v );
	stringstream expected;
	tgenLyricExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Lyric )
{
    variant v = variant::two;
	LyricPtr object = tgenLyric( v );
	stringstream expected;
	tgenLyricExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Lyric )
{
    variant v = variant::three;
	LyricPtr object = tgenLyric( v );
	stringstream expected;
	tgenLyricExpected( expected, 1, v );
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
    LyricPtr tgenLyric( variant v )
    {
        LyricPtr o = makeLyric();
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
    void tgenLyricExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                
                streamLine( os, i, R"(<laughing/>)", false );
            }
                break;
            case variant::two:
            {
                tgenSyllabicTextGroupExpected( os, i, v );
            }
                break;
            case variant::three:
            {
                tgenSyllabicTextGroupExpected( os, i, v );
            }
                break;
            default:
                break;
        }
    }
}