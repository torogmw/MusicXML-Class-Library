#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "DirectionTypeTest.h"
#include "PercussionTest.h"

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
	CHECK( ! object->hasAttributes() )
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
	CHECK( ! object->hasAttributes() )
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
                (*o->getRehearsalSet().cbegin())->setValue( XsString( "A" ) );
            }
                break;
            case variant::two:
            {
                o->setChoice( DirectionType::Choice::pedal );
                o->getPedal()->getAttributes()->hasLine = true;
                o->getPedal()->getAttributes()->line = YesNo::yes;
            }
                break;
            case variant::three:
            {
                PercussionPtr p1 = tgenPercussion( variant::two );
                PercussionPtr p2 = tgenPercussion( variant::three );
                o->setChoice( DirectionType::Choice::percussion );
                o->addPercussion( p1 );
                o->removePercussion( o->getPercussionSet().cbegin() );
                o->addPercussion( p2 );
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
                streamLine( os, i, R"(<direction-type>)" );
                streamLine( os, i+1, R"(<rehearsal>A</rehearsal>)" );
                streamLine( os, i, R"(</direction-type>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<direction-type>)" );
                streamLine( os, i+1, R"(<pedal type="start" line="yes"/>)" );
                streamLine( os, i, R"(</direction-type>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<direction-type>)" );
                tgenPercussionExpected( os, i+1, variant::two );
                os << std::endl;
                tgenPercussionExpected( os, i+1, variant::three );
                os << std::endl;
                streamLine( os, i, R"(</direction-type>)", false );
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