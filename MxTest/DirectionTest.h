#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::DirectionPtr tgenDirection( variant v );
    void tgenDirectionExpected( std::ostream& os, int indentLevel, variant v );
}