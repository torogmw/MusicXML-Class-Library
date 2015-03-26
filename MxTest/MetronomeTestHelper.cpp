
#include "MetronomeTestHelper.h"

namespace MxTestHelpers
{
    BeatUnitGroupPtr tgenBeatUnitGroup( variant v )
    {
        BeatUnitGroupPtr o = makeBeatUnitGroup();
        switch ( v )
        {
            case variant::one:
            {
                ;
            }
                break;
            case variant::two:
            {
                ;
            }
                break;
            case variant::three:
            {
                ;
            }
                break;
            default:
                break;
        }
        return o;
    }
    MetronomeRelationGroupPtr tgenMetronomeRelationGroup( variant v )
    {
        MetronomeRelationGroupPtr o = makeBeatUnitGroup();
        return o;
    }
    NoteRelationNotePtr tgenNoteRelationNote( variant v )
    {
        NoteRelationNotePtr o = makeBeatUnitGroup();
        return o;
    }
    PerMinuteOrBeatUnitChoicePtr tgenPerMinuteOrBeatUnitChoice( variant v )
    {
        PerMinuteOrBeatUnitChoicePtr o = makeBeatUnitGroup();
        return o;
    }
    BeatUnitPerPtr tgenBeatUnitPer( variant v )
    {
        BeatUnitPerPtr o = makeBeatUnitGroup();
        return o;
    }
    BeatUnitPerOrNoteRelationNoteChoicePtr tgenBeatUnitPerOrNoteRelationNoteChoice( variant v )
    {
        BeatUnitPerOrNoteRelationNoteChoicePtr o = makeBeatUnitGroup();
        return o;
    }
    MetronomeAttributesPtr tgenMetronomeAttributesPtr( variant v )
    {
        MetronomeAttributesPtr o = makeBeatUnitGroup();
        return o;
    }
    MetronomePtr tgenMetronome( variant v )
    {
        MetronomePtr o = makeBeatUnitGroup();
        return o;
    }
}