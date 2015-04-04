#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::ArticulationsChoicePtr tgenArticulationsChoice( variant v );
    mx::e::ArticulationsPtr tgenArticulations( variant v );
    void tgenArticulationsExpected( std::ostream& os, int indentLevel, variant v );
}