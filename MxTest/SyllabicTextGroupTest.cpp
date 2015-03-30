
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "ElisionSyllabicGroupTest.h"
#include "ElisionSyllabicTextGroupTest.h"
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
                o->getText()->setValue( XsString( "tgenSyllabicTextGroup One" ) );
            }
                break;
            case variant::two:
            {
                o->getText()->setValue( XsString( "tgenSyllabicTextGroup Two" ) );
                o->addElisionSyllabicTextGroup( tgenElisionSyllabicTextGroup( v ) );
                o->setHasExtend( true );
            }
                break;
            case variant::three:
            {
                o->getText()->setValue( XsString( "tgenSyllabicTextGroup Three" ) );
                o->addElisionSyllabicTextGroup( tgenElisionSyllabicTextGroup( v ) );
                o->addElisionSyllabicTextGroup( tgenElisionSyllabicTextGroup( variant::one ) );
                o->setHasSyllabic( true );
                o->setHasExtend( true );
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
                
                streamLine( os, i, R"(<text>tgenSyllabicTextGroup One</text>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<text>tgenSyllabicTextGroup Two</text>)" );
                tgenElisionSyllabicTextGroupExpected( os, i, v );
                os << std::endl;
                streamLine( os, i, R"(<extend/>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<syllabic>begin</syllabic>)" );
                streamLine( os, i, R"(<text>tgenSyllabicTextGroup Three</text>)" );
                tgenElisionSyllabicTextGroupExpected( os, i, v );
                os << std::endl;
                tgenElisionSyllabicTextGroupExpected( os, i, variant::one );
                os << std::endl;
                streamLine( os, i, R"(<extend/>)", false );
            }
                break;
            default:
                break;
        }
    }
}