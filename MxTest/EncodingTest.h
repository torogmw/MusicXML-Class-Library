#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::EncodingPtr tgenEncoding( variant v );
    void tgenEncodingExpected( std::ostream& os, int indentLevel, variant v );
}