#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::MeasureLayoutPtr tgenMeasureLayout( variant v );
    void tgenMeasureLayoutExpected( std::ostream& os, int indentLevel, variant v );
}