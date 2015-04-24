#include "MxTestHelper.h"
#include "DocumentPartwise.h"
#include "TestHarness.h"
#include "MxTestHelper.h"

/*
 <score-partwise version="3.0">
 <part-list>
 <score-part id="P1">
 <part-name>Music</part-name>
 </score-part>
 </part-list>
 <part id="P1">
 <measure number="1">
 <attributes>
 <divisions>1</divisions>
 <key>
 <fifths>0</fifths>
 </key>
 <time>
 <beats>4</beats>
 <beat-type>4</beat-type>
 </time>
 <clef>
 <sign>G</sign>
 <line>2</line>
 </clef>
 </attributes>
 <note>
 <pitch>
 <step>C</step>
 <octave>4</octave>
 </pitch>
 <duration>4</duration>
 <type>whole</type>
 </note>
 </measure>
 </part>
 </score-partwise>
 */

using namespace mx::e;
using namespace mx::d;
using namespace mx::types;
using namespace std;

TEST( HelloWorld, HelloWorld )
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
    
    std::string expected = R"((()))";
    std::stringstream actual;
    doc->toStream( actual );
    CHECK_EQUAL( expected, actual.str() )
}