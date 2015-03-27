#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "DirectionTypeTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, DirectionType )
{
    variant v = variant::one;
	DirectionTypePtr object = tgenDirectionType( v );
	stringstream expected;
	tgenDirectionTypeExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, DirectionType )
{
    variant v = variant::two;
	DirectionTypePtr object = tgenDirectionType( v );
	stringstream expected;
	tgenDirectionTypeExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, DirectionType )
{
    variant v = variant::three;
	DirectionTypePtr object = tgenDirectionType( v );
	stringstream expected;
	tgenDirectionTypeExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
namespace MxTestHelpers
{
    DirectionTypePtr tgenDirectionType( variant v )
    {
        DirectionTypePtr o = makeDirectionType();
        switch ( v )
        {
            case variant::one:
            {
                ;
            }
                break;
            case variant::two:
            {
                o->setDirectionTypeChoice( tgenDirectionTypeChoice( v ) );
                o->getAttributes()->hasValign = true;
                o->getAttributes()->valign = Valign::baseline;
            }
                break;
            case variant::three:
            {
                o->setDirectionTypeChoice( tgenDirectionTypeChoice( v ) );
                o->getAttributes()->hasHalign = true;
                o->getAttributes()->halign = LeftCenterRight::center;
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenDirectionTypeExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<percussion>)" );
                streamLine( os, i+1, R"(<glass>wind chimes</glass>)" );
                streamLine( os, i, R"(</percussion>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<percussion valign="baseline">)" );
                streamLine( os, i+1, R"(<wood>claves</wood>)" );
                streamLine( os, i, R"(</percussion>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<percussion halign="center">)" );
                streamLine( os, i+1, R"(<other-percussion>Hello</other-percussion>)" );
                streamLine( os, i, R"(</percussion>)", false );
            }
                break;
            default:
                break;
        }
    }
//    DirectionTypeChoicePtr tgenDirectionTypeChoice( variant v )
//    {
//        DirectionTypeChoicePtr o = makeDirectionTypeChoice();
//        switch ( v )
//        {
//            case variant::one:
//            {
//                o->setChoice( DirectionTypeChoice::Choice::stickType );
//            }
//                break;
//            case variant::two:
//            {
//                o->setChoice( DirectionTypeChoice::Choice::wood );
//            }
//                break;
//            case variant::three:
//            {
//                o->setChoice( DirectionTypeChoice::Choice::otherDirectionType );
//                o->getOtherDirectionType()->setValue( XsString("Hello" ) );
//            }
//                break;
//            default:
//                break;
//        }
//        return o;
//    }
}