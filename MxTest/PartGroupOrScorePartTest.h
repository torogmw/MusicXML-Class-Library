#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::PartGroupOrScorePartPtr tgenPartGroupOrScorePart( variant v );
    void tgenPartGroupOrScorePartExpected( std::ostream& os, int indentLevel, variant v );
}