#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::NormalNoteGroupPtr tgenNormalNoteGroup( variant v );
    void tgenNormalNoteGroupExpected( std::ostream& os, int indentLevel, variant v );
}