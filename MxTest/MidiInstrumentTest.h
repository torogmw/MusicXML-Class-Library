#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::MidiInstrumentPtr tgenMidiInstrument( variant v );
    void tgenMidiInstrumentExpected( std::ostream& os, int indentLevel, variant v );
}