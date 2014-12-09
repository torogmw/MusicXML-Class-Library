/** *******************************************************
  * 
  * MxAttrGrpTrillSoundTest.cpp
  * Created: 2014-11-28 19:17:16
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpTrillSound.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected = ( MxEnumStartNote( lexicon::enums::StartNote::upper ) ).toString();
	std::string actual = object.getStartNote().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected = ( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) ).toString();
	std::string actual = object.getTrillStep().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected = ( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) ).toString();
	std::string actual = object.getTwoNoteTurn().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues3, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getAccelerate().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues4, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected = ( MxNumberTrillBeats( 4 ) ).toString();
	std::string actual = object.getBeats().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues5, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected = ( MxNumberPercent( 0.25 ) ).toString();
	std::string actual = object.getSecondBeat().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues6, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected = ( MxNumberPercent( 0.75 ) ).toString();
	std::string actual = object.getLastBeat().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected = "MxAttrGrpTrillSound";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected = "trill-sound";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected = "The trill-sound attribute group includes attributes used to guide the sound of trills, mordents, turns, shakes, and wavy lines, based on MuseData sound suggestions. The default choices are: start-note = upper trill-step = whole two-note-turn = none accelerate = no beats = 4. Second-beat and last-beat are percentages for landing on the indicated beat, with defaults of 25 and 75 respectively. For mordent and inverted-mordent elements, the defaults are different: The default start-note is main, not upper. The default for beats is 3, not 4. The default for second-beat is 12, not 25. The default for last-beat is 24, not 75.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setStartNote0, MxAttrGrpTrillSound )
{
	MxEnumStartNote value1( lexicon::enums::StartNote::below );
	MxEnumStartNote value2( lexicon::enums::StartNote::main );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTrillSound object;
	object.setStartNote( value1 );
	MxEnumStartNote expected = value1;
	MxEnumStartNote actual = object.getStartNote();
	CHECK_EQUAL( expected, actual )
	object.setStartNote( value2 );
	expected = value2;
	actual = object.getStartNote();
	CHECK_EQUAL( expected, actual )
}
TEST( setTrillStep1, MxAttrGrpTrillSound )
{
	MxEnumTrillStep value1( lexicon::enums::TrillStep::unison );
	MxEnumTrillStep value2( lexicon::enums::TrillStep::half );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTrillSound object;
	object.setTrillStep( value1 );
	MxEnumTrillStep expected = value1;
	MxEnumTrillStep actual = object.getTrillStep();
	CHECK_EQUAL( expected, actual )
	object.setTrillStep( value2 );
	expected = value2;
	actual = object.getTrillStep();
	CHECK_EQUAL( expected, actual )
}
TEST( setTwoNoteTurn2, MxAttrGrpTrillSound )
{
	MxEnumTwoNoteTurn value1( lexicon::enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn value2( lexicon::enums::TwoNoteTurn::half );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTrillSound object;
	object.setTwoNoteTurn( value1 );
	MxEnumTwoNoteTurn expected = value1;
	MxEnumTwoNoteTurn actual = object.getTwoNoteTurn();
	CHECK_EQUAL( expected, actual )
	object.setTwoNoteTurn( value2 );
	expected = value2;
	actual = object.getTwoNoteTurn();
	CHECK_EQUAL( expected, actual )
}
TEST( setAccelerate3, MxAttrGrpTrillSound )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTrillSound object;
	object.setAccelerate( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
	object.setAccelerate( value2 );
	expected = value2;
	actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
}
TEST( setBeats4, MxAttrGrpTrillSound )
{
	MxNumberTrillBeats value1( 2.1 );
	MxNumberTrillBeats value2( 2.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTrillSound object;
	object.setBeats( value1 );
	MxNumberTrillBeats expected = value1;
	MxNumberTrillBeats actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
	object.setBeats( value2 );
	expected = value2;
	actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
}
TEST( setSecondBeat5, MxAttrGrpTrillSound )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTrillSound object;
	object.setSecondBeat( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getSecondBeat();
	CHECK_EQUAL( expected, actual )
	object.setSecondBeat( value2 );
	expected = value2;
	actual = object.getSecondBeat();
	CHECK_EQUAL( expected, actual )
}
TEST( setLastBeat6, MxAttrGrpTrillSound )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTrillSound object;
	object.setLastBeat( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getLastBeat();
	CHECK_EQUAL( expected, actual )
	object.setLastBeat( value2 );
	expected = value2;
	actual = object.getLastBeat();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsStartNoteRequired0, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsStartNoteRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepRequired1, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsTrillStepRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnRequired2, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsTwoNoteTurnRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAccelerateRequired3, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsAccelerateRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsRequired4, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsBeatsRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatRequired5, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsSecondBeatRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatRequired6, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsLastBeatRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsStartNotePresent0, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsStartNotePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStartNotePresent( true );
	expected = true;
	actual = object.getIsStartNotePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStartNotePresent( false );
	expected = false;
	actual = object.getIsStartNotePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepPresent1, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsTrillStepPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTrillStepPresent( true );
	expected = true;
	actual = object.getIsTrillStepPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTrillStepPresent( false );
	expected = false;
	actual = object.getIsTrillStepPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnPresent2, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsTwoNoteTurnPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTwoNoteTurnPresent( true );
	expected = true;
	actual = object.getIsTwoNoteTurnPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTwoNoteTurnPresent( false );
	expected = false;
	actual = object.getIsTwoNoteTurnPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAcceleratePresent3, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsAcceleratePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsAcceleratePresent( true );
	expected = true;
	actual = object.getIsAcceleratePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsAcceleratePresent( false );
	expected = false;
	actual = object.getIsAcceleratePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsPresent4, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsBeatsPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBeatsPresent( true );
	expected = true;
	actual = object.getIsBeatsPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBeatsPresent( false );
	expected = false;
	actual = object.getIsBeatsPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatPresent5, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsSecondBeatPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSecondBeatPresent( true );
	expected = true;
	actual = object.getIsSecondBeatPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSecondBeatPresent( false );
	expected = false;
	actual = object.getIsSecondBeatPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatPresent6, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = false;
	bool actual = object.getIsLastBeatPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLastBeatPresent( true );
	expected = true;
	actual = object.getIsLastBeatPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLastBeatPresent( false );
	expected = false;
	actual = object.getIsLastBeatPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.1 ) );
	object.setSecondBeat( MxNumberPercent( 1.1 ) );
	object.setLastBeat( MxNumberPercent( 1.1 ) );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	expected = "start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"2.1\" second-beat=\"1.1\" last-beat=\"1.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.2 ) );
	object.setSecondBeat( MxNumberPercent( 1.2 ) );
	object.setLastBeat( MxNumberPercent( 1.2 ) );
	expected = "trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"2.2\" second-beat=\"1.2\" last-beat=\"1.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.3 ) );
	object.setSecondBeat( MxNumberPercent( 1.3 ) );
	object.setLastBeat( MxNumberPercent( 1.3 ) );
	expected = "start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"2.3\" second-beat=\"1.3\" last-beat=\"1.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.4 ) );
	object.setSecondBeat( MxNumberPercent( 1.4 ) );
	object.setLastBeat( MxNumberPercent( 1.4 ) );
	expected = "accelerate=\"yes\" beats=\"2.4\" second-beat=\"1.4\" last-beat=\"1.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.5 ) );
	object.setSecondBeat( MxNumberPercent( 1.5 ) );
	object.setLastBeat( MxNumberPercent( 1.5 ) );
	expected = "start-note=\"below\" trill-step=\"unison\" beats=\"2.5\" second-beat=\"1.5\" last-beat=\"1.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.6 ) );
	object.setSecondBeat( MxNumberPercent( 1.6 ) );
	object.setLastBeat( MxNumberPercent( 1.6 ) );
	expected = "trill-step=\"whole\" second-beat=\"1.6\" last-beat=\"1.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.7 ) );
	object.setSecondBeat( MxNumberPercent( 1.7 ) );
	object.setLastBeat( MxNumberPercent( 1.7 ) );
	expected = "start-note=\"main\" two-note-turn=\"half\" last-beat=\"1.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.8 ) );
	object.setSecondBeat( MxNumberPercent( 1.8 ) );
	object.setLastBeat( MxNumberPercent( 1.8 ) );
	expected = "two-note-turn=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.9 ) );
	object.setSecondBeat( MxNumberPercent( 1.9 ) );
	object.setLastBeat( MxNumberPercent( 1.9 ) );
	expected = "start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3 ) );
	object.setSecondBeat( MxNumberPercent( 2 ) );
	object.setLastBeat( MxNumberPercent( 2 ) );
	expected = "trill-step=\"half\" accelerate=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.1 ) );
	object.setSecondBeat( MxNumberPercent( 2.1 ) );
	object.setLastBeat( MxNumberPercent( 2.1 ) );
	expected = "start-note=\"below\" accelerate=\"no\" beats=\"3.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.2 ) );
	object.setSecondBeat( MxNumberPercent( 2.2 ) );
	object.setLastBeat( MxNumberPercent( 2.2 ) );
	expected = "accelerate=\"yes\" beats=\"3.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.3 ) );
	object.setSecondBeat( MxNumberPercent( 2.3 ) );
	object.setLastBeat( MxNumberPercent( 2.3 ) );
	expected = "start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" beats=\"3.3\" second-beat=\"2.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.4 ) );
	object.setSecondBeat( MxNumberPercent( 2.4 ) );
	object.setLastBeat( MxNumberPercent( 2.4 ) );
	expected = "trill-step=\"unison\" two-note-turn=\"none\" beats=\"3.4\" second-beat=\"2.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.5 ) );
	object.setSecondBeat( MxNumberPercent( 2.5 ) );
	object.setLastBeat( MxNumberPercent( 2.5 ) );
	expected = "start-note=\"upper\" two-note-turn=\"whole\" beats=\"3.5\" second-beat=\"2.5\" last-beat=\"2.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.6 ) );
	object.setSecondBeat( MxNumberPercent( 2.6 ) );
	object.setLastBeat( MxNumberPercent( 2.6 ) );
	expected = "second-beat=\"2.6\" last-beat=\"2.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.7 ) );
	object.setSecondBeat( MxNumberPercent( 2.7 ) );
	object.setLastBeat( MxNumberPercent( 2.7 ) );
	expected = "start-note=\"below\" trill-step=\"unison\" accelerate=\"no\" second-beat=\"2.7\" last-beat=\"2.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.8 ) );
	object.setSecondBeat( MxNumberPercent( 2.8 ) );
	object.setLastBeat( MxNumberPercent( 2.8 ) );
	expected = "trill-step=\"whole\" accelerate=\"yes\" second-beat=\"2.8\" last-beat=\"2.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.9 ) );
	object.setSecondBeat( MxNumberPercent( 2.9 ) );
	object.setLastBeat( MxNumberPercent( 2.9 ) );
	expected = "start-note=\"main\" two-note-turn=\"half\" accelerate=\"no\" last-beat=\"2.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4 ) );
	object.setSecondBeat( MxNumberPercent( 3 ) );
	object.setLastBeat( MxNumberPercent( 3 ) );
	expected = "two-note-turn=\"none\" accelerate=\"yes\" last-beat=\"3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.1 ) );
	object.setSecondBeat( MxNumberPercent( 3.1 ) );
	object.setLastBeat( MxNumberPercent( 3.1 ) );
	expected = "start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" beats=\"4.1\" last-beat=\"3.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.2 ) );
	object.setSecondBeat( MxNumberPercent( 3.2 ) );
	object.setLastBeat( MxNumberPercent( 3.2 ) );
	expected = "trill-step=\"half\" beats=\"4.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.3 ) );
	object.setSecondBeat( MxNumberPercent( 3.3 ) );
	object.setLastBeat( MxNumberPercent( 3.3 ) );
	expected = "start-note=\"below\" beats=\"4.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.4 ) );
	object.setSecondBeat( MxNumberPercent( 3.4 ) );
	object.setLastBeat( MxNumberPercent( 3.4 ) );
	expected = "beats=\"4.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.5 ) );
	object.setSecondBeat( MxNumberPercent( 3.5 ) );
	object.setLastBeat( MxNumberPercent( 3.5 ) );
	expected = "start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"4.5\" second-beat=\"3.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.6 ) );
	object.setSecondBeat( MxNumberPercent( 3.6 ) );
	object.setLastBeat( MxNumberPercent( 3.6 ) );
	expected = "trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" second-beat=\"3.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.7 ) );
	object.setSecondBeat( MxNumberPercent( 3.7 ) );
	object.setLastBeat( MxNumberPercent( 3.7 ) );
	expected = "start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"no\" second-beat=\"3.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.8 ) );
	object.setSecondBeat( MxNumberPercent( 3.8 ) );
	object.setLastBeat( MxNumberPercent( 3.8 ) );
	expected = "accelerate=\"yes\" second-beat=\"3.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.9 ) );
	object.setSecondBeat( MxNumberPercent( 3.9 ) );
	object.setLastBeat( MxNumberPercent( 3.9 ) );
	expected = "start-note=\"below\" trill-step=\"unison\" second-beat=\"3.9\" last-beat=\"3.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5 ) );
	object.setSecondBeat( MxNumberPercent( 4 ) );
	object.setLastBeat( MxNumberPercent( 4 ) );
	expected = "trill-step=\"whole\" second-beat=\"4\" last-beat=\"4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.1 ) );
	object.setSecondBeat( MxNumberPercent( 4.1 ) );
	object.setLastBeat( MxNumberPercent( 4.1 ) );
	expected = "start-note=\"main\" two-note-turn=\"half\" beats=\"5.1\" last-beat=\"4.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.2 ) );
	object.setSecondBeat( MxNumberPercent( 4.2 ) );
	object.setLastBeat( MxNumberPercent( 4.2 ) );
	expected = "two-note-turn=\"none\" beats=\"5.2\" last-beat=\"4.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.3 ) );
	object.setSecondBeat( MxNumberPercent( 4.3 ) );
	object.setLastBeat( MxNumberPercent( 4.3 ) );
	expected = "start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"5.3\" last-beat=\"4.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.4 ) );
	object.setSecondBeat( MxNumberPercent( 4.4 ) );
	object.setLastBeat( MxNumberPercent( 4.4 ) );
	expected = "trill-step=\"half\" accelerate=\"yes\" beats=\"5.4\" last-beat=\"4.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.5 ) );
	object.setSecondBeat( MxNumberPercent( 4.5 ) );
	object.setLastBeat( MxNumberPercent( 4.5 ) );
	expected = "start-note=\"below\" accelerate=\"no\" beats=\"5.5\" last-beat=\"4.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.6 ) );
	object.setSecondBeat( MxNumberPercent( 4.6 ) );
	object.setLastBeat( MxNumberPercent( 4.6 ) );
	expected = "accelerate=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.7 ) );
	object.setSecondBeat( MxNumberPercent( 4.7 ) );
	object.setLastBeat( MxNumberPercent( 4.7 ) );
	expected = "start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" second-beat=\"4.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.8 ) );
	object.setSecondBeat( MxNumberPercent( 4.8 ) );
	object.setLastBeat( MxNumberPercent( 4.8 ) );
	expected = "trill-step=\"unison\" two-note-turn=\"none\" second-beat=\"4.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.9 ) );
	object.setSecondBeat( MxNumberPercent( 4.9 ) );
	object.setLastBeat( MxNumberPercent( 4.9 ) );
	expected = "start-note=\"upper\" two-note-turn=\"whole\" second-beat=\"4.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6 ) );
	object.setSecondBeat( MxNumberPercent( 5 ) );
	object.setLastBeat( MxNumberPercent( 5 ) );
	expected = "second-beat=\"5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.1 ) );
	object.setSecondBeat( MxNumberPercent( 5.1 ) );
	object.setLastBeat( MxNumberPercent( 5.1 ) );
	expected = "start-note=\"below\" trill-step=\"unison\" accelerate=\"no\" beats=\"6.1\" second-beat=\"5.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.2 ) );
	object.setSecondBeat( MxNumberPercent( 5.2 ) );
	object.setLastBeat( MxNumberPercent( 5.2 ) );
	expected = "trill-step=\"whole\" accelerate=\"yes\" beats=\"6.2\" second-beat=\"5.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.3 ) );
	object.setSecondBeat( MxNumberPercent( 5.3 ) );
	object.setLastBeat( MxNumberPercent( 5.3 ) );
	expected = "start-note=\"main\" two-note-turn=\"half\" accelerate=\"no\" beats=\"6.3\" last-beat=\"5.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.4 ) );
	object.setSecondBeat( MxNumberPercent( 5.4 ) );
	object.setLastBeat( MxNumberPercent( 5.4 ) );
	expected = "two-note-turn=\"none\" accelerate=\"yes\" beats=\"6.4\" last-beat=\"5.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.5 ) );
	object.setSecondBeat( MxNumberPercent( 5.5 ) );
	object.setLastBeat( MxNumberPercent( 5.5 ) );
	expected = "start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" beats=\"6.5\" last-beat=\"5.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.6 ) );
	object.setSecondBeat( MxNumberPercent( 5.6 ) );
	object.setLastBeat( MxNumberPercent( 5.6 ) );
	expected = "trill-step=\"half\" last-beat=\"5.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.7 ) );
	object.setSecondBeat( MxNumberPercent( 5.7 ) );
	object.setLastBeat( MxNumberPercent( 5.7 ) );
	expected = "start-note=\"below\" last-beat=\"5.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.8 ) );
	object.setSecondBeat( MxNumberPercent( 5.8 ) );
	object.setLastBeat( MxNumberPercent( 5.8 ) );
	expected = "last-beat=\"5.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.9 ) );
	object.setSecondBeat( MxNumberPercent( 5.9 ) );
	object.setLastBeat( MxNumberPercent( 5.9 ) );
	expected = "start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" second-beat=\"5.9\" last-beat=\"5.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7 ) );
	object.setSecondBeat( MxNumberPercent( 6 ) );
	object.setLastBeat( MxNumberPercent( 6 ) );
	expected = "trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" second-beat=\"6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.1 ) );
	object.setSecondBeat( MxNumberPercent( 6.1 ) );
	object.setLastBeat( MxNumberPercent( 6.1 ) );
	expected = "start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"7.1\" second-beat=\"6.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.2 ) );
	object.setSecondBeat( MxNumberPercent( 6.2 ) );
	object.setLastBeat( MxNumberPercent( 6.2 ) );
	expected = "accelerate=\"yes\" beats=\"7.2\" second-beat=\"6.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.3 ) );
	object.setSecondBeat( MxNumberPercent( 6.3 ) );
	object.setLastBeat( MxNumberPercent( 6.3 ) );
	expected = "start-note=\"below\" trill-step=\"unison\" beats=\"7.3\" second-beat=\"6.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.4 ) );
	object.setSecondBeat( MxNumberPercent( 6.4 ) );
	object.setLastBeat( MxNumberPercent( 6.4 ) );
	expected = "trill-step=\"whole\" beats=\"7.4\" second-beat=\"6.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.5 ) );
	object.setSecondBeat( MxNumberPercent( 6.5 ) );
	object.setLastBeat( MxNumberPercent( 6.5 ) );
	expected = "start-note=\"main\" two-note-turn=\"half\" beats=\"7.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.6 ) );
	object.setSecondBeat( MxNumberPercent( 6.6 ) );
	object.setLastBeat( MxNumberPercent( 6.6 ) );
	expected = "two-note-turn=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.7 ) );
	object.setSecondBeat( MxNumberPercent( 6.7 ) );
	object.setLastBeat( MxNumberPercent( 6.7 ) );
	expected = "start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" last-beat=\"6.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.8 ) );
	object.setSecondBeat( MxNumberPercent( 6.8 ) );
	object.setLastBeat( MxNumberPercent( 6.8 ) );
	expected = "trill-step=\"half\" accelerate=\"yes\" last-beat=\"6.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.9 ) );
	object.setSecondBeat( MxNumberPercent( 6.9 ) );
	object.setLastBeat( MxNumberPercent( 6.9 ) );
	expected = "start-note=\"below\" accelerate=\"no\" last-beat=\"6.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8 ) );
	object.setSecondBeat( MxNumberPercent( 7 ) );
	object.setLastBeat( MxNumberPercent( 7 ) );
	expected = "accelerate=\"yes\" last-beat=\"7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.1 ) );
	object.setSecondBeat( MxNumberPercent( 7.1 ) );
	object.setLastBeat( MxNumberPercent( 7.1 ) );
	expected = "start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" beats=\"8.1\" second-beat=\"7.1\" last-beat=\"7.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.2 ) );
	object.setSecondBeat( MxNumberPercent( 7.2 ) );
	object.setLastBeat( MxNumberPercent( 7.2 ) );
	expected = "trill-step=\"unison\" two-note-turn=\"none\" beats=\"8.2\" second-beat=\"7.2\" last-beat=\"7.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.3 ) );
	object.setSecondBeat( MxNumberPercent( 7.3 ) );
	object.setLastBeat( MxNumberPercent( 7.3 ) );
	expected = "start-note=\"upper\" two-note-turn=\"whole\" beats=\"8.3\" second-beat=\"7.3\" last-beat=\"7.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.4 ) );
	object.setSecondBeat( MxNumberPercent( 7.4 ) );
	object.setLastBeat( MxNumberPercent( 7.4 ) );
	expected = "beats=\"8.4\" second-beat=\"7.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.5 ) );
	object.setSecondBeat( MxNumberPercent( 7.5 ) );
	object.setLastBeat( MxNumberPercent( 7.5 ) );
	expected = "start-note=\"below\" trill-step=\"unison\" accelerate=\"no\" beats=\"8.5\" second-beat=\"7.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.6 ) );
	object.setSecondBeat( MxNumberPercent( 7.6 ) );
	object.setLastBeat( MxNumberPercent( 7.6 ) );
	expected = "trill-step=\"whole\" accelerate=\"yes\" second-beat=\"7.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.7 ) );
	object.setSecondBeat( MxNumberPercent( 7.7 ) );
	object.setLastBeat( MxNumberPercent( 7.7 ) );
	expected = "start-note=\"main\" two-note-turn=\"half\" accelerate=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.8 ) );
	object.setSecondBeat( MxNumberPercent( 7.8 ) );
	object.setLastBeat( MxNumberPercent( 7.8 ) );
	expected = "two-note-turn=\"none\" accelerate=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.9 ) );
	object.setSecondBeat( MxNumberPercent( 7.9 ) );
	object.setLastBeat( MxNumberPercent( 7.9 ) );
	expected = "start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9 ) );
	object.setSecondBeat( MxNumberPercent( 8 ) );
	object.setLastBeat( MxNumberPercent( 8 ) );
	expected = "trill-step=\"half\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.1 ) );
	object.setSecondBeat( MxNumberPercent( 8.1 ) );
	object.setLastBeat( MxNumberPercent( 8.1 ) );
	expected = "start-note=\"below\" beats=\"9.1\" last-beat=\"8.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.2 ) );
	object.setSecondBeat( MxNumberPercent( 8.2 ) );
	object.setLastBeat( MxNumberPercent( 8.2 ) );
	expected = "beats=\"9.2\" last-beat=\"8.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.3 ) );
	object.setSecondBeat( MxNumberPercent( 8.3 ) );
	object.setLastBeat( MxNumberPercent( 8.3 ) );
	expected = "trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"9.3\" second-beat=\"8.3\" last-beat=\"8.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.4 ) );
	object.setSecondBeat( MxNumberPercent( 8.4 ) );
	object.setLastBeat( MxNumberPercent( 8.4 ) );
	expected = "start-note=\"below\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"9.4\" second-beat=\"8.4\" last-beat=\"8.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.5 ) );
	object.setSecondBeat( MxNumberPercent( 8.5 ) );
	object.setLastBeat( MxNumberPercent( 8.5 ) );
	expected = "accelerate=\"no\" second-beat=\"8.5\" last-beat=\"8.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.6 ) );
	object.setSecondBeat( MxNumberPercent( 8.6 ) );
	object.setLastBeat( MxNumberPercent( 8.6 ) );
	expected = "start-note=\"main\" trill-step=\"half\" second-beat=\"8.6\" last-beat=\"8.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.7 ) );
	object.setSecondBeat( MxNumberPercent( 8.7 ) );
	object.setLastBeat( MxNumberPercent( 8.7 ) );
	expected = "trill-step=\"unison\" second-beat=\"8.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.8 ) );
	object.setSecondBeat( MxNumberPercent( 8.8 ) );
	object.setLastBeat( MxNumberPercent( 8.8 ) );
	expected = "start-note=\"upper\" two-note-turn=\"whole\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.9 ) );
	object.setSecondBeat( MxNumberPercent( 8.9 ) );
	object.setLastBeat( MxNumberPercent( 8.9 ) );
	expected = "two-note-turn=\"half\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10 ) );
	object.setSecondBeat( MxNumberPercent( 9 ) );
	object.setLastBeat( MxNumberPercent( 9 ) );
	expected = "start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"10\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.1 ) );
	object.setSecondBeat( MxNumberPercent( 9.1 ) );
	object.setLastBeat( MxNumberPercent( 9.1 ) );
	expected = "trill-step=\"whole\" accelerate=\"no\" beats=\"10.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.2 ) );
	object.setSecondBeat( MxNumberPercent( 9.2 ) );
	object.setLastBeat( MxNumberPercent( 9.2 ) );
	expected = "start-note=\"main\" accelerate=\"yes\" beats=\"10.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.3 ) );
	object.setSecondBeat( MxNumberPercent( 9.3 ) );
	object.setLastBeat( MxNumberPercent( 9.3 ) );
	expected = "accelerate=\"no\" beats=\"10.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.4 ) );
	object.setSecondBeat( MxNumberPercent( 9.4 ) );
	object.setLastBeat( MxNumberPercent( 9.4 ) );
	expected = "start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" beats=\"10.4\" second-beat=\"9.4\" last-beat=\"9.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.5 ) );
	object.setSecondBeat( MxNumberPercent( 9.5 ) );
	object.setLastBeat( MxNumberPercent( 9.5 ) );
	expected = "trill-step=\"half\" two-note-turn=\"half\" second-beat=\"9.5\" last-beat=\"9.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.6 ) );
	object.setSecondBeat( MxNumberPercent( 9.6 ) );
	object.setLastBeat( MxNumberPercent( 9.6 ) );
	expected = "start-note=\"below\" two-note-turn=\"none\" second-beat=\"9.6\" last-beat=\"9.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.7 ) );
	object.setSecondBeat( MxNumberPercent( 9.7 ) );
	object.setLastBeat( MxNumberPercent( 9.7 ) );
	expected = "second-beat=\"9.7\" last-beat=\"9.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.8 ) );
	object.setSecondBeat( MxNumberPercent( 9.8 ) );
	object.setLastBeat( MxNumberPercent( 9.8 ) );
	expected = "start-note=\"main\" trill-step=\"half\" accelerate=\"yes\" second-beat=\"9.8\" last-beat=\"9.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.9 ) );
	object.setSecondBeat( MxNumberPercent( 9.9 ) );
	object.setLastBeat( MxNumberPercent( 9.9 ) );
	expected = "trill-step=\"unison\" accelerate=\"no\" second-beat=\"9.9\" last-beat=\"9.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11 ) );
	object.setSecondBeat( MxNumberPercent( 10 ) );
	object.setLastBeat( MxNumberPercent( 10 ) );
	expected = "start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"11\" last-beat=\"10\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.1 ) );
	object.setSecondBeat( MxNumberPercent( 10.1 ) );
	object.setLastBeat( MxNumberPercent( 10.1 ) );
	expected = "two-note-turn=\"half\" accelerate=\"no\" beats=\"11.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.2 ) );
	object.setSecondBeat( MxNumberPercent( 10.2 ) );
	object.setLastBeat( MxNumberPercent( 10.2 ) );
	expected = "start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" beats=\"11.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.3 ) );
	object.setSecondBeat( MxNumberPercent( 10.3 ) );
	object.setLastBeat( MxNumberPercent( 10.3 ) );
	expected = "trill-step=\"whole\" beats=\"11.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.4 ) );
	object.setSecondBeat( MxNumberPercent( 10.4 ) );
	object.setLastBeat( MxNumberPercent( 10.4 ) );
	expected = "start-note=\"main\" beats=\"11.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.5 ) );
	object.setSecondBeat( MxNumberPercent( 10.5 ) );
	object.setLastBeat( MxNumberPercent( 10.5 ) );
	expected = "";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.6 ) );
	object.setSecondBeat( MxNumberPercent( 10.6 ) );
	object.setLastBeat( MxNumberPercent( 10.6 ) );
	expected = "start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" second-beat=\"10.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.7 ) );
	object.setSecondBeat( MxNumberPercent( 10.7 ) );
	object.setLastBeat( MxNumberPercent( 10.7 ) );
	expected = "trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" second-beat=\"10.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.8 ) );
	object.setSecondBeat( MxNumberPercent( 10.8 ) );
	object.setLastBeat( MxNumberPercent( 10.8 ) );
	expected = "start-note=\"below\" two-note-turn=\"none\" accelerate=\"yes\" second-beat=\"10.8\" last-beat=\"10.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	std::string expected;
	std::string actual;
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.9 ) );
	object.setSecondBeat( MxNumberPercent( 10.9 ) );
	object.setLastBeat( MxNumberPercent( 10.9 ) );
	expected = "accelerate=\"no\" second-beat=\"10.9\" last-beat=\"10.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}

/* End: toString ------------------------------------------------------------ */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsStartNoteDefaultDefined, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = true;
	bool actual = object.getIsStartNoteDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepDefaultDefined, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = true;
	bool actual = object.getIsTrillStepDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnDefaultDefined, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = true;
	bool actual = object.getIsTwoNoteTurnDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAccelerateDefaultDefined, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = true;
	bool actual = object.getIsAccelerateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsDefaultDefined, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = true;
	bool actual = object.getIsBeatsDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatDefaultDefined, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = true;
	bool actual = object.getIsSecondBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatDefaultDefined, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	bool expected = true;
	bool actual = object.getIsLastBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getStartNoteDefaultValue, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	MxEnumStartNote expected( lexicon::enums::StartNote::upper );
	MxEnumStartNote actual = object.getStartNoteDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTrillStepDefaultValue, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	MxEnumTrillStep expected( lexicon::enums::TrillStep::whole );
	MxEnumTrillStep actual = object.getTrillStepDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTwoNoteTurnDefaultValue, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	MxEnumTwoNoteTurn expected( lexicon::enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn actual = object.getTwoNoteTurnDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getAccelerateDefaultValue, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getAccelerateDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBeatsDefaultValue, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	MxNumberTrillBeats expected( 4 );
	MxNumberTrillBeats actual = object.getBeatsDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSecondBeatDefaultValue, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	MxNumberPercent expected( 0.25 );
	MxNumberPercent actual = object.getSecondBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLastBeatDefaultValue, MxAttrGrpTrillSound )
{
	MxAttrGrpTrillSound object;
	MxNumberPercent expected( 0.75 );
	MxNumberPercent actual = object.getLastBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


