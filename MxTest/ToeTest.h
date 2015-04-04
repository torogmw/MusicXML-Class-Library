#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::ToePtr tgenToe( variant v );
    void tgenToeExpected( std::ostream& os, int indentLevel, variant v );
}