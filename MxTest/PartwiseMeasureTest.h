#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::PartwiseMeasurePtr tgenPartwiseMeasure( variant v );
    void tgenPartwiseMeasureExpected( std::ostream& os, int indentLevel, variant v );
}