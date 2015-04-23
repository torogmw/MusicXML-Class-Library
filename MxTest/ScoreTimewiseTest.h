#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::ScoreTimewisePtr tgenScoreTimewise( variant v );
    void tgenScoreTimewiseExpected( std::ostream& os, int indentLevel, variant v );
}