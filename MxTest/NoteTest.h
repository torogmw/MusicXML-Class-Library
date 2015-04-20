#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::NotePtr tgenNote( variant v );
    void tgenNoteExpected( std::ostream& os, int indentLevel, variant v );
}