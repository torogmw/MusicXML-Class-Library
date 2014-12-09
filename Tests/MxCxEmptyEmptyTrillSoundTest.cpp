/** *******************************************************
  * 
  * MxCxEmptyEmptyTrillSoundTest.cpp
  * Created: 2014-12-03 16:31:28
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyEmptyTrillSound.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxEnumStartNote( lexicon::enums::StartNote::upper ) ).toString();
	std::string actual = object.getStartNote().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) ).toString();
	std::string actual = object.getTrillStep().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) ).toString();
	std::string actual = object.getTwoNoteTurn().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getAccelerate().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxNumberTrillBeats( 4 ) ).toString();
	std::string actual = object.getBeats().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues15, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxNumberPercent( 0.25 ) ).toString();
	std::string actual = object.getSecondBeat().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues16, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = ( MxNumberPercent( 0.75 ) ).toString();
	std::string actual = object.getLastBeat().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = "MxCxEmptyEmptyTrillSound";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = "empty-trill-sound";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	std::string expected = "The empty-trill-sound type represents an empty element with print-style, placement, and trill-sound attributes.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxCxEmptyEmptyTrillSound )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxCxEmptyEmptyTrillSound )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxCxEmptyEmptyTrillSound )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxCxEmptyEmptyTrillSound )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily4, MxCxEmptyEmptyTrillSound )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle5, MxCxEmptyEmptyTrillSound )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize6, MxCxEmptyEmptyTrillSound )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight7, MxCxEmptyEmptyTrillSound )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxCxEmptyEmptyTrillSound )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement9, MxCxEmptyEmptyTrillSound )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setPlacement( value1 );
	MxEnumAboveBelow expected = value1;
	MxEnumAboveBelow actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
	object.setPlacement( value2 );
	expected = value2;
	actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
}
TEST( setStartNote10, MxCxEmptyEmptyTrillSound )
{
	MxEnumStartNote value1( lexicon::enums::StartNote::below );
	MxEnumStartNote value2( lexicon::enums::StartNote::main );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setStartNote( value1 );
	MxEnumStartNote expected = value1;
	MxEnumStartNote actual = object.getStartNote();
	CHECK_EQUAL( expected, actual )
	object.setStartNote( value2 );
	expected = value2;
	actual = object.getStartNote();
	CHECK_EQUAL( expected, actual )
}
TEST( setTrillStep11, MxCxEmptyEmptyTrillSound )
{
	MxEnumTrillStep value1( lexicon::enums::TrillStep::unison );
	MxEnumTrillStep value2( lexicon::enums::TrillStep::half );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setTrillStep( value1 );
	MxEnumTrillStep expected = value1;
	MxEnumTrillStep actual = object.getTrillStep();
	CHECK_EQUAL( expected, actual )
	object.setTrillStep( value2 );
	expected = value2;
	actual = object.getTrillStep();
	CHECK_EQUAL( expected, actual )
}
TEST( setTwoNoteTurn12, MxCxEmptyEmptyTrillSound )
{
	MxEnumTwoNoteTurn value1( lexicon::enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn value2( lexicon::enums::TwoNoteTurn::half );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setTwoNoteTurn( value1 );
	MxEnumTwoNoteTurn expected = value1;
	MxEnumTwoNoteTurn actual = object.getTwoNoteTurn();
	CHECK_EQUAL( expected, actual )
	object.setTwoNoteTurn( value2 );
	expected = value2;
	actual = object.getTwoNoteTurn();
	CHECK_EQUAL( expected, actual )
}
TEST( setAccelerate13, MxCxEmptyEmptyTrillSound )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setAccelerate( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
	object.setAccelerate( value2 );
	expected = value2;
	actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
}
TEST( setBeats14, MxCxEmptyEmptyTrillSound )
{
	MxNumberTrillBeats value1( 2.1 );
	MxNumberTrillBeats value2( 2.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setBeats( value1 );
	MxNumberTrillBeats expected = value1;
	MxNumberTrillBeats actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
	object.setBeats( value2 );
	expected = value2;
	actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
}
TEST( setSecondBeat15, MxCxEmptyEmptyTrillSound )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
	object.setSecondBeat( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getSecondBeat();
	CHECK_EQUAL( expected, actual )
	object.setSecondBeat( value2 );
	expected = value2;
	actual = object.getSecondBeat();
	CHECK_EQUAL( expected, actual )
}
TEST( setLastBeat16, MxCxEmptyEmptyTrillSound )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyEmptyTrillSound object;
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

TEST( getIsDefaultXRequired0, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired4, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired5, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired6, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired7, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired9, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStartNoteRequired10, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsStartNoteRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepRequired11, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsTrillStepRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnRequired12, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsTwoNoteTurnRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAccelerateRequired13, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsAccelerateRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsRequired14, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsBeatsRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatRequired15, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsSecondBeatRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatRequired16, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsLastBeatRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsDefaultYPresent1, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsRelativeXPresent2, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsRelativeYPresent3, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsFontFamilyPresent4, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsFontStylePresent5, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsFontSizePresent6, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsFontWeightPresent7, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsColorPresent8, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsPlacementPresent9, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsStartNotePresent10, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsTrillStepPresent11, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsTwoNoteTurnPresent12, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsAcceleratePresent13, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsBeatsPresent14, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsSecondBeatPresent15, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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
TEST( getIsLastBeatPresent16, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
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

TEST( getIsDefaultXDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStartNoteDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = true;
	bool actual = object.getIsStartNoteDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTrillStepDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = true;
	bool actual = object.getIsTrillStepDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTwoNoteTurnDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = true;
	bool actual = object.getIsTwoNoteTurnDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAccelerateDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = true;
	bool actual = object.getIsAccelerateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = true;
	bool actual = object.getIsBeatsDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSecondBeatDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = true;
	bool actual = object.getIsSecondBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatDefaultDefined, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	bool expected = true;
	bool actual = object.getIsLastBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getStartNoteDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxEnumStartNote expected( lexicon::enums::StartNote::upper );
	MxEnumStartNote actual = object.getStartNoteDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTrillStepDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxEnumTrillStep expected( lexicon::enums::TrillStep::whole );
	MxEnumTrillStep actual = object.getTrillStepDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTwoNoteTurnDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxEnumTwoNoteTurn expected( lexicon::enums::TwoNoteTurn::none );
	MxEnumTwoNoteTurn actual = object.getTwoNoteTurnDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getAccelerateDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getAccelerateDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBeatsDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxNumberTrillBeats expected( 4 );
	MxNumberTrillBeats actual = object.getBeatsDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSecondBeatDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxNumberPercent expected( 0.25 );
	MxNumberPercent actual = object.getSecondBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLastBeatDefaultValue, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object;
	MxNumberPercent expected( 0.75 );
	MxNumberPercent actual = object.getLastBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 41.5 ) );
	object.setDefaultY( MxNumberTenths( 41.5 ) );
	object.setRelativeX( MxNumberTenths( 41.5 ) );
	object.setRelativeY( MxNumberTenths( 41.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#292A2928" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.1 ) );
	object.setSecondBeat( MxNumberPercent( 1.1 ) );
	object.setLastBeat( MxNumberPercent( 1.1 ) );
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
	expected = "<booksmart default-x=\"41.5\" default-y=\"41.5\" relative-x=\"41.5\" relative-y=\"41.5\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#292A2928\" placement=\"above\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"2.1\" second-beat=\"1.1\" last-beat=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 41.6 ) );
	object.setDefaultY( MxNumberTenths( 41.6 ) );
	object.setRelativeX( MxNumberTenths( 41.6 ) );
	object.setRelativeY( MxNumberTenths( 41.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.2 ) );
	object.setSecondBeat( MxNumberPercent( 1.2 ) );
	object.setLastBeat( MxNumberPercent( 1.2 ) );
	expected = "<quiet default-y=\"41.6\" relative-x=\"41.6\" relative-y=\"41.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#2C2B2A\" placement=\"below\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"2.2\" second-beat=\"1.2\" last-beat=\"1.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 41.7 ) );
	object.setDefaultY( MxNumberTenths( 41.7 ) );
	object.setRelativeX( MxNumberTenths( 41.7 ) );
	object.setRelativeY( MxNumberTenths( 41.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.3 ) );
	object.setSecondBeat( MxNumberPercent( 1.3 ) );
	object.setLastBeat( MxNumberPercent( 1.3 ) );
	expected = "<musicxmlishard default-x=\"41.7\" relative-x=\"41.7\" relative-y=\"41.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#2D2E2D2C\" placement=\"above\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"2.3\" second-beat=\"1.3\" last-beat=\"1.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 41.8 ) );
	object.setDefaultY( MxNumberTenths( 41.8 ) );
	object.setRelativeX( MxNumberTenths( 41.8 ) );
	object.setRelativeY( MxNumberTenths( 41.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#302F2E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.4 ) );
	object.setSecondBeat( MxNumberPercent( 1.4 ) );
	object.setLastBeat( MxNumberPercent( 1.4 ) );
	expected = "<bishop relative-y=\"41.8\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#302F2E\" placement=\"below\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"2.4\" second-beat=\"1.4\" last-beat=\"1.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 41.9 ) );
	object.setDefaultY( MxNumberTenths( 41.9 ) );
	object.setRelativeX( MxNumberTenths( 41.9 ) );
	object.setRelativeY( MxNumberTenths( 41.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#31323130" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.5 ) );
	object.setSecondBeat( MxNumberPercent( 1.5 ) );
	object.setLastBeat( MxNumberPercent( 1.5 ) );
	expected = "<charlie default-x=\"41.9\" default-y=\"41.9\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#31323130\" placement=\"above\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\" beats=\"2.5\" second-beat=\"1.5\" last-beat=\"1.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 42 ) );
	object.setDefaultY( MxNumberTenths( 42 ) );
	object.setRelativeX( MxNumberTenths( 42 ) );
	object.setRelativeY( MxNumberTenths( 42 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#343332" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.6 ) );
	object.setSecondBeat( MxNumberPercent( 1.6 ) );
	object.setLastBeat( MxNumberPercent( 1.6 ) );
	expected = "<booksmart default-y=\"42\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#343332\" placement=\"below\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"2.6\" second-beat=\"1.6\" last-beat=\"1.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 42.1 ) );
	object.setDefaultY( MxNumberTenths( 42.1 ) );
	object.setRelativeX( MxNumberTenths( 42.1 ) );
	object.setRelativeY( MxNumberTenths( 42.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#35363534" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.7 ) );
	object.setSecondBeat( MxNumberPercent( 1.7 ) );
	object.setLastBeat( MxNumberPercent( 1.7 ) );
	expected = "<quiet default-x=\"42.1\" relative-x=\"42.1\" font-size=\"1.1\" font-weight=\"bold\" color=\"#35363534\" placement=\"above\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"2.7\" second-beat=\"1.7\" last-beat=\"1.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 42.2 ) );
	object.setDefaultY( MxNumberTenths( 42.2 ) );
	object.setRelativeX( MxNumberTenths( 42.2 ) );
	object.setRelativeY( MxNumberTenths( 42.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#383736" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.8 ) );
	object.setSecondBeat( MxNumberPercent( 1.8 ) );
	object.setLastBeat( MxNumberPercent( 1.8 ) );
	expected = "<musicxmlishard relative-x=\"42.2\" font-weight=\"normal\" color=\"#383736\" placement=\"below\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"2.8\" second-beat=\"1.8\" last-beat=\"1.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 42.3 ) );
	object.setDefaultY( MxNumberTenths( 42.3 ) );
	object.setRelativeX( MxNumberTenths( 42.3 ) );
	object.setRelativeY( MxNumberTenths( 42.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.9 ) );
	object.setSecondBeat( MxNumberPercent( 1.9 ) );
	object.setLastBeat( MxNumberPercent( 1.9 ) );
	expected = "<bishop default-x=\"42.3\" default-y=\"42.3\" relative-x=\"42.3\" relative-y=\"42.3\" color=\"#393A3938\" placement=\"above\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"2.9\" second-beat=\"1.9\" last-beat=\"1.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 42.4 ) );
	object.setDefaultY( MxNumberTenths( 42.4 ) );
	object.setRelativeX( MxNumberTenths( 42.4 ) );
	object.setRelativeY( MxNumberTenths( 42.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3 ) );
	object.setSecondBeat( MxNumberPercent( 2 ) );
	object.setLastBeat( MxNumberPercent( 2 ) );
	expected = "<charlie default-y=\"42.4\" relative-y=\"42.4\" placement=\"below\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"3\" second-beat=\"2\" last-beat=\"2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 42.5 ) );
	object.setDefaultY( MxNumberTenths( 42.5 ) );
	object.setRelativeX( MxNumberTenths( 42.5 ) );
	object.setRelativeY( MxNumberTenths( 42.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.1 ) );
	object.setSecondBeat( MxNumberPercent( 2.1 ) );
	object.setLastBeat( MxNumberPercent( 2.1 ) );
	expected = "<booksmart default-x=\"42.5\" relative-y=\"42.5\" font-family=\"ABC\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\" beats=\"3.1\" second-beat=\"2.1\" last-beat=\"2.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 42.6 ) );
	object.setDefaultY( MxNumberTenths( 42.6 ) );
	object.setRelativeX( MxNumberTenths( 42.6 ) );
	object.setRelativeY( MxNumberTenths( 42.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#403F3E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.2 ) );
	object.setSecondBeat( MxNumberPercent( 2.2 ) );
	object.setLastBeat( MxNumberPercent( 2.2 ) );
	expected = "<quiet relative-y=\"42.6\" font-family=\"DEF\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"3.2\" second-beat=\"2.2\" last-beat=\"2.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 42.7 ) );
	object.setDefaultY( MxNumberTenths( 42.7 ) );
	object.setRelativeX( MxNumberTenths( 42.7 ) );
	object.setRelativeY( MxNumberTenths( 42.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#41424140" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.3 ) );
	object.setSecondBeat( MxNumberPercent( 2.3 ) );
	object.setLastBeat( MxNumberPercent( 2.3 ) );
	expected = "<musicxmlishard default-x=\"42.7\" default-y=\"42.7\" relative-x=\"42.7\" font-family=\"XYZ\" font-style=\"italic\" two-note-turn=\"half\" accelerate=\"no\" beats=\"3.3\" second-beat=\"2.3\" last-beat=\"2.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 42.8 ) );
	object.setDefaultY( MxNumberTenths( 42.8 ) );
	object.setRelativeX( MxNumberTenths( 42.8 ) );
	object.setRelativeY( MxNumberTenths( 42.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#444342" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.4 ) );
	object.setSecondBeat( MxNumberPercent( 2.4 ) );
	object.setLastBeat( MxNumberPercent( 2.4 ) );
	expected = "<bishop default-y=\"42.8\" relative-x=\"42.8\" font-family=\"ABC\" font-style=\"normal\" accelerate=\"yes\" beats=\"3.4\" second-beat=\"2.4\" last-beat=\"2.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 42.9 ) );
	object.setDefaultY( MxNumberTenths( 42.9 ) );
	object.setRelativeX( MxNumberTenths( 42.9 ) );
	object.setRelativeY( MxNumberTenths( 42.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#45464544" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.5 ) );
	object.setSecondBeat( MxNumberPercent( 2.5 ) );
	object.setLastBeat( MxNumberPercent( 2.5 ) );
	expected = "<charlie default-x=\"42.9\" relative-x=\"42.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" beats=\"3.5\" second-beat=\"2.5\" last-beat=\"2.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 43 ) );
	object.setDefaultY( MxNumberTenths( 43 ) );
	object.setRelativeX( MxNumberTenths( 43 ) );
	object.setRelativeY( MxNumberTenths( 43 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#484746" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.6 ) );
	object.setSecondBeat( MxNumberPercent( 2.6 ) );
	object.setLastBeat( MxNumberPercent( 2.6 ) );
	expected = "<booksmart font-style=\"normal\" font-size=\"large\" second-beat=\"2.6\" last-beat=\"2.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 43.1 ) );
	object.setDefaultY( MxNumberTenths( 43.1 ) );
	object.setRelativeX( MxNumberTenths( 43.1 ) );
	object.setRelativeY( MxNumberTenths( 43.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#494A4948" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.7 ) );
	object.setSecondBeat( MxNumberPercent( 2.7 ) );
	object.setLastBeat( MxNumberPercent( 2.7 ) );
	expected = "<quiet default-x=\"43.1\" default-y=\"43.1\" relative-y=\"43.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" last-beat=\"2.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 43.2 ) );
	object.setDefaultY( MxNumberTenths( 43.2 ) );
	object.setRelativeX( MxNumberTenths( 43.2 ) );
	object.setRelativeY( MxNumberTenths( 43.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.8 ) );
	object.setSecondBeat( MxNumberPercent( 2.8 ) );
	object.setLastBeat( MxNumberPercent( 2.8 ) );
	expected = "<musicxmlishard default-y=\"43.2\" relative-y=\"43.2\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 43.3 ) );
	object.setDefaultY( MxNumberTenths( 43.3 ) );
	object.setRelativeX( MxNumberTenths( 43.3 ) );
	object.setRelativeY( MxNumberTenths( 43.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.9 ) );
	object.setSecondBeat( MxNumberPercent( 2.9 ) );
	object.setLastBeat( MxNumberPercent( 2.9 ) );
	expected = "<bishop default-x=\"43.3\" relative-x=\"43.3\" relative-y=\"43.3\" font-size=\"1.1\" font-weight=\"bold\" color=\"#4D4E4D4C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 43.4 ) );
	object.setDefaultY( MxNumberTenths( 43.4 ) );
	object.setRelativeX( MxNumberTenths( 43.4 ) );
	object.setRelativeY( MxNumberTenths( 43.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#504F4E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4 ) );
	object.setSecondBeat( MxNumberPercent( 3 ) );
	object.setLastBeat( MxNumberPercent( 3 ) );
	expected = "<charlie relative-x=\"43.4\" relative-y=\"43.4\" font-size=\"large\" font-weight=\"normal\" color=\"#504F4E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 43.5 ) );
	object.setDefaultY( MxNumberTenths( 43.5 ) );
	object.setRelativeX( MxNumberTenths( 43.5 ) );
	object.setRelativeY( MxNumberTenths( 43.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#51525150" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.1 ) );
	object.setSecondBeat( MxNumberPercent( 3.1 ) );
	object.setLastBeat( MxNumberPercent( 3.1 ) );
	expected = "<booksmart default-x=\"43.5\" default-y=\"43.5\" relative-x=\"43.5\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" color=\"#51525150\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 43.6 ) );
	object.setDefaultY( MxNumberTenths( 43.6 ) );
	object.setRelativeX( MxNumberTenths( 43.6 ) );
	object.setRelativeY( MxNumberTenths( 43.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#545352" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.2 ) );
	object.setSecondBeat( MxNumberPercent( 3.2 ) );
	object.setLastBeat( MxNumberPercent( 3.2 ) );
	expected = "<quiet default-y=\"43.6\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#545352\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 43.7 ) );
	object.setDefaultY( MxNumberTenths( 43.7 ) );
	object.setRelativeX( MxNumberTenths( 43.7 ) );
	object.setRelativeY( MxNumberTenths( 43.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#55565554" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.3 ) );
	object.setSecondBeat( MxNumberPercent( 3.3 ) );
	object.setLastBeat( MxNumberPercent( 3.3 ) );
	expected = "<musicxmlishard default-x=\"43.7\" font-family=\"ABC\" font-weight=\"bold\" color=\"#55565554\" placement=\"above\" start-note=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 43.8 ) );
	object.setDefaultY( MxNumberTenths( 43.8 ) );
	object.setRelativeX( MxNumberTenths( 43.8 ) );
	object.setRelativeY( MxNumberTenths( 43.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#585756" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.4 ) );
	object.setSecondBeat( MxNumberPercent( 3.4 ) );
	object.setLastBeat( MxNumberPercent( 3.4 ) );
	expected = "<bishop font-family=\"DEF\" font-weight=\"normal\" color=\"#585756\" placement=\"below\" start-note=\"upper\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 43.9 ) );
	object.setDefaultY( MxNumberTenths( 43.9 ) );
	object.setRelativeX( MxNumberTenths( 43.9 ) );
	object.setRelativeY( MxNumberTenths( 43.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.5 ) );
	object.setSecondBeat( MxNumberPercent( 3.5 ) );
	object.setLastBeat( MxNumberPercent( 3.5 ) );
	expected = "<charlie default-x=\"43.9\" default-y=\"43.9\" relative-x=\"43.9\" relative-y=\"43.9\" font-family=\"XYZ\" font-style=\"italic\" color=\"#595A5958\" placement=\"above\" start-note=\"main\" trill-step=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 44 ) );
	object.setDefaultY( MxNumberTenths( 44 ) );
	object.setRelativeX( MxNumberTenths( 44 ) );
	object.setRelativeY( MxNumberTenths( 44 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.6 ) );
	object.setSecondBeat( MxNumberPercent( 3.6 ) );
	object.setLastBeat( MxNumberPercent( 3.6 ) );
	expected = "<booksmart default-y=\"44\" relative-x=\"44\" relative-y=\"44\" font-style=\"normal\" color=\"#5C5B5A\" placement=\"below\" start-note=\"below\" trill-step=\"unison\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 44.1 ) );
	object.setDefaultY( MxNumberTenths( 44.1 ) );
	object.setRelativeX( MxNumberTenths( 44.1 ) );
	object.setRelativeY( MxNumberTenths( 44.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.7 ) );
	object.setSecondBeat( MxNumberPercent( 3.7 ) );
	object.setLastBeat( MxNumberPercent( 3.7 ) );
	expected = "<quiet default-x=\"44.1\" relative-x=\"44.1\" relative-y=\"44.1\" font-style=\"italic\" color=\"#5D5E5D5C\" placement=\"above\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 44.2 ) );
	object.setDefaultY( MxNumberTenths( 44.2 ) );
	object.setRelativeX( MxNumberTenths( 44.2 ) );
	object.setRelativeY( MxNumberTenths( 44.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#605F5E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 4.8 ) );
	object.setSecondBeat( MxNumberPercent( 3.8 ) );
	object.setLastBeat( MxNumberPercent( 3.8 ) );
	expected = "<musicxmlishard relative-y=\"44.2\" font-style=\"normal\" placement=\"below\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 44.3 ) );
	object.setDefaultY( MxNumberTenths( 44.3 ) );
	object.setRelativeX( MxNumberTenths( 44.3 ) );
	object.setRelativeY( MxNumberTenths( 44.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#61626160" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 4.9 ) );
	object.setSecondBeat( MxNumberPercent( 3.9 ) );
	object.setLastBeat( MxNumberPercent( 3.9 ) );
	expected = "<bishop default-x=\"44.3\" default-y=\"44.3\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 44.4 ) );
	object.setDefaultY( MxNumberTenths( 44.4 ) );
	object.setRelativeX( MxNumberTenths( 44.4 ) );
	object.setRelativeY( MxNumberTenths( 44.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5 ) );
	object.setSecondBeat( MxNumberPercent( 4 ) );
	object.setLastBeat( MxNumberPercent( 4 ) );
	expected = "<charlie default-y=\"44.4\" font-style=\"normal\" font-size=\"large\" placement=\"below\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 44.5 ) );
	object.setDefaultY( MxNumberTenths( 44.5 ) );
	object.setRelativeX( MxNumberTenths( 44.5 ) );
	object.setRelativeY( MxNumberTenths( 44.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.1 ) );
	object.setSecondBeat( MxNumberPercent( 4.1 ) );
	object.setLastBeat( MxNumberPercent( 4.1 ) );
	expected = "<booksmart default-x=\"44.5\" relative-x=\"44.5\" font-family=\"XYZ\" font-size=\"1.1\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"no\" beats=\"5.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 44.6 ) );
	object.setDefaultY( MxNumberTenths( 44.6 ) );
	object.setRelativeX( MxNumberTenths( 44.6 ) );
	object.setRelativeY( MxNumberTenths( 44.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.2 ) );
	object.setSecondBeat( MxNumberPercent( 4.2 ) );
	object.setLastBeat( MxNumberPercent( 4.2 ) );
	expected = "<quiet relative-x=\"44.6\" font-family=\"ABC\" font-size=\"large\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"5.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 44.7 ) );
	object.setDefaultY( MxNumberTenths( 44.7 ) );
	object.setRelativeX( MxNumberTenths( 44.7 ) );
	object.setRelativeY( MxNumberTenths( 44.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.3 ) );
	object.setSecondBeat( MxNumberPercent( 4.3 ) );
	object.setLastBeat( MxNumberPercent( 4.3 ) );
	expected = "<musicxmlishard default-x=\"44.7\" default-y=\"44.7\" relative-x=\"44.7\" relative-y=\"44.7\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"5.3\" second-beat=\"4.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 44.8 ) );
	object.setDefaultY( MxNumberTenths( 44.8 ) );
	object.setRelativeX( MxNumberTenths( 44.8 ) );
	object.setRelativeY( MxNumberTenths( 44.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.4 ) );
	object.setSecondBeat( MxNumberPercent( 4.4 ) );
	object.setLastBeat( MxNumberPercent( 4.4 ) );
	expected = "<bishop default-y=\"44.8\" relative-y=\"44.8\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"5.4\" second-beat=\"4.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 44.9 ) );
	object.setDefaultY( MxNumberTenths( 44.9 ) );
	object.setRelativeX( MxNumberTenths( 44.9 ) );
	object.setRelativeY( MxNumberTenths( 44.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.5 ) );
	object.setSecondBeat( MxNumberPercent( 4.5 ) );
	object.setLastBeat( MxNumberPercent( 4.5 ) );
	expected = "<charlie default-x=\"44.9\" relative-y=\"44.9\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\" beats=\"5.5\" second-beat=\"4.5\" last-beat=\"4.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 45 ) );
	object.setDefaultY( MxNumberTenths( 45 ) );
	object.setRelativeX( MxNumberTenths( 45 ) );
	object.setRelativeY( MxNumberTenths( 45 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.6 ) );
	object.setSecondBeat( MxNumberPercent( 4.6 ) );
	object.setLastBeat( MxNumberPercent( 4.6 ) );
	expected = "<booksmart relative-y=\"45\" font-weight=\"normal\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\" beats=\"5.6\" second-beat=\"4.6\" last-beat=\"4.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 45.1 ) );
	object.setDefaultY( MxNumberTenths( 45.1 ) );
	object.setRelativeX( MxNumberTenths( 45.1 ) );
	object.setRelativeY( MxNumberTenths( 45.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.7 ) );
	object.setSecondBeat( MxNumberPercent( 4.7 ) );
	object.setLastBeat( MxNumberPercent( 4.7 ) );
	expected = "<quiet default-x=\"45.1\" default-y=\"45.1\" relative-x=\"45.1\" font-style=\"italic\" font-weight=\"bold\" color=\"#71727170\" two-note-turn=\"half\" accelerate=\"no\" beats=\"5.7\" second-beat=\"4.7\" last-beat=\"4.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 45.2 ) );
	object.setDefaultY( MxNumberTenths( 45.2 ) );
	object.setRelativeX( MxNumberTenths( 45.2 ) );
	object.setRelativeY( MxNumberTenths( 45.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 5.8 ) );
	object.setSecondBeat( MxNumberPercent( 4.8 ) );
	object.setLastBeat( MxNumberPercent( 4.8 ) );
	expected = "<musicxmlishard default-y=\"45.2\" relative-x=\"45.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#747372\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"5.8\" second-beat=\"4.8\" last-beat=\"4.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 45.3 ) );
	object.setDefaultY( MxNumberTenths( 45.3 ) );
	object.setRelativeX( MxNumberTenths( 45.3 ) );
	object.setRelativeY( MxNumberTenths( 45.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 5.9 ) );
	object.setSecondBeat( MxNumberPercent( 4.9 ) );
	object.setLastBeat( MxNumberPercent( 4.9 ) );
	expected = "<bishop default-x=\"45.3\" relative-x=\"45.3\" font-style=\"italic\" font-weight=\"bold\" color=\"#75767574\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"5.9\" second-beat=\"4.9\" last-beat=\"4.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 45.4 ) );
	object.setDefaultY( MxNumberTenths( 45.4 ) );
	object.setRelativeX( MxNumberTenths( 45.4 ) );
	object.setRelativeY( MxNumberTenths( 45.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6 ) );
	object.setSecondBeat( MxNumberPercent( 5 ) );
	object.setLastBeat( MxNumberPercent( 5 ) );
	expected = "<charlie font-style=\"normal\" font-weight=\"normal\" color=\"#787776\" accelerate=\"yes\" beats=\"6\" second-beat=\"5\" last-beat=\"5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 45.5 ) );
	object.setDefaultY( MxNumberTenths( 45.5 ) );
	object.setRelativeX( MxNumberTenths( 45.5 ) );
	object.setRelativeY( MxNumberTenths( 45.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.1 ) );
	object.setSecondBeat( MxNumberPercent( 5.1 ) );
	object.setLastBeat( MxNumberPercent( 5.1 ) );
	expected = "<booksmart default-x=\"45.5\" default-y=\"45.5\" relative-y=\"45.5\" font-family=\"ABC\" font-style=\"italic\" color=\"#797A7978\" placement=\"above\" accelerate=\"no\" beats=\"6.1\" second-beat=\"5.1\" last-beat=\"5.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 45.6 ) );
	object.setDefaultY( MxNumberTenths( 45.6 ) );
	object.setRelativeX( MxNumberTenths( 45.6 ) );
	object.setRelativeY( MxNumberTenths( 45.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.2 ) );
	object.setSecondBeat( MxNumberPercent( 5.2 ) );
	object.setLastBeat( MxNumberPercent( 5.2 ) );
	expected = "<quiet default-y=\"45.6\" relative-y=\"45.6\" font-family=\"DEF\" font-style=\"normal\" color=\"#7C7B7A\" placement=\"below\" accelerate=\"yes\" beats=\"6.2\" second-beat=\"5.2\" last-beat=\"5.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 45.7 ) );
	object.setDefaultY( MxNumberTenths( 45.7 ) );
	object.setRelativeX( MxNumberTenths( 45.7 ) );
	object.setRelativeY( MxNumberTenths( 45.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.3 ) );
	object.setSecondBeat( MxNumberPercent( 5.3 ) );
	object.setLastBeat( MxNumberPercent( 5.3 ) );
	expected = "<musicxmlishard default-x=\"45.7\" relative-x=\"45.7\" relative-y=\"45.7\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#7D7E7D7C\" placement=\"above\" beats=\"6.3\" second-beat=\"5.3\" last-beat=\"5.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 45.8 ) );
	object.setDefaultY( MxNumberTenths( 45.8 ) );
	object.setRelativeX( MxNumberTenths( 45.8 ) );
	object.setRelativeY( MxNumberTenths( 45.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.4 ) );
	object.setSecondBeat( MxNumberPercent( 5.4 ) );
	object.setLastBeat( MxNumberPercent( 5.4 ) );
	expected = "<bishop relative-x=\"45.8\" relative-y=\"45.8\" font-family=\"ABC\" font-size=\"large\" color=\"#807F7E\" placement=\"below\" beats=\"6.4\" second-beat=\"5.4\" last-beat=\"5.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 45.9 ) );
	object.setDefaultY( MxNumberTenths( 45.9 ) );
	object.setRelativeX( MxNumberTenths( 45.9 ) );
	object.setRelativeY( MxNumberTenths( 45.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.5 ) );
	object.setSecondBeat( MxNumberPercent( 5.5 ) );
	object.setLastBeat( MxNumberPercent( 5.5 ) );
	expected = "<charlie default-x=\"45.9\" default-y=\"45.9\" relative-x=\"45.9\" font-family=\"DEF\" font-size=\"1.1\" color=\"#81828180\" placement=\"above\" start-note=\"upper\" beats=\"6.5\" second-beat=\"5.5\" last-beat=\"5.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 46 ) );
	object.setDefaultY( MxNumberTenths( 46 ) );
	object.setRelativeX( MxNumberTenths( 46 ) );
	object.setRelativeY( MxNumberTenths( 46 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.6 ) );
	object.setSecondBeat( MxNumberPercent( 5.6 ) );
	object.setLastBeat( MxNumberPercent( 5.6 ) );
	expected = "<booksmart default-y=\"46\" font-size=\"large\" placement=\"below\" start-note=\"main\" second-beat=\"5.6\" last-beat=\"5.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 46.1 ) );
	object.setDefaultY( MxNumberTenths( 46.1 ) );
	object.setRelativeX( MxNumberTenths( 46.1 ) );
	object.setRelativeY( MxNumberTenths( 46.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.7 ) );
	object.setSecondBeat( MxNumberPercent( 5.7 ) );
	object.setLastBeat( MxNumberPercent( 5.7 ) );
	expected = "<quiet default-x=\"46.1\" font-size=\"1.1\" placement=\"above\" start-note=\"below\" second-beat=\"5.7\" last-beat=\"5.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 46.2 ) );
	object.setDefaultY( MxNumberTenths( 46.2 ) );
	object.setRelativeX( MxNumberTenths( 46.2 ) );
	object.setRelativeY( MxNumberTenths( 46.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 6.8 ) );
	object.setSecondBeat( MxNumberPercent( 5.8 ) );
	object.setLastBeat( MxNumberPercent( 5.8 ) );
	expected = "<musicxmlishard font-size=\"large\" placement=\"below\" start-note=\"upper\" second-beat=\"5.8\" last-beat=\"5.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 46.3 ) );
	object.setDefaultY( MxNumberTenths( 46.3 ) );
	object.setRelativeX( MxNumberTenths( 46.3 ) );
	object.setRelativeY( MxNumberTenths( 46.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 6.9 ) );
	object.setSecondBeat( MxNumberPercent( 5.9 ) );
	object.setLastBeat( MxNumberPercent( 5.9 ) );
	expected = "<bishop default-x=\"46.3\" default-y=\"46.3\" relative-x=\"46.3\" relative-y=\"46.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" placement=\"above\" start-note=\"main\" trill-step=\"half\" last-beat=\"5.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 46.4 ) );
	object.setDefaultY( MxNumberTenths( 46.4 ) );
	object.setRelativeX( MxNumberTenths( 46.4 ) );
	object.setRelativeY( MxNumberTenths( 46.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7 ) );
	object.setSecondBeat( MxNumberPercent( 6 ) );
	object.setLastBeat( MxNumberPercent( 6 ) );
	expected = "<charlie default-y=\"46.4\" relative-x=\"46.4\" relative-y=\"46.4\" font-style=\"normal\" font-weight=\"normal\" placement=\"below\" start-note=\"below\" trill-step=\"unison\" last-beat=\"6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 46.5 ) );
	object.setDefaultY( MxNumberTenths( 46.5 ) );
	object.setRelativeX( MxNumberTenths( 46.5 ) );
	object.setRelativeY( MxNumberTenths( 46.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.1 ) );
	object.setSecondBeat( MxNumberPercent( 6.1 ) );
	object.setLastBeat( MxNumberPercent( 6.1 ) );
	expected = "<booksmart default-x=\"46.5\" relative-x=\"46.5\" relative-y=\"46.5\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" start-note=\"upper\" trill-step=\"whole\" last-beat=\"6.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 46.6 ) );
	object.setDefaultY( MxNumberTenths( 46.6 ) );
	object.setRelativeX( MxNumberTenths( 46.6 ) );
	object.setRelativeY( MxNumberTenths( 46.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.2 ) );
	object.setSecondBeat( MxNumberPercent( 6.2 ) );
	object.setLastBeat( MxNumberPercent( 6.2 ) );
	expected = "<quiet relative-y=\"46.6\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" start-note=\"main\" trill-step=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 46.7 ) );
	object.setDefaultY( MxNumberTenths( 46.7 ) );
	object.setRelativeX( MxNumberTenths( 46.7 ) );
	object.setRelativeY( MxNumberTenths( 46.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.3 ) );
	object.setSecondBeat( MxNumberPercent( 6.3 ) );
	object.setLastBeat( MxNumberPercent( 6.3 ) );
	expected = "<musicxmlishard default-x=\"46.7\" default-y=\"46.7\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" start-note=\"below\" trill-step=\"unison\" two-note-turn=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 46.8 ) );
	object.setDefaultY( MxNumberTenths( 46.8 ) );
	object.setRelativeX( MxNumberTenths( 46.8 ) );
	object.setRelativeY( MxNumberTenths( 46.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.4 ) );
	object.setSecondBeat( MxNumberPercent( 6.4 ) );
	object.setLastBeat( MxNumberPercent( 6.4 ) );
	expected = "<bishop default-y=\"46.8\" font-family=\"DEF\" font-style=\"normal\" font-weight=\"normal\" start-note=\"upper\" trill-step=\"whole\" two-note-turn=\"whole\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 46.9 ) );
	object.setDefaultY( MxNumberTenths( 46.9 ) );
	object.setRelativeX( MxNumberTenths( 46.9 ) );
	object.setRelativeY( MxNumberTenths( 46.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.5 ) );
	object.setSecondBeat( MxNumberPercent( 6.5 ) );
	object.setLastBeat( MxNumberPercent( 6.5 ) );
	expected = "<charlie default-x=\"46.9\" relative-x=\"46.9\" font-family=\"XYZ\" font-weight=\"bold\" color=\"#95969594\" start-note=\"main\" trill-step=\"half\" two-note-turn=\"half\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 47 ) );
	object.setDefaultY( MxNumberTenths( 47 ) );
	object.setRelativeX( MxNumberTenths( 47 ) );
	object.setRelativeY( MxNumberTenths( 47 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.6 ) );
	object.setSecondBeat( MxNumberPercent( 6.6 ) );
	object.setLastBeat( MxNumberPercent( 6.6 ) );
	expected = "<booksmart relative-x=\"47\" font-weight=\"normal\" color=\"#989796\" trill-step=\"unison\" two-note-turn=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 47.1 ) );
	object.setDefaultY( MxNumberTenths( 47.1 ) );
	object.setRelativeX( MxNumberTenths( 47.1 ) );
	object.setRelativeY( MxNumberTenths( 47.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.7 ) );
	object.setSecondBeat( MxNumberPercent( 6.7 ) );
	object.setLastBeat( MxNumberPercent( 6.7 ) );
	expected = "<quiet default-x=\"47.1\" default-y=\"47.1\" relative-x=\"47.1\" relative-y=\"47.1\" font-size=\"1.1\" color=\"#999A9998\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 47.2 ) );
	object.setDefaultY( MxNumberTenths( 47.2 ) );
	object.setRelativeX( MxNumberTenths( 47.2 ) );
	object.setRelativeY( MxNumberTenths( 47.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 7.8 ) );
	object.setSecondBeat( MxNumberPercent( 6.8 ) );
	object.setLastBeat( MxNumberPercent( 6.8 ) );
	expected = "<musicxmlishard default-y=\"47.2\" relative-y=\"47.2\" font-size=\"large\" color=\"#9C9B9A\" trill-step=\"half\" two-note-turn=\"half\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 47.3 ) );
	object.setDefaultY( MxNumberTenths( 47.3 ) );
	object.setRelativeX( MxNumberTenths( 47.3 ) );
	object.setRelativeY( MxNumberTenths( 47.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 7.9 ) );
	object.setSecondBeat( MxNumberPercent( 6.9 ) );
	object.setLastBeat( MxNumberPercent( 6.9 ) );
	expected = "<bishop default-x=\"47.3\" relative-y=\"47.3\" font-size=\"1.1\" color=\"#9D9E9D9C\" trill-step=\"unison\" two-note-turn=\"none\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 47.4 ) );
	object.setDefaultY( MxNumberTenths( 47.4 ) );
	object.setRelativeX( MxNumberTenths( 47.4 ) );
	object.setRelativeY( MxNumberTenths( 47.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8 ) );
	object.setSecondBeat( MxNumberPercent( 7 ) );
	object.setLastBeat( MxNumberPercent( 7 ) );
	expected = "<charlie relative-y=\"47.4\" font-size=\"large\" color=\"#A09F9E\" trill-step=\"whole\" two-note-turn=\"whole\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 47.5 ) );
	object.setDefaultY( MxNumberTenths( 47.5 ) );
	object.setRelativeX( MxNumberTenths( 47.5 ) );
	object.setRelativeY( MxNumberTenths( 47.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.1 ) );
	object.setSecondBeat( MxNumberPercent( 7.1 ) );
	object.setLastBeat( MxNumberPercent( 7.1 ) );
	expected = "<booksmart default-x=\"47.5\" default-y=\"47.5\" relative-x=\"47.5\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#A1A2A1A0\" placement=\"above\" two-note-turn=\"half\" accelerate=\"no\" beats=\"8.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 47.6 ) );
	object.setDefaultY( MxNumberTenths( 47.6 ) );
	object.setRelativeX( MxNumberTenths( 47.6 ) );
	object.setRelativeY( MxNumberTenths( 47.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.2 ) );
	object.setSecondBeat( MxNumberPercent( 7.2 ) );
	object.setLastBeat( MxNumberPercent( 7.2 ) );
	expected = "<quiet default-y=\"47.6\" relative-x=\"47.6\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#A4A3A2\" placement=\"below\" two-note-turn=\"none\" accelerate=\"yes\" beats=\"8.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 47.7 ) );
	object.setDefaultY( MxNumberTenths( 47.7 ) );
	object.setRelativeX( MxNumberTenths( 47.7 ) );
	object.setRelativeY( MxNumberTenths( 47.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.3 ) );
	object.setSecondBeat( MxNumberPercent( 7.3 ) );
	object.setLastBeat( MxNumberPercent( 7.3 ) );
	expected = "<musicxmlishard default-x=\"47.7\" relative-x=\"47.7\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#A5A6A5A4\" placement=\"above\" two-note-turn=\"whole\" accelerate=\"no\" beats=\"8.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 47.8 ) );
	object.setDefaultY( MxNumberTenths( 47.8 ) );
	object.setRelativeX( MxNumberTenths( 47.8 ) );
	object.setRelativeY( MxNumberTenths( 47.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.4 ) );
	object.setSecondBeat( MxNumberPercent( 7.4 ) );
	object.setLastBeat( MxNumberPercent( 7.4 ) );
	expected = "<bishop font-family=\"XYZ\" font-style=\"normal\" placement=\"below\" two-note-turn=\"half\" accelerate=\"yes\" beats=\"8.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 47.9 ) );
	object.setDefaultY( MxNumberTenths( 47.9 ) );
	object.setRelativeX( MxNumberTenths( 47.9 ) );
	object.setRelativeY( MxNumberTenths( 47.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.5 ) );
	object.setSecondBeat( MxNumberPercent( 7.5 ) );
	object.setLastBeat( MxNumberPercent( 7.5 ) );
	expected = "<charlie default-x=\"47.9\" default-y=\"47.9\" relative-y=\"47.9\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\" placement=\"above\" two-note-turn=\"none\" accelerate=\"no\" beats=\"8.5\" second-beat=\"7.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 48 ) );
	object.setDefaultY( MxNumberTenths( 48 ) );
	object.setRelativeX( MxNumberTenths( 48 ) );
	object.setRelativeY( MxNumberTenths( 48 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ACABAA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.6 ) );
	object.setSecondBeat( MxNumberPercent( 7.6 ) );
	object.setLastBeat( MxNumberPercent( 7.6 ) );
	expected = "<booksmart default-y=\"48\" relative-y=\"48\" font-style=\"normal\" font-weight=\"normal\" placement=\"below\" accelerate=\"yes\" beats=\"8.6\" second-beat=\"7.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 48.1 ) );
	object.setDefaultY( MxNumberTenths( 48.1 ) );
	object.setRelativeX( MxNumberTenths( 48.1 ) );
	object.setRelativeY( MxNumberTenths( 48.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.7 ) );
	object.setSecondBeat( MxNumberPercent( 7.7 ) );
	object.setLastBeat( MxNumberPercent( 7.7 ) );
	expected = "<quiet default-x=\"48.1\" relative-x=\"48.1\" relative-y=\"48.1\" font-weight=\"bold\" placement=\"above\" start-note=\"main\" accelerate=\"no\" beats=\"8.7\" second-beat=\"7.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 48.2 ) );
	object.setDefaultY( MxNumberTenths( 48.2 ) );
	object.setRelativeX( MxNumberTenths( 48.2 ) );
	object.setRelativeY( MxNumberTenths( 48.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 8.8 ) );
	object.setSecondBeat( MxNumberPercent( 7.8 ) );
	object.setLastBeat( MxNumberPercent( 7.8 ) );
	expected = "<musicxmlishard relative-x=\"48.2\" relative-y=\"48.2\" font-weight=\"normal\" placement=\"below\" start-note=\"below\" accelerate=\"yes\" beats=\"8.8\" second-beat=\"7.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 48.3 ) );
	object.setDefaultY( MxNumberTenths( 48.3 ) );
	object.setRelativeX( MxNumberTenths( 48.3 ) );
	object.setRelativeY( MxNumberTenths( 48.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 8.9 ) );
	object.setSecondBeat( MxNumberPercent( 7.9 ) );
	object.setLastBeat( MxNumberPercent( 7.9 ) );
	expected = "<bishop default-x=\"48.3\" default-y=\"48.3\" relative-x=\"48.3\" font-weight=\"bold\" placement=\"above\" start-note=\"upper\" accelerate=\"no\" beats=\"8.9\" second-beat=\"7.9\" last-beat=\"7.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 48.4 ) );
	object.setDefaultY( MxNumberTenths( 48.4 ) );
	object.setRelativeX( MxNumberTenths( 48.4 ) );
	object.setRelativeY( MxNumberTenths( 48.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9 ) );
	object.setSecondBeat( MxNumberPercent( 8 ) );
	object.setLastBeat( MxNumberPercent( 8 ) );
	expected = "<charlie default-y=\"48.4\" font-weight=\"normal\" placement=\"below\" start-note=\"main\" accelerate=\"yes\" beats=\"9\" second-beat=\"8\" last-beat=\"8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 48.5 ) );
	object.setDefaultY( MxNumberTenths( 48.5 ) );
	object.setRelativeX( MxNumberTenths( 48.5 ) );
	object.setRelativeY( MxNumberTenths( 48.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.1 ) );
	object.setSecondBeat( MxNumberPercent( 8.1 ) );
	object.setLastBeat( MxNumberPercent( 8.1 ) );
	expected = "<booksmart default-x=\"48.5\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" start-note=\"below\" beats=\"9.1\" second-beat=\"8.1\" last-beat=\"8.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 48.6 ) );
	object.setDefaultY( MxNumberTenths( 48.6 ) );
	object.setRelativeX( MxNumberTenths( 48.6 ) );
	object.setRelativeY( MxNumberTenths( 48.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.2 ) );
	object.setSecondBeat( MxNumberPercent( 8.2 ) );
	object.setLastBeat( MxNumberPercent( 8.2 ) );
	expected = "<quiet font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" start-note=\"upper\" beats=\"9.2\" second-beat=\"8.2\" last-beat=\"8.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 48.7 ) );
	object.setDefaultY( MxNumberTenths( 48.7 ) );
	object.setRelativeX( MxNumberTenths( 48.7 ) );
	object.setRelativeY( MxNumberTenths( 48.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.3 ) );
	object.setSecondBeat( MxNumberPercent( 8.3 ) );
	object.setLastBeat( MxNumberPercent( 8.3 ) );
	expected = "<musicxmlishard default-x=\"48.7\" default-y=\"48.7\" relative-x=\"48.7\" relative-y=\"48.7\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" color=\"#B9BAB9B8\" start-note=\"main\" trill-step=\"half\" beats=\"9.3\" second-beat=\"8.3\" last-beat=\"8.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 48.8 ) );
	object.setDefaultY( MxNumberTenths( 48.8 ) );
	object.setRelativeX( MxNumberTenths( 48.8 ) );
	object.setRelativeY( MxNumberTenths( 48.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.4 ) );
	object.setSecondBeat( MxNumberPercent( 8.4 ) );
	object.setLastBeat( MxNumberPercent( 8.4 ) );
	expected = "<bishop default-y=\"48.8\" relative-x=\"48.8\" relative-y=\"48.8\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#BCBBBA\" start-note=\"below\" trill-step=\"unison\" beats=\"9.4\" second-beat=\"8.4\" last-beat=\"8.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 48.9 ) );
	object.setDefaultY( MxNumberTenths( 48.9 ) );
	object.setRelativeX( MxNumberTenths( 48.9 ) );
	object.setRelativeY( MxNumberTenths( 48.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.5 ) );
	object.setSecondBeat( MxNumberPercent( 8.5 ) );
	object.setLastBeat( MxNumberPercent( 8.5 ) );
	expected = "<charlie default-x=\"48.9\" relative-x=\"48.9\" relative-y=\"48.9\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#BDBEBDBC\" start-note=\"upper\" trill-step=\"whole\" beats=\"9.5\" second-beat=\"8.5\" last-beat=\"8.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 49 ) );
	object.setDefaultY( MxNumberTenths( 49 ) );
	object.setRelativeX( MxNumberTenths( 49 ) );
	object.setRelativeY( MxNumberTenths( 49 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.6 ) );
	object.setSecondBeat( MxNumberPercent( 8.6 ) );
	object.setLastBeat( MxNumberPercent( 8.6 ) );
	expected = "<booksmart relative-y=\"49\" font-style=\"normal\" font-size=\"large\" color=\"#C0BFBE\" start-note=\"main\" trill-step=\"half\" second-beat=\"8.6\" last-beat=\"8.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 49.1 ) );
	object.setDefaultY( MxNumberTenths( 49.1 ) );
	object.setRelativeX( MxNumberTenths( 49.1 ) );
	object.setRelativeY( MxNumberTenths( 49.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.7 ) );
	object.setSecondBeat( MxNumberPercent( 8.7 ) );
	object.setLastBeat( MxNumberPercent( 8.7 ) );
	expected = "<quiet default-x=\"49.1\" default-y=\"49.1\" font-style=\"italic\" font-size=\"1.1\" color=\"#C1C2C1C0\" start-note=\"below\" trill-step=\"unison\" second-beat=\"8.7\" last-beat=\"8.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 49.2 ) );
	object.setDefaultY( MxNumberTenths( 49.2 ) );
	object.setRelativeX( MxNumberTenths( 49.2 ) );
	object.setRelativeY( MxNumberTenths( 49.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 9.8 ) );
	object.setSecondBeat( MxNumberPercent( 8.8 ) );
	object.setLastBeat( MxNumberPercent( 8.8 ) );
	expected = "<musicxmlishard default-y=\"49.2\" font-style=\"normal\" color=\"#C4C3C2\" trill-step=\"whole\" second-beat=\"8.8\" last-beat=\"8.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 49.3 ) );
	object.setDefaultY( MxNumberTenths( 49.3 ) );
	object.setRelativeX( MxNumberTenths( 49.3 ) );
	object.setRelativeY( MxNumberTenths( 49.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 9.9 ) );
	object.setSecondBeat( MxNumberPercent( 8.9 ) );
	object.setLastBeat( MxNumberPercent( 8.9 ) );
	expected = "<bishop default-x=\"49.3\" relative-x=\"49.3\" color=\"#C5C6C5C4\" trill-step=\"half\" two-note-turn=\"half\" second-beat=\"8.9\" last-beat=\"8.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 49.4 ) );
	object.setDefaultY( MxNumberTenths( 49.4 ) );
	object.setRelativeX( MxNumberTenths( 49.4 ) );
	object.setRelativeY( MxNumberTenths( 49.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10 ) );
	object.setSecondBeat( MxNumberPercent( 9 ) );
	object.setLastBeat( MxNumberPercent( 9 ) );
	expected = "<charlie relative-x=\"49.4\" color=\"#C8C7C6\" trill-step=\"unison\" two-note-turn=\"none\" second-beat=\"9\" last-beat=\"9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 49.5 ) );
	object.setDefaultY( MxNumberTenths( 49.5 ) );
	object.setRelativeX( MxNumberTenths( 49.5 ) );
	object.setRelativeY( MxNumberTenths( 49.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.1 ) );
	object.setSecondBeat( MxNumberPercent( 9.1 ) );
	object.setLastBeat( MxNumberPercent( 9.1 ) );
	expected = "<booksmart default-x=\"49.5\" default-y=\"49.5\" relative-x=\"49.5\" relative-y=\"49.5\" font-family=\"DEF\" font-weight=\"bold\" color=\"#C9CAC9C8\" placement=\"above\" trill-step=\"whole\" two-note-turn=\"whole\" last-beat=\"9.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 49.6 ) );
	object.setDefaultY( MxNumberTenths( 49.6 ) );
	object.setRelativeX( MxNumberTenths( 49.6 ) );
	object.setRelativeY( MxNumberTenths( 49.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.2 ) );
	object.setSecondBeat( MxNumberPercent( 9.2 ) );
	object.setLastBeat( MxNumberPercent( 9.2 ) );
	expected = "<quiet default-y=\"49.6\" relative-y=\"49.6\" font-family=\"XYZ\" font-weight=\"normal\" placement=\"below\" trill-step=\"half\" two-note-turn=\"half\" last-beat=\"9.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 49.7 ) );
	object.setDefaultY( MxNumberTenths( 49.7 ) );
	object.setRelativeX( MxNumberTenths( 49.7 ) );
	object.setRelativeY( MxNumberTenths( 49.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.3 ) );
	object.setSecondBeat( MxNumberPercent( 9.3 ) );
	object.setLastBeat( MxNumberPercent( 9.3 ) );
	expected = "<musicxmlishard default-x=\"49.7\" relative-y=\"49.7\" font-family=\"ABC\" font-weight=\"bold\" placement=\"above\" trill-step=\"unison\" two-note-turn=\"none\" last-beat=\"9.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 49.8 ) );
	object.setDefaultY( MxNumberTenths( 49.8 ) );
	object.setRelativeX( MxNumberTenths( 49.8 ) );
	object.setRelativeY( MxNumberTenths( 49.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.4 ) );
	object.setSecondBeat( MxNumberPercent( 9.4 ) );
	object.setLastBeat( MxNumberPercent( 9.4 ) );
	expected = "<bishop relative-y=\"49.8\" font-family=\"DEF\" font-weight=\"normal\" placement=\"below\" trill-step=\"whole\" two-note-turn=\"whole\" last-beat=\"9.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 49.9 ) );
	object.setDefaultY( MxNumberTenths( 49.9 ) );
	object.setRelativeX( MxNumberTenths( 49.9 ) );
	object.setRelativeY( MxNumberTenths( 49.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.5 ) );
	object.setSecondBeat( MxNumberPercent( 9.5 ) );
	object.setLastBeat( MxNumberPercent( 9.5 ) );
	expected = "<charlie default-x=\"49.9\" default-y=\"49.9\" relative-x=\"49.9\" font-family=\"XYZ\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" placement=\"above\" two-note-turn=\"half\" accelerate=\"no\" last-beat=\"9.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 50 ) );
	object.setDefaultY( MxNumberTenths( 50 ) );
	object.setRelativeX( MxNumberTenths( 50 ) );
	object.setRelativeY( MxNumberTenths( 50 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.6 ) );
	object.setSecondBeat( MxNumberPercent( 9.6 ) );
	object.setLastBeat( MxNumberPercent( 9.6 ) );
	expected = "<booksmart default-y=\"50\" relative-x=\"50\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" placement=\"below\" two-note-turn=\"none\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 50.1 ) );
	object.setDefaultY( MxNumberTenths( 50.1 ) );
	object.setRelativeX( MxNumberTenths( 50.1 ) );
	object.setRelativeY( MxNumberTenths( 50.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.7 ) );
	object.setSecondBeat( MxNumberPercent( 9.7 ) );
	object.setLastBeat( MxNumberPercent( 9.7 ) );
	expected = "<quiet default-x=\"50.1\" relative-x=\"50.1\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" placement=\"above\" two-note-turn=\"whole\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 50.2 ) );
	object.setDefaultY( MxNumberTenths( 50.2 ) );
	object.setRelativeX( MxNumberTenths( 50.2 ) );
	object.setRelativeY( MxNumberTenths( 50.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 10.8 ) );
	object.setSecondBeat( MxNumberPercent( 9.8 ) );
	object.setLastBeat( MxNumberPercent( 9.8 ) );
	expected = "<musicxmlishard font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" placement=\"below\" two-note-turn=\"half\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 50.3 ) );
	object.setDefaultY( MxNumberTenths( 50.3 ) );
	object.setRelativeX( MxNumberTenths( 50.3 ) );
	object.setRelativeY( MxNumberTenths( 50.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 10.9 ) );
	object.setSecondBeat( MxNumberPercent( 9.9 ) );
	object.setLastBeat( MxNumberPercent( 9.9 ) );
	expected = "<bishop default-x=\"50.3\" default-y=\"50.3\" relative-y=\"50.3\" font-style=\"italic\" font-size=\"1.1\" placement=\"above\" start-note=\"below\" two-note-turn=\"none\" accelerate=\"no\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 50.4 ) );
	object.setDefaultY( MxNumberTenths( 50.4 ) );
	object.setRelativeX( MxNumberTenths( 50.4 ) );
	object.setRelativeY( MxNumberTenths( 50.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11 ) );
	object.setSecondBeat( MxNumberPercent( 10 ) );
	object.setLastBeat( MxNumberPercent( 10 ) );
	expected = "<charlie default-y=\"50.4\" relative-y=\"50.4\" font-style=\"normal\" font-size=\"large\" placement=\"below\" start-note=\"upper\" two-note-turn=\"whole\" accelerate=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 50.5 ) );
	object.setDefaultY( MxNumberTenths( 50.5 ) );
	object.setRelativeX( MxNumberTenths( 50.5 ) );
	object.setRelativeY( MxNumberTenths( 50.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.1 ) );
	object.setSecondBeat( MxNumberPercent( 10.1 ) );
	object.setLastBeat( MxNumberPercent( 10.1 ) );
	expected = "<booksmart default-x=\"50.5\" relative-x=\"50.5\" relative-y=\"50.5\" font-family=\"XYZ\" font-size=\"1.1\" color=\"#DDDEDDDC\" start-note=\"main\" two-note-turn=\"half\" accelerate=\"no\" beats=\"11.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 50.6 ) );
	object.setDefaultY( MxNumberTenths( 50.6 ) );
	object.setRelativeX( MxNumberTenths( 50.6 ) );
	object.setRelativeY( MxNumberTenths( 50.6 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.2 ) );
	object.setSecondBeat( MxNumberPercent( 10.2 ) );
	object.setLastBeat( MxNumberPercent( 10.2 ) );
	expected = "<quiet relative-x=\"50.6\" relative-y=\"50.6\" font-family=\"ABC\" color=\"#E0DFDE\" start-note=\"below\" accelerate=\"yes\" beats=\"11.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 50.7 ) );
	object.setDefaultY( MxNumberTenths( 50.7 ) );
	object.setRelativeX( MxNumberTenths( 50.7 ) );
	object.setRelativeY( MxNumberTenths( 50.7 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.3 ) );
	object.setSecondBeat( MxNumberPercent( 10.3 ) );
	object.setLastBeat( MxNumberPercent( 10.3 ) );
	expected = "<musicxmlishard default-x=\"50.7\" default-y=\"50.7\" relative-x=\"50.7\" font-family=\"DEF\" color=\"#E1E2E1E0\" start-note=\"upper\" accelerate=\"no\" beats=\"11.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 50.8 ) );
	object.setDefaultY( MxNumberTenths( 50.8 ) );
	object.setRelativeX( MxNumberTenths( 50.8 ) );
	object.setRelativeY( MxNumberTenths( 50.8 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.4 ) );
	object.setSecondBeat( MxNumberPercent( 10.4 ) );
	object.setLastBeat( MxNumberPercent( 10.4 ) );
	expected = "<bishop default-y=\"50.8\" font-family=\"XYZ\" color=\"#E4E3E2\" start-note=\"main\" accelerate=\"yes\" beats=\"11.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 50.9 ) );
	object.setDefaultY( MxNumberTenths( 50.9 ) );
	object.setRelativeX( MxNumberTenths( 50.9 ) );
	object.setRelativeY( MxNumberTenths( 50.9 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.5 ) );
	object.setSecondBeat( MxNumberPercent( 10.5 ) );
	object.setLastBeat( MxNumberPercent( 10.5 ) );
	expected = "<charlie default-x=\"50.9\" font-family=\"ABC\" color=\"#E5E6E5E4\" start-note=\"below\" accelerate=\"no\" beats=\"11.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 51 ) );
	object.setDefaultY( MxNumberTenths( 51 ) );
	object.setRelativeX( MxNumberTenths( 51 ) );
	object.setRelativeY( MxNumberTenths( 51 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.6 ) );
	object.setSecondBeat( MxNumberPercent( 10.6 ) );
	object.setLastBeat( MxNumberPercent( 10.6 ) );
	expected = "<booksmart color=\"#E8E7E6\" start-note=\"upper\" accelerate=\"yes\" beats=\"11.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 51.1 ) );
	object.setDefaultY( MxNumberTenths( 51.1 ) );
	object.setRelativeX( MxNumberTenths( 51.1 ) );
	object.setRelativeY( MxNumberTenths( 51.1 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.7 ) );
	object.setSecondBeat( MxNumberPercent( 10.7 ) );
	object.setLastBeat( MxNumberPercent( 10.7 ) );
	expected = "<quiet default-x=\"51.1\" default-y=\"51.1\" relative-x=\"51.1\" relative-y=\"51.1\" font-style=\"italic\" font-weight=\"bold\" color=\"#E9EAE9E8\" start-note=\"main\" trill-step=\"half\" accelerate=\"no\" beats=\"11.7\" second-beat=\"10.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 51.2 ) );
	object.setDefaultY( MxNumberTenths( 51.2 ) );
	object.setRelativeX( MxNumberTenths( 51.2 ) );
	object.setRelativeY( MxNumberTenths( 51.2 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 11.8 ) );
	object.setSecondBeat( MxNumberPercent( 10.8 ) );
	object.setLastBeat( MxNumberPercent( 10.8 ) );
	expected = "<musicxmlishard default-y=\"51.2\" relative-x=\"51.2\" relative-y=\"51.2\" font-style=\"normal\" font-weight=\"normal\" color=\"#ECEBEA\" start-note=\"below\" trill-step=\"unison\" accelerate=\"yes\" beats=\"11.8\" second-beat=\"10.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 51.3 ) );
	object.setDefaultY( MxNumberTenths( 51.3 ) );
	object.setRelativeX( MxNumberTenths( 51.3 ) );
	object.setRelativeY( MxNumberTenths( 51.3 ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::upper ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::whole ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::whole ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 11.9 ) );
	object.setSecondBeat( MxNumberPercent( 10.9 ) );
	object.setLastBeat( MxNumberPercent( 10.9 ) );
	expected = "<bishop default-x=\"51.3\" relative-x=\"51.3\" relative-y=\"51.3\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#EDEEEDEC\" start-note=\"upper\" trill-step=\"whole\" beats=\"11.9\" second-beat=\"10.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 51.4 ) );
	object.setDefaultY( MxNumberTenths( 51.4 ) );
	object.setRelativeX( MxNumberTenths( 51.4 ) );
	object.setRelativeY( MxNumberTenths( 51.4 ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::main ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::half ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::half ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 12 ) );
	object.setSecondBeat( MxNumberPercent( 11 ) );
	object.setLastBeat( MxNumberPercent( 11 ) );
	expected = "<charlie relative-y=\"51.4\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" trill-step=\"half\" beats=\"12\" second-beat=\"11\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptyEmptyTrillSound )
{
	MxCxEmptyEmptyTrillSound object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 51.5 ) );
	object.setDefaultY( MxNumberTenths( 51.5 ) );
	object.setRelativeX( MxNumberTenths( 51.5 ) );
	object.setRelativeY( MxNumberTenths( 51.5 ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setStartNote( MxEnumStartNote( lexicon::enums::StartNote::below ) );
	object.setTrillStep( MxEnumTrillStep( lexicon::enums::TrillStep::unison ) );
	object.setTwoNoteTurn( MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none ) );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 12.1 ) );
	object.setSecondBeat( MxNumberPercent( 11.1 ) );
	object.setLastBeat( MxNumberPercent( 11.1 ) );
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


