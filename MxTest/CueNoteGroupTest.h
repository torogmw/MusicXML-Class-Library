#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::CueNoteGroupPtr tgenCueNoteGroup( variant v );
    void tgenCueNoteGroupExpected( std::ostream& os, int indentLevel, variant v );
}