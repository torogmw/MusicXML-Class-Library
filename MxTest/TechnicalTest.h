#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::TechnicalPtr tgenTechnical( variant v );
    void tgenTechnicalExpected( std::ostream& os, int indentLevel, variant v );
}