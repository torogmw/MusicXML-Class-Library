#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::TimewisePartPtr tgenTimewisePart( variant v );
    void tgenTimewisePartExpected( std::ostream& os, int indentLevel, variant v );
}