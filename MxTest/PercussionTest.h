#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::PercussionChoicePtr tgenPercussionChoice( variant v );
    mx::e::PercussionPtr tgenPercussion( variant v );
    void tgenPercussionExpected( std::ostream& os, int indentLevel, variant v );
}