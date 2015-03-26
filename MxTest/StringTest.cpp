#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, String )
{
	String object;
	stringstream expected;
	streamLine( expected, 1, R"(<string>1</string>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, String )
{
	String object;
    object.getAttributes()->hasColor = true;
    object.setValue( StringNumber( 3 ) );
	stringstream expected;
	streamLine( expected, 1, R"(<string color="#FFFFFF">3</string>)", false );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object.hasAttributes() )
	CHECK( object.hasContents() )
}
