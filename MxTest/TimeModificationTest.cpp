
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "TimeModificationTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, TimeModification )
{
    variant v = variant::one;
	TimeModificationPtr object = tgenTimeModification( v );
	stringstream expected;
	tgenTimeModificationExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, TimeModification )
{
    variant v = variant::two;
	TimeModificationPtr object = tgenTimeModification( v );
	stringstream expected;
	tgenTimeModificationExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, TimeModification )
{
    variant v = variant::three;
	TimeModificationPtr object = tgenTimeModification( v );
	stringstream expected;
	tgenTimeModificationExpected( expected, 1, v );
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
    NormalTypeNormalDotGroupPtr tgenNormalTypeNormalDotGroup( variant v )
    {
        NormalTypeNormalDotGroupPtr o = makeNormalTypeNormalDotGroup();
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
    TimeModificationPtr tgenTimeModification( variant v )
    {
        TimeModificationPtr o = makeTimeModification();
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
    void tgenTimeModificationExpected( std::ostream& os, int i, variant v )
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