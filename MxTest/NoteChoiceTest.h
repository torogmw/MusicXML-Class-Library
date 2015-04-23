#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::NoteChoicePtr tgenNoteChoice( variant v );
    void tgenNoteChoiceExpected( std::ostream& os, int indentLevel, variant v );
}