#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::BarlinePtr tgenBarline( variant v );
    void tgenBarlineExpected( std::ostream& os, int indentLevel, variant v );
}