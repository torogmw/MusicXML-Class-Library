#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::PrintPtr tgenPrint( variant v );
    void tgenPrintExpected( std::ostream& os, int indentLevel, variant v );
}