/** *******************************************************
  * 
  * MxCxEmptyWavyLineTest.cpp
  * Created: 2014-12-03 16:31:28
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyWavyLine.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxEnumStartStopContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxEnumStartNote( lexicon::enums::StartNote::upper ) ).toString();
	std::string actual = object.getStartNote().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) ).toString();
	std::string actual = object.getTrillStep().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) ).toString();
	std::string actual = object.getTwoNoteTurn().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getAccelerate().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxNumberTrillBeats( 4 ) ).toString();
	std::string actual = object.getBeats().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxNumberPercent( 0.25 ) ).toString();
	std::string actual = object.getSecondBeat().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = ( MxNumberPercent( 0.75 ) ).toString();
	std::string actual = object.getLastBeat().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = "MxCxEmptyWavyLine";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = "wavy-line";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	std::string expected = "Wavy lines are one way to indicate trills. When used with a measure element, they should always have type='continue' set.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptyWavyLine )
{
	MxEnumStartStopContinue value1( lexicon::enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue value2( lexicon::enums::StartStopContinue::stop );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setType( value1 );
	MxEnumStartStopContinue expected = value1;
	MxEnumStartStopContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxCxEmptyWavyLine )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxCxEmptyWavyLine )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxCxEmptyWavyLine )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxCxEmptyWavyLine )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxCxEmptyWavyLine )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement6, MxCxEmptyWavyLine )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setPlacement( value1 );
	MxEnumAboveBelow expected = value1;
	MxEnumAboveBelow actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
	object.setPlacement( value2 );
	expected = value2;
	actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor7, MxCxEmptyWavyLine )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setStartNote8, MxCxEmptyWavyLine )
{
	MxEnumStartNote value1( lexicon::enums::StartNote::below );
	MxEnumStartNote value2( lexicon::enums::StartNote::main );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setStartNote( value1 );
	MxEnumStartNote expected = value1;
	MxEnumStartNote actual = object.getStartNote();
	CHECK_EQUAL( expected, actual )
	object.setStartNote( value2 );
	expected = value2;
	actual = object.getStartNote();
	CHECK_EQUAL( expected, actual )
}
TEST( setTrillStep9, MxCxEmptyWavyLine )
{
	MxEnumTrillStep value1( lexicon::enums::TrillStep::unison );
	MxEnumTrillStep value2( lexicon::enums::TrillStep::half );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setTrillStep( value1 );
	MxEnumTrillStep expected = value1;
	MxEnumTrillStep actual = object.getTrillStep();
	CHECK_EQUAL( expected, actual )
	object.setTrillStep( value2 );
	expected = value2;
	actual = object.getTrillStep();
	CHECK_EQUAL( expected, actual )
}
TEST( setTwoNoteTurn10, MxCxEmptyWavyLine )
{
	MxEnumTwoNoteTurn value1( lexicon::enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn value2( lexicon::enums::TwoNoteTurn::half );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setTwoNoteTurn( value1 );
	MxEnumTwoNoteTurn expected = value1;
	MxEnumTwoNoteTurn actual = object.getTwoNoteTurn();
	CHECK_EQUAL( expected, actual )
	object.setTwoNoteTurn( value2 );
	expected = value2;
	actual = object.getTwoNoteTurn();
	CHECK_EQUAL( expected, actual )
}
TEST( setAccelerate11, MxCxEmptyWavyLine )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setAccelerate( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
	object.setAccelerate( value2 );
	expected = value2;
	actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
}
TEST( setBeats12, MxCxEmptyWavyLine )
{
	MxNumberTrillBeats value1( 2.1 );
	MxNumberTrillBeats value2( 2.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setBeats( value1 );
	MxNumberTrillBeats expected = value1;
	MxNumberTrillBeats actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
	object.setBeats( value2 );
	expected = value2;
	actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
}
TEST( setSecondBeat13, MxCxEmptyWavyLine )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
	object.setSecondBeat( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getSecondBeat();
	CHECK_EQUAL( expected, actual )
	object.setSecondBeat( value2 );
	expected = value2;
	actual = object.getSecondBeat();
	CHECK_EQUAL( expected, actual )
}
TEST( setLastBeat14, MxCxEmptyWavyLine )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWavyLine object;
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

TEST( getIsTypeRequired0, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired6, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired7, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStartNoteRequired8, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsStartNoteRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepRequired9, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsTrillStepRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnRequired10, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsTwoNoteTurnRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAccelerateRequired11, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsAccelerateRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsRequired12, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsBeatsRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatRequired13, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsSecondBeatRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatRequired14, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsLastBeatRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = true;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberPresent1, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( true );
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( false );
	expected = false;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent2, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsDefaultXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultXPresent( true );
	expected = true;
	actual = object.getIsDefaultXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultXPresent( false );
	expected = false;
	actual = object.getIsDefaultXPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYPresent3, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsDefaultYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultYPresent( true );
	expected = true;
	actual = object.getIsDefaultYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultYPresent( false );
	expected = false;
	actual = object.getIsDefaultYPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXPresent4, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsRelativeXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeXPresent( true );
	expected = true;
	actual = object.getIsRelativeXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeXPresent( false );
	expected = false;
	actual = object.getIsRelativeXPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYPresent5, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsRelativeYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeYPresent( true );
	expected = true;
	actual = object.getIsRelativeYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeYPresent( false );
	expected = false;
	actual = object.getIsRelativeYPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementPresent6, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlacementPresent( true );
	expected = true;
	actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlacementPresent( false );
	expected = false;
	actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorPresent7, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsColorPresent( true );
	expected = true;
	actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsColorPresent( false );
	expected = false;
	actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStartNotePresent8, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
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
TEST( getIsTrillStepPresent9, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
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
TEST( getIsTwoNoteTurnPresent10, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
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
TEST( getIsAcceleratePresent11, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
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
TEST( getIsBeatsPresent12, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
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
TEST( getIsSecondBeatPresent13, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
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
TEST( getIsLastBeatPresent14, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTypeDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStartNoteDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = true;
	bool actual = object.getIsStartNoteDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = true;
	bool actual = object.getIsTrillStepDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = true;
	bool actual = object.getIsTwoNoteTurnDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAccelerateDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = true;
	bool actual = object.getIsAccelerateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = true;
	bool actual = object.getIsBeatsDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = true;
	bool actual = object.getIsSecondBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatDefaultDefined, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	bool expected = true;
	bool actual = object.getIsLastBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxEnumStartStopContinue expected;
	MxEnumStartStopContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getStartNoteDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxEnumStartNote expected( lexicon::enums::StartNote::upper );
	MxEnumStartNote actual = object.getStartNoteDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTrillStepDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxEnumTrillStep expected( lexicon::enums::TrillStep::whole );
	MxEnumTrillStep actual = object.getTrillStepDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTwoNoteTurnDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxEnumTwoNoteTurn expected( lexicon::enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn actual = object.getTwoNoteTurnDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getAccelerateDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getAccelerateDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBeatsDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxNumberTrillBeats expected( 4 );
	MxNumberTrillBeats actual = object.getBeatsDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSecondBeatDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxNumberPercent expected( 0.25 );
	MxNumberPercent actual = object.getSecondBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLastBeatDefaultValue, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object;
	MxNumberPercent expected( 0.75 );
	MxNumberPercent actual = object.getLastBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 61.7 ) );
	object.setDefaultY( MxNumberTenths( 61.7 ) );
	object.setRelativeX( MxNumberTenths( 61.7 ) );
	object.setRelativeY( MxNumberTenths( 61.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 22.3 ) );
	object.setSecondBeat( MxNumberPercent( 21.3 ) );
	object.setLastBeat( MxNumberPercent( 21.3 ) );
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"61.7\" default-y=\"61.7\" relative-x=\"61.7\" relative-y=\"61.7\" placement=\"above\" color=\"#BDBEBDBC\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\" beats=\"22.3\" second-beat=\"21.3\" last-beat=\"21.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 61.8 ) );
	object.setDefaultY( MxNumberTenths( 61.8 ) );
	object.setRelativeX( MxNumberTenths( 61.8 ) );
	object.setRelativeY( MxNumberTenths( 61.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 22.4 ) );
	object.setSecondBeat( MxNumberPercent( 21.4 ) );
	object.setLastBeat( MxNumberPercent( 21.4 ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"61.8\" default-y=\"61.8\" relative-x=\"61.8\" relative-y=\"61.8\" placement=\"below\" color=\"#C0BFBE\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"22.4\" second-beat=\"21.4\" last-beat=\"21.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 61.9 ) );
	object.setDefaultY( MxNumberTenths( 61.9 ) );
	object.setRelativeX( MxNumberTenths( 61.9 ) );
	object.setRelativeY( MxNumberTenths( 61.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 22.5 ) );
	object.setSecondBeat( MxNumberPercent( 21.5 ) );
	object.setLastBeat( MxNumberPercent( 21.5 ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"61.9\" default-y=\"61.9\" relative-x=\"61.9\" relative-y=\"61.9\" placement=\"above\" color=\"#C1C2C1C0\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"22.5\" second-beat=\"21.5\" last-beat=\"21.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 62 ) );
	object.setDefaultY( MxNumberTenths( 62 ) );
	object.setRelativeX( MxNumberTenths( 62 ) );
	object.setRelativeY( MxNumberTenths( 62 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 22.6 ) );
	object.setSecondBeat( MxNumberPercent( 21.6 ) );
	object.setLastBeat( MxNumberPercent( 21.6 ) );
	expected = "<bishop type=\"start\" default-y=\"62\" relative-x=\"62\" relative-y=\"62\" placement=\"below\" color=\"#C4C3C2\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"22.6\" second-beat=\"21.6\" last-beat=\"21.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 62.1 ) );
	object.setDefaultY( MxNumberTenths( 62.1 ) );
	object.setRelativeX( MxNumberTenths( 62.1 ) );
	object.setRelativeY( MxNumberTenths( 62.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 22.7 ) );
	object.setSecondBeat( MxNumberPercent( 21.7 ) );
	object.setLastBeat( MxNumberPercent( 21.7 ) );
	expected = "<charlie type=\"start\" number=\"1\" relative-x=\"62.1\" relative-y=\"62.1\" placement=\"above\" color=\"#C5C6C5C4\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"22.7\" second-beat=\"21.7\" last-beat=\"21.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 62.2 ) );
	object.setDefaultY( MxNumberTenths( 62.2 ) );
	object.setRelativeX( MxNumberTenths( 62.2 ) );
	object.setRelativeY( MxNumberTenths( 62.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 22.8 ) );
	object.setSecondBeat( MxNumberPercent( 21.8 ) );
	object.setLastBeat( MxNumberPercent( 21.8 ) );
	expected = "<booksmart type=\"start\" number=\"1\" relative-y=\"62.2\" placement=\"below\" color=\"#C8C7C6\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"22.8\" second-beat=\"21.8\" last-beat=\"21.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 62.3 ) );
	object.setDefaultY( MxNumberTenths( 62.3 ) );
	object.setRelativeX( MxNumberTenths( 62.3 ) );
	object.setRelativeY( MxNumberTenths( 62.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 22.9 ) );
	object.setSecondBeat( MxNumberPercent( 21.9 ) );
	object.setLastBeat( MxNumberPercent( 21.9 ) );
	expected = "<quiet type=\"start\" default-x=\"62.3\" placement=\"above\" color=\"#C9CAC9C8\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\" beats=\"22.9\" second-beat=\"21.9\" last-beat=\"21.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 62.4 ) );
	object.setDefaultY( MxNumberTenths( 62.4 ) );
	object.setRelativeX( MxNumberTenths( 62.4 ) );
	object.setRelativeY( MxNumberTenths( 62.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 23 ) );
	object.setSecondBeat( MxNumberPercent( 22 ) );
	object.setLastBeat( MxNumberPercent( 22 ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"62.4\" color=\"#CCCBCA\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"23\" second-beat=\"22\" last-beat=\"22\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 62.5 ) );
	object.setDefaultY( MxNumberTenths( 62.5 ) );
	object.setRelativeX( MxNumberTenths( 62.5 ) );
	object.setRelativeY( MxNumberTenths( 62.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 23.1 ) );
	object.setSecondBeat( MxNumberPercent( 22.1 ) );
	object.setLastBeat( MxNumberPercent( 22.1 ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"62.5\" default-y=\"62.5\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"23.1\" second-beat=\"22.1\" last-beat=\"22.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 62.6 ) );
	object.setDefaultY( MxNumberTenths( 62.6 ) );
	object.setRelativeX( MxNumberTenths( 62.6 ) );
	object.setRelativeY( MxNumberTenths( 62.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 23.2 ) );
	object.setSecondBeat( MxNumberPercent( 22.2 ) );
	object.setLastBeat( MxNumberPercent( 22.2 ) );
	expected = "<charlie type=\"start\" number=\"1\" default-y=\"62.6\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"23.2\" second-beat=\"22.2\" last-beat=\"22.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 62.7 ) );
	object.setDefaultY( MxNumberTenths( 62.7 ) );
	object.setRelativeX( MxNumberTenths( 62.7 ) );
	object.setRelativeY( MxNumberTenths( 62.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 23.3 ) );
	object.setSecondBeat( MxNumberPercent( 22.3 ) );
	object.setLastBeat( MxNumberPercent( 22.3 ) );
	expected = "<booksmart type=\"start\" default-y=\"62.7\" relative-x=\"62.7\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"23.3\" second-beat=\"22.3\" last-beat=\"22.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 62.8 ) );
	object.setDefaultY( MxNumberTenths( 62.8 ) );
	object.setRelativeX( MxNumberTenths( 62.8 ) );
	object.setRelativeY( MxNumberTenths( 62.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 23.4 ) );
	object.setSecondBeat( MxNumberPercent( 22.4 ) );
	object.setLastBeat( MxNumberPercent( 22.4 ) );
	expected = "<quiet type=\"start\" default-y=\"62.8\" relative-x=\"62.8\" accelerate=\"yes\" beats=\"23.4\" second-beat=\"22.4\" last-beat=\"22.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 62.9 ) );
	object.setDefaultY( MxNumberTenths( 62.9 ) );
	object.setRelativeX( MxNumberTenths( 62.9 ) );
	object.setRelativeY( MxNumberTenths( 62.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 23.5 ) );
	object.setSecondBeat( MxNumberPercent( 22.5 ) );
	object.setLastBeat( MxNumberPercent( 22.5 ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"62.9\" relative-x=\"62.9\" relative-y=\"62.9\" beats=\"23.5\" second-beat=\"22.5\" last-beat=\"22.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 63 ) );
	object.setDefaultY( MxNumberTenths( 63 ) );
	object.setRelativeX( MxNumberTenths( 63 ) );
	object.setRelativeY( MxNumberTenths( 63 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 23.6 ) );
	object.setSecondBeat( MxNumberPercent( 22.6 ) );
	object.setLastBeat( MxNumberPercent( 22.6 ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"63\" relative-x=\"63\" relative-y=\"63\" second-beat=\"22.6\" last-beat=\"22.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 63.1 ) );
	object.setDefaultY( MxNumberTenths( 63.1 ) );
	object.setRelativeX( MxNumberTenths( 63.1 ) );
	object.setRelativeY( MxNumberTenths( 63.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 23.7 ) );
	object.setSecondBeat( MxNumberPercent( 22.7 ) );
	object.setLastBeat( MxNumberPercent( 22.7 ) );
	expected = "<charlie type=\"start\" default-x=\"63.1\" relative-x=\"63.1\" relative-y=\"63.1\" placement=\"above\" last-beat=\"22.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 63.2 ) );
	object.setDefaultY( MxNumberTenths( 63.2 ) );
	object.setRelativeX( MxNumberTenths( 63.2 ) );
	object.setRelativeY( MxNumberTenths( 63.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 23.8 ) );
	object.setSecondBeat( MxNumberPercent( 22.8 ) );
	object.setLastBeat( MxNumberPercent( 22.8 ) );
	expected = "<booksmart type=\"start\" relative-y=\"63.2\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 63.3 ) );
	object.setDefaultY( MxNumberTenths( 63.3 ) );
	object.setRelativeX( MxNumberTenths( 63.3 ) );
	object.setRelativeY( MxNumberTenths( 63.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 23.9 ) );
	object.setSecondBeat( MxNumberPercent( 22.9 ) );
	object.setLastBeat( MxNumberPercent( 22.9 ) );
	expected = "<quiet type=\"start\" number=\"1\" default-y=\"63.3\" relative-y=\"63.3\" placement=\"above\" color=\"#DDDEDDDC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 63.4 ) );
	object.setDefaultY( MxNumberTenths( 63.4 ) );
	object.setRelativeX( MxNumberTenths( 63.4 ) );
	object.setRelativeY( MxNumberTenths( 63.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 24 ) );
	object.setSecondBeat( MxNumberPercent( 23 ) );
	object.setLastBeat( MxNumberPercent( 23 ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-y=\"63.4\" relative-y=\"63.4\" placement=\"below\" color=\"#E0DFDE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 63.5 ) );
	object.setDefaultY( MxNumberTenths( 63.5 ) );
	object.setRelativeX( MxNumberTenths( 63.5 ) );
	object.setRelativeY( MxNumberTenths( 63.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 24.1 ) );
	object.setSecondBeat( MxNumberPercent( 23.1 ) );
	object.setLastBeat( MxNumberPercent( 23.1 ) );
	expected = "<bishop type=\"start\" default-x=\"63.5\" default-y=\"63.5\" placement=\"above\" color=\"#E1E2E1E0\" start-note=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 63.6 ) );
	object.setDefaultY( MxNumberTenths( 63.6 ) );
	object.setRelativeX( MxNumberTenths( 63.6 ) );
	object.setRelativeY( MxNumberTenths( 63.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 24.2 ) );
	object.setSecondBeat( MxNumberPercent( 23.2 ) );
	object.setLastBeat( MxNumberPercent( 23.2 ) );
	expected = "<charlie type=\"start\" default-x=\"63.6\" default-y=\"63.6\" placement=\"below\" color=\"#E4E3E2\" start-note=\"upper\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 63.7 ) );
	object.setDefaultY( MxNumberTenths( 63.7 ) );
	object.setRelativeX( MxNumberTenths( 63.7 ) );
	object.setRelativeY( MxNumberTenths( 63.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 24.3 ) );
	object.setSecondBeat( MxNumberPercent( 23.3 ) );
	object.setLastBeat( MxNumberPercent( 23.3 ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"63.7\" relative-x=\"63.7\" placement=\"above\" color=\"#E5E6E5E4\" start-note=\"main\" trill-step=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 63.8 ) );
	object.setDefaultY( MxNumberTenths( 63.8 ) );
	object.setRelativeX( MxNumberTenths( 63.8 ) );
	object.setRelativeY( MxNumberTenths( 63.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 24.4 ) );
	object.setSecondBeat( MxNumberPercent( 23.4 ) );
	object.setLastBeat( MxNumberPercent( 23.4 ) );
	expected = "<quiet type=\"start\" number=\"1\" relative-x=\"63.8\" color=\"#E8E7E6\" start-note=\"below\" trill-step=\"unison\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 63.9 ) );
	object.setDefaultY( MxNumberTenths( 63.9 ) );
	object.setRelativeX( MxNumberTenths( 63.9 ) );
	object.setRelativeY( MxNumberTenths( 63.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 24.5 ) );
	object.setSecondBeat( MxNumberPercent( 23.5 ) );
	object.setLastBeat( MxNumberPercent( 23.5 ) );
	expected = "<musicxmlishard type=\"start\" relative-x=\"63.9\" color=\"#E9EAE9E8\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 64 ) );
	object.setDefaultY( MxNumberTenths( 64 ) );
	object.setRelativeX( MxNumberTenths( 64 ) );
	object.setRelativeY( MxNumberTenths( 64 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 24.6 ) );
	object.setSecondBeat( MxNumberPercent( 23.6 ) );
	object.setLastBeat( MxNumberPercent( 23.6 ) );
	expected = "<bishop type=\"start\" relative-x=\"64\" color=\"#ECEBEA\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 64.1 ) );
	object.setDefaultY( MxNumberTenths( 64.1 ) );
	object.setRelativeX( MxNumberTenths( 64.1 ) );
	object.setRelativeY( MxNumberTenths( 64.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 24.7 ) );
	object.setSecondBeat( MxNumberPercent( 23.7 ) );
	object.setLastBeat( MxNumberPercent( 23.7 ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"64.1\" default-y=\"64.1\" relative-x=\"64.1\" relative-y=\"64.1\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 64.2 ) );
	object.setDefaultY( MxNumberTenths( 64.2 ) );
	object.setRelativeX( MxNumberTenths( 64.2 ) );
	object.setRelativeY( MxNumberTenths( 64.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 24.8 ) );
	object.setSecondBeat( MxNumberPercent( 23.8 ) );
	object.setLastBeat( MxNumberPercent( 23.8 ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"64.2\" default-y=\"64.2\" relative-y=\"64.2\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 64.3 ) );
	object.setDefaultY( MxNumberTenths( 64.3 ) );
	object.setRelativeX( MxNumberTenths( 64.3 ) );
	object.setRelativeY( MxNumberTenths( 64.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 24.9 ) );
	object.setSecondBeat( MxNumberPercent( 23.9 ) );
	object.setLastBeat( MxNumberPercent( 23.9 ) );
	expected = "<quiet type=\"start\" default-x=\"64.3\" default-y=\"64.3\" relative-y=\"64.3\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"24.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 64.4 ) );
	object.setDefaultY( MxNumberTenths( 64.4 ) );
	object.setRelativeX( MxNumberTenths( 64.4 ) );
	object.setRelativeY( MxNumberTenths( 64.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 25 ) );
	object.setSecondBeat( MxNumberPercent( 24 ) );
	object.setLastBeat( MxNumberPercent( 24 ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"64.4\" relative-y=\"64.4\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"25\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 64.5 ) );
	object.setDefaultY( MxNumberTenths( 64.5 ) );
	object.setRelativeX( MxNumberTenths( 64.5 ) );
	object.setRelativeY( MxNumberTenths( 64.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 25.1 ) );
	object.setSecondBeat( MxNumberPercent( 24.1 ) );
	object.setLastBeat( MxNumberPercent( 24.1 ) );
	expected = "<bishop type=\"start\" number=\"1\" relative-y=\"64.5\" placement=\"above\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"25.1\" second-beat=\"24.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 64.6 ) );
	object.setDefaultY( MxNumberTenths( 64.6 ) );
	object.setRelativeX( MxNumberTenths( 64.6 ) );
	object.setRelativeY( MxNumberTenths( 64.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 25.2 ) );
	object.setSecondBeat( MxNumberPercent( 24.2 ) );
	object.setLastBeat( MxNumberPercent( 24.2 ) );
	expected = "<charlie type=\"start\" number=\"1\" relative-y=\"64.6\" placement=\"below\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"25.2\" second-beat=\"24.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 64.7 ) );
	object.setDefaultY( MxNumberTenths( 64.7 ) );
	object.setRelativeX( MxNumberTenths( 64.7 ) );
	object.setRelativeY( MxNumberTenths( 64.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 25.3 ) );
	object.setSecondBeat( MxNumberPercent( 24.3 ) );
	object.setLastBeat( MxNumberPercent( 24.3 ) );
	expected = "<booksmart type=\"start\" default-x=\"64.7\" relative-x=\"64.7\" placement=\"above\" two-note-turn=\"none\" accelerate=\"no\" beats=\"25.3\" second-beat=\"24.3\" last-beat=\"24.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 64.8 ) );
	object.setDefaultY( MxNumberTenths( 64.8 ) );
	object.setRelativeX( MxNumberTenths( 64.8 ) );
	object.setRelativeY( MxNumberTenths( 64.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 25.4 ) );
	object.setSecondBeat( MxNumberPercent( 24.4 ) );
	object.setLastBeat( MxNumberPercent( 24.4 ) );
	expected = "<quiet type=\"start\" default-x=\"64.8\" relative-x=\"64.8\" placement=\"below\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"25.4\" second-beat=\"24.4\" last-beat=\"24.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 64.9 ) );
	object.setDefaultY( MxNumberTenths( 64.9 ) );
	object.setRelativeX( MxNumberTenths( 64.9 ) );
	object.setRelativeY( MxNumberTenths( 64.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 25.5 ) );
	object.setSecondBeat( MxNumberPercent( 24.5 ) );
	object.setLastBeat( MxNumberPercent( 24.5 ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"64.9\" default-y=\"64.9\" relative-x=\"64.9\" placement=\"above\" color=\"#FDFEFDFC\" two-note-turn=\"half\" accelerate=\"no\" beats=\"25.5\" second-beat=\"24.5\" last-beat=\"24.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 65 ) );
	object.setDefaultY( MxNumberTenths( 65 ) );
	object.setRelativeX( MxNumberTenths( 65 ) );
	object.setRelativeY( MxNumberTenths( 65 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 25.6 ) );
	object.setSecondBeat( MxNumberPercent( 24.6 ) );
	object.setLastBeat( MxNumberPercent( 24.6 ) );
	expected = "<bishop type=\"start\" number=\"1\" default-y=\"65\" relative-x=\"65\" placement=\"below\" color=\"#00FFFE\" accelerate=\"yes\" beats=\"25.6\" second-beat=\"24.6\" last-beat=\"24.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 65.1 ) );
	object.setDefaultY( MxNumberTenths( 65.1 ) );
	object.setRelativeX( MxNumberTenths( 65.1 ) );
	object.setRelativeY( MxNumberTenths( 65.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 25.7 ) );
	object.setSecondBeat( MxNumberPercent( 24.7 ) );
	object.setLastBeat( MxNumberPercent( 24.7 ) );
	expected = "<charlie type=\"start\" default-y=\"65.1\" relative-x=\"65.1\" placement=\"above\" color=\"#01020100\" accelerate=\"no\" beats=\"25.7\" second-beat=\"24.7\" last-beat=\"24.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 65.2 ) );
	object.setDefaultY( MxNumberTenths( 65.2 ) );
	object.setRelativeX( MxNumberTenths( 65.2 ) );
	object.setRelativeY( MxNumberTenths( 65.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#040302" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 25.8 ) );
	object.setSecondBeat( MxNumberPercent( 24.8 ) );
	object.setLastBeat( MxNumberPercent( 24.8 ) );
	expected = "<booksmart type=\"start\" default-y=\"65.2\" color=\"#040302\" accelerate=\"yes\" beats=\"25.8\" second-beat=\"24.8\" last-beat=\"24.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 65.3 ) );
	object.setDefaultY( MxNumberTenths( 65.3 ) );
	object.setRelativeX( MxNumberTenths( 65.3 ) );
	object.setRelativeY( MxNumberTenths( 65.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 25.9 ) );
	object.setSecondBeat( MxNumberPercent( 24.9 ) );
	object.setLastBeat( MxNumberPercent( 24.9 ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"65.3\" relative-y=\"65.3\" color=\"#05060504\" start-note=\"below\" beats=\"25.9\" second-beat=\"24.9\" last-beat=\"24.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 65.4 ) );
	object.setDefaultY( MxNumberTenths( 65.4 ) );
	object.setRelativeX( MxNumberTenths( 65.4 ) );
	object.setRelativeY( MxNumberTenths( 65.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#080706" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 26 ) );
	object.setSecondBeat( MxNumberPercent( 25 ) );
	object.setLastBeat( MxNumberPercent( 25 ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"65.4\" relative-y=\"65.4\" color=\"#080706\" start-note=\"upper\" beats=\"26\" second-beat=\"25\" last-beat=\"25\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 65.5 ) );
	object.setDefaultY( MxNumberTenths( 65.5 ) );
	object.setRelativeX( MxNumberTenths( 65.5 ) );
	object.setRelativeY( MxNumberTenths( 65.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 26.1 ) );
	object.setSecondBeat( MxNumberPercent( 25.1 ) );
	object.setLastBeat( MxNumberPercent( 25.1 ) );
	expected = "<bishop type=\"start\" default-x=\"65.5\" relative-y=\"65.5\" color=\"#090A0908\" start-note=\"main\" beats=\"26.1\" second-beat=\"25.1\" last-beat=\"25.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 65.6 ) );
	object.setDefaultY( MxNumberTenths( 65.6 ) );
	object.setRelativeX( MxNumberTenths( 65.6 ) );
	object.setRelativeY( MxNumberTenths( 65.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 26.2 ) );
	object.setSecondBeat( MxNumberPercent( 25.2 ) );
	object.setLastBeat( MxNumberPercent( 25.2 ) );
	expected = "<charlie type=\"start\" relative-y=\"65.6\" color=\"#0C0B0A\" start-note=\"below\" second-beat=\"25.2\" last-beat=\"25.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 65.7 ) );
	object.setDefaultY( MxNumberTenths( 65.7 ) );
	object.setRelativeX( MxNumberTenths( 65.7 ) );
	object.setRelativeY( MxNumberTenths( 65.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 26.3 ) );
	object.setSecondBeat( MxNumberPercent( 25.3 ) );
	object.setLastBeat( MxNumberPercent( 25.3 ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-y=\"65.7\" relative-x=\"65.7\" relative-y=\"65.7\" start-note=\"upper\" trill-step=\"whole\" second-beat=\"25.3\" last-beat=\"25.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 65.8 ) );
	object.setDefaultY( MxNumberTenths( 65.8 ) );
	object.setRelativeX( MxNumberTenths( 65.8 ) );
	object.setRelativeY( MxNumberTenths( 65.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 26.4 ) );
	object.setSecondBeat( MxNumberPercent( 25.4 ) );
	object.setLastBeat( MxNumberPercent( 25.4 ) );
	expected = "<quiet type=\"start\" number=\"1\" default-y=\"65.8\" relative-x=\"65.8\" relative-y=\"65.8\" start-note=\"main\" trill-step=\"half\" second-beat=\"25.4\" last-beat=\"25.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 65.9 ) );
	object.setDefaultY( MxNumberTenths( 65.9 ) );
	object.setRelativeX( MxNumberTenths( 65.9 ) );
	object.setRelativeY( MxNumberTenths( 65.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 26.5 ) );
	object.setSecondBeat( MxNumberPercent( 25.5 ) );
	object.setLastBeat( MxNumberPercent( 25.5 ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"65.9\" default-y=\"65.9\" relative-x=\"65.9\" placement=\"above\" start-note=\"below\" trill-step=\"unison\" last-beat=\"25.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 66 ) );
	object.setDefaultY( MxNumberTenths( 66 ) );
	object.setRelativeX( MxNumberTenths( 66 ) );
	object.setRelativeY( MxNumberTenths( 66 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#141312" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 26.6 ) );
	object.setSecondBeat( MxNumberPercent( 25.6 ) );
	object.setLastBeat( MxNumberPercent( 25.6 ) );
	expected = "<bishop type=\"start\" default-x=\"66\" default-y=\"66\" relative-x=\"66\" placement=\"below\" start-note=\"upper\" trill-step=\"whole\" last-beat=\"25.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 66.1 ) );
	object.setDefaultY( MxNumberTenths( 66.1 ) );
	object.setRelativeX( MxNumberTenths( 66.1 ) );
	object.setRelativeY( MxNumberTenths( 66.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 26.7 ) );
	object.setSecondBeat( MxNumberPercent( 25.7 ) );
	object.setLastBeat( MxNumberPercent( 25.7 ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"66.1\" relative-x=\"66.1\" placement=\"above\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" last-beat=\"25.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 66.2 ) );
	object.setDefaultY( MxNumberTenths( 66.2 ) );
	object.setRelativeX( MxNumberTenths( 66.2 ) );
	object.setRelativeY( MxNumberTenths( 66.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#181716" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 26.8 ) );
	object.setSecondBeat( MxNumberPercent( 25.8 ) );
	object.setLastBeat( MxNumberPercent( 25.8 ) );
	expected = "<booksmart type=\"start\" number=\"1\" placement=\"below\" trill-step=\"unison\" two-note-turn=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 66.3 ) );
	object.setDefaultY( MxNumberTenths( 66.3 ) );
	object.setRelativeX( MxNumberTenths( 66.3 ) );
	object.setRelativeY( MxNumberTenths( 66.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 26.9 ) );
	object.setSecondBeat( MxNumberPercent( 25.9 ) );
	object.setLastBeat( MxNumberPercent( 25.9 ) );
	expected = "<quiet type=\"start\" placement=\"above\" trill-step=\"whole\" two-note-turn=\"whole\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 66.4 ) );
	object.setDefaultY( MxNumberTenths( 66.4 ) );
	object.setRelativeX( MxNumberTenths( 66.4 ) );
	object.setRelativeY( MxNumberTenths( 66.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 27 ) );
	object.setSecondBeat( MxNumberPercent( 26 ) );
	object.setLastBeat( MxNumberPercent( 26 ) );
	expected = "<musicxmlishard type=\"start\" placement=\"below\" trill-step=\"half\" two-note-turn=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 66.5 ) );
	object.setDefaultY( MxNumberTenths( 66.5 ) );
	object.setRelativeX( MxNumberTenths( 66.5 ) );
	object.setRelativeY( MxNumberTenths( 66.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 27.1 ) );
	object.setSecondBeat( MxNumberPercent( 26.1 ) );
	object.setLastBeat( MxNumberPercent( 26.1 ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"66.5\" default-y=\"66.5\" relative-y=\"66.5\" placement=\"above\" color=\"#1D1E1D1C\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 66.6 ) );
	object.setDefaultY( MxNumberTenths( 66.6 ) );
	object.setRelativeX( MxNumberTenths( 66.6 ) );
	object.setRelativeY( MxNumberTenths( 66.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 27.2 ) );
	object.setSecondBeat( MxNumberPercent( 26.2 ) );
	object.setLastBeat( MxNumberPercent( 26.2 ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"66.6\" default-y=\"66.6\" relative-y=\"66.6\" color=\"#201F1E\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 66.7 ) );
	object.setDefaultY( MxNumberTenths( 66.7 ) );
	object.setRelativeX( MxNumberTenths( 66.7 ) );
	object.setRelativeY( MxNumberTenths( 66.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 27.3 ) );
	object.setSecondBeat( MxNumberPercent( 26.3 ) );
	object.setLastBeat( MxNumberPercent( 26.3 ) );
	expected = "<booksmart type=\"start\" default-x=\"66.7\" default-y=\"66.7\" relative-x=\"66.7\" relative-y=\"66.7\" color=\"#21222120\" two-note-turn=\"half\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 66.8 ) );
	object.setDefaultY( MxNumberTenths( 66.8 ) );
	object.setRelativeX( MxNumberTenths( 66.8 ) );
	object.setRelativeY( MxNumberTenths( 66.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#242322" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 27.4 ) );
	object.setSecondBeat( MxNumberPercent( 26.4 ) );
	object.setLastBeat( MxNumberPercent( 26.4 ) );
	expected = "<quiet type=\"start\" default-y=\"66.8\" relative-x=\"66.8\" relative-y=\"66.8\" color=\"#242322\" two-note-turn=\"none\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 66.9 ) );
	object.setDefaultY( MxNumberTenths( 66.9 ) );
	object.setRelativeX( MxNumberTenths( 66.9 ) );
	object.setRelativeY( MxNumberTenths( 66.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 27.5 ) );
	object.setSecondBeat( MxNumberPercent( 26.5 ) );
	object.setLastBeat( MxNumberPercent( 26.5 ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" relative-x=\"66.9\" relative-y=\"66.9\" color=\"#25262524\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"27.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 67 ) );
	object.setDefaultY( MxNumberTenths( 67 ) );
	object.setRelativeX( MxNumberTenths( 67 ) );
	object.setRelativeY( MxNumberTenths( 67 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#282726" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 27.6 ) );
	object.setSecondBeat( MxNumberPercent( 26.6 ) );
	object.setLastBeat( MxNumberPercent( 26.6 ) );
	expected = "<bishop type=\"start\" number=\"1\" relative-x=\"67\" relative-y=\"67\" color=\"#282726\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"27.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 67.1 ) );
	object.setDefaultY( MxNumberTenths( 67.1 ) );
	object.setRelativeX( MxNumberTenths( 67.1 ) );
	object.setRelativeY( MxNumberTenths( 67.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 27.7 ) );
	object.setSecondBeat( MxNumberPercent( 26.7 ) );
	object.setLastBeat( MxNumberPercent( 26.7 ) );
	expected = "<charlie type=\"start\" default-x=\"67.1\" relative-x=\"67.1\" color=\"#292A2928\" start-note=\"below\" two-note-turn=\"none\" accelerate=\"no\" beats=\"27.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 67.2 ) );
	object.setDefaultY( MxNumberTenths( 67.2 ) );
	object.setRelativeX( MxNumberTenths( 67.2 ) );
	object.setRelativeY( MxNumberTenths( 67.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 27.8 ) );
	object.setSecondBeat( MxNumberPercent( 26.8 ) );
	object.setLastBeat( MxNumberPercent( 26.8 ) );
	expected = "<booksmart type=\"start\" default-x=\"67.2\" color=\"#2C2B2A\" start-note=\"upper\" accelerate=\"yes\" beats=\"27.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 67.3 ) );
	object.setDefaultY( MxNumberTenths( 67.3 ) );
	object.setRelativeX( MxNumberTenths( 67.3 ) );
	object.setRelativeY( MxNumberTenths( 67.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 27.9 ) );
	object.setSecondBeat( MxNumberPercent( 26.9 ) );
	object.setLastBeat( MxNumberPercent( 26.9 ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"67.3\" default-y=\"67.3\" placement=\"above\" start-note=\"main\" accelerate=\"no\" beats=\"27.9\" second-beat=\"26.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 67.4 ) );
	object.setDefaultY( MxNumberTenths( 67.4 ) );
	object.setRelativeX( MxNumberTenths( 67.4 ) );
	object.setRelativeY( MxNumberTenths( 67.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 28 ) );
	object.setSecondBeat( MxNumberPercent( 27 ) );
	object.setLastBeat( MxNumberPercent( 27 ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-y=\"67.4\" placement=\"below\" start-note=\"below\" accelerate=\"yes\" beats=\"28\" second-beat=\"27\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 67.5 ) );
	object.setDefaultY( MxNumberTenths( 67.5 ) );
	object.setRelativeX( MxNumberTenths( 67.5 ) );
	object.setRelativeY( MxNumberTenths( 67.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 28.1 ) );
	object.setSecondBeat( MxNumberPercent( 27.1 ) );
	object.setLastBeat( MxNumberPercent( 27.1 ) );
	expected = "<bishop type=\"start\" default-y=\"67.5\" placement=\"above\" start-note=\"upper\" accelerate=\"no\" beats=\"28.1\" second-beat=\"27.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 67.6 ) );
	object.setDefaultY( MxNumberTenths( 67.6 ) );
	object.setRelativeX( MxNumberTenths( 67.6 ) );
	object.setRelativeY( MxNumberTenths( 67.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#343332" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 28.2 ) );
	object.setSecondBeat( MxNumberPercent( 27.2 ) );
	object.setLastBeat( MxNumberPercent( 27.2 ) );
	expected = "<charlie type=\"start\" default-y=\"67.6\" placement=\"below\" start-note=\"main\" accelerate=\"yes\" beats=\"28.2\" second-beat=\"27.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 67.7 ) );
	object.setDefaultY( MxNumberTenths( 67.7 ) );
	object.setRelativeX( MxNumberTenths( 67.7 ) );
	object.setRelativeY( MxNumberTenths( 67.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 28.3 ) );
	object.setSecondBeat( MxNumberPercent( 27.3 ) );
	object.setLastBeat( MxNumberPercent( 27.3 ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"67.7\" relative-x=\"67.7\" relative-y=\"67.7\" placement=\"above\" start-note=\"below\" trill-step=\"unison\" beats=\"28.3\" second-beat=\"27.3\" last-beat=\"27.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 67.8 ) );
	object.setDefaultY( MxNumberTenths( 67.8 ) );
	object.setRelativeX( MxNumberTenths( 67.8 ) );
	object.setRelativeY( MxNumberTenths( 67.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#383736" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 28.4 ) );
	object.setSecondBeat( MxNumberPercent( 27.4 ) );
	object.setLastBeat( MxNumberPercent( 27.4 ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"67.8\" relative-x=\"67.8\" relative-y=\"67.8\" placement=\"below\" start-note=\"upper\" trill-step=\"whole\" beats=\"28.4\" second-beat=\"27.4\" last-beat=\"27.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 67.9 ) );
	object.setDefaultY( MxNumberTenths( 67.9 ) );
	object.setRelativeX( MxNumberTenths( 67.9 ) );
	object.setRelativeY( MxNumberTenths( 67.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 28.5 ) );
	object.setSecondBeat( MxNumberPercent( 27.5 ) );
	object.setLastBeat( MxNumberPercent( 27.5 ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"67.9\" relative-x=\"67.9\" relative-y=\"67.9\" placement=\"above\" start-note=\"main\" trill-step=\"half\" beats=\"28.5\" second-beat=\"27.5\" last-beat=\"27.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 68 ) );
	object.setDefaultY( MxNumberTenths( 68 ) );
	object.setRelativeX( MxNumberTenths( 68 ) );
	object.setRelativeY( MxNumberTenths( 68 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 28.6 ) );
	object.setSecondBeat( MxNumberPercent( 27.6 ) );
	object.setLastBeat( MxNumberPercent( 27.6 ) );
	expected = "<bishop type=\"start\" relative-x=\"68\" relative-y=\"68\" trill-step=\"unison\" beats=\"28.6\" second-beat=\"27.6\" last-beat=\"27.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 68.1 ) );
	object.setDefaultY( MxNumberTenths( 68.1 ) );
	object.setRelativeX( MxNumberTenths( 68.1 ) );
	object.setRelativeY( MxNumberTenths( 68.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 28.7 ) );
	object.setSecondBeat( MxNumberPercent( 27.7 ) );
	object.setLastBeat( MxNumberPercent( 27.7 ) );
	expected = "<charlie type=\"start\" number=\"1\" default-y=\"68.1\" relative-x=\"68.1\" relative-y=\"68.1\" color=\"#3D3E3D3C\" trill-step=\"whole\" beats=\"28.7\" second-beat=\"27.7\" last-beat=\"27.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 68.2 ) );
	object.setDefaultY( MxNumberTenths( 68.2 ) );
	object.setRelativeX( MxNumberTenths( 68.2 ) );
	object.setRelativeY( MxNumberTenths( 68.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 28.8 ) );
	object.setSecondBeat( MxNumberPercent( 27.8 ) );
	object.setLastBeat( MxNumberPercent( 27.8 ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-y=\"68.2\" relative-y=\"68.2\" color=\"#403F3E\" trill-step=\"half\" second-beat=\"27.8\" last-beat=\"27.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 68.3 ) );
	object.setDefaultY( MxNumberTenths( 68.3 ) );
	object.setRelativeX( MxNumberTenths( 68.3 ) );
	object.setRelativeY( MxNumberTenths( 68.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 28.9 ) );
	object.setSecondBeat( MxNumberPercent( 27.9 ) );
	object.setLastBeat( MxNumberPercent( 27.9 ) );
	expected = "<quiet type=\"start\" default-x=\"68.3\" default-y=\"68.3\" color=\"#41424140\" trill-step=\"unison\" two-note-turn=\"none\" second-beat=\"27.9\" last-beat=\"27.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 68.4 ) );
	object.setDefaultY( MxNumberTenths( 68.4 ) );
	object.setRelativeX( MxNumberTenths( 68.4 ) );
	object.setRelativeY( MxNumberTenths( 68.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#444342" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 29 ) );
	object.setSecondBeat( MxNumberPercent( 28 ) );
	object.setLastBeat( MxNumberPercent( 28 ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"68.4\" default-y=\"68.4\" color=\"#444342\" trill-step=\"whole\" two-note-turn=\"whole\" second-beat=\"28\" last-beat=\"28\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 68.5 ) );
	object.setDefaultY( MxNumberTenths( 68.5 ) );
	object.setRelativeX( MxNumberTenths( 68.5 ) );
	object.setRelativeY( MxNumberTenths( 68.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 29.1 ) );
	object.setSecondBeat( MxNumberPercent( 28.1 ) );
	object.setLastBeat( MxNumberPercent( 28.1 ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"68.5\" color=\"#45464544\" trill-step=\"half\" two-note-turn=\"half\" second-beat=\"28.1\" last-beat=\"28.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 68.6 ) );
	object.setDefaultY( MxNumberTenths( 68.6 ) );
	object.setRelativeX( MxNumberTenths( 68.6 ) );
	object.setRelativeY( MxNumberTenths( 68.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#484746" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 29.2 ) );
	object.setSecondBeat( MxNumberPercent( 28.2 ) );
	object.setLastBeat( MxNumberPercent( 28.2 ) );
	expected = "<charlie type=\"start\" number=\"1\" color=\"#484746\" trill-step=\"unison\" two-note-turn=\"none\" second-beat=\"28.2\" last-beat=\"28.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 68.7 ) );
	object.setDefaultY( MxNumberTenths( 68.7 ) );
	object.setRelativeX( MxNumberTenths( 68.7 ) );
	object.setRelativeY( MxNumberTenths( 68.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 29.3 ) );
	object.setSecondBeat( MxNumberPercent( 28.3 ) );
	object.setLastBeat( MxNumberPercent( 28.3 ) );
	expected = "<booksmart type=\"start\" relative-x=\"68.7\" placement=\"above\" color=\"#494A4948\" two-note-turn=\"whole\" last-beat=\"28.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 68.8 ) );
	object.setDefaultY( MxNumberTenths( 68.8 ) );
	object.setRelativeX( MxNumberTenths( 68.8 ) );
	object.setRelativeY( MxNumberTenths( 68.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 29.4 ) );
	object.setSecondBeat( MxNumberPercent( 28.4 ) );
	object.setLastBeat( MxNumberPercent( 28.4 ) );
	expected = "<quiet type=\"start\" relative-x=\"68.8\" placement=\"below\" color=\"#4C4B4A\" two-note-turn=\"half\" last-beat=\"28.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 68.9 ) );
	object.setDefaultY( MxNumberTenths( 68.9 ) );
	object.setRelativeX( MxNumberTenths( 68.9 ) );
	object.setRelativeY( MxNumberTenths( 68.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 29.5 ) );
	object.setSecondBeat( MxNumberPercent( 28.5 ) );
	object.setLastBeat( MxNumberPercent( 28.5 ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"68.9\" default-y=\"68.9\" relative-x=\"68.9\" relative-y=\"68.9\" placement=\"above\" start-note=\"below\" two-note-turn=\"none\" accelerate=\"no\" last-beat=\"28.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 69 ) );
	object.setDefaultY( MxNumberTenths( 69 ) );
	object.setRelativeX( MxNumberTenths( 69 ) );
	object.setRelativeY( MxNumberTenths( 69 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 29.6 ) );
	object.setSecondBeat( MxNumberPercent( 28.6 ) );
	object.setLastBeat( MxNumberPercent( 28.6 ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"69\" default-y=\"69\" relative-x=\"69\" relative-y=\"69\" placement=\"below\" start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"yes\" last-beat=\"28.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 69.1 ) );
	object.setDefaultY( MxNumberTenths( 69.1 ) );
	object.setRelativeX( MxNumberTenths( 69.1 ) );
	object.setRelativeY( MxNumberTenths( 69.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 29.7 ) );
	object.setSecondBeat( MxNumberPercent( 28.7 ) );
	object.setLastBeat( MxNumberPercent( 28.7 ) );
	expected = "<charlie type=\"start\" default-x=\"69.1\" default-y=\"69.1\" relative-x=\"69.1\" relative-y=\"69.1\" placement=\"above\" start-note=\"main\" two-note-turn=\"half\" accelerate=\"no\" last-beat=\"28.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 69.2 ) );
	object.setDefaultY( MxNumberTenths( 69.2 ) );
	object.setRelativeX( MxNumberTenths( 69.2 ) );
	object.setRelativeY( MxNumberTenths( 69.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#545352" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 29.8 ) );
	object.setSecondBeat( MxNumberPercent( 28.8 ) );
	object.setLastBeat( MxNumberPercent( 28.8 ) );
	expected = "<booksmart type=\"start\" default-y=\"69.2\" relative-y=\"69.2\" placement=\"below\" start-note=\"below\" two-note-turn=\"none\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 69.3 ) );
	object.setDefaultY( MxNumberTenths( 69.3 ) );
	object.setRelativeX( MxNumberTenths( 69.3 ) );
	object.setRelativeY( MxNumberTenths( 69.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 29.9 ) );
	object.setSecondBeat( MxNumberPercent( 28.9 ) );
	object.setLastBeat( MxNumberPercent( 28.9 ) );
	expected = "<quiet type=\"start\" number=\"1\" relative-y=\"69.3\" placement=\"above\" start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 69.4 ) );
	object.setDefaultY( MxNumberTenths( 69.4 ) );
	object.setRelativeX( MxNumberTenths( 69.4 ) );
	object.setRelativeY( MxNumberTenths( 69.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#585756" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 30 ) );
	object.setSecondBeat( MxNumberPercent( 29 ) );
	object.setLastBeat( MxNumberPercent( 29 ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" relative-y=\"69.4\" start-note=\"main\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 69.5 ) );
	object.setDefaultY( MxNumberTenths( 69.5 ) );
	object.setRelativeX( MxNumberTenths( 69.5 ) );
	object.setRelativeY( MxNumberTenths( 69.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 30.1 ) );
	object.setSecondBeat( MxNumberPercent( 29.1 ) );
	object.setLastBeat( MxNumberPercent( 29.1 ) );
	expected = "<bishop type=\"start\" default-x=\"69.5\" start-note=\"below\" accelerate=\"no\" beats=\"30.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 69.6 ) );
	object.setDefaultY( MxNumberTenths( 69.6 ) );
	object.setRelativeX( MxNumberTenths( 69.6 ) );
	object.setRelativeY( MxNumberTenths( 69.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 30.2 ) );
	object.setSecondBeat( MxNumberPercent( 29.2 ) );
	object.setLastBeat( MxNumberPercent( 29.2 ) );
	expected = "<charlie type=\"start\" default-x=\"69.6\" start-note=\"upper\" accelerate=\"yes\" beats=\"30.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 69.7 ) );
	object.setDefaultY( MxNumberTenths( 69.7 ) );
	object.setRelativeX( MxNumberTenths( 69.7 ) );
	object.setRelativeY( MxNumberTenths( 69.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 30.3 ) );
	object.setSecondBeat( MxNumberPercent( 29.3 ) );
	object.setLastBeat( MxNumberPercent( 29.3 ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"69.7\" default-y=\"69.7\" relative-x=\"69.7\" color=\"#5D5E5D5C\" start-note=\"main\" trill-step=\"half\" accelerate=\"no\" beats=\"30.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 69.8 ) );
	object.setDefaultY( MxNumberTenths( 69.8 ) );
	object.setRelativeX( MxNumberTenths( 69.8 ) );
	object.setRelativeY( MxNumberTenths( 69.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 30.4 ) );
	object.setSecondBeat( MxNumberPercent( 29.4 ) );
	object.setLastBeat( MxNumberPercent( 29.4 ) );
	expected = "<quiet type=\"start\" number=\"1\" default-y=\"69.8\" relative-x=\"69.8\" color=\"#605F5E\" trill-step=\"unison\" accelerate=\"yes\" beats=\"30.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 69.9 ) );
	object.setDefaultY( MxNumberTenths( 69.9 ) );
	object.setRelativeX( MxNumberTenths( 69.9 ) );
	object.setRelativeY( MxNumberTenths( 69.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 30.5 ) );
	object.setSecondBeat( MxNumberPercent( 29.5 ) );
	object.setLastBeat( MxNumberPercent( 29.5 ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"69.9\" relative-x=\"69.9\" color=\"#61626160\" trill-step=\"whole\" accelerate=\"no\" beats=\"30.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 70 ) );
	object.setDefaultY( MxNumberTenths( 70 ) );
	object.setRelativeX( MxNumberTenths( 70 ) );
	object.setRelativeY( MxNumberTenths( 70 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#646362" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 30.6 ) );
	object.setSecondBeat( MxNumberPercent( 29.6 ) );
	object.setLastBeat( MxNumberPercent( 29.6 ) );
	expected = "<bishop type=\"start\" default-y=\"70\" relative-x=\"70\" color=\"#646362\" trill-step=\"half\" accelerate=\"yes\" beats=\"30.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 70.1 ) );
	object.setDefaultY( MxNumberTenths( 70.1 ) );
	object.setRelativeX( MxNumberTenths( 70.1 ) );
	object.setRelativeY( MxNumberTenths( 70.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 30.7 ) );
	object.setSecondBeat( MxNumberPercent( 29.7 ) );
	object.setLastBeat( MxNumberPercent( 29.7 ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"70.1\" relative-x=\"70.1\" relative-y=\"70.1\" placement=\"above\" color=\"#65666564\" trill-step=\"unison\" beats=\"30.7\" second-beat=\"29.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 70.2 ) );
	object.setDefaultY( MxNumberTenths( 70.2 ) );
	object.setRelativeX( MxNumberTenths( 70.2 ) );
	object.setRelativeY( MxNumberTenths( 70.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#686766" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 30.8 ) );
	object.setSecondBeat( MxNumberPercent( 29.8 ) );
	object.setLastBeat( MxNumberPercent( 29.8 ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"70.2\" relative-y=\"70.2\" placement=\"below\" color=\"#686766\" trill-step=\"whole\" beats=\"30.8\" second-beat=\"29.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 70.3 ) );
	object.setDefaultY( MxNumberTenths( 70.3 ) );
	object.setRelativeX( MxNumberTenths( 70.3 ) );
	object.setRelativeY( MxNumberTenths( 70.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 30.9 ) );
	object.setSecondBeat( MxNumberPercent( 29.9 ) );
	object.setLastBeat( MxNumberPercent( 29.9 ) );
	expected = "<quiet type=\"start\" default-x=\"70.3\" relative-y=\"70.3\" placement=\"above\" color=\"#696A6968\" trill-step=\"half\" beats=\"30.9\" second-beat=\"29.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 70.4 ) );
	object.setDefaultY( MxNumberTenths( 70.4 ) );
	object.setRelativeX( MxNumberTenths( 70.4 ) );
	object.setRelativeY( MxNumberTenths( 70.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 31 ) );
	object.setSecondBeat( MxNumberPercent( 30 ) );
	object.setLastBeat( MxNumberPercent( 30 ) );
	expected = "<musicxmlishard type=\"start\" relative-y=\"70.4\" placement=\"below\" color=\"#6C6B6A\" trill-step=\"unison\" beats=\"31\" second-beat=\"30\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 70.5 ) );
	object.setDefaultY( MxNumberTenths( 70.5 ) );
	object.setRelativeX( MxNumberTenths( 70.5 ) );
	object.setRelativeY( MxNumberTenths( 70.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 31.1 ) );
	object.setSecondBeat( MxNumberPercent( 30.1 ) );
	object.setLastBeat( MxNumberPercent( 30.1 ) );
	expected = "<bishop type=\"start\" number=\"1\" default-y=\"70.5\" relative-y=\"70.5\" placement=\"above\" trill-step=\"whole\" two-note-turn=\"whole\" beats=\"31.1\" second-beat=\"30.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 70.6 ) );
	object.setDefaultY( MxNumberTenths( 70.6 ) );
	object.setRelativeX( MxNumberTenths( 70.6 ) );
	object.setRelativeY( MxNumberTenths( 70.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 31.2 ) );
	object.setSecondBeat( MxNumberPercent( 30.2 ) );
	object.setLastBeat( MxNumberPercent( 30.2 ) );
	expected = "<charlie type=\"start\" number=\"1\" default-y=\"70.6\" relative-y=\"70.6\" placement=\"below\" trill-step=\"half\" two-note-turn=\"half\" beats=\"31.2\" second-beat=\"30.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 70.7 ) );
	object.setDefaultY( MxNumberTenths( 70.7 ) );
	object.setRelativeX( MxNumberTenths( 70.7 ) );
	object.setRelativeY( MxNumberTenths( 70.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 31.3 ) );
	object.setSecondBeat( MxNumberPercent( 30.3 ) );
	object.setLastBeat( MxNumberPercent( 30.3 ) );
	expected = "<booksmart type=\"start\" default-x=\"70.7\" default-y=\"70.7\" relative-x=\"70.7\" placement=\"above\" start-note=\"below\" two-note-turn=\"none\" beats=\"31.3\" second-beat=\"30.3\" last-beat=\"30.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 70.8 ) );
	object.setDefaultY( MxNumberTenths( 70.8 ) );
	object.setRelativeX( MxNumberTenths( 70.8 ) );
	object.setRelativeY( MxNumberTenths( 70.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#747372" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 31.4 ) );
	object.setSecondBeat( MxNumberPercent( 30.4 ) );
	object.setLastBeat( MxNumberPercent( 30.4 ) );
	expected = "<quiet type=\"start\" default-x=\"70.8\" default-y=\"70.8\" relative-x=\"70.8\" start-note=\"upper\" two-note-turn=\"whole\" second-beat=\"30.4\" last-beat=\"30.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 70.9 ) );
	object.setDefaultY( MxNumberTenths( 70.9 ) );
	object.setRelativeX( MxNumberTenths( 70.9 ) );
	object.setRelativeY( MxNumberTenths( 70.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 31.5 ) );
	object.setSecondBeat( MxNumberPercent( 30.5 ) );
	object.setLastBeat( MxNumberPercent( 30.5 ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"70.9\" relative-x=\"70.9\" start-note=\"main\" two-note-turn=\"half\" second-beat=\"30.5\" last-beat=\"30.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 71 ) );
	object.setDefaultY( MxNumberTenths( 71 ) );
	object.setRelativeX( MxNumberTenths( 71 ) );
	object.setRelativeY( MxNumberTenths( 71 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#787776" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 31.6 ) );
	object.setSecondBeat( MxNumberPercent( 30.6 ) );
	object.setLastBeat( MxNumberPercent( 30.6 ) );
	expected = "<bishop type=\"start\" number=\"1\" relative-x=\"71\" start-note=\"below\" two-note-turn=\"none\" second-beat=\"30.6\" last-beat=\"30.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 71.1 ) );
	object.setDefaultY( MxNumberTenths( 71.1 ) );
	object.setRelativeX( MxNumberTenths( 71.1 ) );
	object.setRelativeY( MxNumberTenths( 71.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 31.7 ) );
	object.setSecondBeat( MxNumberPercent( 30.7 ) );
	object.setLastBeat( MxNumberPercent( 30.7 ) );
	expected = "<charlie type=\"start\" relative-x=\"71.1\" start-note=\"upper\" two-note-turn=\"whole\" second-beat=\"30.7\" last-beat=\"30.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 71.2 ) );
	object.setDefaultY( MxNumberTenths( 71.2 ) );
	object.setRelativeX( MxNumberTenths( 71.2 ) );
	object.setRelativeY( MxNumberTenths( 71.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 31.8 ) );
	object.setSecondBeat( MxNumberPercent( 30.8 ) );
	object.setLastBeat( MxNumberPercent( 30.8 ) );
	expected = "<booksmart type=\"start\" start-note=\"main\" two-note-turn=\"half\" second-beat=\"30.8\" last-beat=\"30.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 71.3 ) );
	object.setDefaultY( MxNumberTenths( 71.3 ) );
	object.setRelativeX( MxNumberTenths( 71.3 ) );
	object.setRelativeY( MxNumberTenths( 71.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 31.9 ) );
	object.setSecondBeat( MxNumberPercent( 30.9 ) );
	object.setLastBeat( MxNumberPercent( 30.9 ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"71.3\" default-y=\"71.3\" relative-y=\"71.3\" color=\"#7D7E7D7C\" start-note=\"below\" two-note-turn=\"none\" accelerate=\"no\" second-beat=\"30.9\" last-beat=\"30.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 71.4 ) );
	object.setDefaultY( MxNumberTenths( 71.4 ) );
	object.setRelativeX( MxNumberTenths( 71.4 ) );
	object.setRelativeY( MxNumberTenths( 71.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 32 ) );
	object.setSecondBeat( MxNumberPercent( 31 ) );
	object.setLastBeat( MxNumberPercent( 31 ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"71.4\" default-y=\"71.4\" relative-y=\"71.4\" color=\"#807F7E\" start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"yes\" second-beat=\"31\" last-beat=\"31\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 71.5 ) );
	object.setDefaultY( MxNumberTenths( 71.5 ) );
	object.setRelativeX( MxNumberTenths( 71.5 ) );
	object.setRelativeY( MxNumberTenths( 71.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 32.1 ) );
	object.setSecondBeat( MxNumberPercent( 31.1 ) );
	object.setLastBeat( MxNumberPercent( 31.1 ) );
	expected = "<bishop type=\"start\" default-x=\"71.5\" default-y=\"71.5\" relative-y=\"71.5\" placement=\"above\" color=\"#81828180\" start-note=\"main\" two-note-turn=\"half\" accelerate=\"no\" last-beat=\"31.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 71.6 ) );
	object.setDefaultY( MxNumberTenths( 71.6 ) );
	object.setRelativeX( MxNumberTenths( 71.6 ) );
	object.setRelativeY( MxNumberTenths( 71.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#848382" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 32.2 ) );
	object.setSecondBeat( MxNumberPercent( 31.2 ) );
	object.setLastBeat( MxNumberPercent( 31.2 ) );
	expected = "<charlie type=\"start\" default-y=\"71.6\" relative-y=\"71.6\" placement=\"below\" color=\"#848382\" accelerate=\"yes\" last-beat=\"31.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptyWavyLine )
{
	MxCxEmptyWavyLine object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 71.7 ) );
	object.setDefaultY( MxNumberTenths( 71.7 ) );
	object.setRelativeX( MxNumberTenths( 71.7 ) );
	object.setRelativeY( MxNumberTenths( 71.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 32.3 ) );
	object.setSecondBeat( MxNumberPercent( 31.3 ) );
	object.setLastBeat( MxNumberPercent( 31.3 ) );
	expected = "<booksmart type=\"start\"/>";
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


