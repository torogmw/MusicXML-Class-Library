#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::ScorePartwisePtr tgenScorePartwise( variant v );
    void tgenScorePartwiseExpected( std::ostream& os, int indentLevel, variant v );
}