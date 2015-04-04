#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::SystemMarginsPtr tgenSystemMargins( variant v );
    void tgenSystemMarginsExpected( std::ostream& os, int indentLevel, variant v );
}