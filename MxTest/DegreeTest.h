#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::DegreePtr tgenDegree( variant v );
    void tgenDegreeExpected( std::ostream& os, int indentLevel, variant v );
}