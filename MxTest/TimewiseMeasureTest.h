#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::TimewiseMeasurePtr tgenTimewiseMeasure( variant v );
    void tgenTimewiseMeasureExpected( std::ostream& os, int indentLevel, variant v );
}