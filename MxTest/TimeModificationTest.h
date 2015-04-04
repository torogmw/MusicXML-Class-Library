#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::NormalTypeNormalDotGroupPtr tgenNormalTypeNormalDotGroup( variant v );
    mx::e::TimeModificationPtr tgenTimeModification( variant v );
    void tgenTimeModificationExpected( std::ostream& os, int indentLevel, variant v );
}