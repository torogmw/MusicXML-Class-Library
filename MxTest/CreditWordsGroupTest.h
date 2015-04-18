#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::CreditWordsGroupPtr tgenCreditWordsGroup( variant v );
    void tgenCreditWordsGroupExpected( std::ostream& os, int indentLevel, variant v );
}