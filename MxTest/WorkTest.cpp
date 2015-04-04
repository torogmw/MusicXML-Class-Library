
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "WorkTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Work )
{
    variant v = variant::one;
	WorkPtr object = tgenWork( v );
	stringstream expected;
	tgenWorkExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Work )
{
    variant v = variant::two;
	WorkPtr object = tgenWork( v );
	stringstream expected;
	tgenWorkExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Work )
{
    variant v = variant::three;
	WorkPtr object = tgenWork( v );
	stringstream expected;
	tgenWorkExpected( expected, 1, v );
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
    WorkPtr tgenWork( variant v )
    {
        WorkPtr o = makeWork();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->setHasWorkTitle( true );
                o->getWorkTitle()->setValue( XsString( "The Incident at Ezinar" ) );
            }
                break;
            case variant::three:
            {
                o->setHasWorkTitle( true );
                o->getWorkTitle()->setValue( XsString( "Freezing Pieces" ) );
                o->setHasWorkNumber( true );
                o->getWorkNumber()->setValue( XsString( "1" ) );
                o->setHasOpus( true );
                o->getOpus()->getAttributes()->href = XsAnyUri( "//Macintosh HD/SomeFolder/SomeFile.xml" );
                o->getOpus()->getAttributes()->hasType = true;
                o->getOpus()->getAttributes()->hasActuate = true;
                o->getOpus()->getAttributes()->actuate = XlinkActuate::onRequest;
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenWorkExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<work/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<work>)" );
                streamLine( os, i+1, R"(<work-title>The Incident at Ezinar</work-title>)" );
                streamLine( os, i, R"(</work>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<work>)" );
                streamLine( os, i+1, R"(<work-number>1</work-number>)" );
                streamLine( os, i+1, R"(<work-title>Freezing Pieces</work-title>)" );
                streamLine( os, i+1, R"(<opus href="//Macintosh HD/SomeFolder/SomeFile.xml" type="simple" actuate="onRequest"/>)" );
                streamLine( os, i, R"(</work>)", false );
            }
                break;
            default:
                break;
        }
    }
}