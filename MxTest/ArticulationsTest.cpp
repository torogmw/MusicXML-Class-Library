
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "ArticulationsTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE3_TESTS

TEST( Test01, Articulations )
{
    variant v = variant::one;
	ArticulationsPtr object = tgenArticulations( v );
	stringstream expected;
	tgenArticulationsExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Articulations )
{
    variant v = variant::two;
	ArticulationsPtr object = tgenArticulations( v );
	stringstream expected;
	tgenArticulationsExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Articulations )
{
    variant v = variant::three;
	ArticulationsPtr object = tgenArticulations( v );
	stringstream expected;
	tgenArticulationsExpected( expected, 1, v );
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
    ArticulationsChoicePtr tgenArticulationsChoice( variant v )
    {
        ArticulationsChoicePtr o = makeArticulationsChoice();
        switch ( v )
        {
            case variant::one:
            {
                o->setChoice( ArticulationsChoice::Choice::breathMark );
                o->getBreathMark()->getAttributes()->hasFontStyle = true;
                o->getBreathMark()->getAttributes()->fontStyle = FontStyle::italic;
            }
                break;
            case variant::two:
            {
                o->setChoice( ArticulationsChoice::Choice::strongAccent );
                o->getStrongAccent()->getAttributes()->hasColor = true;
                o->getStrongAccent()->getAttributes()->color = Color( 56, 90, 12 );
            }
                break;
            case variant::three:
            {
                o->setChoice( ArticulationsChoice::Choice::tenuto );
                o->getTenuto()->getAttributes()->hasPlacement = true;
                o->getTenuto()->getAttributes()->placement = AboveBelow::above;
            }
                break;
            default:
                break;
        }
        return o;
    }
    ArticulationsPtr tgenArticulations( variant v )
    {
        ArticulationsPtr o = makeArticulations();
        switch ( v )
        {
            case variant::one:
            {
                ;
            }
                break;
            case variant::two:
            {
                o->addArticulationsChoice( tgenArticulationsChoice( variant::one ) );
                o->addArticulationsChoice( tgenArticulationsChoice( variant::three ) );
            }
                break;
            case variant::three:
            {
                o->addArticulationsChoice( tgenArticulationsChoice( variant::two ) );
                o->addArticulationsChoice( tgenArticulationsChoice( variant::three ) );
                o->addArticulationsChoice( tgenArticulationsChoice( variant::one ) );
                o->addArticulationsChoice( tgenArticulationsChoice( variant::two ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenArticulationsExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<articulations/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<articulations>)" );
                streamLine( os, i+1, R"(<breath-mark font-style="italic"></breath-mark>)" );
                streamLine( os, i+1, R"(<tenuto placement="above"/>)" );
                streamLine( os, i, R"(</articulations>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<articulations>)" );
                streamLine( os, i+1, R"(<strong-accent color="#385A0C"/>)" );
                streamLine( os, i+1, R"(<tenuto placement="above"/>)" );
                streamLine( os, i+1, R"(<breath-mark font-style="italic"></breath-mark>)" );
                streamLine( os, i+1, R"(<strong-accent color="#385A0C"/>)" );
                streamLine( os, i, R"(</articulations>)", false );
            }
                break;
            default:
                break;
        }
    }
}