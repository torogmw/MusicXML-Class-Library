
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "DirectionTest.h"
#include "DirectionTypeTest.h"
#include "EditorialVoiceGroupTest.h"
#include "SoundTest.h"

using namespace mx::e;
using namespace mx::t;
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
	CHECK( object->hasContents() )
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
	CHECK( object->hasAttributes() )
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
	CHECK( object->hasAttributes() )
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
                o->getAttributes()->hasDirective = true;
                o->getAttributes()->directive = YesNo::yes;
                o->addDirectionType( tgenDirectionType( v ) );
                o->removeDirectionType( o->getDirectionTypeSet().cbegin() );
                auto d = makeDirectionType();
                d->setChoice( DirectionType::Choice::coda );
                o->addDirectionType( d );
                o->setHasOffset( true );
                o->getOffset()->setValue( DivisionsValue( 3.3 ) );
                o->setEditorialVoiceDirectionGroup( tgenEditorialVoiceGroup( v ) );
            }
                break;
            case variant::three:
            {
                o->getAttributes()->hasDirective = true;
                o->getAttributes()->directive = YesNo::no;
                o->getAttributes()->hasPlacement = true;
                o->getAttributes()->placement = AboveBelow::below;
                o->addDirectionType( tgenDirectionType( v ) );
                o->removeDirectionType( o->getDirectionTypeSet().cbegin() );
                auto d = makeDirectionType();
                d->setChoice( DirectionType::Choice::dynamics );
                (*d->getDynamicsSet().cbegin())->setValue( DynamicsValue( DynamicsEnum::ffff ) );
                o->addDirectionType( d );
                o->setEditorialVoiceDirectionGroup( tgenEditorialVoiceGroup( v ) );
                o->setHasStaff( true );
                o->getStaff()->setValue( PositiveInteger( 2 ) );
                o->setHasSound( true );
                o->setSound( tgenSound( v ) );
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
                streamLine( os, i, R"(<direction>)" );
                streamLine( os, i+1, R"(<direction-type>)" );
                streamLine( os, i+2, R"(<rehearsal></rehearsal>)" );
                streamLine( os, i+1, R"(</direction-type>)" );
                streamLine( os, i, R"(</direction>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<direction directive="yes">)" );
                tgenDirectionTypeExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i+1, R"(<direction-type>)" );
                streamLine( os, i+2, R"(<coda/>)" );
                streamLine( os, i+1, R"(</direction-type>)" );
                streamLine( os, i+1, R"(<offset>3.3</offset>)" );
                tgenEditorialVoiceGroupExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</direction>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<direction placement="below" directive="no">)" );
                tgenDirectionTypeExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i+1, R"(<direction-type>)" );
                streamLine( os, i+2, R"(<dynamics>)" );
                streamLine( os, i+3, R"(<ffff/>)" );
                streamLine( os, i+2, R"(</dynamics>)" );
                streamLine( os, i+1, R"(</direction-type>)" );
                tgenEditorialVoiceGroupExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i+1, R"(<staff>2</staff>)" );
                tgenSoundExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</direction>)", false );
            }
                break;
            default:
                break;
        }
    }
}
