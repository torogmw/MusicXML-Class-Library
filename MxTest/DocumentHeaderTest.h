#pragma once
#include "MxTestHelper.h"
#include "DocumentHeader.h"

namespace MxTestHelpers
{
    mx::d::DocumentHeaderPtr tgenDocumentHeader( variant v );
    void tgenDocumentHeaderExpected( std::ostream& os, int indentLevel, variant v );
}