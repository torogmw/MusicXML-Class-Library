#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::FigurePtr tgenFigure( variant v );
    void tgenFigureExpected( std::ostream& os, int indentLevel, variant v );
}