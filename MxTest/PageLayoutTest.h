#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::PageLayoutPtr tgenPageLayout( variant v );
    void tgenPageLayoutExpected( std::ostream& os, int indentLevel, variant v );
}