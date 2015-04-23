#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::MeasurePtr tgenMeasure( variant v );
    void tgenMeasureExpected( std::ostream& os, int indentLevel, variant v );
}