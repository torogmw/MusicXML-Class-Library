#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::PartPtr tgenPart( variant v );
    void tgenPartExpected( std::ostream& os, int indentLevel, variant v );
}