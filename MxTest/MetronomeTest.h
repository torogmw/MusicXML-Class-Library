#pragma once
#pragma once
#include "MxTestHelper.h"
#include "Elements.h"

using namespace mx::e;
using namespace mx::t;
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
