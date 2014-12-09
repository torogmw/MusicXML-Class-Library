/** *******************************************************
  * 
  * MxCxEmptyHorizontalTurnTest.cpp
  * Created: 2014-12-03 16:31:28
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyHorizontalTurn.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxEnumStartNote( lexicon::enums::StartNote::upper ) ).toString();
	std::string actual = object.getStartNote().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) ).toString();
	std::string actual = object.getTrillStep().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) ).toString();
	std::string actual = object.getTwoNoteTurn().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getAccelerate().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxNumberTrillBeats( 4 ) ).toString();
	std::string actual = object.getBeats().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues15, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxNumberPercent( 0.25 ) ).toString();
	std::string actual = object.getSecondBeat().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues16, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxNumberPercent( 0.75 ) ).toString();
	std::string actual = object.getLastBeat().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues17, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getSlash().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = "MxCxEmptyHorizontalTurn";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = "horizontal-turn";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	std::string expected = "The horizontal-turn type represents turn elements that are horizontal rather than vertical. These are empty elements with print-style, placement, trill-sound, and slash attributes. If the slash attribute is yes, then a vertical line is used to slash the turn; it is no by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxCxEmptyHorizontalTurn )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxCxEmptyHorizontalTurn )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxCxEmptyHorizontalTurn )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxCxEmptyHorizontalTurn )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily4, MxCxEmptyHorizontalTurn )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle5, MxCxEmptyHorizontalTurn )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize6, MxCxEmptyHorizontalTurn )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight7, MxCxEmptyHorizontalTurn )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxCxEmptyHorizontalTurn )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement9, MxCxEmptyHorizontalTurn )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setPlacement( value1 );
	MxEnumAboveBelow expected = value1;
	MxEnumAboveBelow actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
	object.setPlacement( value2 );
	expected = value2;
	actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
}
TEST( setStartNote10, MxCxEmptyHorizontalTurn )
{
	MxEnumStartNote value1( lexicon::enums::StartNote::below );
	MxEnumStartNote value2( lexicon::enums::StartNote::main );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setStartNote( value1 );
	MxEnumStartNote expected = value1;
	MxEnumStartNote actual = object.getStartNote();
	CHECK_EQUAL( expected, actual )
	object.setStartNote( value2 );
	expected = value2;
	actual = object.getStartNote();
	CHECK_EQUAL( expected, actual )
}
TEST( setTrillStep11, MxCxEmptyHorizontalTurn )
{
	MxEnumTrillStep value1( lexicon::enums::TrillStep::unison );
	MxEnumTrillStep value2( lexicon::enums::TrillStep::half );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setTrillStep( value1 );
	MxEnumTrillStep expected = value1;
	MxEnumTrillStep actual = object.getTrillStep();
	CHECK_EQUAL( expected, actual )
	object.setTrillStep( value2 );
	expected = value2;
	actual = object.getTrillStep();
	CHECK_EQUAL( expected, actual )
}
TEST( setTwoNoteTurn12, MxCxEmptyHorizontalTurn )
{
	MxEnumTwoNoteTurn value1( lexicon::enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn value2( lexicon::enums::TwoNoteTurn::half );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setTwoNoteTurn( value1 );
	MxEnumTwoNoteTurn expected = value1;
	MxEnumTwoNoteTurn actual = object.getTwoNoteTurn();
	CHECK_EQUAL( expected, actual )
	object.setTwoNoteTurn( value2 );
	expected = value2;
	actual = object.getTwoNoteTurn();
	CHECK_EQUAL( expected, actual )
}
TEST( setAccelerate13, MxCxEmptyHorizontalTurn )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setAccelerate( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
	object.setAccelerate( value2 );
	expected = value2;
	actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
}
TEST( setBeats14, MxCxEmptyHorizontalTurn )
{
	MxNumberTrillBeats value1( 2.1 );
	MxNumberTrillBeats value2( 2.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setBeats( value1 );
	MxNumberTrillBeats expected = value1;
	MxNumberTrillBeats actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
	object.setBeats( value2 );
	expected = value2;
	actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
}
TEST( setSecondBeat15, MxCxEmptyHorizontalTurn )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setSecondBeat( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getSecondBeat();
	CHECK_EQUAL( expected, actual )
	object.setSecondBeat( value2 );
	expected = value2;
	actual = object.getSecondBeat();
	CHECK_EQUAL( expected, actual )
}
TEST( setLastBeat16, MxCxEmptyHorizontalTurn )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setLastBeat( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getLastBeat();
	CHECK_EQUAL( expected, actual )
	object.setLastBeat( value2 );
	expected = value2;
	actual = object.getLastBeat();
	CHECK_EQUAL( expected, actual )
}
TEST( setSlash17, MxCxEmptyHorizontalTurn )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyHorizontalTurn object;
	object.setSlash( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getSlash();
	CHECK_EQUAL( expected, actual )
	object.setSlash( value2 );
	expected = value2;
	actual = object.getSlash();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDefaultXRequired0, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired4, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired5, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired6, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired7, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired9, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStartNoteRequired10, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsStartNoteRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepRequired11, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsTrillStepRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnRequired12, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsTwoNoteTurnRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAccelerateRequired13, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsAccelerateRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsRequired14, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsBeatsRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatRequired15, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsSecondBeatRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatRequired16, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsLastBeatRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashRequired17, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsSlashRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsDefaultYPresent1, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsRelativeXPresent2, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsRelativeYPresent3, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsFontFamilyPresent4, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontFamilyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontFamilyPresent( true );
	expected = true;
	actual = object.getIsFontFamilyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontFamilyPresent( false );
	expected = false;
	actual = object.getIsFontFamilyPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStylePresent5, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontStylePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontStylePresent( true );
	expected = true;
	actual = object.getIsFontStylePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontStylePresent( false );
	expected = false;
	actual = object.getIsFontStylePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizePresent6, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontSizePresent( true );
	expected = true;
	actual = object.getIsFontSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontSizePresent( false );
	expected = false;
	actual = object.getIsFontSizePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightPresent7, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontWeightPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontWeightPresent( true );
	expected = true;
	actual = object.getIsFontWeightPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontWeightPresent( false );
	expected = false;
	actual = object.getIsFontWeightPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorPresent8, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsPlacementPresent9, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsStartNotePresent10, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsTrillStepPresent11, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsTwoNoteTurnPresent12, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsAcceleratePresent13, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsBeatsPresent14, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsSecondBeatPresent15, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsLastBeatPresent16, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
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
TEST( getIsSlashPresent17, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsSlashPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSlashPresent( true );
	expected = true;
	actual = object.getIsSlashPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSlashPresent( false );
	expected = false;
	actual = object.getIsSlashPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsDefaultXDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStartNoteDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = true;
	bool actual = object.getIsStartNoteDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = true;
	bool actual = object.getIsTrillStepDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = true;
	bool actual = object.getIsTwoNoteTurnDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAccelerateDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = true;
	bool actual = object.getIsAccelerateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = true;
	bool actual = object.getIsBeatsDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = true;
	bool actual = object.getIsSecondBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = true;
	bool actual = object.getIsLastBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashDefaultDefined, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	bool expected = false;
	bool actual = object.getIsSlashDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getStartNoteDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxEnumStartNote expected( lexicon::enums::StartNote::upper );
	MxEnumStartNote actual = object.getStartNoteDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTrillStepDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxEnumTrillStep expected( lexicon::enums::TrillStep::whole );
	MxEnumTrillStep actual = object.getTrillStepDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTwoNoteTurnDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxEnumTwoNoteTurn expected( lexicon::enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn actual = object.getTwoNoteTurnDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getAccelerateDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getAccelerateDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBeatsDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxNumberTrillBeats expected( 4 );
	MxNumberTrillBeats actual = object.getBeatsDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSecondBeatDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxNumberPercent expected( 0.25 );
	MxNumberPercent actual = object.getSecondBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLastBeatDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxNumberPercent expected( 0.75 );
	MxNumberPercent actual = object.getLastBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSlashDefaultValue, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getSlashDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 51.6 ) );
	object.setDefaultY( MxNumberTenths( 51.6 ) );
	object.setRelativeX( MxNumberTenths( 51.6 ) );
	object.setRelativeY( MxNumberTenths( 51.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 12.2 ) );
	object.setSecondBeat( MxNumberPercent( 11.2 ) );
	object.setLastBeat( MxNumberPercent( 11.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	expected = "<booksmart default-x=\"51.6\" default-y=\"51.6\" relative-x=\"51.6\" relative-y=\"51.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F4F3F2\" placement=\"below\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"12.2\" second-beat=\"11.2\" last-beat=\"11.2\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 51.7 ) );
	object.setDefaultY( MxNumberTenths( 51.7 ) );
	object.setRelativeX( MxNumberTenths( 51.7 ) );
	object.setRelativeY( MxNumberTenths( 51.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 12.3 ) );
	object.setSecondBeat( MxNumberPercent( 11.3 ) );
	object.setLastBeat( MxNumberPercent( 11.3 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-y=\"51.7\" relative-x=\"51.7\" relative-y=\"51.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F5F6F5F4\" placement=\"above\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"12.3\" second-beat=\"11.3\" last-beat=\"11.3\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 51.8 ) );
	object.setDefaultY( MxNumberTenths( 51.8 ) );
	object.setRelativeX( MxNumberTenths( 51.8 ) );
	object.setRelativeY( MxNumberTenths( 51.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 12.4 ) );
	object.setSecondBeat( MxNumberPercent( 11.4 ) );
	object.setLastBeat( MxNumberPercent( 11.4 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"51.8\" relative-x=\"51.8\" relative-y=\"51.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#F8F7F6\" placement=\"below\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"12.4\" second-beat=\"11.4\" last-beat=\"11.4\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 51.9 ) );
	object.setDefaultY( MxNumberTenths( 51.9 ) );
	object.setRelativeX( MxNumberTenths( 51.9 ) );
	object.setRelativeY( MxNumberTenths( 51.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 12.5 ) );
	object.setSecondBeat( MxNumberPercent( 11.5 ) );
	object.setLastBeat( MxNumberPercent( 11.5 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop relative-y=\"51.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#F9FAF9F8\" placement=\"above\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"12.5\" second-beat=\"11.5\" last-beat=\"11.5\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 52 ) );
	object.setDefaultY( MxNumberTenths( 52 ) );
	object.setRelativeX( MxNumberTenths( 52 ) );
	object.setRelativeY( MxNumberTenths( 52 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 12.6 ) );
	object.setSecondBeat( MxNumberPercent( 11.6 ) );
	object.setLastBeat( MxNumberPercent( 11.6 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"52\" default-y=\"52\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#FCFBFA\" placement=\"below\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"12.6\" second-beat=\"11.6\" last-beat=\"11.6\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 52.1 ) );
	object.setDefaultY( MxNumberTenths( 52.1 ) );
	object.setRelativeX( MxNumberTenths( 52.1 ) );
	object.setRelativeY( MxNumberTenths( 52.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 12.7 ) );
	object.setSecondBeat( MxNumberPercent( 11.7 ) );
	object.setLastBeat( MxNumberPercent( 11.7 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-y=\"52.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#FDFEFDFC\" placement=\"above\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\" beats=\"12.7\" second-beat=\"11.7\" last-beat=\"11.7\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 52.2 ) );
	object.setDefaultY( MxNumberTenths( 52.2 ) );
	object.setRelativeX( MxNumberTenths( 52.2 ) );
	object.setRelativeY( MxNumberTenths( 52.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#00FFFE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 12.8 ) );
	object.setSecondBeat( MxNumberPercent( 11.8 ) );
	object.setLastBeat( MxNumberPercent( 11.8 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"52.2\" relative-x=\"52.2\" font-size=\"large\" font-weight=\"normal\" color=\"#00FFFE\" placement=\"below\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"12.8\" second-beat=\"11.8\" last-beat=\"11.8\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 52.3 ) );
	object.setDefaultY( MxNumberTenths( 52.3 ) );
	object.setRelativeX( MxNumberTenths( 52.3 ) );
	object.setRelativeY( MxNumberTenths( 52.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#01020100" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 12.9 ) );
	object.setSecondBeat( MxNumberPercent( 11.9 ) );
	object.setLastBeat( MxNumberPercent( 11.9 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard relative-x=\"52.3\" font-weight=\"bold\" color=\"#01020100\" placement=\"above\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"12.9\" second-beat=\"11.9\" last-beat=\"11.9\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 52.4 ) );
	object.setDefaultY( MxNumberTenths( 52.4 ) );
	object.setRelativeX( MxNumberTenths( 52.4 ) );
	object.setRelativeY( MxNumberTenths( 52.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#040302" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 13 ) );
	object.setSecondBeat( MxNumberPercent( 12 ) );
	object.setLastBeat( MxNumberPercent( 12 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"52.4\" default-y=\"52.4\" relative-x=\"52.4\" relative-y=\"52.4\" color=\"#040302\" placement=\"below\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"13\" second-beat=\"12\" last-beat=\"12\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 52.5 ) );
	object.setDefaultY( MxNumberTenths( 52.5 ) );
	object.setRelativeX( MxNumberTenths( 52.5 ) );
	object.setRelativeY( MxNumberTenths( 52.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#05060504" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 13.1 ) );
	object.setSecondBeat( MxNumberPercent( 12.1 ) );
	object.setLastBeat( MxNumberPercent( 12.1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-y=\"52.5\" relative-y=\"52.5\" placement=\"above\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"13.1\" second-beat=\"12.1\" last-beat=\"12.1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 52.6 ) );
	object.setDefaultY( MxNumberTenths( 52.6 ) );
	object.setRelativeX( MxNumberTenths( 52.6 ) );
	object.setRelativeY( MxNumberTenths( 52.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#080706" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 13.2 ) );
	object.setSecondBeat( MxNumberPercent( 12.2 ) );
	object.setLastBeat( MxNumberPercent( 12.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"52.6\" relative-y=\"52.6\" font-family=\"XYZ\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"13.2\" second-beat=\"12.2\" last-beat=\"12.2\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 52.7 ) );
	object.setDefaultY( MxNumberTenths( 52.7 ) );
	object.setRelativeX( MxNumberTenths( 52.7 ) );
	object.setRelativeY( MxNumberTenths( 52.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#090A0908" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 13.3 ) );
	object.setSecondBeat( MxNumberPercent( 12.3 ) );
	object.setLastBeat( MxNumberPercent( 12.3 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet relative-y=\"52.7\" font-family=\"ABC\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\" beats=\"13.3\" second-beat=\"12.3\" last-beat=\"12.3\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 52.8 ) );
	object.setDefaultY( MxNumberTenths( 52.8 ) );
	object.setRelativeX( MxNumberTenths( 52.8 ) );
	object.setRelativeY( MxNumberTenths( 52.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 13.4 ) );
	object.setSecondBeat( MxNumberPercent( 12.4 ) );
	object.setLastBeat( MxNumberPercent( 12.4 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"52.8\" default-y=\"52.8\" relative-x=\"52.8\" font-family=\"DEF\" font-style=\"normal\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"13.4\" second-beat=\"12.4\" last-beat=\"12.4\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 52.9 ) );
	object.setDefaultY( MxNumberTenths( 52.9 ) );
	object.setRelativeX( MxNumberTenths( 52.9 ) );
	object.setRelativeY( MxNumberTenths( 52.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 13.5 ) );
	object.setSecondBeat( MxNumberPercent( 12.5 ) );
	object.setLastBeat( MxNumberPercent( 12.5 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-y=\"52.9\" relative-x=\"52.9\" font-family=\"XYZ\" font-style=\"italic\" accelerate=\"no\" beats=\"13.5\" second-beat=\"12.5\" last-beat=\"12.5\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 53 ) );
	object.setDefaultY( MxNumberTenths( 53 ) );
	object.setRelativeX( MxNumberTenths( 53 ) );
	object.setRelativeY( MxNumberTenths( 53 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#100F0E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 13.6 ) );
	object.setSecondBeat( MxNumberPercent( 12.6 ) );
	object.setLastBeat( MxNumberPercent( 12.6 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"53\" relative-x=\"53\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" beats=\"13.6\" second-beat=\"12.6\" last-beat=\"12.6\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 53.1 ) );
	object.setDefaultY( MxNumberTenths( 53.1 ) );
	object.setRelativeX( MxNumberTenths( 53.1 ) );
	object.setRelativeY( MxNumberTenths( 53.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#11121110" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 13.7 ) );
	object.setSecondBeat( MxNumberPercent( 12.7 ) );
	object.setLastBeat( MxNumberPercent( 12.7 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart font-style=\"italic\" font-size=\"1.1\" second-beat=\"12.7\" last-beat=\"12.7\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 53.2 ) );
	object.setDefaultY( MxNumberTenths( 53.2 ) );
	object.setRelativeX( MxNumberTenths( 53.2 ) );
	object.setRelativeY( MxNumberTenths( 53.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#141312" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 13.8 ) );
	object.setSecondBeat( MxNumberPercent( 12.8 ) );
	object.setLastBeat( MxNumberPercent( 12.8 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"53.2\" default-y=\"53.2\" relative-y=\"53.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" last-beat=\"12.8\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 53.3 ) );
	object.setDefaultY( MxNumberTenths( 53.3 ) );
	object.setRelativeX( MxNumberTenths( 53.3 ) );
	object.setRelativeY( MxNumberTenths( 53.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#15161514" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 13.9 ) );
	object.setSecondBeat( MxNumberPercent( 12.9 ) );
	object.setLastBeat( MxNumberPercent( 12.9 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-y=\"53.3\" relative-y=\"53.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 53.4 ) );
	object.setDefaultY( MxNumberTenths( 53.4 ) );
	object.setRelativeX( MxNumberTenths( 53.4 ) );
	object.setRelativeY( MxNumberTenths( 53.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#181716" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 14 ) );
	object.setSecondBeat( MxNumberPercent( 13 ) );
	object.setLastBeat( MxNumberPercent( 13 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"53.4\" relative-x=\"53.4\" relative-y=\"53.4\" font-size=\"large\" font-weight=\"normal\" color=\"#181716\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 53.5 ) );
	object.setDefaultY( MxNumberTenths( 53.5 ) );
	object.setRelativeX( MxNumberTenths( 53.5 ) );
	object.setRelativeY( MxNumberTenths( 53.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#191A1918" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 14.1 ) );
	object.setSecondBeat( MxNumberPercent( 13.1 ) );
	object.setLastBeat( MxNumberPercent( 13.1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie relative-x=\"53.5\" relative-y=\"53.5\" font-size=\"1.1\" font-weight=\"bold\" color=\"#191A1918\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 53.6 ) );
	object.setDefaultY( MxNumberTenths( 53.6 ) );
	object.setRelativeX( MxNumberTenths( 53.6 ) );
	object.setRelativeY( MxNumberTenths( 53.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 14.2 ) );
	object.setSecondBeat( MxNumberPercent( 13.2 ) );
	object.setLastBeat( MxNumberPercent( 13.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"53.6\" default-y=\"53.6\" relative-x=\"53.6\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" color=\"#1C1B1A\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 53.7 ) );
	object.setDefaultY( MxNumberTenths( 53.7 ) );
	object.setRelativeX( MxNumberTenths( 53.7 ) );
	object.setRelativeY( MxNumberTenths( 53.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 14.3 ) );
	object.setSecondBeat( MxNumberPercent( 13.3 ) );
	object.setLastBeat( MxNumberPercent( 13.3 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-y=\"53.7\" font-family=\"DEF\" font-weight=\"bold\" color=\"#1D1E1D1C\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 53.8 ) );
	object.setDefaultY( MxNumberTenths( 53.8 ) );
	object.setRelativeX( MxNumberTenths( 53.8 ) );
	object.setRelativeY( MxNumberTenths( 53.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#201F1E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 14.4 ) );
	object.setSecondBeat( MxNumberPercent( 13.4 ) );
	object.setLastBeat( MxNumberPercent( 13.4 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"53.8\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#201F1E\" placement=\"below\" start-note=\"main\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 53.9 ) );
	object.setDefaultY( MxNumberTenths( 53.9 ) );
	object.setRelativeX( MxNumberTenths( 53.9 ) );
	object.setRelativeY( MxNumberTenths( 53.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#21222120" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 14.5 ) );
	object.setSecondBeat( MxNumberPercent( 13.5 ) );
	object.setLastBeat( MxNumberPercent( 13.5 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop font-family=\"ABC\" font-weight=\"bold\" color=\"#21222120\" placement=\"above\" start-note=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 54 ) );
	object.setDefaultY( MxNumberTenths( 54 ) );
	object.setRelativeX( MxNumberTenths( 54 ) );
	object.setRelativeY( MxNumberTenths( 54 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#242322" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 14.6 ) );
	object.setSecondBeat( MxNumberPercent( 13.6 ) );
	object.setLastBeat( MxNumberPercent( 13.6 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"54\" default-y=\"54\" relative-x=\"54\" relative-y=\"54\" font-family=\"DEF\" font-style=\"normal\" color=\"#242322\" placement=\"below\" start-note=\"upper\" trill-step=\"whole\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 54.1 ) );
	object.setDefaultY( MxNumberTenths( 54.1 ) );
	object.setRelativeX( MxNumberTenths( 54.1 ) );
	object.setRelativeY( MxNumberTenths( 54.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#25262524" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 14.7 ) );
	object.setSecondBeat( MxNumberPercent( 13.7 ) );
	object.setLastBeat( MxNumberPercent( 13.7 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-y=\"54.1\" relative-x=\"54.1\" relative-y=\"54.1\" font-style=\"italic\" color=\"#25262524\" placement=\"above\" start-note=\"main\" trill-step=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 54.2 ) );
	object.setDefaultY( MxNumberTenths( 54.2 ) );
	object.setRelativeX( MxNumberTenths( 54.2 ) );
	object.setRelativeY( MxNumberTenths( 54.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#282726" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 14.8 ) );
	object.setSecondBeat( MxNumberPercent( 13.8 ) );
	object.setLastBeat( MxNumberPercent( 13.8 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"54.2\" relative-x=\"54.2\" relative-y=\"54.2\" font-style=\"normal\" color=\"#282726\" placement=\"below\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 54.3 ) );
	object.setDefaultY( MxNumberTenths( 54.3 ) );
	object.setRelativeX( MxNumberTenths( 54.3 ) );
	object.setRelativeY( MxNumberTenths( 54.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 14.9 ) );
	object.setSecondBeat( MxNumberPercent( 13.9 ) );
	object.setLastBeat( MxNumberPercent( 13.9 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard relative-y=\"54.3\" font-style=\"italic\" placement=\"above\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 54.4 ) );
	object.setDefaultY( MxNumberTenths( 54.4 ) );
	object.setRelativeX( MxNumberTenths( 54.4 ) );
	object.setRelativeY( MxNumberTenths( 54.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 15 ) );
	object.setSecondBeat( MxNumberPercent( 14 ) );
	object.setLastBeat( MxNumberPercent( 14 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"54.4\" default-y=\"54.4\" font-style=\"normal\" font-size=\"large\" placement=\"below\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 54.5 ) );
	object.setDefaultY( MxNumberTenths( 54.5 ) );
	object.setRelativeX( MxNumberTenths( 54.5 ) );
	object.setRelativeY( MxNumberTenths( 54.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 15.1 ) );
	object.setSecondBeat( MxNumberPercent( 14.1 ) );
	object.setLastBeat( MxNumberPercent( 14.1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-y=\"54.5\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 54.6 ) );
	object.setDefaultY( MxNumberTenths( 54.6 ) );
	object.setRelativeX( MxNumberTenths( 54.6 ) );
	object.setRelativeY( MxNumberTenths( 54.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 15.2 ) );
	object.setSecondBeat( MxNumberPercent( 14.2 ) );
	object.setLastBeat( MxNumberPercent( 14.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"54.6\" relative-x=\"54.6\" font-family=\"DEF\" font-size=\"large\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"15.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 54.7 ) );
	object.setDefaultY( MxNumberTenths( 54.7 ) );
	object.setRelativeX( MxNumberTenths( 54.7 ) );
	object.setRelativeY( MxNumberTenths( 54.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 15.3 ) );
	object.setSecondBeat( MxNumberPercent( 14.3 ) );
	object.setLastBeat( MxNumberPercent( 14.3 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet relative-x=\"54.7\" font-family=\"XYZ\" font-size=\"1.1\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"15.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 54.8 ) );
	object.setDefaultY( MxNumberTenths( 54.8 ) );
	object.setRelativeX( MxNumberTenths( 54.8 ) );
	object.setRelativeY( MxNumberTenths( 54.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 15.4 ) );
	object.setSecondBeat( MxNumberPercent( 14.4 ) );
	object.setLastBeat( MxNumberPercent( 14.4 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"54.8\" default-y=\"54.8\" relative-x=\"54.8\" relative-y=\"54.8\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"15.4\" second-beat=\"14.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 54.9 ) );
	object.setDefaultY( MxNumberTenths( 54.9 ) );
	object.setRelativeX( MxNumberTenths( 54.9 ) );
	object.setRelativeY( MxNumberTenths( 54.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 15.5 ) );
	object.setSecondBeat( MxNumberPercent( 14.5 ) );
	object.setLastBeat( MxNumberPercent( 14.5 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-y=\"54.9\" relative-y=\"54.9\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"15.5\" second-beat=\"14.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 55 ) );
	object.setDefaultY( MxNumberTenths( 55 ) );
	object.setRelativeX( MxNumberTenths( 55 ) );
	object.setRelativeY( MxNumberTenths( 55 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 15.6 ) );
	object.setSecondBeat( MxNumberPercent( 14.6 ) );
	object.setLastBeat( MxNumberPercent( 14.6 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"55\" relative-y=\"55\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"15.6\" second-beat=\"14.6\" last-beat=\"14.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 55.1 ) );
	object.setDefaultY( MxNumberTenths( 55.1 ) );
	object.setRelativeX( MxNumberTenths( 55.1 ) );
	object.setRelativeY( MxNumberTenths( 55.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 15.7 ) );
	object.setSecondBeat( MxNumberPercent( 14.7 ) );
	object.setLastBeat( MxNumberPercent( 14.7 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart relative-y=\"55.1\" font-weight=\"bold\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\" beats=\"15.7\" second-beat=\"14.7\" last-beat=\"14.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 55.2 ) );
	object.setDefaultY( MxNumberTenths( 55.2 ) );
	object.setRelativeX( MxNumberTenths( 55.2 ) );
	object.setRelativeY( MxNumberTenths( 55.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 15.8 ) );
	object.setSecondBeat( MxNumberPercent( 14.8 ) );
	object.setLastBeat( MxNumberPercent( 14.8 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"55.2\" default-y=\"55.2\" relative-x=\"55.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#3C3B3A\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"15.8\" second-beat=\"14.8\" last-beat=\"14.8\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 55.3 ) );
	object.setDefaultY( MxNumberTenths( 55.3 ) );
	object.setRelativeX( MxNumberTenths( 55.3 ) );
	object.setRelativeY( MxNumberTenths( 55.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 15.9 ) );
	object.setSecondBeat( MxNumberPercent( 14.9 ) );
	object.setLastBeat( MxNumberPercent( 14.9 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-y=\"55.3\" relative-x=\"55.3\" font-style=\"italic\" font-weight=\"bold\" color=\"#3D3E3D3C\" two-note-turn=\"half\" accelerate=\"no\" beats=\"15.9\" second-beat=\"14.9\" last-beat=\"14.9\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 55.4 ) );
	object.setDefaultY( MxNumberTenths( 55.4 ) );
	object.setRelativeX( MxNumberTenths( 55.4 ) );
	object.setRelativeY( MxNumberTenths( 55.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 16 ) );
	object.setSecondBeat( MxNumberPercent( 15 ) );
	object.setLastBeat( MxNumberPercent( 15 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"55.4\" relative-x=\"55.4\" font-style=\"normal\" font-weight=\"normal\" color=\"#403F3E\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"16\" second-beat=\"15\" last-beat=\"15\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 55.5 ) );
	object.setDefaultY( MxNumberTenths( 55.5 ) );
	object.setRelativeX( MxNumberTenths( 55.5 ) );
	object.setRelativeY( MxNumberTenths( 55.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 16.1 ) );
	object.setSecondBeat( MxNumberPercent( 15.1 ) );
	object.setLastBeat( MxNumberPercent( 15.1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie font-style=\"italic\" font-weight=\"bold\" color=\"#41424140\" accelerate=\"no\" beats=\"16.1\" second-beat=\"15.1\" last-beat=\"15.1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 55.6 ) );
	object.setDefaultY( MxNumberTenths( 55.6 ) );
	object.setRelativeX( MxNumberTenths( 55.6 ) );
	object.setRelativeY( MxNumberTenths( 55.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 16.2 ) );
	object.setSecondBeat( MxNumberPercent( 15.2 ) );
	object.setLastBeat( MxNumberPercent( 15.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"55.6\" default-y=\"55.6\" relative-y=\"55.6\" font-family=\"XYZ\" font-style=\"normal\" color=\"#444342\" placement=\"below\" accelerate=\"yes\" beats=\"16.2\" second-beat=\"15.2\" last-beat=\"15.2\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 55.7 ) );
	object.setDefaultY( MxNumberTenths( 55.7 ) );
	object.setRelativeX( MxNumberTenths( 55.7 ) );
	object.setRelativeY( MxNumberTenths( 55.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 16.3 ) );
	object.setSecondBeat( MxNumberPercent( 15.3 ) );
	object.setLastBeat( MxNumberPercent( 15.3 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-y=\"55.7\" relative-y=\"55.7\" font-family=\"ABC\" font-style=\"italic\" color=\"#45464544\" placement=\"above\" accelerate=\"no\" beats=\"16.3\" second-beat=\"15.3\" last-beat=\"15.3\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 55.8 ) );
	object.setDefaultY( MxNumberTenths( 55.8 ) );
	object.setRelativeX( MxNumberTenths( 55.8 ) );
	object.setRelativeY( MxNumberTenths( 55.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 16.4 ) );
	object.setSecondBeat( MxNumberPercent( 15.4 ) );
	object.setLastBeat( MxNumberPercent( 15.4 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"55.8\" relative-x=\"55.8\" relative-y=\"55.8\" font-family=\"DEF\" font-size=\"large\" color=\"#484746\" placement=\"below\" beats=\"16.4\" second-beat=\"15.4\" last-beat=\"15.4\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 55.9 ) );
	object.setDefaultY( MxNumberTenths( 55.9 ) );
	object.setRelativeX( MxNumberTenths( 55.9 ) );
	object.setRelativeY( MxNumberTenths( 55.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 16.5 ) );
	object.setSecondBeat( MxNumberPercent( 15.5 ) );
	object.setLastBeat( MxNumberPercent( 15.5 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop relative-x=\"55.9\" relative-y=\"55.9\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#494A4948\" placement=\"above\" beats=\"16.5\" second-beat=\"15.5\" last-beat=\"15.5\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 56 ) );
	object.setDefaultY( MxNumberTenths( 56 ) );
	object.setRelativeX( MxNumberTenths( 56 ) );
	object.setRelativeY( MxNumberTenths( 56 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 16.6 ) );
	object.setSecondBeat( MxNumberPercent( 15.6 ) );
	object.setLastBeat( MxNumberPercent( 15.6 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"56\" default-y=\"56\" relative-x=\"56\" font-family=\"ABC\" font-size=\"large\" color=\"#4C4B4A\" placement=\"below\" start-note=\"below\" beats=\"16.6\" second-beat=\"15.6\" last-beat=\"15.6\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 56.1 ) );
	object.setDefaultY( MxNumberTenths( 56.1 ) );
	object.setRelativeX( MxNumberTenths( 56.1 ) );
	object.setRelativeY( MxNumberTenths( 56.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 16.7 ) );
	object.setSecondBeat( MxNumberPercent( 15.7 ) );
	object.setLastBeat( MxNumberPercent( 15.7 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-y=\"56.1\" font-size=\"1.1\" placement=\"above\" start-note=\"upper\" second-beat=\"15.7\" last-beat=\"15.7\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 56.2 ) );
	object.setDefaultY( MxNumberTenths( 56.2 ) );
	object.setRelativeX( MxNumberTenths( 56.2 ) );
	object.setRelativeY( MxNumberTenths( 56.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 16.8 ) );
	object.setSecondBeat( MxNumberPercent( 15.8 ) );
	object.setLastBeat( MxNumberPercent( 15.8 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"56.2\" font-size=\"large\" placement=\"below\" start-note=\"main\" second-beat=\"15.8\" last-beat=\"15.8\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 56.3 ) );
	object.setDefaultY( MxNumberTenths( 56.3 ) );
	object.setRelativeX( MxNumberTenths( 56.3 ) );
	object.setRelativeY( MxNumberTenths( 56.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 16.9 ) );
	object.setSecondBeat( MxNumberPercent( 15.9 ) );
	object.setLastBeat( MxNumberPercent( 15.9 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard font-size=\"1.1\" placement=\"above\" start-note=\"below\" second-beat=\"15.9\" last-beat=\"15.9\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 56.4 ) );
	object.setDefaultY( MxNumberTenths( 56.4 ) );
	object.setRelativeX( MxNumberTenths( 56.4 ) );
	object.setRelativeY( MxNumberTenths( 56.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 17 ) );
	object.setSecondBeat( MxNumberPercent( 16 ) );
	object.setLastBeat( MxNumberPercent( 16 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"56.4\" default-y=\"56.4\" relative-x=\"56.4\" relative-y=\"56.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" placement=\"below\" start-note=\"upper\" trill-step=\"whole\" last-beat=\"16\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 56.5 ) );
	object.setDefaultY( MxNumberTenths( 56.5 ) );
	object.setRelativeX( MxNumberTenths( 56.5 ) );
	object.setRelativeY( MxNumberTenths( 56.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 17.1 ) );
	object.setSecondBeat( MxNumberPercent( 16.1 ) );
	object.setLastBeat( MxNumberPercent( 16.1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-y=\"56.5\" relative-x=\"56.5\" relative-y=\"56.5\" font-style=\"italic\" font-weight=\"bold\" placement=\"above\" start-note=\"main\" trill-step=\"half\" last-beat=\"16.1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 56.6 ) );
	object.setDefaultY( MxNumberTenths( 56.6 ) );
	object.setRelativeX( MxNumberTenths( 56.6 ) );
	object.setRelativeY( MxNumberTenths( 56.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 17.2 ) );
	object.setSecondBeat( MxNumberPercent( 16.2 ) );
	object.setLastBeat( MxNumberPercent( 16.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"56.6\" relative-x=\"56.6\" relative-y=\"56.6\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\" start-note=\"below\" trill-step=\"unison\" last-beat=\"16.2\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 56.7 ) );
	object.setDefaultY( MxNumberTenths( 56.7 ) );
	object.setRelativeX( MxNumberTenths( 56.7 ) );
	object.setRelativeY( MxNumberTenths( 56.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 17.3 ) );
	object.setSecondBeat( MxNumberPercent( 16.3 ) );
	object.setLastBeat( MxNumberPercent( 16.3 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet relative-y=\"56.7\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" start-note=\"upper\" trill-step=\"whole\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 56.8 ) );
	object.setDefaultY( MxNumberTenths( 56.8 ) );
	object.setRelativeX( MxNumberTenths( 56.8 ) );
	object.setRelativeY( MxNumberTenths( 56.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 17.4 ) );
	object.setSecondBeat( MxNumberPercent( 16.4 ) );
	object.setLastBeat( MxNumberPercent( 16.4 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"56.8\" default-y=\"56.8\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 56.9 ) );
	object.setDefaultY( MxNumberTenths( 56.9 ) );
	object.setRelativeX( MxNumberTenths( 56.9 ) );
	object.setRelativeY( MxNumberTenths( 56.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 17.5 ) );
	object.setSecondBeat( MxNumberPercent( 16.5 ) );
	object.setLastBeat( MxNumberPercent( 16.5 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-y=\"56.9\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 57 ) );
	object.setDefaultY( MxNumberTenths( 57 ) );
	object.setRelativeX( MxNumberTenths( 57 ) );
	object.setRelativeY( MxNumberTenths( 57 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 17.6 ) );
	object.setSecondBeat( MxNumberPercent( 16.6 ) );
	object.setLastBeat( MxNumberPercent( 16.6 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"57\" relative-x=\"57\" font-family=\"DEF\" font-weight=\"normal\" color=\"#605F5E\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 57.1 ) );
	object.setDefaultY( MxNumberTenths( 57.1 ) );
	object.setRelativeX( MxNumberTenths( 57.1 ) );
	object.setRelativeY( MxNumberTenths( 57.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 17.7 ) );
	object.setSecondBeat( MxNumberPercent( 16.7 ) );
	object.setLastBeat( MxNumberPercent( 16.7 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart relative-x=\"57.1\" font-weight=\"bold\" color=\"#61626160\" trill-step=\"half\" two-note-turn=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 57.2 ) );
	object.setDefaultY( MxNumberTenths( 57.2 ) );
	object.setRelativeX( MxNumberTenths( 57.2 ) );
	object.setRelativeY( MxNumberTenths( 57.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 17.8 ) );
	object.setSecondBeat( MxNumberPercent( 16.8 ) );
	object.setLastBeat( MxNumberPercent( 16.8 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"57.2\" default-y=\"57.2\" relative-x=\"57.2\" relative-y=\"57.2\" font-size=\"large\" color=\"#646362\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 57.3 ) );
	object.setDefaultY( MxNumberTenths( 57.3 ) );
	object.setRelativeX( MxNumberTenths( 57.3 ) );
	object.setRelativeY( MxNumberTenths( 57.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 17.9 ) );
	object.setSecondBeat( MxNumberPercent( 16.9 ) );
	object.setLastBeat( MxNumberPercent( 16.9 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-y=\"57.3\" relative-y=\"57.3\" font-size=\"1.1\" color=\"#65666564\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 57.4 ) );
	object.setDefaultY( MxNumberTenths( 57.4 ) );
	object.setRelativeX( MxNumberTenths( 57.4 ) );
	object.setRelativeY( MxNumberTenths( 57.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 18 ) );
	object.setSecondBeat( MxNumberPercent( 17 ) );
	object.setLastBeat( MxNumberPercent( 17 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"57.4\" relative-y=\"57.4\" font-size=\"large\" color=\"#686766\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 57.5 ) );
	object.setDefaultY( MxNumberTenths( 57.5 ) );
	object.setRelativeX( MxNumberTenths( 57.5 ) );
	object.setRelativeY( MxNumberTenths( 57.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 18.1 ) );
	object.setSecondBeat( MxNumberPercent( 17.1 ) );
	object.setLastBeat( MxNumberPercent( 17.1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie relative-y=\"57.5\" font-size=\"1.1\" color=\"#696A6968\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 57.6 ) );
	object.setDefaultY( MxNumberTenths( 57.6 ) );
	object.setRelativeX( MxNumberTenths( 57.6 ) );
	object.setRelativeY( MxNumberTenths( 57.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 18.2 ) );
	object.setSecondBeat( MxNumberPercent( 17.2 ) );
	object.setLastBeat( MxNumberPercent( 17.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"57.6\" default-y=\"57.6\" relative-x=\"57.6\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#6C6B6A\" placement=\"below\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"18.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 57.7 ) );
	object.setDefaultY( MxNumberTenths( 57.7 ) );
	object.setRelativeX( MxNumberTenths( 57.7 ) );
	object.setRelativeY( MxNumberTenths( 57.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 18.3 ) );
	object.setSecondBeat( MxNumberPercent( 17.3 ) );
	object.setLastBeat( MxNumberPercent( 17.3 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-y=\"57.7\" relative-x=\"57.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#6D6E6D6C\" placement=\"above\" two-note-turn=\"half\" accelerate=\"no\" beats=\"18.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 57.8 ) );
	object.setDefaultY( MxNumberTenths( 57.8 ) );
	object.setRelativeX( MxNumberTenths( 57.8 ) );
	object.setRelativeY( MxNumberTenths( 57.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 18.4 ) );
	object.setSecondBeat( MxNumberPercent( 17.4 ) );
	object.setLastBeat( MxNumberPercent( 17.4 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"57.8\" relative-x=\"57.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#706F6E\" placement=\"below\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"18.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 57.9 ) );
	object.setDefaultY( MxNumberTenths( 57.9 ) );
	object.setRelativeX( MxNumberTenths( 57.9 ) );
	object.setRelativeY( MxNumberTenths( 57.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 18.5 ) );
	object.setSecondBeat( MxNumberPercent( 17.5 ) );
	object.setLastBeat( MxNumberPercent( 17.5 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop font-family=\"DEF\" font-style=\"italic\" placement=\"above\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"18.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 58 ) );
	object.setDefaultY( MxNumberTenths( 58 ) );
	object.setRelativeX( MxNumberTenths( 58 ) );
	object.setRelativeY( MxNumberTenths( 58 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 18.6 ) );
	object.setSecondBeat( MxNumberPercent( 17.6 ) );
	object.setLastBeat( MxNumberPercent( 17.6 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"58\" default-y=\"58\" relative-y=\"58\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" placement=\"below\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"18.6\" second-beat=\"17.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 58.1 ) );
	object.setDefaultY( MxNumberTenths( 58.1 ) );
	object.setRelativeX( MxNumberTenths( 58.1 ) );
	object.setRelativeY( MxNumberTenths( 58.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 18.7 ) );
	object.setSecondBeat( MxNumberPercent( 17.7 ) );
	object.setLastBeat( MxNumberPercent( 17.7 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-y=\"58.1\" relative-y=\"58.1\" font-style=\"italic\" font-weight=\"bold\" placement=\"above\" accelerate=\"no\" beats=\"18.7\" second-beat=\"17.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 58.2 ) );
	object.setDefaultY( MxNumberTenths( 58.2 ) );
	object.setRelativeX( MxNumberTenths( 58.2 ) );
	object.setRelativeY( MxNumberTenths( 58.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 18.8 ) );
	object.setSecondBeat( MxNumberPercent( 17.8 ) );
	object.setLastBeat( MxNumberPercent( 17.8 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"58.2\" relative-x=\"58.2\" relative-y=\"58.2\" font-weight=\"normal\" placement=\"below\" start-note=\"upper\" accelerate=\"yes\" beats=\"18.8\" second-beat=\"17.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 58.3 ) );
	object.setDefaultY( MxNumberTenths( 58.3 ) );
	object.setRelativeX( MxNumberTenths( 58.3 ) );
	object.setRelativeY( MxNumberTenths( 58.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 18.9 ) );
	object.setSecondBeat( MxNumberPercent( 17.9 ) );
	object.setLastBeat( MxNumberPercent( 17.9 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard relative-x=\"58.3\" relative-y=\"58.3\" font-weight=\"bold\" placement=\"above\" start-note=\"main\" accelerate=\"no\" beats=\"18.9\" second-beat=\"17.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 58.4 ) );
	object.setDefaultY( MxNumberTenths( 58.4 ) );
	object.setRelativeX( MxNumberTenths( 58.4 ) );
	object.setRelativeY( MxNumberTenths( 58.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 19 ) );
	object.setSecondBeat( MxNumberPercent( 18 ) );
	object.setLastBeat( MxNumberPercent( 18 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"58.4\" default-y=\"58.4\" relative-x=\"58.4\" font-weight=\"normal\" placement=\"below\" start-note=\"below\" accelerate=\"yes\" beats=\"19\" second-beat=\"18\" last-beat=\"18\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 58.5 ) );
	object.setDefaultY( MxNumberTenths( 58.5 ) );
	object.setRelativeX( MxNumberTenths( 58.5 ) );
	object.setRelativeY( MxNumberTenths( 58.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 19.1 ) );
	object.setSecondBeat( MxNumberPercent( 18.1 ) );
	object.setLastBeat( MxNumberPercent( 18.1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-y=\"58.5\" font-weight=\"bold\" placement=\"above\" start-note=\"upper\" accelerate=\"no\" beats=\"19.1\" second-beat=\"18.1\" last-beat=\"18.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 58.6 ) );
	object.setDefaultY( MxNumberTenths( 58.6 ) );
	object.setRelativeX( MxNumberTenths( 58.6 ) );
	object.setRelativeY( MxNumberTenths( 58.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 19.2 ) );
	object.setSecondBeat( MxNumberPercent( 18.2 ) );
	object.setLastBeat( MxNumberPercent( 18.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"58.6\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" start-note=\"main\" beats=\"19.2\" second-beat=\"18.2\" last-beat=\"18.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 58.7 ) );
	object.setDefaultY( MxNumberTenths( 58.7 ) );
	object.setRelativeX( MxNumberTenths( 58.7 ) );
	object.setRelativeY( MxNumberTenths( 58.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 19.3 ) );
	object.setSecondBeat( MxNumberPercent( 18.3 ) );
	object.setLastBeat( MxNumberPercent( 18.3 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" start-note=\"below\" beats=\"19.3\" second-beat=\"18.3\" last-beat=\"18.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 58.8 ) );
	object.setDefaultY( MxNumberTenths( 58.8 ) );
	object.setRelativeX( MxNumberTenths( 58.8 ) );
	object.setRelativeY( MxNumberTenths( 58.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 19.4 ) );
	object.setSecondBeat( MxNumberPercent( 18.4 ) );
	object.setLastBeat( MxNumberPercent( 18.4 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"58.8\" default-y=\"58.8\" relative-x=\"58.8\" relative-y=\"58.8\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#848382\" start-note=\"upper\" trill-step=\"whole\" beats=\"19.4\" second-beat=\"18.4\" last-beat=\"18.4\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 58.9 ) );
	object.setDefaultY( MxNumberTenths( 58.9 ) );
	object.setRelativeX( MxNumberTenths( 58.9 ) );
	object.setRelativeY( MxNumberTenths( 58.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 19.5 ) );
	object.setSecondBeat( MxNumberPercent( 18.5 ) );
	object.setLastBeat( MxNumberPercent( 18.5 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-y=\"58.9\" relative-x=\"58.9\" relative-y=\"58.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#85868584\" start-note=\"main\" trill-step=\"half\" beats=\"19.5\" second-beat=\"18.5\" last-beat=\"18.5\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 59 ) );
	object.setDefaultY( MxNumberTenths( 59 ) );
	object.setRelativeX( MxNumberTenths( 59 ) );
	object.setRelativeY( MxNumberTenths( 59 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 19.6 ) );
	object.setSecondBeat( MxNumberPercent( 18.6 ) );
	object.setLastBeat( MxNumberPercent( 18.6 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"59\" relative-x=\"59\" relative-y=\"59\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#888786\" start-note=\"below\" trill-step=\"unison\" beats=\"19.6\" second-beat=\"18.6\" last-beat=\"18.6\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 59.1 ) );
	object.setDefaultY( MxNumberTenths( 59.1 ) );
	object.setRelativeX( MxNumberTenths( 59.1 ) );
	object.setRelativeY( MxNumberTenths( 59.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 19.7 ) );
	object.setSecondBeat( MxNumberPercent( 18.7 ) );
	object.setLastBeat( MxNumberPercent( 18.7 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart relative-y=\"59.1\" font-style=\"italic\" font-size=\"1.1\" color=\"#898A8988\" start-note=\"upper\" trill-step=\"whole\" second-beat=\"18.7\" last-beat=\"18.7\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 59.2 ) );
	object.setDefaultY( MxNumberTenths( 59.2 ) );
	object.setRelativeX( MxNumberTenths( 59.2 ) );
	object.setRelativeY( MxNumberTenths( 59.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 19.8 ) );
	object.setSecondBeat( MxNumberPercent( 18.8 ) );
	object.setLastBeat( MxNumberPercent( 18.8 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"59.2\" default-y=\"59.2\" font-style=\"normal\" font-size=\"large\" color=\"#8C8B8A\" start-note=\"main\" trill-step=\"half\" second-beat=\"18.8\" last-beat=\"18.8\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 59.3 ) );
	object.setDefaultY( MxNumberTenths( 59.3 ) );
	object.setRelativeX( MxNumberTenths( 59.3 ) );
	object.setRelativeY( MxNumberTenths( 59.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 19.9 ) );
	object.setSecondBeat( MxNumberPercent( 18.9 ) );
	object.setLastBeat( MxNumberPercent( 18.9 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-y=\"59.3\" font-style=\"italic\" color=\"#8D8E8D8C\" trill-step=\"unison\" second-beat=\"18.9\" last-beat=\"18.9\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 59.4 ) );
	object.setDefaultY( MxNumberTenths( 59.4 ) );
	object.setRelativeX( MxNumberTenths( 59.4 ) );
	object.setRelativeY( MxNumberTenths( 59.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 20 ) );
	object.setSecondBeat( MxNumberPercent( 19 ) );
	object.setLastBeat( MxNumberPercent( 19 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"59.4\" relative-x=\"59.4\" color=\"#908F8E\" trill-step=\"whole\" two-note-turn=\"whole\" second-beat=\"19\" last-beat=\"19\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 59.5 ) );
	object.setDefaultY( MxNumberTenths( 59.5 ) );
	object.setRelativeX( MxNumberTenths( 59.5 ) );
	object.setRelativeY( MxNumberTenths( 59.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 20.1 ) );
	object.setSecondBeat( MxNumberPercent( 19.1 ) );
	object.setLastBeat( MxNumberPercent( 19.1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie relative-x=\"59.5\" color=\"#91929190\" trill-step=\"half\" two-note-turn=\"half\" second-beat=\"19.1\" last-beat=\"19.1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 59.6 ) );
	object.setDefaultY( MxNumberTenths( 59.6 ) );
	object.setRelativeX( MxNumberTenths( 59.6 ) );
	object.setRelativeY( MxNumberTenths( 59.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 20.2 ) );
	object.setSecondBeat( MxNumberPercent( 19.2 ) );
	object.setLastBeat( MxNumberPercent( 19.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"59.6\" default-y=\"59.6\" relative-x=\"59.6\" relative-y=\"59.6\" font-family=\"ABC\" font-weight=\"normal\" color=\"#949392\" placement=\"below\" trill-step=\"unison\" two-note-turn=\"none\" last-beat=\"19.2\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 59.7 ) );
	object.setDefaultY( MxNumberTenths( 59.7 ) );
	object.setRelativeX( MxNumberTenths( 59.7 ) );
	object.setRelativeY( MxNumberTenths( 59.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 20.3 ) );
	object.setSecondBeat( MxNumberPercent( 19.3 ) );
	object.setLastBeat( MxNumberPercent( 19.3 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-y=\"59.7\" relative-y=\"59.7\" font-family=\"DEF\" font-weight=\"bold\" placement=\"above\" trill-step=\"whole\" two-note-turn=\"whole\" last-beat=\"19.3\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 59.8 ) );
	object.setDefaultY( MxNumberTenths( 59.8 ) );
	object.setRelativeX( MxNumberTenths( 59.8 ) );
	object.setRelativeY( MxNumberTenths( 59.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 20.4 ) );
	object.setSecondBeat( MxNumberPercent( 19.4 ) );
	object.setLastBeat( MxNumberPercent( 19.4 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"59.8\" relative-y=\"59.8\" font-family=\"XYZ\" font-weight=\"normal\" placement=\"below\" trill-step=\"half\" two-note-turn=\"half\" last-beat=\"19.4\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 59.9 ) );
	object.setDefaultY( MxNumberTenths( 59.9 ) );
	object.setRelativeX( MxNumberTenths( 59.9 ) );
	object.setRelativeY( MxNumberTenths( 59.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 20.5 ) );
	object.setSecondBeat( MxNumberPercent( 19.5 ) );
	object.setLastBeat( MxNumberPercent( 19.5 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop relative-y=\"59.9\" font-family=\"ABC\" font-weight=\"bold\" placement=\"above\" trill-step=\"unison\" two-note-turn=\"none\" last-beat=\"19.5\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 60 ) );
	object.setDefaultY( MxNumberTenths( 60 ) );
	object.setRelativeX( MxNumberTenths( 60 ) );
	object.setRelativeY( MxNumberTenths( 60 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 20.6 ) );
	object.setSecondBeat( MxNumberPercent( 19.6 ) );
	object.setLastBeat( MxNumberPercent( 19.6 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"60\" default-y=\"60\" relative-x=\"60\" font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" placement=\"below\" two-note-turn=\"whole\" accelerate=\"yes\" last-beat=\"19.6\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 60.1 ) );
	object.setDefaultY( MxNumberTenths( 60.1 ) );
	object.setRelativeX( MxNumberTenths( 60.1 ) );
	object.setRelativeY( MxNumberTenths( 60.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 20.7 ) );
	object.setSecondBeat( MxNumberPercent( 19.7 ) );
	object.setLastBeat( MxNumberPercent( 19.7 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-y=\"60.1\" relative-x=\"60.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" placement=\"above\" two-note-turn=\"half\" accelerate=\"no\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 60.2 ) );
	object.setDefaultY( MxNumberTenths( 60.2 ) );
	object.setRelativeX( MxNumberTenths( 60.2 ) );
	object.setRelativeY( MxNumberTenths( 60.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 20.8 ) );
	object.setSecondBeat( MxNumberPercent( 19.8 ) );
	object.setLastBeat( MxNumberPercent( 19.8 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"60.2\" relative-x=\"60.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" placement=\"below\" two-note-turn=\"none\" accelerate=\"yes\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 60.3 ) );
	object.setDefaultY( MxNumberTenths( 60.3 ) );
	object.setRelativeX( MxNumberTenths( 60.3 ) );
	object.setRelativeY( MxNumberTenths( 60.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 20.9 ) );
	object.setSecondBeat( MxNumberPercent( 19.9 ) );
	object.setLastBeat( MxNumberPercent( 19.9 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" placement=\"above\" two-note-turn=\"whole\" accelerate=\"no\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 60.4 ) );
	object.setDefaultY( MxNumberTenths( 60.4 ) );
	object.setRelativeX( MxNumberTenths( 60.4 ) );
	object.setRelativeY( MxNumberTenths( 60.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 21 ) );
	object.setSecondBeat( MxNumberPercent( 20 ) );
	object.setLastBeat( MxNumberPercent( 20 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"60.4\" default-y=\"60.4\" relative-y=\"60.4\" font-style=\"normal\" font-size=\"large\" placement=\"below\" start-note=\"main\" two-note-turn=\"half\" accelerate=\"yes\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( true );
	object.setDefaultX( MxNumberTenths( 60.5 ) );
	object.setDefaultY( MxNumberTenths( 60.5 ) );
	object.setRelativeX( MxNumberTenths( 60.5 ) );
	object.setRelativeY( MxNumberTenths( 60.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 21.1 ) );
	object.setSecondBeat( MxNumberPercent( 20.1 ) );
	object.setLastBeat( MxNumberPercent( 20.1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-y=\"60.5\" relative-y=\"60.5\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\" start-note=\"below\" two-note-turn=\"none\" accelerate=\"no\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( true );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 60.6 ) );
	object.setDefaultY( MxNumberTenths( 60.6 ) );
	object.setRelativeX( MxNumberTenths( 60.6 ) );
	object.setRelativeY( MxNumberTenths( 60.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 21.2 ) );
	object.setSecondBeat( MxNumberPercent( 20.2 ) );
	object.setLastBeat( MxNumberPercent( 20.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart default-x=\"60.6\" relative-x=\"60.6\" relative-y=\"60.6\" font-family=\"DEF\" font-size=\"large\" color=\"#A8A7A6\" start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"21.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 60.7 ) );
	object.setDefaultY( MxNumberTenths( 60.7 ) );
	object.setRelativeX( MxNumberTenths( 60.7 ) );
	object.setRelativeY( MxNumberTenths( 60.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 21.3 ) );
	object.setSecondBeat( MxNumberPercent( 20.3 ) );
	object.setLastBeat( MxNumberPercent( 20.3 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet relative-x=\"60.7\" relative-y=\"60.7\" font-family=\"XYZ\" color=\"#A9AAA9A8\" start-note=\"main\" accelerate=\"no\" beats=\"21.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 60.8 ) );
	object.setDefaultY( MxNumberTenths( 60.8 ) );
	object.setRelativeX( MxNumberTenths( 60.8 ) );
	object.setRelativeY( MxNumberTenths( 60.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 21.4 ) );
	object.setSecondBeat( MxNumberPercent( 20.4 ) );
	object.setLastBeat( MxNumberPercent( 20.4 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-x=\"60.8\" default-y=\"60.8\" relative-x=\"60.8\" font-family=\"ABC\" color=\"#ACABAA\" start-note=\"below\" accelerate=\"yes\" beats=\"21.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 60.9 ) );
	object.setDefaultY( MxNumberTenths( 60.9 ) );
	object.setRelativeX( MxNumberTenths( 60.9 ) );
	object.setRelativeY( MxNumberTenths( 60.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 21.5 ) );
	object.setSecondBeat( MxNumberPercent( 20.5 ) );
	object.setLastBeat( MxNumberPercent( 20.5 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-y=\"60.9\" font-family=\"DEF\" color=\"#ADAEADAC\" start-note=\"upper\" accelerate=\"no\" beats=\"21.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 61 ) );
	object.setDefaultY( MxNumberTenths( 61 ) );
	object.setRelativeX( MxNumberTenths( 61 ) );
	object.setRelativeY( MxNumberTenths( 61 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 21.6 ) );
	object.setSecondBeat( MxNumberPercent( 20.6 ) );
	object.setLastBeat( MxNumberPercent( 20.6 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie default-x=\"61\" font-family=\"XYZ\" color=\"#B0AFAE\" start-note=\"main\" accelerate=\"yes\" beats=\"21.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 61.1 ) );
	object.setDefaultY( MxNumberTenths( 61.1 ) );
	object.setRelativeX( MxNumberTenths( 61.1 ) );
	object.setRelativeY( MxNumberTenths( 61.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 21.7 ) );
	object.setSecondBeat( MxNumberPercent( 20.7 ) );
	object.setLastBeat( MxNumberPercent( 20.7 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart color=\"#B1B2B1B0\" start-note=\"below\" accelerate=\"no\" beats=\"21.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 61.2 ) );
	object.setDefaultY( MxNumberTenths( 61.2 ) );
	object.setRelativeX( MxNumberTenths( 61.2 ) );
	object.setRelativeY( MxNumberTenths( 61.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 21.8 ) );
	object.setSecondBeat( MxNumberPercent( 20.8 ) );
	object.setLastBeat( MxNumberPercent( 20.8 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet default-x=\"61.2\" default-y=\"61.2\" relative-x=\"61.2\" relative-y=\"61.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#B4B3B2\" start-note=\"upper\" trill-step=\"whole\" accelerate=\"yes\" beats=\"21.8\" second-beat=\"20.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 61.3 ) );
	object.setDefaultY( MxNumberTenths( 61.3 ) );
	object.setRelativeX( MxNumberTenths( 61.3 ) );
	object.setRelativeY( MxNumberTenths( 61.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 21.9 ) );
	object.setSecondBeat( MxNumberPercent( 20.9 ) );
	object.setLastBeat( MxNumberPercent( 20.9 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard default-y=\"61.3\" relative-x=\"61.3\" relative-y=\"61.3\" font-style=\"italic\" font-weight=\"bold\" color=\"#B5B6B5B4\" start-note=\"main\" trill-step=\"half\" accelerate=\"no\" beats=\"21.9\" second-beat=\"20.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( true );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 61.4 ) );
	object.setDefaultY( MxNumberTenths( 61.4 ) );
	object.setRelativeX( MxNumberTenths( 61.4 ) );
	object.setRelativeY( MxNumberTenths( 61.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 22 ) );
	object.setSecondBeat( MxNumberPercent( 21 ) );
	object.setLastBeat( MxNumberPercent( 21 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop default-x=\"61.4\" relative-x=\"61.4\" relative-y=\"61.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#B8B7B6\" start-note=\"below\" trill-step=\"unison\" beats=\"22\" second-beat=\"21\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( true );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsSecondBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 61.5 ) );
	object.setDefaultY( MxNumberTenths( 61.5 ) );
	object.setRelativeX( MxNumberTenths( 61.5 ) );
	object.setRelativeY( MxNumberTenths( 61.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 22.1 ) );
	object.setSecondBeat( MxNumberPercent( 21.1 ) );
	object.setLastBeat( MxNumberPercent( 21.1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<charlie relative-y=\"61.5\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" trill-step=\"whole\" beats=\"22.1\" second-beat=\"21.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptyHorizontalTurn )
{
	MxCxEmptyHorizontalTurn object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsStartNotePresent( false );
	object.setIsTrillStepPresent( false );
	object.setIsTwoNoteTurnPresent( false );
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsSecondBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setIsSlashPresent( false );
	object.setDefaultX( MxNumberTenths( 61.6 ) );
	object.setDefaultY( MxNumberTenths( 61.6 ) );
	object.setRelativeX( MxNumberTenths( 61.6 ) );
	object.setRelativeY( MxNumberTenths( 61.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 22.2 ) );
	object.setSecondBeat( MxNumberPercent( 21.2 ) );
	object.setLastBeat( MxNumberPercent( 21.2 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<booksmart/>";
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


