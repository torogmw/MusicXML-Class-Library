#include "TestHarness.h"
#include "MxTestHelper.h"
#include "Elements.h"
#include "MidiInstrumentTest.h"


using namespace mx::e;
using namespace mx::types;
using namespace std;
using namespace MxTestHelpers;

TEST( Test01, MidiInstrument )
{
    variant v = variant::one;
	MidiInstrumentPtr object = tgenMidiInstrument( v );
	stringstream expected;
	tgenMidiInstrumentExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, MidiInstrument )
{
    variant v = variant::two;
	MidiInstrumentPtr object = tgenMidiInstrument( v );
	stringstream expected;
	tgenMidiInstrumentExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, MidiInstrument )
{
    variant v = variant::three;
	MidiInstrumentPtr object = tgenMidiInstrument( v );
	stringstream expected;
	tgenMidiInstrumentExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
namespace MxTestHelpers
{
    MidiInstrumentPtr tgenMidiInstrument( variant v )
    {
        MidiInstrumentPtr o = makeMidiInstrument();
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
    void tgenMidiInstrumentExpected( std::ostream& os, int i, variant v )
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

                streamLine( os, i, R"(</direction-type>)", false );
            }
                break;
            default:
                break;
        }
    }
    //    MidiInstrumentChoicePtr tgenMidiInstrumentChoice( variant v )
    //    {
    //        MidiInstrumentChoicePtr o = makeMidiInstrumentChoice();
    //        switch ( v )
    //        {
    //            case variant::one:
    //            {
    //                o->setChoice( MidiInstrumentChoice::Choice::stickType );
    //            }
    //                break;
    //            case variant::two:
    //            {
    //                o->setChoice( MidiInstrumentChoice::Choice::wood );
    //            }
    //                break;
    //            case variant::three:
    //            {
    //                o->setChoice( MidiInstrumentChoice::Choice::otherMidiInstrument );
    //                o->getOtherMidiInstrument()->setValue( XsString("Hello" ) );
    //            }
    //                break;
    //            default:
    //                break;
    //        }
    //        return o;
    //    }
}