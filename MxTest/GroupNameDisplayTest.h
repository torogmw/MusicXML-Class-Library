#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::GroupNameDisplayPtr tgenGroupNameDisplay( variant v );
    void tgenGroupNameDisplayExpected( std::ostream& os, int indentLevel, variant v );
}