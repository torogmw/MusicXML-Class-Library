#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::RestPtr tgenRest( variant v );
    void tgenRestExpected( std::ostream& os, int indentLevel, variant v );
}