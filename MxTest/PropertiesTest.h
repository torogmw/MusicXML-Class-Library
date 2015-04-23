#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::PropertiesPtr tgenProperties( variant v );
    void tgenPropertiesExpected( std::ostream& os, int indentLevel, variant v );
}