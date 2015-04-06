
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "IdentificationTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Identification )
{
    variant v = variant::one;
	IdentificationPtr object = tgenIdentification( v );
	stringstream expected;
	tgenIdentificationExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, Identification )
{
    variant v = variant::two;
	IdentificationPtr object = tgenIdentification( v );
	stringstream expected;
	tgenIdentificationExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Identification )
{
    variant v = variant::three;
	IdentificationPtr object = tgenIdentification( v );
	stringstream expected;
	tgenIdentificationExpected( expected, 1, v );
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
    IdentificationPtr tgenIdentification( variant v )
    {
        IdentificationPtr o = makeIdentification();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {

            }
                break;
            case variant::three:
            {

            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenIdentificationExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<group-abbreviation-display>)" );
                streamLine( os, i+1, R"(<display-text></display-text>)" );
                streamLine( os, i, R"(</group-abbreviation-display>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<group-abbreviation-display print-object="no">)" );
                streamLine( os, i+1, R"(<accidental-text>double-sharp</accidental-text>)" );
                streamLine( os, i, R"(</group-abbreviation-display>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<group-abbreviation-display>)" );
                streamLine( os, i+1, R"(<display-text xml:space="preserve">My Display String!</display-text>)" );
                streamLine( os, i, R"(</group-abbreviation-display>)", false );
            }
                break;
            default:
                break;
        }
    }
}