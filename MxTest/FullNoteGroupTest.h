#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::FullNoteGroupPtr tgenFullNoteGroup( variant v );
    void tgenFullNoteGroupExpected( std::ostream& os, int indentLevel, variant v );
}