#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::ScordaturaPtr tgenScordatura( variant v );
    void tgenScordaturaExpected( std::ostream& os, int indentLevel, variant v );
}