#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::StaffLayoutPtr tgenStaffLayout( variant v );
    void tgenStaffLayoutExpected( std::ostream& os, int indentLevel, variant v );
}