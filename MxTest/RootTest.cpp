
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "RootTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Root )
{
    variant v = variant::one;
	RootPtr object = tgenRoot( v );
	stringstream expected;
	tgenRootExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Root )
{
    variant v = variant::two;
	RootPtr object = tgenRoot( v );
	stringstream expected;
	tgenRootExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Root )
{
    variant v = variant::three;
	RootPtr object = tgenRoot( v );
	stringstream expected;
	tgenRootExpected( expected, 1, v );
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
    RootPtr tgenRoot( variant v )
    {
        RootPtr o = makeRoot();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasVirtualName( true );
                o->getVirtualName()->setValue( XsString( "VI1" ) );
            }
                break;
            case variant::three:
            {
                o->setHasVirtualName( true );
                o->getVirtualName()->setValue( XsString( "VI2" ) );
                o->setHasVirtualLibrary( true );
                o->getVirtualLibrary()->setValue( XsString( "VL2" ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenRootExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<virtual-instrument/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<virtual-instrument>)" );
                streamLine( os, i+1, R"(<virtual-name>VI1</virtual-name>)" );
                streamLine( os, i, R"(</virtual-instrument>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<virtual-instrument>)" );
                streamLine( os, i+1, R"(<virtual-library>VL2</virtual-library>)" );
                streamLine( os, i+1, R"(<virtual-name>VI2</virtual-name>)" );
                streamLine( os, i, R"(</virtual-instrument>)", false );
            }
                break;
            default:
                break;
        }
    }
}