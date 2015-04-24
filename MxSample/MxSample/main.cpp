#include <iostream>
#include "DocumentPartwise.h"
#include "Elements.h"

using namespace mx::e;
using namespace mx::d;
using namespace mx::t;
using namespace std;

int main(int argc, const char * argv[])
{
    auto doc = makeDocumentPartwise();
    auto s = doc->getScorePartwise();
    s->getAttributes()->hasVersion = true;
    s->getAttributes()->version = XsToken( "3.0" );
    auto header = s->getScoreHeaderGroup();
    header->getPartList()->getScorePart()->getAttributes()->id = XsID( "P1" );
    header->getPartList()->getScorePart()->getPartName()->setValue( XsString( "Music" ) );
    auto part = *( s->getPartwisePartSet().cbegin() );
    part->getAttributes()->id = XsIDREF( "P1" );
    auto measure = *( part->getPartwiseMeasureSet().cbegin() );
    measure->getAttributes()->number = XsToken( "1" );
    auto propertiesChoice = makeMusicDataChoice();
    propertiesChoice->setChoice( MusicDataChoice::Choice::properties );
    auto properties = propertiesChoice->getProperties();
    properties->setHasDivisions( true );
    properties->getDivisions()->setValue( PositiveDivisionsValue( 1 ) );
    properties->addKey( makeKey() );
    auto time = makeTime();
    time->getTimeChoice()->setChoice( TimeChoice::Choice::timeSignature );
    time->getTimeChoice()->getTimeSignature()->getBeats()->setValue( XsString( "4" ) );
    time->getTimeChoice()->getTimeSignature()->getBeatType()->setValue( XsString( "4" ) );
    properties->addTime( time );
    auto clef = makeClef();
    clef->getSign()->setValue( ClefSign::g );
    clef->setHasLine( true );
    clef->getLine()->setValue( StaffLine( 2 ) );
    properties->addClef( clef );
    measure->getMusicDataGroup()->addMusicDataChoice( propertiesChoice );
    auto noteData = makeMusicDataChoice();
    noteData->setChoice( MusicDataChoice::Choice::note );
    noteData->getNote()->getNoteChoice()->setChoice( NoteChoice::Choice::normal );
    noteData->getNote()->getNoteChoice()->getNormalNoteGroup()->getFullNoteGroup()->getFullNoteTypeChoice()->setChoice( FullNoteTypeChoice::Choice::pitch );
    noteData->getNote()->getNoteChoice()->getNormalNoteGroup()->getFullNoteGroup()->getFullNoteTypeChoice()->getPitch()->getStep()->setValue( StepEnum::c );
    noteData->getNote()->getNoteChoice()->getNormalNoteGroup()->getFullNoteGroup()->getFullNoteTypeChoice()->getPitch()->getOctave()->setValue( OctaveValue( 4 ) );
    noteData->getNote()->getNoteChoice()->getNormalNoteGroup()->getDuration()->setValue( PositiveDivisionsValue( 4 ) );
    noteData->getNote()->getType()->setValue( NoteTypeValue::whole );
    measure->getMusicDataGroup()->addMusicDataChoice( noteData );
    
    doc->toStream( cout ); /* print Hello World MusicXML document to console */
    return 0;
}

//int main(int argc, const char * argv[])
//{
//    auto doc = makeDocStub();
//    auto s = doc->getScorePartwise();
//    auto part = *( s->getPartwisePartSet().cbegin() );
//    auto measure = *( part->getPartwiseMeasureSet().cbegin() );
//    
//    measure->getAttributes()->number = XsToken( "1" );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeMeasureProperties() );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::begin ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::d, 4, BeamValue::continue_ ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::continue_ ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::e, 4, BeamValue::end ) );
//    
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::begin ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::f, 4, BeamValue::continue_ ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::continue_ ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::g, 4, BeamValue::end ) );
//    
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::begin ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::a, 4, BeamValue::continue_ ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::continue_ ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::b, 4, BeamValue::end ) );
//    
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::begin ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 5, BeamValue::continue_ ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 4, BeamValue::continue_ ) );
//    measure->getMusicDataGroup()->addMusicDataChoice( makeSixteenthNote( StepEnum::c, 5, BeamValue::end ) );
//    
//    doc->toStream( cout );
//
//    return 0;
//}

