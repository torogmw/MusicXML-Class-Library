#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::PartListPtr tgenPartList( variant v );
    void tgenPartListExpected( std::ostream& os, int indentLevel, variant v );
}