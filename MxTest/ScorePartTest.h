#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::ScorePartPtr tgenScorePart( variant v );
    void tgenScorePartExpected( std::ostream& os, int indentLevel, variant v );
}