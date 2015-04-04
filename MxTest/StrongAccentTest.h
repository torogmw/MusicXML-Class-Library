#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::StrongAccentPtr tgenStrongAccent( variant v );
    void tgenStrongAccentExpected( std::ostream& os, int indentLevel, variant v );
}