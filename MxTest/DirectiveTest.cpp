#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, Directive )
{
	Directive object;
	stringstream expected;
	streamLine( expected, 1, R"(<directive></directive>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, Directive )
{
	DirectivePtr object = makeDirective( XsString{ "Mork\nde\t\t\n\nbork" } );
    object->getAttributes()->hasLang = true;
    object->getAttributes()->hasFontFamily = true;
    object->getAttributes()->fontFamily = CommaSeparatedText{ "This Font,That Font" };
	stringstream expected;
	streamLine( expected, 1, "<directive font-family=\"This Font,That Font\" lang=\"it\">Mork\nde\t\t\n\nbork</directive>", false );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
