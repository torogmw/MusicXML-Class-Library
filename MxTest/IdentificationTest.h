#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::IdentificationPtr tgenIdentification( variant v );
    void tgenIdentificationExpected( std::ostream& os, int indentLevel, variant v );
}