#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::CreditChoicePtr tgenCreditChoice( variant v );
    void tgenCreditChoiceExpected( std::ostream& os, int indentLevel, variant v );
}