
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "DirectionTest.h"
#include "DirectionChoiceTest.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Direction )
{
    variant v = variant::one;
	DirectionPtr object = tgenDirection( v );
	stringstream expected;
	tgenDirectionExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Direction )
{
    variant v = variant::two;
	DirectionPtr object = tgenDirection( v );
	stringstream expected;
	tgenDirectionExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Direction )
{
    variant v = variant::three;
	DirectionPtr object = tgenDirection( v );
	stringstream expected;
	tgenDirectionExpected( expected, 1, v );
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
    DirectionPtr tgenDirection( variant v )
    {
        DirectionPtr o = makeDirection();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->addDirectionChoice( tgenDirectionChoice( variant::one ) );
                o->addDirectionChoice( tgenDirectionChoice( variant::two ) );
                auto x = makeDirectionChoice();
                x->setChoice( DirectionChoice::Choice::handbell );
                x->getHandbell()->setValue( HandbellValue::gyro );
                o->addDirectionChoice( x );
            }
                break;
            case variant::three:
            {
                o->addDirectionChoice( tgenDirectionChoice( v ) );
                auto x = makeDirectionChoice();
                x->setChoice( DirectionChoice::Choice::otherDirection );
                x->getOtherDirection()->setValue( XsString( "Jump up and down" ) );
                x->getOtherDirection()->getAttributes()->hasFontStyle = true;
                x->getOtherDirection()->getAttributes()->fontStyle = FontStyle::italic;
                o->addDirectionChoice( x );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenDirectionExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<technical/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<technical>)" );
                tgenDirectionChoiceExpected( os, i+1, variant::one );
                os << std::endl;
                tgenDirectionChoiceExpected( os, i+1, variant::two );
                os << std::endl;
                streamLine( os, i+1, R"(<handbell>gyro</handbell>)" );
                streamLine( os, i, R"(</technical>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<technical>)" );
                tgenDirectionChoiceExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i+1, R"(<other-technical font-style="italic">Jump up and down</other-technical>)" );
                streamLine( os, i, R"(</technical>)", false );
            }
                break;
            default:
                break;
        }
    }
}
