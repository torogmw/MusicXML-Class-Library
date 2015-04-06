#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::PartAbbreviationDisplayPtr tgenPartAbbreviationDisplay( variant v );
    void tgenPartAbbreviationDisplayExpected( std::ostream& os, int indentLevel, variant v );
}