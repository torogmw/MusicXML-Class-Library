#pragma once
#include "MxTestHelper.h"
#include "DocumentPartwise.h"

namespace MxTestHelpers
{
    mx::d::DocumentPartwisePtr tgenDocumentPartwise( variant v );
    void tgenDocumentPartwiseExpected( std::ostream& os, int indentLevel, variant v );
}