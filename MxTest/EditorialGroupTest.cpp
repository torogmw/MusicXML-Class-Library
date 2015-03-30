
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "EditorialGroupTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, EditorialGroup )
{
    variant v = variant::one;
	EditorialGroupPtr object = tgenEditorialGroup( v );
	stringstream expected;
	tgenEditorialGroupExpected( expected, 0, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	bool isOneLineOnly = true;
	object->streamContents( actual, 0, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, EditorialGroup )
{
    variant v = variant::two;
	EditorialGroupPtr object = tgenEditorialGroup( v );
	stringstream expected;
	tgenEditorialGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, EditorialGroup )
{
    variant v = variant::three;
	EditorialGroupPtr object = tgenEditorialGroup( v );
	stringstream expected;
	tgenEditorialGroupExpected( expected, 1, v );
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
    EditorialGroupPtr tgenEditorialGroup( variant v )
    {
        EditorialGroupPtr o = makeEditorialGroup();
        switch ( v )
        {
            case variant::one:
            {
            }
                break;
            case variant::two:
            {
                o->setHasLevel( true );
                o->getLevel()->setValue( XsString( "LevelTwo" ) );
                o->setHasFootnote( true );
                o->getFootnote()->setValue( XsString( "FootNoteTwo" ) );
            }
                break;
            case variant::three:
            {
                o->setHasFootnote( true );
                o->getFootnote()->setValue( XsString( "FootNoteThree" ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenEditorialGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"()", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<footnote>FootNoteTwo</footnote>)" );
                streamLine( os, i, R"(<level>LevelTwo</level>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<footnote>FootNoteThree</footnote>)", false );
            }
                break;
            default:
                break;
        }
    }
}