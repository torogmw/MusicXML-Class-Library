#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::GraceNoteGroupPtr tgenGraceNoteGroup( variant v );
    void tgenGraceNoteGroupExpected( std::ostream& os, int indentLevel, variant v );
}