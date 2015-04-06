#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::ArrowPtr tgenArrow( variant v );
    void tgenArrowExpected( std::ostream& os, int indentLevel, variant v );
}