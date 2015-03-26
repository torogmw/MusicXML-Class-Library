
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
                o->getBeatUnit()->setValue( NoteTypeValue::sixteenth );
            }
                break;
            case variant::two:
            {
                o->getBeatUnit()->setValue( NoteTypeValue::quarter );
                o->addBeatUnitDot( makeBeatUnitDot() );
            }
                break;
            case variant::three:
            {
                o->getBeatUnit()->setValue( NoteTypeValue::thirtySecond );
                o->addBeatUnitDot( makeBeatUnitDot() );
                o->addBeatUnitDot( makeBeatUnitDot() );
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
    NoteRelationNotePtr tgenNoteRelationNote( variant v )
    {
        NoteRelationNotePtr o = makeBeatUnitGroup();
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
    PerMinuteOrBeatUnitChoicePtr tgenPerMinuteOrBeatUnitChoice( variant v )
    {
        PerMinuteOrBeatUnitChoicePtr o = makeBeatUnitGroup();
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
    BeatUnitPerPtr tgenBeatUnitPer( variant v )
    {
        BeatUnitPerPtr o = makeBeatUnitGroup();
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
    BeatUnitPerOrNoteRelationNoteChoicePtr tgenBeatUnitPerOrNoteRelationNoteChoice( variant v )
    {
        BeatUnitPerOrNoteRelationNoteChoicePtr o = makeBeatUnitGroup();
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
    MetronomeAttributesPtr tgenMetronomeAttributesPtr( variant v )
    {
        MetronomeAttributesPtr o = makeBeatUnitGroup();
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
    MetronomePtr tgenMetronome( variant v )
    {
        MetronomePtr o = makeBeatUnitGroup();
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
}