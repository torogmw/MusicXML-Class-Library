#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::PartGroupPtr tgenPartGroup( variant v );
    void tgenPartGroupExpected( std::ostream& os, int indentLevel, variant v );
}