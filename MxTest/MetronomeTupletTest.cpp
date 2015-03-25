#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, MetronomeTuplet )
{
	MetronomeTuplet object;
	stringstream expected;
	streamLine( expected, 1, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 1, R"()", false );
	stringstream actual;
	object.toStream( std::cout, 1 );
	// object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, MetronomeTuplet )
{
	MetronomeTuplet object;
	stringstream expected;
	streamLine( expected, 1, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 1, R"()", false );
	stringstream actual;
	object.toStream( std::cout, 1 );
	// object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object.hasAttributes() )
	CHECK( object.hasContents() )
}
