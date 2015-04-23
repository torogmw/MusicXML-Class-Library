#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::ScoreHeaderGroupPtr tgenScoreHeaderGroup( variant v );
    void tgenScoreHeaderGroupExpected( std::ostream& os, int indentLevel, variant v );
}