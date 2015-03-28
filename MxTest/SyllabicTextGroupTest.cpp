
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "ElisionSyllabicGroupTest.h"
#include "
#include "SyllabicTextGroupTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, SyllabicTextGroup )
{
    variant v = variant::one;
	SyllabicTextGroupPtr object = tgenSyllabicTextGroup( v );
	stringstream expected;
	tgenSyllabicTextGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, SyllabicTextGroup )
{
    variant v = variant::two;
	SyllabicTextGroupPtr object = tgenSyllabicTextGroup( v );
	stringstream expected;
	tgenSyllabicTextGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, SyllabicTextGroup )
{
    variant v = variant::three;
	SyllabicTextGroupPtr object = tgenSyllabicTextGroup( v );
	stringstream expected;
	tgenSyllabicTextGroupExpected( expected, 1, v );
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
    SyllabicTextGroupPtr tgenSyllabicTextGroup( variant v )
    {
        SyllabicTextGroupPtr o = makeSyllabicTextGroup();
        switch ( v )
        {
            case variant::one:
            {
                o->setElisionSyllabicGroup( tgenElisionSyllabicGroup( v ) );
                o->getText()->setValue( XsString( "Brahms" ) );
            }
                break;
            case variant::two:
            {
                o->setElisionSyllabicGroup( tgenElisionSyllabicGroup( v ) );
                o->setHasElisionSyllabicGroup( true );
                o->getText()->setValue( XsString( "Beethoven" ) );
            }
                break;
            case variant::three:
            {
                o->setElisionSyllabicGroup( tgenElisionSyllabicGroup( v ) );
                o->setHasElisionSyllabicGroup( true );
                o->getText()->setValue( XsString( "Berlioz" ) );
                
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenSyllabicTextGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                
                streamLine( os, i, R"(<text>Brahms</text>)", false );
            }
                break;
            case variant::two:
            {
                tgenElisionSyllabicGroupExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<text>Beethoven</text>)", false );
            }
                break;
            case variant::three:
            {
                tgenElisionSyllabicGroupExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<text>Berlioz</text>)", false );
            }
                break;
            default:
                break;
        }
    }
}