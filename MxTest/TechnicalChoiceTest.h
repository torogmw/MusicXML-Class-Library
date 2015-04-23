#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::TechnicalChoicePtr tgenTechnicalChoice( variant v );
    void tgenTechnicalChoiceExpected( std::ostream& os, int indentLevel, variant v );
}