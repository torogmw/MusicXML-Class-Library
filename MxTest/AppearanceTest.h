#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::AppearancePtr tgenAppearance( variant v );
    void tgenAppearanceExpected( std::ostream& os, int indentLevel, variant v );
}