#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::StickPtr tgenStick( variant v );
    void tgenStickExpected( std::ostream& os, int indentLevel, variant v );
}

