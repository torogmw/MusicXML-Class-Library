
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "ElisionSyllabicGroupTest.h"
#include "ElisionSyllabicTextGroupTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, ElisionSyllabicTextGroup )
{
    variant v = variant::one;
	ElisionSyllabicTextGroupPtr object = tgenElisionSyllabicTextGroup( v );
	stringstream expected;
	tgenElisionSyllabicTextGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, ElisionSyllabicTextGroup )
{
    variant v = variant::two;
	ElisionSyllabicTextGroupPtr object = tgenElisionSyllabicTextGroup( v );
	stringstream expected;
	tgenElisionSyllabicTextGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, ElisionSyllabicTextGroup )
{
    variant v = variant::three;
	ElisionSyllabicTextGroupPtr object = tgenElisionSyllabicTextGroup( v );
	stringstream expected;
	tgenElisionSyllabicTextGroupExpected( expected, 1, v );
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
    ElisionSyllabicTextGroupPtr tgenElisionSyllabicTextGroup( variant v )
    {
        ElisionSyllabicTextGroupPtr o = makeElisionSyllabicTextGroup();
        switch ( v )
        {
            case variant::one:
            {
                o->getElision()->setValue( XsString( "A" ) );
            }
                break;
            case variant::two:
            {
                o->getElision()->setValue( XsString( "B" ) );
                o->setHasSyllabic( true );
                o->getSyllabic()->setValue( SyllabicEnum::single );
            }
                break;
            case variant::three:
            {
                o->getElision()->setValue( XsString( "C" ) );
                o->setHasSyllabic( true );
                o->getSyllabic()->setValue( SyllabicEnum::middle );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenElisionSyllabicTextGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                
                streamLine( os, i, R"(<elision>A</elision>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<elision>B</elision>)" );
                streamLine( os, i, R"(<syllabic>single</syllabic>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<elision>C</elision>)" );
                streamLine( os, i, R"(<syllabic>middle</syllabic>)", false );
            }
                break;
            default:
                break;
        }
    }
}