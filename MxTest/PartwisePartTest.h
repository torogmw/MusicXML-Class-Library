#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::PartwisePartPtr tgenPartwisePart( variant v );
    void tgenPartwisePartExpected( std::ostream& os, int indentLevel, variant v );
}