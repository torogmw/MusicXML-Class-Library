#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::MiscellaneousPtr tgenMiscellaneous( variant v );
    void tgenMiscellaneousExpected( std::ostream& os, int indentLevel, variant v );
}