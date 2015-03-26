#include "TestHarness.h"
#include "MxTestHelper.h"
#include "ElementsNew.h"
#include "StickTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, Stick )
{
	Stick object;
	stringstream expected;
	tgenStickExpected( expected, 1, variant::one );
	stringstream actual;
	// object.toStream( std::cout, 1 );
	object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object.hasAttributes() )
	CHECK( object.hasContents() )
}
TEST( Test02, Stick )
{
	StickPtr object = tgenStick( variant::two );
	stringstream expected;
	tgenStickExpected( expected, 1, variant::two );
	stringstream actual;
	object->toStream( std::cout, 1 );
	// object.toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}

namespace MxTestHelpers
{
    StickPtr tgenStick( variant v )
    {
        StickPtr o = makeStick();
        switch ( v )
        {
            case variant::one:
            {
                ;
            }
                break;
            case variant::two:
            {
                o->getStickMaterial()->setValue( StickMaterialEnum::x );
                o->getStickType()->setValue( StickTypeEnum::yarn );
                o->getAttributes()->hasTip = false;
                o->getAttributes()->tip = TipDirection::southwest;

            }
                break;
            case variant::three:
            {
                o->getStickMaterial()->setValue( StickMaterialEnum::medium );
                o->getStickType()->setValue( StickTypeEnum::doubleBassDrum );
                o->getAttributes()->hasTip = true;
                o->getAttributes()->tip = TipDirection::up;
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenStickExpected( std::ostream& os, int i, variant v )
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
                streamLine( os, i, R"()" );
                streamLine( os, i+1, R"()" );
                streamLine( os, i+1, R"()" );
                streamLine( os, i+1, R"()" );
                streamLine( os, i, R"()", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"()" );
                streamLine( os, i+1, R"()" );
                streamLine( os, i+1, R"()" );
                streamLine( os, i+1, R"()" );
                streamLine( os, i, R"()", false );
            }
                break;
            default:
                break;
        }
    }
}