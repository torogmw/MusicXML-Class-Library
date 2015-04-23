#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::BendChoicePtr tgenBendChoice( variant v );
    void tgenBendChoiceExpected( std::ostream& os, int indentLevel, variant v );
}