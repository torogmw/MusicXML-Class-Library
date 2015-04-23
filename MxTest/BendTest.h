#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::BendPtr tgenBend( variant v );
    void tgenBendExpected( std::ostream& os, int indentLevel, variant v );
}