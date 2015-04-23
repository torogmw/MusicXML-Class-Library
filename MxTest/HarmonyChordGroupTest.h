#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::HarmonyChordGroupPtr tgenHarmonyChordGroup( variant v );
    void tgenHarmonyChordGroupExpected( std::ostream& os, int indentLevel, variant v );
}