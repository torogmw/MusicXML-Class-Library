#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::ForwardPtr tgenForward( variant v );
    void tgenForwardExpected( std::ostream& os, int indentLevel, variant v );
}