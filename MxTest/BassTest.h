#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::BassPtr tgenBass( variant v );
    void tgenBassExpected( std::ostream& os, int indentLevel, variant v );
}