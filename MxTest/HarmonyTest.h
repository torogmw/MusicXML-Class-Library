#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::HarmonyPtr tgenHarmony( variant v );
    void tgenHarmonyExpected( std::ostream& os, int indentLevel, variant v );
}