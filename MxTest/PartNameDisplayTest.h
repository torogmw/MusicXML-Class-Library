#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::DisplayTextOrAccidentalTextPtr tgenDisplayTextOrAccidentalText( variant v );
    mx::e::PartNameDisplayPtr tgenPartNameDisplay( variant v );
    void tgenPartNameDisplayExpected( std::ostream& os, int indentLevel, variant v );
}