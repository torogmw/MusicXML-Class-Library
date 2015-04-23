#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::NotationsPtr tgenNotations( variant v );
    void tgenNotationsExpected( std::ostream& os, int indentLevel, variant v );
}