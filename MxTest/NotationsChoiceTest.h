#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::NotationsChoicePtr tgenNotationsChoice(); /* fully loaded with data */
    mx::e::NotationsChoicePtr tgenNotationsChoice( variant v );
    void tgenNotationsChoiceExpected( std::ostream& os, int indentLevel, variant v );
}