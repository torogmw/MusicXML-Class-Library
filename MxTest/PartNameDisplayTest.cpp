#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "PartNameDisplayTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, PartNameDisplay )
{
    variant v = variant::one;
	PartNameDisplayPtr object = tgenPartNameDisplay( v );
	stringstream expected;
	tgenPartNameDisplayExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, PartNameDisplay )
{
	PartNameDisplay object;
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

namespace MxTestHelpers
{
    PartNameDisplayPtr tgenPartNameDisplay( variant v )
    {
        PartNameDisplayPtr o = makePartNameDisplay();
        switch ( v )
        {
            case variant::one:
            {
                ;
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
    void tgenPartNameDisplayExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<stick>)" );
                streamLine( os, i+1, R"(<stick-type>yarn</stick-type>)" );
                streamLine( os, i+1, R"(<stick-material>medium</stick-material>)" );
                streamLine( os, i, R"(</stick>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<stick tip="southwest">)" );
                streamLine( os, i+1, R"(<stick-type>xylophone</stick-type>)" );
                streamLine( os, i+1, R"(<stick-material>x</stick-material>)" );
                streamLine( os, i, R"(</stick>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<stick tip="up">)" );
                streamLine( os, i+1, R"(<stick-type>double bass drum</stick-type>)" );
                streamLine( os, i+1, R"(<stick-material>shaded</stick-material>)" );
                streamLine( os, i, R"(</stick>)", false );
            }
                break;
            default:
                break;
        }
    }
}