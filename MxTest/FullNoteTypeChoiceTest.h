#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::FullNoteTypeChoicePtr tgenFullNoteTypeChoice( variant v );
    void tgenFullNoteTypeChoiceExpected( std::ostream& os, int indentLevel, variant v );
}