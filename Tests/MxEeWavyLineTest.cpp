/** *******************************************************
  * 
  * MxEeWavyLineTest.cpp
  * Created: 2014-12-05 16:47:03
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeWavyLine.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeWavyLine )
{
	MxEeWavyLine object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxEnumStartStopContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxEnumStartNote( lexicon::enums::StartNote::upper ) ).toString();
	std::string actual = object.getStartNote().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) ).toString();
	std::string actual = object.getTrillStep().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) ).toString();
	std::string actual = object.getTwoNoteTurn().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getAccelerate().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxNumberTrillBeats( 4 ) ).toString();
	std::string actual = object.getBeats().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxNumberPercent( 0.25 ) ).toString();
	std::string actual = object.getSecondBeat().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = ( MxNumberPercent( 0.75 ) ).toString();
	std::string actual = object.getLastBeat().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeWavyLine )
{
	MxEeWavyLine object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeWavyLine )
{
	MxEeWavyLine object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = "MxEeWavyLine";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = "wavy-line";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEeWavyLine )
{
	MxEnumStartStopContinue value1( lexicon::enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue value2( lexicon::enums::StartStopContinue::stop );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setType( value1 );
	MxEnumStartStopContinue expected = value1;
	MxEnumStartStopContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxEeWavyLine )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxEeWavyLine )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxEeWavyLine )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxEeWavyLine )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxEeWavyLine )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement6, MxEeWavyLine )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setPlacement( value1 );
	MxEnumAboveBelow expected = value1;
	MxEnumAboveBelow actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
	object.setPlacement( value2 );
	expected = value2;
	actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor7, MxEeWavyLine )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setStartNote8, MxEeWavyLine )
{
	MxEnumStartNote value1( lexicon::enums::StartNote::below );
	MxEnumStartNote value2( lexicon::enums::StartNote::main );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setStartNote( value1 );
	MxEnumStartNote expected = value1;
	MxEnumStartNote actual = object.getStartNote();
	CHECK_EQUAL( expected, actual )
	object.setStartNote( value2 );
	expected = value2;
	actual = object.getStartNote();
	CHECK_EQUAL( expected, actual )
}
TEST( setTrillStep9, MxEeWavyLine )
{
	MxEnumTrillStep value1( lexicon::enums::TrillStep::unison );
	MxEnumTrillStep value2( lexicon::enums::TrillStep::half );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setTrillStep( value1 );
	MxEnumTrillStep expected = value1;
	MxEnumTrillStep actual = object.getTrillStep();
	CHECK_EQUAL( expected, actual )
	object.setTrillStep( value2 );
	expected = value2;
	actual = object.getTrillStep();
	CHECK_EQUAL( expected, actual )
}
TEST( setTwoNoteTurn10, MxEeWavyLine )
{
	MxEnumTwoNoteTurn value1( lexicon::enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn value2( lexicon::enums::TwoNoteTurn::half );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setTwoNoteTurn( value1 );
	MxEnumTwoNoteTurn expected = value1;
	MxEnumTwoNoteTurn actual = object.getTwoNoteTurn();
	CHECK_EQUAL( expected, actual )
	object.setTwoNoteTurn( value2 );
	expected = value2;
	actual = object.getTwoNoteTurn();
	CHECK_EQUAL( expected, actual )
}
TEST( setAccelerate11, MxEeWavyLine )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setAccelerate( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
	object.setAccelerate( value2 );
	expected = value2;
	actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
}
TEST( setBeats12, MxEeWavyLine )
{
	MxNumberTrillBeats value1( 2.1 );
	MxNumberTrillBeats value2( 2.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setBeats( value1 );
	MxNumberTrillBeats expected = value1;
	MxNumberTrillBeats actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
	object.setBeats( value2 );
	expected = value2;
	actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
}
TEST( setSecondBeat13, MxEeWavyLine )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
	object.setSecondBeat( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getSecondBeat();
	CHECK_EQUAL( expected, actual )
	object.setSecondBeat( value2 );
	expected = value2;
	actual = object.getSecondBeat();
	CHECK_EQUAL( expected, actual )
}
TEST( setLastBeat14, MxEeWavyLine )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWavyLine object;
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

TEST( getIsTypeRequired0, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired6, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired7, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStartNoteRequired8, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsStartNoteRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepRequired9, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsTrillStepRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnRequired10, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsTwoNoteTurnRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAccelerateRequired11, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsAccelerateRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsRequired12, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsBeatsRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatRequired13, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsSecondBeatRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatRequired14, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsLastBeatRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsNumberPresent1, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsDefaultXPresent2, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsDefaultYPresent3, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsRelativeXPresent4, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsRelativeYPresent5, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsPlacementPresent6, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsColorPresent7, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsStartNotePresent8, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsTrillStepPresent9, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsTwoNoteTurnPresent10, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsAcceleratePresent11, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsBeatsPresent12, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsSecondBeatPresent13, MxEeWavyLine )
{
	MxEeWavyLine object;
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
TEST( getIsLastBeatPresent14, MxEeWavyLine )
{
	MxEeWavyLine object;
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

TEST( getIsTypeDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStartNoteDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = true;
	bool actual = object.getIsStartNoteDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = true;
	bool actual = object.getIsTrillStepDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = true;
	bool actual = object.getIsTwoNoteTurnDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAccelerateDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = true;
	bool actual = object.getIsAccelerateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = true;
	bool actual = object.getIsBeatsDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = true;
	bool actual = object.getIsSecondBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatDefaultDefined, MxEeWavyLine )
{
	MxEeWavyLine object;
	bool expected = true;
	bool actual = object.getIsLastBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxEnumStartStopContinue expected;
	MxEnumStartStopContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getStartNoteDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxEnumStartNote expected( lexicon::enums::StartNote::upper );
	MxEnumStartNote actual = object.getStartNoteDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTrillStepDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxEnumTrillStep expected( lexicon::enums::TrillStep::whole );
	MxEnumTrillStep actual = object.getTrillStepDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTwoNoteTurnDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxEnumTwoNoteTurn expected( lexicon::enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn actual = object.getTwoNoteTurnDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getAccelerateDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getAccelerateDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBeatsDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxNumberTrillBeats expected( 4 );
	MxNumberTrillBeats actual = object.getBeatsDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSecondBeatDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxNumberPercent expected( 0.25 );
	MxNumberPercent actual = object.getSecondBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLastBeatDefaultValue, MxEeWavyLine )
{
	MxEeWavyLine object;
	MxNumberPercent expected( 0.75 );
	MxNumberPercent actual = object.getLastBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeWavyLine )
{
	MxEeWavyLine object;
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 1.1 ) );
	object.setDefaultY( MxNumberTenths( 1.1 ) );
	object.setRelativeX( MxNumberTenths( 1.1 ) );
	object.setRelativeY( MxNumberTenths( 1.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.1 ) );
	object.setSecondBeat( MxNumberPercent( 1.1 ) );
	object.setLastBeat( MxNumberPercent( 1.1 ) );
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
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"1.1\" default-y=\"1.1\" relative-x=\"1.1\" relative-y=\"1.1\" placement=\"below\" color=\"#01020100\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"2.1\" second-beat=\"1.1\" last-beat=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 1.2 ) );
	object.setDefaultY( MxNumberTenths( 1.2 ) );
	object.setRelativeX( MxNumberTenths( 1.2 ) );
	object.setRelativeY( MxNumberTenths( 1.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#040302" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.2 ) );
	object.setSecondBeat( MxNumberPercent( 1.2 ) );
	object.setLastBeat( MxNumberPercent( 1.2 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"1.2\" default-y=\"1.2\" relative-x=\"1.2\" relative-y=\"1.2\" placement=\"above\" color=\"#040302\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"2.2\" second-beat=\"1.2\" last-beat=\"1.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 1.3 ) );
	object.setDefaultY( MxNumberTenths( 1.3 ) );
	object.setRelativeX( MxNumberTenths( 1.3 ) );
	object.setRelativeY( MxNumberTenths( 1.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.3 ) );
	object.setSecondBeat( MxNumberPercent( 1.3 ) );
	object.setLastBeat( MxNumberPercent( 1.3 ) );
	expected = "<wavy-line type=\"start\" default-x=\"1.3\" default-y=\"1.3\" relative-x=\"1.3\" relative-y=\"1.3\" placement=\"below\" color=\"#05060504\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"2.3\" second-beat=\"1.3\" last-beat=\"1.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 1.4 ) );
	object.setDefaultY( MxNumberTenths( 1.4 ) );
	object.setRelativeX( MxNumberTenths( 1.4 ) );
	object.setRelativeY( MxNumberTenths( 1.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#080706" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.4 ) );
	object.setSecondBeat( MxNumberPercent( 1.4 ) );
	object.setLastBeat( MxNumberPercent( 1.4 ) );
	expected = "<wavy-line type=\"start\" default-y=\"1.4\" relative-x=\"1.4\" relative-y=\"1.4\" placement=\"above\" color=\"#080706\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"2.4\" second-beat=\"1.4\" last-beat=\"1.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 1.5 ) );
	object.setDefaultY( MxNumberTenths( 1.5 ) );
	object.setRelativeX( MxNumberTenths( 1.5 ) );
	object.setRelativeY( MxNumberTenths( 1.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.5 ) );
	object.setSecondBeat( MxNumberPercent( 1.5 ) );
	object.setLastBeat( MxNumberPercent( 1.5 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" relative-x=\"1.5\" relative-y=\"1.5\" placement=\"below\" color=\"#090A0908\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\" beats=\"2.5\" second-beat=\"1.5\" last-beat=\"1.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 1.6 ) );
	object.setDefaultY( MxNumberTenths( 1.6 ) );
	object.setRelativeX( MxNumberTenths( 1.6 ) );
	object.setRelativeY( MxNumberTenths( 1.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.6 ) );
	object.setSecondBeat( MxNumberPercent( 1.6 ) );
	object.setLastBeat( MxNumberPercent( 1.6 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" relative-y=\"1.6\" placement=\"above\" color=\"#0C0B0A\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"2.6\" second-beat=\"1.6\" last-beat=\"1.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 1.7 ) );
	object.setDefaultY( MxNumberTenths( 1.7 ) );
	object.setRelativeX( MxNumberTenths( 1.7 ) );
	object.setRelativeY( MxNumberTenths( 1.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.7 ) );
	object.setSecondBeat( MxNumberPercent( 1.7 ) );
	object.setLastBeat( MxNumberPercent( 1.7 ) );
	expected = "<wavy-line type=\"start\" default-x=\"1.7\" placement=\"below\" color=\"#0D0E0D0C\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"2.7\" second-beat=\"1.7\" last-beat=\"1.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 1.8 ) );
	object.setDefaultY( MxNumberTenths( 1.8 ) );
	object.setRelativeX( MxNumberTenths( 1.8 ) );
	object.setRelativeY( MxNumberTenths( 1.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.8 ) );
	object.setSecondBeat( MxNumberPercent( 1.8 ) );
	object.setLastBeat( MxNumberPercent( 1.8 ) );
	expected = "<wavy-line type=\"start\" default-x=\"1.8\" color=\"#100F0E\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"2.8\" second-beat=\"1.8\" last-beat=\"1.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 1.9 ) );
	object.setDefaultY( MxNumberTenths( 1.9 ) );
	object.setRelativeX( MxNumberTenths( 1.9 ) );
	object.setRelativeY( MxNumberTenths( 1.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.9 ) );
	object.setSecondBeat( MxNumberPercent( 1.9 ) );
	object.setLastBeat( MxNumberPercent( 1.9 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"1.9\" default-y=\"1.9\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"2.9\" second-beat=\"1.9\" last-beat=\"1.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 2 ) );
	object.setDefaultY( MxNumberTenths( 2 ) );
	object.setRelativeX( MxNumberTenths( 2 ) );
	object.setRelativeY( MxNumberTenths( 2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#141312" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3 ) );
	object.setSecondBeat( MxNumberPercent( 2 ) );
	object.setLastBeat( MxNumberPercent( 2 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"2\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"3\" second-beat=\"2\" last-beat=\"2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 2.1 ) );
	object.setDefaultY( MxNumberTenths( 2.1 ) );
	object.setRelativeX( MxNumberTenths( 2.1 ) );
	object.setRelativeY( MxNumberTenths( 2.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.1 ) );
	object.setSecondBeat( MxNumberPercent( 2.1 ) );
	object.setLastBeat( MxNumberPercent( 2.1 ) );
	expected = "<wavy-line type=\"start\" default-y=\"2.1\" relative-x=\"2.1\" two-note-turn=\"none\" accelerate=\"no\" beats=\"3.1\" second-beat=\"2.1\" last-beat=\"2.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 2.2 ) );
	object.setDefaultY( MxNumberTenths( 2.2 ) );
	object.setRelativeX( MxNumberTenths( 2.2 ) );
	object.setRelativeY( MxNumberTenths( 2.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#181716" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.2 ) );
	object.setSecondBeat( MxNumberPercent( 2.2 ) );
	object.setLastBeat( MxNumberPercent( 2.2 ) );
	expected = "<wavy-line type=\"start\" default-y=\"2.2\" relative-x=\"2.2\" accelerate=\"yes\" beats=\"3.2\" second-beat=\"2.2\" last-beat=\"2.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 2.3 ) );
	object.setDefaultY( MxNumberTenths( 2.3 ) );
	object.setRelativeX( MxNumberTenths( 2.3 ) );
	object.setRelativeY( MxNumberTenths( 2.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.3 ) );
	object.setSecondBeat( MxNumberPercent( 2.3 ) );
	object.setLastBeat( MxNumberPercent( 2.3 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"2.3\" relative-x=\"2.3\" relative-y=\"2.3\" beats=\"3.3\" second-beat=\"2.3\" last-beat=\"2.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 2.4 ) );
	object.setDefaultY( MxNumberTenths( 2.4 ) );
	object.setRelativeX( MxNumberTenths( 2.4 ) );
	object.setRelativeY( MxNumberTenths( 2.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.4 ) );
	object.setSecondBeat( MxNumberPercent( 2.4 ) );
	object.setLastBeat( MxNumberPercent( 2.4 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"2.4\" relative-x=\"2.4\" relative-y=\"2.4\" second-beat=\"2.4\" last-beat=\"2.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 2.5 ) );
	object.setDefaultY( MxNumberTenths( 2.5 ) );
	object.setRelativeX( MxNumberTenths( 2.5 ) );
	object.setRelativeY( MxNumberTenths( 2.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.5 ) );
	object.setSecondBeat( MxNumberPercent( 2.5 ) );
	object.setLastBeat( MxNumberPercent( 2.5 ) );
	expected = "<wavy-line type=\"start\" default-x=\"2.5\" relative-x=\"2.5\" relative-y=\"2.5\" placement=\"below\" last-beat=\"2.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 2.6 ) );
	object.setDefaultY( MxNumberTenths( 2.6 ) );
	object.setRelativeX( MxNumberTenths( 2.6 ) );
	object.setRelativeY( MxNumberTenths( 2.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.6 ) );
	object.setSecondBeat( MxNumberPercent( 2.6 ) );
	object.setLastBeat( MxNumberPercent( 2.6 ) );
	expected = "<wavy-line type=\"start\" relative-y=\"2.6\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 2.7 ) );
	object.setDefaultY( MxNumberTenths( 2.7 ) );
	object.setRelativeX( MxNumberTenths( 2.7 ) );
	object.setRelativeY( MxNumberTenths( 2.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.7 ) );
	object.setSecondBeat( MxNumberPercent( 2.7 ) );
	object.setLastBeat( MxNumberPercent( 2.7 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"2.7\" relative-y=\"2.7\" placement=\"below\" color=\"#21222120\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 2.8 ) );
	object.setDefaultY( MxNumberTenths( 2.8 ) );
	object.setRelativeX( MxNumberTenths( 2.8 ) );
	object.setRelativeY( MxNumberTenths( 2.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#242322" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.8 ) );
	object.setSecondBeat( MxNumberPercent( 2.8 ) );
	object.setLastBeat( MxNumberPercent( 2.8 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"2.8\" relative-y=\"2.8\" placement=\"above\" color=\"#242322\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 2.9 ) );
	object.setDefaultY( MxNumberTenths( 2.9 ) );
	object.setRelativeX( MxNumberTenths( 2.9 ) );
	object.setRelativeY( MxNumberTenths( 2.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.9 ) );
	object.setSecondBeat( MxNumberPercent( 2.9 ) );
	object.setLastBeat( MxNumberPercent( 2.9 ) );
	expected = "<wavy-line type=\"start\" default-x=\"2.9\" default-y=\"2.9\" placement=\"below\" color=\"#25262524\" start-note=\"main\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 3 ) );
	object.setDefaultY( MxNumberTenths( 3 ) );
	object.setRelativeX( MxNumberTenths( 3 ) );
	object.setRelativeY( MxNumberTenths( 3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#282726" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4 ) );
	object.setSecondBeat( MxNumberPercent( 3 ) );
	object.setLastBeat( MxNumberPercent( 3 ) );
	expected = "<wavy-line type=\"start\" default-x=\"3\" default-y=\"3\" placement=\"above\" color=\"#282726\" start-note=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 3.1 ) );
	object.setDefaultY( MxNumberTenths( 3.1 ) );
	object.setRelativeX( MxNumberTenths( 3.1 ) );
	object.setRelativeY( MxNumberTenths( 3.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.1 ) );
	object.setSecondBeat( MxNumberPercent( 3.1 ) );
	object.setLastBeat( MxNumberPercent( 3.1 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"3.1\" relative-x=\"3.1\" placement=\"below\" color=\"#292A2928\" start-note=\"upper\" trill-step=\"whole\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 3.2 ) );
	object.setDefaultY( MxNumberTenths( 3.2 ) );
	object.setRelativeX( MxNumberTenths( 3.2 ) );
	object.setRelativeY( MxNumberTenths( 3.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.2 ) );
	object.setSecondBeat( MxNumberPercent( 3.2 ) );
	object.setLastBeat( MxNumberPercent( 3.2 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" relative-x=\"3.2\" color=\"#2C2B2A\" start-note=\"main\" trill-step=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 3.3 ) );
	object.setDefaultY( MxNumberTenths( 3.3 ) );
	object.setRelativeX( MxNumberTenths( 3.3 ) );
	object.setRelativeY( MxNumberTenths( 3.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.3 ) );
	object.setSecondBeat( MxNumberPercent( 3.3 ) );
	object.setLastBeat( MxNumberPercent( 3.3 ) );
	expected = "<wavy-line type=\"start\" relative-x=\"3.3\" color=\"#2D2E2D2C\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 3.4 ) );
	object.setDefaultY( MxNumberTenths( 3.4 ) );
	object.setRelativeX( MxNumberTenths( 3.4 ) );
	object.setRelativeY( MxNumberTenths( 3.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.4 ) );
	object.setSecondBeat( MxNumberPercent( 3.4 ) );
	object.setLastBeat( MxNumberPercent( 3.4 ) );
	expected = "<wavy-line type=\"start\" relative-x=\"3.4\" color=\"#302F2E\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 3.5 ) );
	object.setDefaultY( MxNumberTenths( 3.5 ) );
	object.setRelativeX( MxNumberTenths( 3.5 ) );
	object.setRelativeY( MxNumberTenths( 3.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.5 ) );
	object.setSecondBeat( MxNumberPercent( 3.5 ) );
	object.setLastBeat( MxNumberPercent( 3.5 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"3.5\" default-y=\"3.5\" relative-x=\"3.5\" relative-y=\"3.5\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 3.6 ) );
	object.setDefaultY( MxNumberTenths( 3.6 ) );
	object.setRelativeX( MxNumberTenths( 3.6 ) );
	object.setRelativeY( MxNumberTenths( 3.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#343332" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.6 ) );
	object.setSecondBeat( MxNumberPercent( 3.6 ) );
	object.setLastBeat( MxNumberPercent( 3.6 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"3.6\" default-y=\"3.6\" relative-y=\"3.6\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 3.7 ) );
	object.setDefaultY( MxNumberTenths( 3.7 ) );
	object.setRelativeX( MxNumberTenths( 3.7 ) );
	object.setRelativeY( MxNumberTenths( 3.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.7 ) );
	object.setSecondBeat( MxNumberPercent( 3.7 ) );
	object.setLastBeat( MxNumberPercent( 3.7 ) );
	expected = "<wavy-line type=\"start\" default-x=\"3.7\" default-y=\"3.7\" relative-y=\"3.7\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"4.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 3.8 ) );
	object.setDefaultY( MxNumberTenths( 3.8 ) );
	object.setRelativeX( MxNumberTenths( 3.8 ) );
	object.setRelativeY( MxNumberTenths( 3.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#383736" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.8 ) );
	object.setSecondBeat( MxNumberPercent( 3.8 ) );
	object.setLastBeat( MxNumberPercent( 3.8 ) );
	expected = "<wavy-line type=\"start\" default-y=\"3.8\" relative-y=\"3.8\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"4.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 3.9 ) );
	object.setDefaultY( MxNumberTenths( 3.9 ) );
	object.setRelativeX( MxNumberTenths( 3.9 ) );
	object.setRelativeY( MxNumberTenths( 3.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.9 ) );
	object.setSecondBeat( MxNumberPercent( 3.9 ) );
	object.setLastBeat( MxNumberPercent( 3.9 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" relative-y=\"3.9\" placement=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\" beats=\"4.9\" second-beat=\"3.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 4 ) );
	object.setDefaultY( MxNumberTenths( 4 ) );
	object.setRelativeX( MxNumberTenths( 4 ) );
	object.setRelativeY( MxNumberTenths( 4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5 ) );
	object.setSecondBeat( MxNumberPercent( 4 ) );
	object.setLastBeat( MxNumberPercent( 4 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" relative-y=\"4\" placement=\"above\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"5\" second-beat=\"4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 4.1 ) );
	object.setDefaultY( MxNumberTenths( 4.1 ) );
	object.setRelativeX( MxNumberTenths( 4.1 ) );
	object.setRelativeY( MxNumberTenths( 4.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.1 ) );
	object.setSecondBeat( MxNumberPercent( 4.1 ) );
	object.setLastBeat( MxNumberPercent( 4.1 ) );
	expected = "<wavy-line type=\"start\" default-x=\"4.1\" relative-x=\"4.1\" placement=\"below\" two-note-turn=\"half\" accelerate=\"no\" beats=\"5.1\" second-beat=\"4.1\" last-beat=\"4.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 4.2 ) );
	object.setDefaultY( MxNumberTenths( 4.2 ) );
	object.setRelativeX( MxNumberTenths( 4.2 ) );
	object.setRelativeY( MxNumberTenths( 4.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.2 ) );
	object.setSecondBeat( MxNumberPercent( 4.2 ) );
	object.setLastBeat( MxNumberPercent( 4.2 ) );
	expected = "<wavy-line type=\"start\" default-x=\"4.2\" relative-x=\"4.2\" placement=\"above\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"5.2\" second-beat=\"4.2\" last-beat=\"4.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 4.3 ) );
	object.setDefaultY( MxNumberTenths( 4.3 ) );
	object.setRelativeX( MxNumberTenths( 4.3 ) );
	object.setRelativeY( MxNumberTenths( 4.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.3 ) );
	object.setSecondBeat( MxNumberPercent( 4.3 ) );
	object.setLastBeat( MxNumberPercent( 4.3 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"4.3\" default-y=\"4.3\" relative-x=\"4.3\" placement=\"below\" color=\"#41424140\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"5.3\" second-beat=\"4.3\" last-beat=\"4.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 4.4 ) );
	object.setDefaultY( MxNumberTenths( 4.4 ) );
	object.setRelativeX( MxNumberTenths( 4.4 ) );
	object.setRelativeY( MxNumberTenths( 4.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#444342" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.4 ) );
	object.setSecondBeat( MxNumberPercent( 4.4 ) );
	object.setLastBeat( MxNumberPercent( 4.4 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"4.4\" relative-x=\"4.4\" placement=\"above\" color=\"#444342\" accelerate=\"yes\" beats=\"5.4\" second-beat=\"4.4\" last-beat=\"4.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 4.5 ) );
	object.setDefaultY( MxNumberTenths( 4.5 ) );
	object.setRelativeX( MxNumberTenths( 4.5 ) );
	object.setRelativeY( MxNumberTenths( 4.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.5 ) );
	object.setSecondBeat( MxNumberPercent( 4.5 ) );
	object.setLastBeat( MxNumberPercent( 4.5 ) );
	expected = "<wavy-line type=\"start\" default-y=\"4.5\" relative-x=\"4.5\" placement=\"below\" color=\"#45464544\" accelerate=\"no\" beats=\"5.5\" second-beat=\"4.5\" last-beat=\"4.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 4.6 ) );
	object.setDefaultY( MxNumberTenths( 4.6 ) );
	object.setRelativeX( MxNumberTenths( 4.6 ) );
	object.setRelativeY( MxNumberTenths( 4.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#484746" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.6 ) );
	object.setSecondBeat( MxNumberPercent( 4.6 ) );
	object.setLastBeat( MxNumberPercent( 4.6 ) );
	expected = "<wavy-line type=\"start\" default-y=\"4.6\" color=\"#484746\" accelerate=\"yes\" beats=\"5.6\" second-beat=\"4.6\" last-beat=\"4.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 4.7 ) );
	object.setDefaultY( MxNumberTenths( 4.7 ) );
	object.setRelativeX( MxNumberTenths( 4.7 ) );
	object.setRelativeY( MxNumberTenths( 4.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.7 ) );
	object.setSecondBeat( MxNumberPercent( 4.7 ) );
	object.setLastBeat( MxNumberPercent( 4.7 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"4.7\" relative-y=\"4.7\" color=\"#494A4948\" start-note=\"main\" beats=\"5.7\" second-beat=\"4.7\" last-beat=\"4.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 4.8 ) );
	object.setDefaultY( MxNumberTenths( 4.8 ) );
	object.setRelativeX( MxNumberTenths( 4.8 ) );
	object.setRelativeY( MxNumberTenths( 4.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.8 ) );
	object.setSecondBeat( MxNumberPercent( 4.8 ) );
	object.setLastBeat( MxNumberPercent( 4.8 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"4.8\" relative-y=\"4.8\" color=\"#4C4B4A\" start-note=\"below\" beats=\"5.8\" second-beat=\"4.8\" last-beat=\"4.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 4.9 ) );
	object.setDefaultY( MxNumberTenths( 4.9 ) );
	object.setRelativeX( MxNumberTenths( 4.9 ) );
	object.setRelativeY( MxNumberTenths( 4.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.9 ) );
	object.setSecondBeat( MxNumberPercent( 4.9 ) );
	object.setLastBeat( MxNumberPercent( 4.9 ) );
	expected = "<wavy-line type=\"start\" default-x=\"4.9\" relative-y=\"4.9\" color=\"#4D4E4D4C\" start-note=\"upper\" beats=\"5.9\" second-beat=\"4.9\" last-beat=\"4.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 5 ) );
	object.setDefaultY( MxNumberTenths( 5 ) );
	object.setRelativeX( MxNumberTenths( 5 ) );
	object.setRelativeY( MxNumberTenths( 5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6 ) );
	object.setSecondBeat( MxNumberPercent( 5 ) );
	object.setLastBeat( MxNumberPercent( 5 ) );
	expected = "<wavy-line type=\"start\" relative-y=\"5\" color=\"#504F4E\" start-note=\"main\" second-beat=\"5\" last-beat=\"5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 5.1 ) );
	object.setDefaultY( MxNumberTenths( 5.1 ) );
	object.setRelativeX( MxNumberTenths( 5.1 ) );
	object.setRelativeY( MxNumberTenths( 5.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.1 ) );
	object.setSecondBeat( MxNumberPercent( 5.1 ) );
	object.setLastBeat( MxNumberPercent( 5.1 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"5.1\" relative-x=\"5.1\" relative-y=\"5.1\" start-note=\"below\" trill-step=\"unison\" second-beat=\"5.1\" last-beat=\"5.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 5.2 ) );
	object.setDefaultY( MxNumberTenths( 5.2 ) );
	object.setRelativeX( MxNumberTenths( 5.2 ) );
	object.setRelativeY( MxNumberTenths( 5.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#545352" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.2 ) );
	object.setSecondBeat( MxNumberPercent( 5.2 ) );
	object.setLastBeat( MxNumberPercent( 5.2 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"5.2\" relative-x=\"5.2\" relative-y=\"5.2\" start-note=\"upper\" trill-step=\"whole\" second-beat=\"5.2\" last-beat=\"5.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 5.3 ) );
	object.setDefaultY( MxNumberTenths( 5.3 ) );
	object.setRelativeX( MxNumberTenths( 5.3 ) );
	object.setRelativeY( MxNumberTenths( 5.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.3 ) );
	object.setSecondBeat( MxNumberPercent( 5.3 ) );
	object.setLastBeat( MxNumberPercent( 5.3 ) );
	expected = "<wavy-line type=\"start\" default-x=\"5.3\" default-y=\"5.3\" relative-x=\"5.3\" placement=\"below\" start-note=\"main\" trill-step=\"half\" last-beat=\"5.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 5.4 ) );
	object.setDefaultY( MxNumberTenths( 5.4 ) );
	object.setRelativeX( MxNumberTenths( 5.4 ) );
	object.setRelativeY( MxNumberTenths( 5.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#585756" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.4 ) );
	object.setSecondBeat( MxNumberPercent( 5.4 ) );
	object.setLastBeat( MxNumberPercent( 5.4 ) );
	expected = "<wavy-line type=\"start\" default-x=\"5.4\" default-y=\"5.4\" relative-x=\"5.4\" placement=\"above\" start-note=\"below\" trill-step=\"unison\" last-beat=\"5.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 5.5 ) );
	object.setDefaultY( MxNumberTenths( 5.5 ) );
	object.setRelativeX( MxNumberTenths( 5.5 ) );
	object.setRelativeY( MxNumberTenths( 5.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.5 ) );
	object.setSecondBeat( MxNumberPercent( 5.5 ) );
	object.setLastBeat( MxNumberPercent( 5.5 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"5.5\" relative-x=\"5.5\" placement=\"below\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" last-beat=\"5.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 5.6 ) );
	object.setDefaultY( MxNumberTenths( 5.6 ) );
	object.setRelativeX( MxNumberTenths( 5.6 ) );
	object.setRelativeY( MxNumberTenths( 5.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.6 ) );
	object.setSecondBeat( MxNumberPercent( 5.6 ) );
	object.setLastBeat( MxNumberPercent( 5.6 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" placement=\"above\" trill-step=\"half\" two-note-turn=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 5.7 ) );
	object.setDefaultY( MxNumberTenths( 5.7 ) );
	object.setRelativeX( MxNumberTenths( 5.7 ) );
	object.setRelativeY( MxNumberTenths( 5.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.7 ) );
	object.setSecondBeat( MxNumberPercent( 5.7 ) );
	object.setLastBeat( MxNumberPercent( 5.7 ) );
	expected = "<wavy-line type=\"start\" placement=\"below\" trill-step=\"unison\" two-note-turn=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 5.8 ) );
	object.setDefaultY( MxNumberTenths( 5.8 ) );
	object.setRelativeX( MxNumberTenths( 5.8 ) );
	object.setRelativeY( MxNumberTenths( 5.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.8 ) );
	object.setSecondBeat( MxNumberPercent( 5.8 ) );
	object.setLastBeat( MxNumberPercent( 5.8 ) );
	expected = "<wavy-line type=\"start\" placement=\"above\" trill-step=\"whole\" two-note-turn=\"whole\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 5.9 ) );
	object.setDefaultY( MxNumberTenths( 5.9 ) );
	object.setRelativeX( MxNumberTenths( 5.9 ) );
	object.setRelativeY( MxNumberTenths( 5.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.9 ) );
	object.setSecondBeat( MxNumberPercent( 5.9 ) );
	object.setLastBeat( MxNumberPercent( 5.9 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"5.9\" default-y=\"5.9\" relative-y=\"5.9\" placement=\"below\" color=\"#61626160\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 6 ) );
	object.setDefaultY( MxNumberTenths( 6 ) );
	object.setRelativeX( MxNumberTenths( 6 ) );
	object.setRelativeY( MxNumberTenths( 6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#646362" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7 ) );
	object.setSecondBeat( MxNumberPercent( 6 ) );
	object.setLastBeat( MxNumberPercent( 6 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"6\" default-y=\"6\" relative-y=\"6\" color=\"#646362\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 6.1 ) );
	object.setDefaultY( MxNumberTenths( 6.1 ) );
	object.setRelativeX( MxNumberTenths( 6.1 ) );
	object.setRelativeY( MxNumberTenths( 6.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.1 ) );
	object.setSecondBeat( MxNumberPercent( 6.1 ) );
	object.setLastBeat( MxNumberPercent( 6.1 ) );
	expected = "<wavy-line type=\"start\" default-x=\"6.1\" default-y=\"6.1\" relative-x=\"6.1\" relative-y=\"6.1\" color=\"#65666564\" two-note-turn=\"whole\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 6.2 ) );
	object.setDefaultY( MxNumberTenths( 6.2 ) );
	object.setRelativeX( MxNumberTenths( 6.2 ) );
	object.setRelativeY( MxNumberTenths( 6.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#686766" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.2 ) );
	object.setSecondBeat( MxNumberPercent( 6.2 ) );
	object.setLastBeat( MxNumberPercent( 6.2 ) );
	expected = "<wavy-line type=\"start\" default-y=\"6.2\" relative-x=\"6.2\" relative-y=\"6.2\" color=\"#686766\" two-note-turn=\"half\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 6.3 ) );
	object.setDefaultY( MxNumberTenths( 6.3 ) );
	object.setRelativeX( MxNumberTenths( 6.3 ) );
	object.setRelativeY( MxNumberTenths( 6.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.3 ) );
	object.setSecondBeat( MxNumberPercent( 6.3 ) );
	object.setLastBeat( MxNumberPercent( 6.3 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" relative-x=\"6.3\" relative-y=\"6.3\" color=\"#696A6968\" two-note-turn=\"none\" accelerate=\"no\" beats=\"7.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 6.4 ) );
	object.setDefaultY( MxNumberTenths( 6.4 ) );
	object.setRelativeX( MxNumberTenths( 6.4 ) );
	object.setRelativeY( MxNumberTenths( 6.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.4 ) );
	object.setSecondBeat( MxNumberPercent( 6.4 ) );
	object.setLastBeat( MxNumberPercent( 6.4 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" relative-x=\"6.4\" relative-y=\"6.4\" color=\"#6C6B6A\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"7.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 6.5 ) );
	object.setDefaultY( MxNumberTenths( 6.5 ) );
	object.setRelativeX( MxNumberTenths( 6.5 ) );
	object.setRelativeY( MxNumberTenths( 6.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.5 ) );
	object.setSecondBeat( MxNumberPercent( 6.5 ) );
	object.setLastBeat( MxNumberPercent( 6.5 ) );
	expected = "<wavy-line type=\"start\" default-x=\"6.5\" relative-x=\"6.5\" color=\"#6D6E6D6C\" start-note=\"main\" two-note-turn=\"half\" accelerate=\"no\" beats=\"7.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 6.6 ) );
	object.setDefaultY( MxNumberTenths( 6.6 ) );
	object.setRelativeX( MxNumberTenths( 6.6 ) );
	object.setRelativeY( MxNumberTenths( 6.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.6 ) );
	object.setSecondBeat( MxNumberPercent( 6.6 ) );
	object.setLastBeat( MxNumberPercent( 6.6 ) );
	expected = "<wavy-line type=\"start\" default-x=\"6.6\" color=\"#706F6E\" start-note=\"below\" accelerate=\"yes\" beats=\"7.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 6.7 ) );
	object.setDefaultY( MxNumberTenths( 6.7 ) );
	object.setRelativeX( MxNumberTenths( 6.7 ) );
	object.setRelativeY( MxNumberTenths( 6.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.7 ) );
	object.setSecondBeat( MxNumberPercent( 6.7 ) );
	object.setLastBeat( MxNumberPercent( 6.7 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"6.7\" default-y=\"6.7\" placement=\"below\" start-note=\"upper\" accelerate=\"no\" beats=\"7.7\" second-beat=\"6.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 6.8 ) );
	object.setDefaultY( MxNumberTenths( 6.8 ) );
	object.setRelativeX( MxNumberTenths( 6.8 ) );
	object.setRelativeY( MxNumberTenths( 6.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#747372" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.8 ) );
	object.setSecondBeat( MxNumberPercent( 6.8 ) );
	object.setLastBeat( MxNumberPercent( 6.8 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"6.8\" placement=\"above\" start-note=\"main\" accelerate=\"yes\" beats=\"7.8\" second-beat=\"6.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 6.9 ) );
	object.setDefaultY( MxNumberTenths( 6.9 ) );
	object.setRelativeX( MxNumberTenths( 6.9 ) );
	object.setRelativeY( MxNumberTenths( 6.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.9 ) );
	object.setSecondBeat( MxNumberPercent( 6.9 ) );
	object.setLastBeat( MxNumberPercent( 6.9 ) );
	expected = "<wavy-line type=\"start\" default-y=\"6.9\" placement=\"below\" start-note=\"below\" accelerate=\"no\" beats=\"7.9\" second-beat=\"6.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 7 ) );
	object.setDefaultY( MxNumberTenths( 7 ) );
	object.setRelativeX( MxNumberTenths( 7 ) );
	object.setRelativeY( MxNumberTenths( 7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#787776" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8 ) );
	object.setSecondBeat( MxNumberPercent( 7 ) );
	object.setLastBeat( MxNumberPercent( 7 ) );
	expected = "<wavy-line type=\"start\" default-y=\"7\" placement=\"above\" start-note=\"upper\" accelerate=\"yes\" beats=\"8\" second-beat=\"7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 7.1 ) );
	object.setDefaultY( MxNumberTenths( 7.1 ) );
	object.setRelativeX( MxNumberTenths( 7.1 ) );
	object.setRelativeY( MxNumberTenths( 7.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.1 ) );
	object.setSecondBeat( MxNumberPercent( 7.1 ) );
	object.setLastBeat( MxNumberPercent( 7.1 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"7.1\" relative-x=\"7.1\" relative-y=\"7.1\" placement=\"below\" start-note=\"main\" trill-step=\"half\" beats=\"8.1\" second-beat=\"7.1\" last-beat=\"7.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 7.2 ) );
	object.setDefaultY( MxNumberTenths( 7.2 ) );
	object.setRelativeX( MxNumberTenths( 7.2 ) );
	object.setRelativeY( MxNumberTenths( 7.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.2 ) );
	object.setSecondBeat( MxNumberPercent( 7.2 ) );
	object.setLastBeat( MxNumberPercent( 7.2 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"7.2\" relative-x=\"7.2\" relative-y=\"7.2\" placement=\"above\" start-note=\"below\" trill-step=\"unison\" beats=\"8.2\" second-beat=\"7.2\" last-beat=\"7.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 7.3 ) );
	object.setDefaultY( MxNumberTenths( 7.3 ) );
	object.setRelativeX( MxNumberTenths( 7.3 ) );
	object.setRelativeY( MxNumberTenths( 7.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.3 ) );
	object.setSecondBeat( MxNumberPercent( 7.3 ) );
	object.setLastBeat( MxNumberPercent( 7.3 ) );
	expected = "<wavy-line type=\"start\" default-x=\"7.3\" relative-x=\"7.3\" relative-y=\"7.3\" placement=\"below\" start-note=\"upper\" trill-step=\"whole\" beats=\"8.3\" second-beat=\"7.3\" last-beat=\"7.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 7.4 ) );
	object.setDefaultY( MxNumberTenths( 7.4 ) );
	object.setRelativeX( MxNumberTenths( 7.4 ) );
	object.setRelativeY( MxNumberTenths( 7.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.4 ) );
	object.setSecondBeat( MxNumberPercent( 7.4 ) );
	object.setLastBeat( MxNumberPercent( 7.4 ) );
	expected = "<wavy-line type=\"start\" relative-x=\"7.4\" relative-y=\"7.4\" trill-step=\"half\" beats=\"8.4\" second-beat=\"7.4\" last-beat=\"7.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 7.5 ) );
	object.setDefaultY( MxNumberTenths( 7.5 ) );
	object.setRelativeX( MxNumberTenths( 7.5 ) );
	object.setRelativeY( MxNumberTenths( 7.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.5 ) );
	object.setSecondBeat( MxNumberPercent( 7.5 ) );
	object.setLastBeat( MxNumberPercent( 7.5 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"7.5\" relative-x=\"7.5\" relative-y=\"7.5\" color=\"#81828180\" trill-step=\"unison\" beats=\"8.5\" second-beat=\"7.5\" last-beat=\"7.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 7.6 ) );
	object.setDefaultY( MxNumberTenths( 7.6 ) );
	object.setRelativeX( MxNumberTenths( 7.6 ) );
	object.setRelativeY( MxNumberTenths( 7.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#848382" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.6 ) );
	object.setSecondBeat( MxNumberPercent( 7.6 ) );
	object.setLastBeat( MxNumberPercent( 7.6 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"7.6\" relative-y=\"7.6\" color=\"#848382\" trill-step=\"whole\" second-beat=\"7.6\" last-beat=\"7.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 7.7 ) );
	object.setDefaultY( MxNumberTenths( 7.7 ) );
	object.setRelativeX( MxNumberTenths( 7.7 ) );
	object.setRelativeY( MxNumberTenths( 7.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.7 ) );
	object.setSecondBeat( MxNumberPercent( 7.7 ) );
	object.setLastBeat( MxNumberPercent( 7.7 ) );
	expected = "<wavy-line type=\"start\" default-x=\"7.7\" default-y=\"7.7\" color=\"#85868584\" trill-step=\"half\" two-note-turn=\"half\" second-beat=\"7.7\" last-beat=\"7.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 7.8 ) );
	object.setDefaultY( MxNumberTenths( 7.8 ) );
	object.setRelativeX( MxNumberTenths( 7.8 ) );
	object.setRelativeY( MxNumberTenths( 7.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#888786" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.8 ) );
	object.setSecondBeat( MxNumberPercent( 7.8 ) );
	object.setLastBeat( MxNumberPercent( 7.8 ) );
	expected = "<wavy-line type=\"start\" default-x=\"7.8\" default-y=\"7.8\" color=\"#888786\" trill-step=\"unison\" two-note-turn=\"none\" second-beat=\"7.8\" last-beat=\"7.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 7.9 ) );
	object.setDefaultY( MxNumberTenths( 7.9 ) );
	object.setRelativeX( MxNumberTenths( 7.9 ) );
	object.setRelativeY( MxNumberTenths( 7.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.9 ) );
	object.setSecondBeat( MxNumberPercent( 7.9 ) );
	object.setLastBeat( MxNumberPercent( 7.9 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"7.9\" color=\"#898A8988\" trill-step=\"whole\" two-note-turn=\"whole\" second-beat=\"7.9\" last-beat=\"7.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 8 ) );
	object.setDefaultY( MxNumberTenths( 8 ) );
	object.setRelativeX( MxNumberTenths( 8 ) );
	object.setRelativeY( MxNumberTenths( 8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9 ) );
	object.setSecondBeat( MxNumberPercent( 8 ) );
	object.setLastBeat( MxNumberPercent( 8 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" color=\"#8C8B8A\" trill-step=\"half\" two-note-turn=\"half\" second-beat=\"8\" last-beat=\"8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 8.1 ) );
	object.setDefaultY( MxNumberTenths( 8.1 ) );
	object.setRelativeX( MxNumberTenths( 8.1 ) );
	object.setRelativeY( MxNumberTenths( 8.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.1 ) );
	object.setSecondBeat( MxNumberPercent( 8.1 ) );
	object.setLastBeat( MxNumberPercent( 8.1 ) );
	expected = "<wavy-line type=\"start\" relative-x=\"8.1\" placement=\"below\" color=\"#8D8E8D8C\" two-note-turn=\"none\" last-beat=\"8.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 8.2 ) );
	object.setDefaultY( MxNumberTenths( 8.2 ) );
	object.setRelativeX( MxNumberTenths( 8.2 ) );
	object.setRelativeY( MxNumberTenths( 8.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.2 ) );
	object.setSecondBeat( MxNumberPercent( 8.2 ) );
	object.setLastBeat( MxNumberPercent( 8.2 ) );
	expected = "<wavy-line type=\"start\" relative-x=\"8.2\" placement=\"above\" color=\"#908F8E\" two-note-turn=\"whole\" last-beat=\"8.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 8.3 ) );
	object.setDefaultY( MxNumberTenths( 8.3 ) );
	object.setRelativeX( MxNumberTenths( 8.3 ) );
	object.setRelativeY( MxNumberTenths( 8.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.3 ) );
	object.setSecondBeat( MxNumberPercent( 8.3 ) );
	object.setLastBeat( MxNumberPercent( 8.3 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"8.3\" default-y=\"8.3\" relative-x=\"8.3\" relative-y=\"8.3\" placement=\"below\" start-note=\"main\" two-note-turn=\"half\" accelerate=\"no\" last-beat=\"8.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 8.4 ) );
	object.setDefaultY( MxNumberTenths( 8.4 ) );
	object.setRelativeX( MxNumberTenths( 8.4 ) );
	object.setRelativeY( MxNumberTenths( 8.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#949392" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.4 ) );
	object.setSecondBeat( MxNumberPercent( 8.4 ) );
	object.setLastBeat( MxNumberPercent( 8.4 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"8.4\" default-y=\"8.4\" relative-x=\"8.4\" relative-y=\"8.4\" placement=\"above\" start-note=\"below\" two-note-turn=\"none\" accelerate=\"yes\" last-beat=\"8.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 8.5 ) );
	object.setDefaultY( MxNumberTenths( 8.5 ) );
	object.setRelativeX( MxNumberTenths( 8.5 ) );
	object.setRelativeY( MxNumberTenths( 8.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.5 ) );
	object.setSecondBeat( MxNumberPercent( 8.5 ) );
	object.setLastBeat( MxNumberPercent( 8.5 ) );
	expected = "<wavy-line type=\"start\" default-x=\"8.5\" default-y=\"8.5\" relative-x=\"8.5\" relative-y=\"8.5\" placement=\"below\" start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"no\" last-beat=\"8.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 8.6 ) );
	object.setDefaultY( MxNumberTenths( 8.6 ) );
	object.setRelativeX( MxNumberTenths( 8.6 ) );
	object.setRelativeY( MxNumberTenths( 8.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#989796" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.6 ) );
	object.setSecondBeat( MxNumberPercent( 8.6 ) );
	object.setLastBeat( MxNumberPercent( 8.6 ) );
	expected = "<wavy-line type=\"start\" default-y=\"8.6\" relative-y=\"8.6\" placement=\"above\" start-note=\"main\" two-note-turn=\"half\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 8.7 ) );
	object.setDefaultY( MxNumberTenths( 8.7 ) );
	object.setRelativeX( MxNumberTenths( 8.7 ) );
	object.setRelativeY( MxNumberTenths( 8.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.7 ) );
	object.setSecondBeat( MxNumberPercent( 8.7 ) );
	object.setLastBeat( MxNumberPercent( 8.7 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" relative-y=\"8.7\" placement=\"below\" start-note=\"below\" two-note-turn=\"none\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 8.8 ) );
	object.setDefaultY( MxNumberTenths( 8.8 ) );
	object.setRelativeX( MxNumberTenths( 8.8 ) );
	object.setRelativeY( MxNumberTenths( 8.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.8 ) );
	object.setSecondBeat( MxNumberPercent( 8.8 ) );
	object.setLastBeat( MxNumberPercent( 8.8 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" relative-y=\"8.8\" start-note=\"upper\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 8.9 ) );
	object.setDefaultY( MxNumberTenths( 8.9 ) );
	object.setRelativeX( MxNumberTenths( 8.9 ) );
	object.setRelativeY( MxNumberTenths( 8.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.9 ) );
	object.setSecondBeat( MxNumberPercent( 8.9 ) );
	object.setLastBeat( MxNumberPercent( 8.9 ) );
	expected = "<wavy-line type=\"start\" default-x=\"8.9\" start-note=\"main\" accelerate=\"no\" beats=\"9.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 9 ) );
	object.setDefaultY( MxNumberTenths( 9 ) );
	object.setRelativeX( MxNumberTenths( 9 ) );
	object.setRelativeY( MxNumberTenths( 9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10 ) );
	object.setSecondBeat( MxNumberPercent( 9 ) );
	object.setLastBeat( MxNumberPercent( 9 ) );
	expected = "<wavy-line type=\"start\" default-x=\"9\" start-note=\"below\" accelerate=\"yes\" beats=\"10\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 9.1 ) );
	object.setDefaultY( MxNumberTenths( 9.1 ) );
	object.setRelativeX( MxNumberTenths( 9.1 ) );
	object.setRelativeY( MxNumberTenths( 9.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.1 ) );
	object.setSecondBeat( MxNumberPercent( 9.1 ) );
	object.setLastBeat( MxNumberPercent( 9.1 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"9.1\" default-y=\"9.1\" relative-x=\"9.1\" color=\"#A1A2A1A0\" start-note=\"upper\" trill-step=\"whole\" accelerate=\"no\" beats=\"10.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 9.2 ) );
	object.setDefaultY( MxNumberTenths( 9.2 ) );
	object.setRelativeX( MxNumberTenths( 9.2 ) );
	object.setRelativeY( MxNumberTenths( 9.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.2 ) );
	object.setSecondBeat( MxNumberPercent( 9.2 ) );
	object.setLastBeat( MxNumberPercent( 9.2 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"9.2\" relative-x=\"9.2\" color=\"#A4A3A2\" trill-step=\"half\" accelerate=\"yes\" beats=\"10.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 9.3 ) );
	object.setDefaultY( MxNumberTenths( 9.3 ) );
	object.setRelativeX( MxNumberTenths( 9.3 ) );
	object.setRelativeY( MxNumberTenths( 9.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.3 ) );
	object.setSecondBeat( MxNumberPercent( 9.3 ) );
	object.setLastBeat( MxNumberPercent( 9.3 ) );
	expected = "<wavy-line type=\"start\" default-y=\"9.3\" relative-x=\"9.3\" color=\"#A5A6A5A4\" trill-step=\"unison\" accelerate=\"no\" beats=\"10.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 9.4 ) );
	object.setDefaultY( MxNumberTenths( 9.4 ) );
	object.setRelativeX( MxNumberTenths( 9.4 ) );
	object.setRelativeY( MxNumberTenths( 9.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.4 ) );
	object.setSecondBeat( MxNumberPercent( 9.4 ) );
	object.setLastBeat( MxNumberPercent( 9.4 ) );
	expected = "<wavy-line type=\"start\" default-y=\"9.4\" relative-x=\"9.4\" color=\"#A8A7A6\" trill-step=\"whole\" accelerate=\"yes\" beats=\"10.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 9.5 ) );
	object.setDefaultY( MxNumberTenths( 9.5 ) );
	object.setRelativeX( MxNumberTenths( 9.5 ) );
	object.setRelativeY( MxNumberTenths( 9.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.5 ) );
	object.setSecondBeat( MxNumberPercent( 9.5 ) );
	object.setLastBeat( MxNumberPercent( 9.5 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"9.5\" relative-x=\"9.5\" relative-y=\"9.5\" placement=\"below\" color=\"#A9AAA9A8\" trill-step=\"half\" beats=\"10.5\" second-beat=\"9.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 9.6 ) );
	object.setDefaultY( MxNumberTenths( 9.6 ) );
	object.setRelativeX( MxNumberTenths( 9.6 ) );
	object.setRelativeY( MxNumberTenths( 9.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.6 ) );
	object.setSecondBeat( MxNumberPercent( 9.6 ) );
	object.setLastBeat( MxNumberPercent( 9.6 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"9.6\" relative-y=\"9.6\" placement=\"above\" color=\"#ACABAA\" trill-step=\"unison\" beats=\"10.6\" second-beat=\"9.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 9.7 ) );
	object.setDefaultY( MxNumberTenths( 9.7 ) );
	object.setRelativeX( MxNumberTenths( 9.7 ) );
	object.setRelativeY( MxNumberTenths( 9.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.7 ) );
	object.setSecondBeat( MxNumberPercent( 9.7 ) );
	object.setLastBeat( MxNumberPercent( 9.7 ) );
	expected = "<wavy-line type=\"start\" default-x=\"9.7\" relative-y=\"9.7\" placement=\"below\" color=\"#ADAEADAC\" trill-step=\"whole\" beats=\"10.7\" second-beat=\"9.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 9.8 ) );
	object.setDefaultY( MxNumberTenths( 9.8 ) );
	object.setRelativeX( MxNumberTenths( 9.8 ) );
	object.setRelativeY( MxNumberTenths( 9.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.8 ) );
	object.setSecondBeat( MxNumberPercent( 9.8 ) );
	object.setLastBeat( MxNumberPercent( 9.8 ) );
	expected = "<wavy-line type=\"start\" relative-y=\"9.8\" placement=\"above\" color=\"#B0AFAE\" trill-step=\"half\" beats=\"10.8\" second-beat=\"9.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 9.9 ) );
	object.setDefaultY( MxNumberTenths( 9.9 ) );
	object.setRelativeX( MxNumberTenths( 9.9 ) );
	object.setRelativeY( MxNumberTenths( 9.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.9 ) );
	object.setSecondBeat( MxNumberPercent( 9.9 ) );
	object.setLastBeat( MxNumberPercent( 9.9 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"9.9\" relative-y=\"9.9\" placement=\"below\" trill-step=\"unison\" two-note-turn=\"none\" beats=\"10.9\" second-beat=\"9.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 10 ) );
	object.setDefaultY( MxNumberTenths( 10 ) );
	object.setRelativeX( MxNumberTenths( 10 ) );
	object.setRelativeY( MxNumberTenths( 10 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11 ) );
	object.setSecondBeat( MxNumberPercent( 10 ) );
	object.setLastBeat( MxNumberPercent( 10 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-y=\"10\" relative-y=\"10\" placement=\"above\" trill-step=\"whole\" two-note-turn=\"whole\" beats=\"11\" second-beat=\"10\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 10.1 ) );
	object.setDefaultY( MxNumberTenths( 10.1 ) );
	object.setRelativeX( MxNumberTenths( 10.1 ) );
	object.setRelativeY( MxNumberTenths( 10.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.1 ) );
	object.setSecondBeat( MxNumberPercent( 10.1 ) );
	object.setLastBeat( MxNumberPercent( 10.1 ) );
	expected = "<wavy-line type=\"start\" default-x=\"10.1\" default-y=\"10.1\" relative-x=\"10.1\" placement=\"below\" start-note=\"main\" two-note-turn=\"half\" beats=\"11.1\" second-beat=\"10.1\" last-beat=\"10.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 10.2 ) );
	object.setDefaultY( MxNumberTenths( 10.2 ) );
	object.setRelativeX( MxNumberTenths( 10.2 ) );
	object.setRelativeY( MxNumberTenths( 10.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.2 ) );
	object.setSecondBeat( MxNumberPercent( 10.2 ) );
	object.setLastBeat( MxNumberPercent( 10.2 ) );
	expected = "<wavy-line type=\"start\" default-x=\"10.2\" default-y=\"10.2\" relative-x=\"10.2\" start-note=\"below\" two-note-turn=\"none\" second-beat=\"10.2\" last-beat=\"10.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 10.3 ) );
	object.setDefaultY( MxNumberTenths( 10.3 ) );
	object.setRelativeX( MxNumberTenths( 10.3 ) );
	object.setRelativeY( MxNumberTenths( 10.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.3 ) );
	object.setSecondBeat( MxNumberPercent( 10.3 ) );
	object.setLastBeat( MxNumberPercent( 10.3 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"10.3\" relative-x=\"10.3\" start-note=\"upper\" two-note-turn=\"whole\" second-beat=\"10.3\" last-beat=\"10.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 10.4 ) );
	object.setDefaultY( MxNumberTenths( 10.4 ) );
	object.setRelativeX( MxNumberTenths( 10.4 ) );
	object.setRelativeY( MxNumberTenths( 10.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.4 ) );
	object.setSecondBeat( MxNumberPercent( 10.4 ) );
	object.setLastBeat( MxNumberPercent( 10.4 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" relative-x=\"10.4\" start-note=\"main\" two-note-turn=\"half\" second-beat=\"10.4\" last-beat=\"10.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 10.5 ) );
	object.setDefaultY( MxNumberTenths( 10.5 ) );
	object.setRelativeX( MxNumberTenths( 10.5 ) );
	object.setRelativeY( MxNumberTenths( 10.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.5 ) );
	object.setSecondBeat( MxNumberPercent( 10.5 ) );
	object.setLastBeat( MxNumberPercent( 10.5 ) );
	expected = "<wavy-line type=\"start\" relative-x=\"10.5\" start-note=\"below\" two-note-turn=\"none\" second-beat=\"10.5\" last-beat=\"10.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 10.6 ) );
	object.setDefaultY( MxNumberTenths( 10.6 ) );
	object.setRelativeX( MxNumberTenths( 10.6 ) );
	object.setRelativeY( MxNumberTenths( 10.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.6 ) );
	object.setSecondBeat( MxNumberPercent( 10.6 ) );
	object.setLastBeat( MxNumberPercent( 10.6 ) );
	expected = "<wavy-line type=\"start\" start-note=\"upper\" two-note-turn=\"whole\" second-beat=\"10.6\" last-beat=\"10.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 10.7 ) );
	object.setDefaultY( MxNumberTenths( 10.7 ) );
	object.setRelativeX( MxNumberTenths( 10.7 ) );
	object.setRelativeY( MxNumberTenths( 10.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.7 ) );
	object.setSecondBeat( MxNumberPercent( 10.7 ) );
	object.setLastBeat( MxNumberPercent( 10.7 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"10.7\" default-y=\"10.7\" relative-y=\"10.7\" color=\"#C1C2C1C0\" start-note=\"main\" two-note-turn=\"half\" accelerate=\"no\" second-beat=\"10.7\" last-beat=\"10.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 10.8 ) );
	object.setDefaultY( MxNumberTenths( 10.8 ) );
	object.setRelativeX( MxNumberTenths( 10.8 ) );
	object.setRelativeY( MxNumberTenths( 10.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.8 ) );
	object.setSecondBeat( MxNumberPercent( 10.8 ) );
	object.setLastBeat( MxNumberPercent( 10.8 ) );
	expected = "<wavy-line type=\"start\" number=\"1\" default-x=\"10.8\" default-y=\"10.8\" relative-y=\"10.8\" color=\"#C4C3C2\" start-note=\"below\" two-note-turn=\"none\" accelerate=\"yes\" second-beat=\"10.8\" last-beat=\"10.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 10.9 ) );
	object.setDefaultY( MxNumberTenths( 10.9 ) );
	object.setRelativeX( MxNumberTenths( 10.9 ) );
	object.setRelativeY( MxNumberTenths( 10.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.9 ) );
	object.setSecondBeat( MxNumberPercent( 10.9 ) );
	object.setLastBeat( MxNumberPercent( 10.9 ) );
	expected = "<wavy-line type=\"start\" default-x=\"10.9\" default-y=\"10.9\" relative-y=\"10.9\" placement=\"below\" color=\"#C5C6C5C4\" start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"no\" last-beat=\"10.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 11 ) );
	object.setDefaultY( MxNumberTenths( 11 ) );
	object.setRelativeX( MxNumberTenths( 11 ) );
	object.setRelativeY( MxNumberTenths( 11 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 12 ) );
	object.setSecondBeat( MxNumberPercent( 11 ) );
	object.setLastBeat( MxNumberPercent( 11 ) );
	expected = "<wavy-line type=\"start\" default-y=\"11\" relative-y=\"11\" placement=\"above\" color=\"#C8C7C6\" accelerate=\"yes\" last-beat=\"11\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEeWavyLine )
{
	MxEeWavyLine object;
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
	object.setDefaultX( MxNumberTenths( 11.1 ) );
	object.setDefaultY( MxNumberTenths( 11.1 ) );
	object.setRelativeX( MxNumberTenths( 11.1 ) );
	object.setRelativeY( MxNumberTenths( 11.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 12.1 ) );
	object.setSecondBeat( MxNumberPercent( 11.1 ) );
	object.setLastBeat( MxNumberPercent( 11.1 ) );
	expected = "<wavy-line type=\"start\"/>";
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


