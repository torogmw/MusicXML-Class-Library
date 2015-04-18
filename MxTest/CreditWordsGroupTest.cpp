
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "CreditWordsGroupTest.h"
#include "VirtualInstrumentTest.h"
#include "EncodingTest.h"
#include "RootTest.h"
#include "BassTest.h"
#include "DegreeTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, CreditWordsGroup )
{
    variant v = variant::one;
	CreditWordsGroupPtr object = tgenCreditWordsGroup( v );
	stringstream expected;
	tgenCreditWordsGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, CreditWordsGroup )
{
    variant v = variant::two;
	CreditWordsGroupPtr object = tgenCreditWordsGroup( v );
	stringstream expected;
	tgenCreditWordsGroupExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
    bool isOneLineOnly = true;
	object->streamContents( actual, 1, isOneLineOnly );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, CreditWordsGroup )
{
    variant v = variant::three;
	CreditWordsGroupPtr object = tgenCreditWordsGroup( v );
	stringstream expected;
	tgenCreditWordsGroupExpected( expected, 1, v );
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
    CreditWordsGroupPtr tgenCreditWordsGroup( variant v )
    {
        CreditWordsGroupPtr o = makeCreditWordsGroup();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getCreditWords()->setValue( XsString( "Matthew James Briggs" ) );
                auto l1 = makeLink();
                l1->getAttributes()->href = XlinkHref("matthewjamesbriggs.com");
                o->addLink( l1 );
                auto b1 = makeBookmark();
                b1->getAttributes()->hasElement = true;
                b1->getAttributes()->element = XsNMToken( "NMToken1" );
                o->addBookmark( b1 );
            }
                break;
            case variant::three:
            {
                o->getCreditWords()->setValue( XsString( ".mjb" ) );
                auto l1 = makeLink();
                l1->getAttributes()->href = XlinkHref("matthewjamesbriggs.com");
                o->addLink( l1 );
                auto l2 = makeLink();
                l2->getAttributes()->href = XlinkHref("somethingelse.com");
                o->addLink( l2 );
                auto b1 = makeBookmark();
                b1->getAttributes()->hasElement = true;
                b1->getAttributes()->element = XsNMToken( "NMToken2" );
                o->addBookmark( b1 );
                auto b2 = makeBookmark();
                b2->getAttributes()->hasElement = true;
                b2->getAttributes()->element = XsNMToken( "NMToken3" );
                o->addBookmark( b2 );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenCreditWordsGroupExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<credit-words></credit-words>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<link href="matthewjamesbriggs.com"/>)" );
                streamLine( os, i, R"(<bookmark id="ID" element="NMToken1"/>)" );
                streamLine( os, i, R"(<credit-words>Matthew James Briggs</credit-words>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<link href="matthewjamesbriggs.com"/>)" );
                streamLine( os, i, R"(<link href="somethingelse.com"/>)" );
                streamLine( os, i, R"(<bookmark id="ID" element="NMToken2"/>)" );
                streamLine( os, i, R"(<bookmark id="ID" element="NMToken3"/>)" );
                streamLine( os, i, R"(<credit-words>.mjb</credit-words>)", false );
            }
                break;
            default:
                break;
        }
    }
}