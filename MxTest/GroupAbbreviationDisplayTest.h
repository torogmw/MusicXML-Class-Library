#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::GroupAbbreviationDisplayPtr tgenGroupAbbreviationDisplay( variant v );
    void tgenGroupAbbreviationDisplayExpected( std::ostream& os, int indentLevel, variant v );
}