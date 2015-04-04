#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::DisplayStepOctaveGroupPtr tgenDisplayStepOctaveGroup( variant v );
    void tgenDisplayStepOctaveGroupExpected( std::ostream& os, int indentLevel, variant v );
}