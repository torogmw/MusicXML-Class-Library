#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::CreditPtr tgenCredit( variant v );
    void tgenCreditExpected( std::ostream& os, int indentLevel, variant v );
}