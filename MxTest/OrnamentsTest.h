#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::OrnamentsPtr tgenOrnaments( variant v );
    void tgenOrnamentsExpected( std::ostream& os, int indentLevel, variant v );
}