#include "MxTestHelper.h"
#include "ElementsNew.h"

namespace MxTestHelpers
{
    mx::e::VirtualInstrumentPtr tgenVirtualInstrument( variant v );
    void tgenVirtualInstrumentExpected( std::ostream& os, int indentLevel, variant v );
}