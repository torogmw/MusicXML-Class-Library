#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::SystemDividersPtr tgenSystemDividers( variant v );
    void tgenSystemDividersExpected( std::ostream& os, int indentLevel, variant v );
}