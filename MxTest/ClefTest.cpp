#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, Clef )
{
	Clef object;
	stringstream expected;
	streamLine( expected, 1, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 2, R"()" );
	streamLine( expected, 1, R"()", false );
	stringstream actual;
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object.hasAttributes() )
	CHECK( object.hasContents() )
}