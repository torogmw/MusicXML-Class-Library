#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::FiguredBassPtr tgenFiguredBass( variant v );
    void tgenFiguredBassExpected( std::ostream& os, int indentLevel, variant v );
}