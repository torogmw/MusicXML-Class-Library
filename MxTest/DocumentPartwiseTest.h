#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::DocumentPartwisePtr tgenDocumentPartwise( variant v );
    void tgenDocumentPartwiseExpected( std::ostream& os, int indentLevel, variant v );
}