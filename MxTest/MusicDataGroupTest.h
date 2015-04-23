#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::MusicDataGroupPtr tgenMusicDataGroup( variant v );
    void tgenMusicDataGroupExpected( std::ostream& os, int indentLevel, variant v );
}