#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::OrnamentsChoicePtr tgenOrnamentsChoice( variant v );
    void tgenOrnamentsChoiceExpected( std::ostream& os, int indentLevel, variant v );
}