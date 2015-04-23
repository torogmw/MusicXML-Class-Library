#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::HarmonicPtr tgenHarmonic( variant v );
    void tgenHarmonicExpected( std::ostream& os, int indentLevel, variant v );
}