#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, AccordionRegistration )
{
	AccordionRegistration object;
	stringstream expected;
	streamLine( expected, 1, R"(<accordion-registration/>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( ! object.hasContents() )
}
TEST( Test02, AccordionRegistration )
{
	AccordionRegistration object;
    object.getAttributes()->hasColor = true;
    object.getAttributes()->hasValign = true;
    object.getAttributes()->valign = Valign::baseline;
    object.setHasAccordionHigh( true );
    object.setHasAccordionMiddle( true );
    object.setHasAccordionLow( true );
    object.getAccordionMiddle()->setValue( AccordionMiddleValue{ 2 } );
	stringstream expected;
	streamLine( expected, 1, R"(<accordion-registration color="#FFFFFF" valign="baseline">)" );
	streamLine( expected, 2, R"(<accordion-high/>)" );
	streamLine( expected, 2, R"(<accordion-middle>2</accordion-middle>)" );
	streamLine( expected, 2, R"(<accordion-low/>)" );
	streamLine( expected, 1, R"(</accordion-registration>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object.hasAttributes() )
	CHECK( object.hasContents() )
}
