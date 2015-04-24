#pragma once
#include "DocumentPartwise.h"

using namespace mx::e;
using namespace mx::d;
using namespace mx::types;
using namespace std;

inline MusicDataChoicePtr makeSixteenthNote( const StepEnum step, int octave, BeamValue beamval )
{
    auto noteData = makeMusicDataChoice();
    noteData->setChoice( MusicDataChoice::Choice::note );
    noteData->getNote()->getNoteChoice()->setChoice( NoteChoice::Choice::normal );
    noteData->getNote()->getNoteChoice()->getNormalNoteGroup()->getFullNoteGroup()->getFullNoteTypeChoice()->setChoice( FullNoteTypeChoice::Choice::pitch );
    noteData->getNote()->getNoteChoice()->getNormalNoteGroup()->getFullNoteGroup()->getFullNoteTypeChoice()->getPitch()->getStep()->setValue( step );
    noteData->getNote()->getNoteChoice()->getNormalNoteGroup()->getFullNoteGroup()->getFullNoteTypeChoice()->getPitch()->getOctave()->setValue( OctaveValue( octave ) );
    noteData->getNote()->getNoteChoice()->getNormalNoteGroup()->getDuration()->setValue( PositiveDivisionsValue( 1 ) );
    noteData->getNote()->getType()->setValue( NoteTypeValue::sixteenth );
    noteData->getNote()->setHasType( true );
    auto beam = makeBeam();
    beam->setValue( beamval );
    noteData->getNote()->addBeam( beam );
    noteData->getNote()->addBeam( beam );
    return noteData;
}
inline ClefPtr makeTrebleClef()
{
    auto clef = makeClef();
    clef->getSign()->setValue( ClefSign::g );
    clef->setHasLine( true );
    clef->getLine()->setValue( StaffLine( 2 ) );
    return clef;
}
inline ClefPtr makeBassClef()
{
    auto clef = makeClef();
    clef->getSign()->setValue( ClefSign::f );
    clef->setHasLine( true );
    clef->getLine()->setValue( StaffLine( 4 ) );
    return clef;
}
inline TimePtr makeFourFourTime()
{
    auto time = makeTime();
    time->getTimeChoice()->setChoice( TimeChoice::Choice::timeSignature );
    time->getTimeChoice()->getTimeSignature()->getBeats()->setValue( XsString( "4" ) );
    time->getTimeChoice()->getTimeSignature()->getBeatType()->setValue( XsString( "4" ) );
    return time;
}
inline MusicDataChoicePtr makeMeasureProperties()
{
    auto propertiesChoice = makeMusicDataChoice();
    propertiesChoice->setChoice( MusicDataChoice::Choice::properties );
    auto properties = propertiesChoice->getProperties();
    properties->setHasDivisions( true );
    properties->getDivisions()->setValue( PositiveDivisionsValue( 4 ) );
    properties->addKey( makeKey() );
    properties->addTime( makeFourFourTime() );
    properties->addClef( makeTrebleClef() );
    return propertiesChoice;
}
DocumentPartwisePtr makeDocStub()
{
    auto doc = makeDocumentPartwise();
    auto s = doc->getScorePartwise();
    s->getAttributes()->hasVersion = true;
    s->getAttributes()->version = XsToken( "3.0" );
    auto header = s->getScoreHeaderGroup();
    header->getPartList()->getScorePart()->getAttributes()->id = XsID( "P1" );
    header->getPartList()->getScorePart()->getPartName()->setValue( XsString( "Music" ) );
    IdentificationPtr ident = makeIdentification();
    auto composer = makeCreator();
    composer->getAttributes()->hasType = true;
    composer->getAttributes()->type = XsToken( "composer" );
    composer->setValue( XsString( "Matthew James Briggs" ) );
    ident->addCreator( composer );
    header->setHasIdentification( true );
    header->setIdentification( ident );
    ident->getEncoding()->setChoice( Encoding::Choice::software );
    ident->getEncoding()->getSoftware()->setValue( XsString("MxSample" ) );
    ident->setHasEncoding( true );
    header->setHasWork( true );
    header->getWork()->setHasWorkTitle( true );
    header->getWork()->getWorkTitle()->setValue( XsString( "In the Beginning" ) );
    auto part = *( s->getPartwisePartSet().cbegin() );
    part->getAttributes()->id = XsIDREF( "P1" );
    auto measure = *( part->getPartwiseMeasureSet().cbegin() );
    measure->getAttributes()->number = XsToken( "1" );
    return doc;
}