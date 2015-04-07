#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::ScoreInstrumentPtr tgenScoreInstrument( variant v );
    void tgenScoreInstrumentExpected( std::ostream& os, int indentLevel, variant v );
}