#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::EditorialGroupPtr tgenEditorialGroup( variant v );
    void tgenEditorialGroupExpected( std::ostream& os, int indentLevel, variant v );
}