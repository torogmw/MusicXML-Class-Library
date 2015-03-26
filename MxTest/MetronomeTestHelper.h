#pragma once
#include "MxTestHelper.h"
#include "ElementsNew.h"

using namespace mx::e;
using namespace mx::types;
using namespace std;

namespace MxTestHelpers
{
    BeatUnitGroupPtr tgenBeatUnitGroup( variant v );
    MetronomeRelationGroupPtr tgenMetronomeRelationGroup( variant v );
    NoteRelationNotePtr tgenNoteRelationNote( variant v );
    PerMinuteOrBeatUnitChoicePtr tgenPerMinuteOrBeatUnitChoice( variant v );
    BeatUnitPerPtr tgenBeatUnitPer( variant v );
    BeatUnitPerOrNoteRelationNoteChoicePtr tgenBeatUnitPerOrNoteRelationNoteChoice( variant v );
    MetronomeAttributesPtr tgenMetronomeAttributesPtr( variant v );
    MetronomePtr tgenMetronome( variant v );
}
