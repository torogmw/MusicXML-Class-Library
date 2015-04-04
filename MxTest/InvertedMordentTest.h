#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::InvertedMordentPtr tgenInvertedMordent( variant v );
    void tgenInvertedMordentExpected( std::ostream& os, int indentLevel, variant v );
}