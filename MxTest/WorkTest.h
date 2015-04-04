#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::WorkPtr tgenWork( variant v );
    void tgenWorkExpected( std::ostream& os, int indentLevel, variant v );
}