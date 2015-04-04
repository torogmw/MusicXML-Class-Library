#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::DirectionTypePtr tgenDirectionType( variant v );
    void tgenDirectionTypeExpected( std::ostream& os, int indentLevel, variant v );
}