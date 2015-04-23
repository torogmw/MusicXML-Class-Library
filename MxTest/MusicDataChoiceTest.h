#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

namespace MxTestHelpers
{
    mx::e::MusicDataChoicePtr tgenMusicDataChoice( variant v );
    mx::e::MusicDataChoicePtr tgenMusicDataChoiceAll( variant v );
    void tgenMusicDataChoiceExpected( std::ostream& os, int indentLevel, variant v );
}