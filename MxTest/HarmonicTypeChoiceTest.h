#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::HarmonicTypeChoicePtr tgenHarmonicTypeChoice( variant v );
    void tgenHarmonicTypeChoiceExpected( std::ostream& os, int indentLevel, variant v );
}