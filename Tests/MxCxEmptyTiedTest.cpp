/** *******************************************************
  * 
  * MxCxEmptyTiedTest.cpp
  * Created: 2014-12-03 16:31:30
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyTied.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxEnumStartStopContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxEnumLineType(  ) ).toString();
	std::string actual = object.getLineType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxEnumOverUnder(  ) ).toString();
	std::string actual = object.getOrientation().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberDivisions(  ) ).toString();
	std::string actual = object.getBezierOffset().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberDivisions(  ) ).toString();
	std::string actual = object.getBezierOffset2().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues15, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierX2().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues16, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierY2().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues17, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = "MxCxEmptyTied";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = "tied";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	std::string expected = "The tied type represents the notated tie. The tie element represents the tie sound. The number attribute is rarely needed to disambiguate ties, since note pitches will usually suffice. The attribute is implied rather than defaulting to 1 as with most elements. It is available for use in more complex tied notation situations.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptyTied )
{
	MxEnumStartStopContinue value1( lexicon::enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue value2( lexicon::enums::StartStopContinue::stop );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setType( value1 );
	MxEnumStartStopContinue expected = value1;
	MxEnumStartStopContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxCxEmptyTied )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineType2, MxCxEmptyTied )
{
	MxEnumLineType value1( lexicon::enums::LineType::wavy );
	MxEnumLineType value2( lexicon::enums::LineType::dotted );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setLineType( value1 );
	MxEnumLineType expected = value1;
	MxEnumLineType actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
	object.setLineType( value2 );
	expected = value2;
	actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength3, MxCxEmptyTied )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength4, MxCxEmptyTied )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX5, MxCxEmptyTied )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY6, MxCxEmptyTied )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX7, MxCxEmptyTied )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY8, MxCxEmptyTied )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement9, MxCxEmptyTied )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setPlacement( value1 );
	MxEnumAboveBelow expected = value1;
	MxEnumAboveBelow actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
	object.setPlacement( value2 );
	expected = value2;
	actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
}
TEST( setOrientation10, MxCxEmptyTied )
{
	MxEnumOverUnder value1( lexicon::enums::OverUnder::under );
	MxEnumOverUnder value2( lexicon::enums::OverUnder::over );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setOrientation( value1 );
	MxEnumOverUnder expected = value1;
	MxEnumOverUnder actual = object.getOrientation();
	CHECK_EQUAL( expected, actual )
	object.setOrientation( value2 );
	expected = value2;
	actual = object.getOrientation();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierOffset11, MxCxEmptyTied )
{
	MxNumberDivisions value1( 0.1 );
	MxNumberDivisions value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setBezierOffset( value1 );
	MxNumberDivisions expected = value1;
	MxNumberDivisions actual = object.getBezierOffset();
	CHECK_EQUAL( expected, actual )
	object.setBezierOffset( value2 );
	expected = value2;
	actual = object.getBezierOffset();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierOffset212, MxCxEmptyTied )
{
	MxNumberDivisions value1( 0.1 );
	MxNumberDivisions value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setBezierOffset2( value1 );
	MxNumberDivisions expected = value1;
	MxNumberDivisions actual = object.getBezierOffset2();
	CHECK_EQUAL( expected, actual )
	object.setBezierOffset2( value2 );
	expected = value2;
	actual = object.getBezierOffset2();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierX13, MxCxEmptyTied )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setBezierX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierX();
	CHECK_EQUAL( expected, actual )
	object.setBezierX( value2 );
	expected = value2;
	actual = object.getBezierX();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierY14, MxCxEmptyTied )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setBezierY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierY();
	CHECK_EQUAL( expected, actual )
	object.setBezierY( value2 );
	expected = value2;
	actual = object.getBezierY();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierX215, MxCxEmptyTied )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setBezierX2( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierX2();
	CHECK_EQUAL( expected, actual )
	object.setBezierX2( value2 );
	expected = value2;
	actual = object.getBezierX2();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierY216, MxCxEmptyTied )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setBezierY2( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierY2();
	CHECK_EQUAL( expected, actual )
	object.setBezierY2( value2 );
	expected = value2;
	actual = object.getBezierY2();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor17, MxCxEmptyTied )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyTied object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeRequired2, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsLineTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired3, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired4, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired5, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired6, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired7, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired8, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired9, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOrientationRequired10, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsOrientationRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffsetRequired11, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierOffsetRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffset2Required12, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierOffset2Required();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierXRequired13, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierYRequired14, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierX2Required15, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierX2Required();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierY2Required16, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierY2Required();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired17, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptyTied )
{
	MxCxEmptyTied object;
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
TEST( getIsNumberPresent1, MxCxEmptyTied )
{
	MxCxEmptyTied object;
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
TEST( getIsLineTypePresent2, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsLineTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineTypePresent( true );
	expected = true;
	actual = object.getIsLineTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineTypePresent( false );
	expected = false;
	actual = object.getIsLineTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthPresent3, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsDashLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDashLengthPresent( true );
	expected = true;
	actual = object.getIsDashLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDashLengthPresent( false );
	expected = false;
	actual = object.getIsDashLengthPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthPresent4, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSpaceLengthPresent( true );
	expected = true;
	actual = object.getIsSpaceLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSpaceLengthPresent( false );
	expected = false;
	actual = object.getIsSpaceLengthPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent5, MxCxEmptyTied )
{
	MxCxEmptyTied object;
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
TEST( getIsDefaultYPresent6, MxCxEmptyTied )
{
	MxCxEmptyTied object;
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
TEST( getIsRelativeXPresent7, MxCxEmptyTied )
{
	MxCxEmptyTied object;
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
TEST( getIsRelativeYPresent8, MxCxEmptyTied )
{
	MxCxEmptyTied object;
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
TEST( getIsPlacementPresent9, MxCxEmptyTied )
{
	MxCxEmptyTied object;
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
TEST( getIsOrientationPresent10, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsOrientationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsOrientationPresent( true );
	expected = true;
	actual = object.getIsOrientationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsOrientationPresent( false );
	expected = false;
	actual = object.getIsOrientationPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffsetPresent11, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierOffsetPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierOffsetPresent( true );
	expected = true;
	actual = object.getIsBezierOffsetPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierOffsetPresent( false );
	expected = false;
	actual = object.getIsBezierOffsetPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffset2Present12, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierOffset2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierOffset2Present( true );
	expected = true;
	actual = object.getIsBezierOffset2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierOffset2Present( false );
	expected = false;
	actual = object.getIsBezierOffset2Present();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierXPresent13, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierXPresent( true );
	expected = true;
	actual = object.getIsBezierXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierXPresent( false );
	expected = false;
	actual = object.getIsBezierXPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierYPresent14, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierYPresent( true );
	expected = true;
	actual = object.getIsBezierYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierYPresent( false );
	expected = false;
	actual = object.getIsBezierYPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierX2Present15, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierX2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierX2Present( true );
	expected = true;
	actual = object.getIsBezierX2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierX2Present( false );
	expected = false;
	actual = object.getIsBezierX2Present();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierY2Present16, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierY2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierY2Present( true );
	expected = true;
	actual = object.getIsBezierY2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierY2Present( false );
	expected = false;
	actual = object.getIsBezierY2Present();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorPresent17, MxCxEmptyTied )
{
	MxCxEmptyTied object;
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

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTypeDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsLineTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOrientationDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsOrientationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffsetDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierOffsetDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffset2DefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierOffset2DefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierXDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierYDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierX2DefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierX2DefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierY2DefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsBezierY2DefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxEnumStartStopContinue expected;
	MxEnumStartStopContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineTypeDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxEnumLineType expected;
	MxEnumLineType actual = object.getLineTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getOrientationDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxEnumOverUnder expected;
	MxEnumOverUnder actual = object.getOrientationDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierOffsetDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberDivisions expected;
	MxNumberDivisions actual = object.getBezierOffsetDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierOffset2DefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberDivisions expected;
	MxNumberDivisions actual = object.getBezierOffset2DefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierXDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierYDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierX2DefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierX2DefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierY2DefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierY2DefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyTied )
{
	MxCxEmptyTied object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 61.7 ) );
	object.setSpaceLength( MxNumberTenths( 61.7 ) );
	object.setDefaultX( MxNumberTenths( 202.8 ) );
	object.setDefaultY( MxNumberTenths( 202.8 ) );
	object.setRelativeX( MxNumberTenths( 202.8 ) );
	object.setRelativeY( MxNumberTenths( 202.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 11.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 11.2 ) );
	object.setBezierX( MxNumberTenths( 11.2 ) );
	object.setBezierY( MxNumberTenths( 11.2 ) );
	object.setBezierX2( MxNumberTenths( 11.2 ) );
	object.setBezierY2( MxNumberTenths( 11.2 ) );
	object.setColor( MxColor( "#393A3938" ) );
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"61.7\" space-length=\"61.7\" default-x=\"202.8\" default-y=\"202.8\" relative-x=\"202.8\" relative-y=\"202.8\" placement=\"below\" orientation=\"over\" bezier-offset=\"11.2\" bezier-offset2=\"11.2\" bezier-x=\"11.2\" bezier-y=\"11.2\" bezier-x2=\"11.2\" bezier-y2=\"11.2\" color=\"#393A3938\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 61.8 ) );
	object.setSpaceLength( MxNumberTenths( 61.8 ) );
	object.setDefaultX( MxNumberTenths( 202.9 ) );
	object.setDefaultY( MxNumberTenths( 202.9 ) );
	object.setRelativeX( MxNumberTenths( 202.9 ) );
	object.setRelativeY( MxNumberTenths( 202.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 11.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 11.3 ) );
	object.setBezierX( MxNumberTenths( 11.3 ) );
	object.setBezierY( MxNumberTenths( 11.3 ) );
	object.setBezierX2( MxNumberTenths( 11.3 ) );
	object.setBezierY2( MxNumberTenths( 11.3 ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-type=\"dotted\" dash-length=\"61.8\" space-length=\"61.8\" default-x=\"202.9\" default-y=\"202.9\" relative-x=\"202.9\" relative-y=\"202.9\" placement=\"above\" orientation=\"under\" bezier-offset=\"11.3\" bezier-offset2=\"11.3\" bezier-x=\"11.3\" bezier-y=\"11.3\" bezier-x2=\"11.3\" bezier-y2=\"11.3\" color=\"#3C3B3A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 61.9 ) );
	object.setSpaceLength( MxNumberTenths( 61.9 ) );
	object.setDefaultX( MxNumberTenths( 203 ) );
	object.setDefaultY( MxNumberTenths( 203 ) );
	object.setRelativeX( MxNumberTenths( 203 ) );
	object.setRelativeY( MxNumberTenths( 203 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 11.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 11.4 ) );
	object.setBezierX( MxNumberTenths( 11.4 ) );
	object.setBezierY( MxNumberTenths( 11.4 ) );
	object.setBezierX2( MxNumberTenths( 11.4 ) );
	object.setBezierY2( MxNumberTenths( 11.4 ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<musicxmlishard type=\"start\" line-type=\"wavy\" dash-length=\"61.9\" space-length=\"61.9\" default-x=\"203\" default-y=\"203\" relative-x=\"203\" relative-y=\"203\" placement=\"below\" orientation=\"over\" bezier-offset=\"11.4\" bezier-offset2=\"11.4\" bezier-x=\"11.4\" bezier-y=\"11.4\" bezier-x2=\"11.4\" bezier-y2=\"11.4\" color=\"#3D3E3D3C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 62 ) );
	object.setSpaceLength( MxNumberTenths( 62 ) );
	object.setDefaultX( MxNumberTenths( 203.1 ) );
	object.setDefaultY( MxNumberTenths( 203.1 ) );
	object.setRelativeX( MxNumberTenths( 203.1 ) );
	object.setRelativeY( MxNumberTenths( 203.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 11.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 11.5 ) );
	object.setBezierX( MxNumberTenths( 11.5 ) );
	object.setBezierY( MxNumberTenths( 11.5 ) );
	object.setBezierX2( MxNumberTenths( 11.5 ) );
	object.setBezierY2( MxNumberTenths( 11.5 ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<bishop type=\"start\" dash-length=\"62\" space-length=\"62\" default-x=\"203.1\" default-y=\"203.1\" relative-x=\"203.1\" relative-y=\"203.1\" placement=\"above\" orientation=\"under\" bezier-offset=\"11.5\" bezier-offset2=\"11.5\" bezier-x=\"11.5\" bezier-y=\"11.5\" bezier-x2=\"11.5\" bezier-y2=\"11.5\" color=\"#403F3E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 62.1 ) );
	object.setSpaceLength( MxNumberTenths( 62.1 ) );
	object.setDefaultX( MxNumberTenths( 203.2 ) );
	object.setDefaultY( MxNumberTenths( 203.2 ) );
	object.setRelativeX( MxNumberTenths( 203.2 ) );
	object.setRelativeY( MxNumberTenths( 203.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 11.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 11.6 ) );
	object.setBezierX( MxNumberTenths( 11.6 ) );
	object.setBezierY( MxNumberTenths( 11.6 ) );
	object.setBezierX2( MxNumberTenths( 11.6 ) );
	object.setBezierY2( MxNumberTenths( 11.6 ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<charlie type=\"start\" number=\"1\" space-length=\"62.1\" default-x=\"203.2\" default-y=\"203.2\" relative-x=\"203.2\" relative-y=\"203.2\" placement=\"below\" orientation=\"over\" bezier-offset=\"11.6\" bezier-offset2=\"11.6\" bezier-x=\"11.6\" bezier-y=\"11.6\" bezier-x2=\"11.6\" bezier-y2=\"11.6\" color=\"#41424140\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 62.2 ) );
	object.setSpaceLength( MxNumberTenths( 62.2 ) );
	object.setDefaultX( MxNumberTenths( 203.3 ) );
	object.setDefaultY( MxNumberTenths( 203.3 ) );
	object.setRelativeX( MxNumberTenths( 203.3 ) );
	object.setRelativeY( MxNumberTenths( 203.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 11.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 11.7 ) );
	object.setBezierX( MxNumberTenths( 11.7 ) );
	object.setBezierY( MxNumberTenths( 11.7 ) );
	object.setBezierX2( MxNumberTenths( 11.7 ) );
	object.setBezierY2( MxNumberTenths( 11.7 ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"203.3\" default-y=\"203.3\" relative-x=\"203.3\" relative-y=\"203.3\" placement=\"above\" orientation=\"under\" bezier-offset=\"11.7\" bezier-offset2=\"11.7\" bezier-x=\"11.7\" bezier-y=\"11.7\" bezier-x2=\"11.7\" bezier-y2=\"11.7\" color=\"#444342\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 62.3 ) );
	object.setSpaceLength( MxNumberTenths( 62.3 ) );
	object.setDefaultX( MxNumberTenths( 203.4 ) );
	object.setDefaultY( MxNumberTenths( 203.4 ) );
	object.setRelativeX( MxNumberTenths( 203.4 ) );
	object.setRelativeY( MxNumberTenths( 203.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 11.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 11.8 ) );
	object.setBezierX( MxNumberTenths( 11.8 ) );
	object.setBezierY( MxNumberTenths( 11.8 ) );
	object.setBezierX2( MxNumberTenths( 11.8 ) );
	object.setBezierY2( MxNumberTenths( 11.8 ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<quiet type=\"start\" line-type=\"wavy\" default-y=\"203.4\" relative-x=\"203.4\" relative-y=\"203.4\" placement=\"below\" orientation=\"over\" bezier-offset=\"11.8\" bezier-offset2=\"11.8\" bezier-x=\"11.8\" bezier-y=\"11.8\" bezier-x2=\"11.8\" bezier-y2=\"11.8\" color=\"#45464544\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 62.4 ) );
	object.setSpaceLength( MxNumberTenths( 62.4 ) );
	object.setDefaultX( MxNumberTenths( 203.5 ) );
	object.setDefaultY( MxNumberTenths( 203.5 ) );
	object.setRelativeX( MxNumberTenths( 203.5 ) );
	object.setRelativeY( MxNumberTenths( 203.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 11.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 11.9 ) );
	object.setBezierX( MxNumberTenths( 11.9 ) );
	object.setBezierY( MxNumberTenths( 11.9 ) );
	object.setBezierX2( MxNumberTenths( 11.9 ) );
	object.setBezierY2( MxNumberTenths( 11.9 ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<musicxmlishard type=\"start\" line-type=\"solid\" relative-x=\"203.5\" relative-y=\"203.5\" placement=\"above\" orientation=\"under\" bezier-offset=\"11.9\" bezier-offset2=\"11.9\" bezier-x=\"11.9\" bezier-y=\"11.9\" bezier-x2=\"11.9\" bezier-y2=\"11.9\" color=\"#484746\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 62.5 ) );
	object.setSpaceLength( MxNumberTenths( 62.5 ) );
	object.setDefaultX( MxNumberTenths( 203.6 ) );
	object.setDefaultY( MxNumberTenths( 203.6 ) );
	object.setRelativeX( MxNumberTenths( 203.6 ) );
	object.setRelativeY( MxNumberTenths( 203.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 12 ) );
	object.setBezierOffset2( MxNumberDivisions( 12 ) );
	object.setBezierX( MxNumberTenths( 12 ) );
	object.setBezierY( MxNumberTenths( 12 ) );
	object.setBezierX2( MxNumberTenths( 12 ) );
	object.setBezierY2( MxNumberTenths( 12 ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"62.5\" relative-y=\"203.6\" placement=\"below\" orientation=\"over\" bezier-offset=\"12\" bezier-offset2=\"12\" bezier-x=\"12\" bezier-y=\"12\" bezier-x2=\"12\" bezier-y2=\"12\" color=\"#494A4948\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 62.6 ) );
	object.setSpaceLength( MxNumberTenths( 62.6 ) );
	object.setDefaultX( MxNumberTenths( 203.7 ) );
	object.setDefaultY( MxNumberTenths( 203.7 ) );
	object.setRelativeX( MxNumberTenths( 203.7 ) );
	object.setRelativeY( MxNumberTenths( 203.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 12.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 12.1 ) );
	object.setBezierX( MxNumberTenths( 12.1 ) );
	object.setBezierY( MxNumberTenths( 12.1 ) );
	object.setBezierX2( MxNumberTenths( 12.1 ) );
	object.setBezierY2( MxNumberTenths( 12.1 ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<charlie type=\"start\" number=\"1\" dash-length=\"62.6\" placement=\"above\" orientation=\"under\" bezier-offset=\"12.1\" bezier-offset2=\"12.1\" bezier-x=\"12.1\" bezier-y=\"12.1\" bezier-x2=\"12.1\" bezier-y2=\"12.1\" color=\"#4C4B4A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 62.7 ) );
	object.setSpaceLength( MxNumberTenths( 62.7 ) );
	object.setDefaultX( MxNumberTenths( 203.8 ) );
	object.setDefaultY( MxNumberTenths( 203.8 ) );
	object.setRelativeX( MxNumberTenths( 203.8 ) );
	object.setRelativeY( MxNumberTenths( 203.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 12.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 12.2 ) );
	object.setBezierX( MxNumberTenths( 12.2 ) );
	object.setBezierY( MxNumberTenths( 12.2 ) );
	object.setBezierX2( MxNumberTenths( 12.2 ) );
	object.setBezierY2( MxNumberTenths( 12.2 ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<booksmart type=\"start\" dash-length=\"62.7\" space-length=\"62.7\" orientation=\"over\" bezier-offset=\"12.2\" bezier-offset2=\"12.2\" bezier-x=\"12.2\" bezier-y=\"12.2\" bezier-x2=\"12.2\" bezier-y2=\"12.2\" color=\"#4D4E4D4C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 62.8 ) );
	object.setSpaceLength( MxNumberTenths( 62.8 ) );
	object.setDefaultX( MxNumberTenths( 203.9 ) );
	object.setDefaultY( MxNumberTenths( 203.9 ) );
	object.setRelativeX( MxNumberTenths( 203.9 ) );
	object.setRelativeY( MxNumberTenths( 203.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 12.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 12.3 ) );
	object.setBezierX( MxNumberTenths( 12.3 ) );
	object.setBezierY( MxNumberTenths( 12.3 ) );
	object.setBezierX2( MxNumberTenths( 12.3 ) );
	object.setBezierY2( MxNumberTenths( 12.3 ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<quiet type=\"start\" dash-length=\"62.8\" space-length=\"62.8\" bezier-offset=\"12.3\" bezier-offset2=\"12.3\" bezier-x=\"12.3\" bezier-y=\"12.3\" bezier-x2=\"12.3\" bezier-y2=\"12.3\" color=\"#504F4E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 62.9 ) );
	object.setSpaceLength( MxNumberTenths( 62.9 ) );
	object.setDefaultX( MxNumberTenths( 204 ) );
	object.setDefaultY( MxNumberTenths( 204 ) );
	object.setRelativeX( MxNumberTenths( 204 ) );
	object.setRelativeY( MxNumberTenths( 204 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 12.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 12.4 ) );
	object.setBezierX( MxNumberTenths( 12.4 ) );
	object.setBezierY( MxNumberTenths( 12.4 ) );
	object.setBezierX2( MxNumberTenths( 12.4 ) );
	object.setBezierY2( MxNumberTenths( 12.4 ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"dashed\" space-length=\"62.9\" default-x=\"204\" bezier-offset2=\"12.4\" bezier-x=\"12.4\" bezier-y=\"12.4\" bezier-x2=\"12.4\" bezier-y2=\"12.4\" color=\"#51525150\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 63 ) );
	object.setSpaceLength( MxNumberTenths( 63 ) );
	object.setDefaultX( MxNumberTenths( 204.1 ) );
	object.setDefaultY( MxNumberTenths( 204.1 ) );
	object.setRelativeX( MxNumberTenths( 204.1 ) );
	object.setRelativeY( MxNumberTenths( 204.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 12.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 12.5 ) );
	object.setBezierX( MxNumberTenths( 12.5 ) );
	object.setBezierY( MxNumberTenths( 12.5 ) );
	object.setBezierX2( MxNumberTenths( 12.5 ) );
	object.setBezierY2( MxNumberTenths( 12.5 ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-type=\"dotted\" space-length=\"63\" default-x=\"204.1\" bezier-x=\"12.5\" bezier-y=\"12.5\" bezier-x2=\"12.5\" bezier-y2=\"12.5\" color=\"#545352\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 63.1 ) );
	object.setSpaceLength( MxNumberTenths( 63.1 ) );
	object.setDefaultX( MxNumberTenths( 204.2 ) );
	object.setDefaultY( MxNumberTenths( 204.2 ) );
	object.setRelativeX( MxNumberTenths( 204.2 ) );
	object.setRelativeY( MxNumberTenths( 204.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 12.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 12.6 ) );
	object.setBezierX( MxNumberTenths( 12.6 ) );
	object.setBezierY( MxNumberTenths( 12.6 ) );
	object.setBezierX2( MxNumberTenths( 12.6 ) );
	object.setBezierY2( MxNumberTenths( 12.6 ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<charlie type=\"start\" line-type=\"wavy\" space-length=\"63.1\" default-x=\"204.2\" default-y=\"204.2\" bezier-y=\"12.6\" bezier-x2=\"12.6\" bezier-y2=\"12.6\" color=\"#55565554\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 63.2 ) );
	object.setSpaceLength( MxNumberTenths( 63.2 ) );
	object.setDefaultX( MxNumberTenths( 204.3 ) );
	object.setDefaultY( MxNumberTenths( 204.3 ) );
	object.setRelativeX( MxNumberTenths( 204.3 ) );
	object.setRelativeY( MxNumberTenths( 204.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 12.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 12.7 ) );
	object.setBezierX( MxNumberTenths( 12.7 ) );
	object.setBezierY( MxNumberTenths( 12.7 ) );
	object.setBezierX2( MxNumberTenths( 12.7 ) );
	object.setBezierY2( MxNumberTenths( 12.7 ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<booksmart type=\"start\" default-x=\"204.3\" default-y=\"204.3\" bezier-x2=\"12.7\" bezier-y2=\"12.7\" color=\"#585756\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 63.3 ) );
	object.setSpaceLength( MxNumberTenths( 63.3 ) );
	object.setDefaultX( MxNumberTenths( 204.4 ) );
	object.setDefaultY( MxNumberTenths( 204.4 ) );
	object.setRelativeX( MxNumberTenths( 204.4 ) );
	object.setRelativeY( MxNumberTenths( 204.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 12.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 12.8 ) );
	object.setBezierX( MxNumberTenths( 12.8 ) );
	object.setBezierY( MxNumberTenths( 12.8 ) );
	object.setBezierX2( MxNumberTenths( 12.8 ) );
	object.setBezierY2( MxNumberTenths( 12.8 ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"63.3\" default-x=\"204.4\" default-y=\"204.4\" relative-x=\"204.4\" bezier-y2=\"12.8\" color=\"#595A5958\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 63.4 ) );
	object.setSpaceLength( MxNumberTenths( 63.4 ) );
	object.setDefaultX( MxNumberTenths( 204.5 ) );
	object.setDefaultY( MxNumberTenths( 204.5 ) );
	object.setRelativeX( MxNumberTenths( 204.5 ) );
	object.setRelativeY( MxNumberTenths( 204.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 12.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 12.9 ) );
	object.setBezierX( MxNumberTenths( 12.9 ) );
	object.setBezierY( MxNumberTenths( 12.9 ) );
	object.setBezierX2( MxNumberTenths( 12.9 ) );
	object.setBezierY2( MxNumberTenths( 12.9 ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" dash-length=\"63.4\" default-x=\"204.5\" default-y=\"204.5\" relative-x=\"204.5\" color=\"#5C5B5A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 63.5 ) );
	object.setSpaceLength( MxNumberTenths( 63.5 ) );
	object.setDefaultX( MxNumberTenths( 204.6 ) );
	object.setDefaultY( MxNumberTenths( 204.6 ) );
	object.setRelativeX( MxNumberTenths( 204.6 ) );
	object.setRelativeY( MxNumberTenths( 204.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 13 ) );
	object.setBezierOffset2( MxNumberDivisions( 13 ) );
	object.setBezierX( MxNumberTenths( 13 ) );
	object.setBezierY( MxNumberTenths( 13 ) );
	object.setBezierX2( MxNumberTenths( 13 ) );
	object.setBezierY2( MxNumberTenths( 13 ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<bishop type=\"start\" line-type=\"wavy\" dash-length=\"63.5\" default-y=\"204.6\" relative-x=\"204.6\" relative-y=\"204.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 63.6 ) );
	object.setSpaceLength( MxNumberTenths( 63.6 ) );
	object.setDefaultX( MxNumberTenths( 204.7 ) );
	object.setDefaultY( MxNumberTenths( 204.7 ) );
	object.setRelativeX( MxNumberTenths( 204.7 ) );
	object.setRelativeY( MxNumberTenths( 204.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 13.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 13.1 ) );
	object.setBezierX( MxNumberTenths( 13.1 ) );
	object.setBezierY( MxNumberTenths( 13.1 ) );
	object.setBezierX2( MxNumberTenths( 13.1 ) );
	object.setBezierY2( MxNumberTenths( 13.1 ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<charlie type=\"start\" line-type=\"solid\" dash-length=\"63.6\" default-y=\"204.7\" relative-x=\"204.7\" relative-y=\"204.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 63.7 ) );
	object.setSpaceLength( MxNumberTenths( 63.7 ) );
	object.setDefaultX( MxNumberTenths( 204.8 ) );
	object.setDefaultY( MxNumberTenths( 204.8 ) );
	object.setRelativeX( MxNumberTenths( 204.8 ) );
	object.setRelativeY( MxNumberTenths( 204.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 13.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 13.2 ) );
	object.setBezierX( MxNumberTenths( 13.2 ) );
	object.setBezierY( MxNumberTenths( 13.2 ) );
	object.setBezierX2( MxNumberTenths( 13.2 ) );
	object.setBezierY2( MxNumberTenths( 13.2 ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"dashed\" space-length=\"63.7\" default-y=\"204.8\" relative-x=\"204.8\" relative-y=\"204.8\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 63.8 ) );
	object.setSpaceLength( MxNumberTenths( 63.8 ) );
	object.setDefaultX( MxNumberTenths( 204.9 ) );
	object.setDefaultY( MxNumberTenths( 204.9 ) );
	object.setRelativeX( MxNumberTenths( 204.9 ) );
	object.setRelativeY( MxNumberTenths( 204.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 13.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 13.3 ) );
	object.setBezierX( MxNumberTenths( 13.3 ) );
	object.setBezierY( MxNumberTenths( 13.3 ) );
	object.setBezierX2( MxNumberTenths( 13.3 ) );
	object.setBezierY2( MxNumberTenths( 13.3 ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<quiet type=\"start\" number=\"1\" space-length=\"63.8\" relative-x=\"204.9\" relative-y=\"204.9\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 63.9 ) );
	object.setSpaceLength( MxNumberTenths( 63.9 ) );
	object.setDefaultX( MxNumberTenths( 205 ) );
	object.setDefaultY( MxNumberTenths( 205 ) );
	object.setRelativeX( MxNumberTenths( 205 ) );
	object.setRelativeY( MxNumberTenths( 205 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 13.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 13.4 ) );
	object.setBezierX( MxNumberTenths( 13.4 ) );
	object.setBezierY( MxNumberTenths( 13.4 ) );
	object.setBezierX2( MxNumberTenths( 13.4 ) );
	object.setBezierY2( MxNumberTenths( 13.4 ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<musicxmlishard type=\"start\" space-length=\"63.9\" relative-x=\"205\" relative-y=\"205\" placement=\"below\" orientation=\"over\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 64 ) );
	object.setSpaceLength( MxNumberTenths( 64 ) );
	object.setDefaultX( MxNumberTenths( 205.1 ) );
	object.setDefaultY( MxNumberTenths( 205.1 ) );
	object.setRelativeX( MxNumberTenths( 205.1 ) );
	object.setRelativeY( MxNumberTenths( 205.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 13.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 13.5 ) );
	object.setBezierX( MxNumberTenths( 13.5 ) );
	object.setBezierY( MxNumberTenths( 13.5 ) );
	object.setBezierX2( MxNumberTenths( 13.5 ) );
	object.setBezierY2( MxNumberTenths( 13.5 ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<bishop type=\"start\" space-length=\"64\" relative-x=\"205.1\" relative-y=\"205.1\" placement=\"above\" orientation=\"under\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 64.1 ) );
	object.setSpaceLength( MxNumberTenths( 64.1 ) );
	object.setDefaultX( MxNumberTenths( 205.2 ) );
	object.setDefaultY( MxNumberTenths( 205.2 ) );
	object.setRelativeX( MxNumberTenths( 205.2 ) );
	object.setRelativeY( MxNumberTenths( 205.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 13.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 13.6 ) );
	object.setBezierX( MxNumberTenths( 13.6 ) );
	object.setBezierY( MxNumberTenths( 13.6 ) );
	object.setBezierX2( MxNumberTenths( 13.6 ) );
	object.setBezierY2( MxNumberTenths( 13.6 ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"64.1\" space-length=\"64.1\" default-x=\"205.2\" relative-y=\"205.2\" placement=\"below\" orientation=\"over\" bezier-offset=\"13.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 64.2 ) );
	object.setSpaceLength( MxNumberTenths( 64.2 ) );
	object.setDefaultX( MxNumberTenths( 205.3 ) );
	object.setDefaultY( MxNumberTenths( 205.3 ) );
	object.setRelativeX( MxNumberTenths( 205.3 ) );
	object.setRelativeY( MxNumberTenths( 205.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 13.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 13.7 ) );
	object.setBezierX( MxNumberTenths( 13.7 ) );
	object.setBezierY( MxNumberTenths( 13.7 ) );
	object.setBezierX2( MxNumberTenths( 13.7 ) );
	object.setBezierY2( MxNumberTenths( 13.7 ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"dotted\" dash-length=\"64.2\" default-x=\"205.3\" relative-y=\"205.3\" placement=\"above\" orientation=\"under\" bezier-offset=\"13.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 64.3 ) );
	object.setSpaceLength( MxNumberTenths( 64.3 ) );
	object.setDefaultX( MxNumberTenths( 205.4 ) );
	object.setDefaultY( MxNumberTenths( 205.4 ) );
	object.setRelativeX( MxNumberTenths( 205.4 ) );
	object.setRelativeY( MxNumberTenths( 205.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 13.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 13.8 ) );
	object.setBezierX( MxNumberTenths( 13.8 ) );
	object.setBezierY( MxNumberTenths( 13.8 ) );
	object.setBezierX2( MxNumberTenths( 13.8 ) );
	object.setBezierY2( MxNumberTenths( 13.8 ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<quiet type=\"start\" line-type=\"wavy\" dash-length=\"64.3\" default-x=\"205.4\" relative-y=\"205.4\" placement=\"below\" orientation=\"over\" bezier-offset=\"13.8\" bezier-offset2=\"13.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 64.4 ) );
	object.setSpaceLength( MxNumberTenths( 64.4 ) );
	object.setDefaultX( MxNumberTenths( 205.5 ) );
	object.setDefaultY( MxNumberTenths( 205.5 ) );
	object.setRelativeX( MxNumberTenths( 205.5 ) );
	object.setRelativeY( MxNumberTenths( 205.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 13.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 13.9 ) );
	object.setBezierX( MxNumberTenths( 13.9 ) );
	object.setBezierY( MxNumberTenths( 13.9 ) );
	object.setBezierX2( MxNumberTenths( 13.9 ) );
	object.setBezierY2( MxNumberTenths( 13.9 ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<musicxmlishard type=\"start\" dash-length=\"64.4\" default-x=\"205.5\" placement=\"above\" orientation=\"under\" bezier-offset=\"13.9\" bezier-offset2=\"13.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 64.5 ) );
	object.setSpaceLength( MxNumberTenths( 64.5 ) );
	object.setDefaultX( MxNumberTenths( 205.6 ) );
	object.setDefaultY( MxNumberTenths( 205.6 ) );
	object.setRelativeX( MxNumberTenths( 205.6 ) );
	object.setRelativeY( MxNumberTenths( 205.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 14 ) );
	object.setBezierOffset2( MxNumberDivisions( 14 ) );
	object.setBezierX( MxNumberTenths( 14 ) );
	object.setBezierY( MxNumberTenths( 14 ) );
	object.setBezierX2( MxNumberTenths( 14 ) );
	object.setBezierY2( MxNumberTenths( 14 ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"205.6\" default-y=\"205.6\" placement=\"below\" orientation=\"over\" bezier-offset=\"14\" bezier-offset2=\"14\" bezier-x=\"14\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 64.6 ) );
	object.setSpaceLength( MxNumberTenths( 64.6 ) );
	object.setDefaultX( MxNumberTenths( 205.7 ) );
	object.setDefaultY( MxNumberTenths( 205.7 ) );
	object.setRelativeX( MxNumberTenths( 205.7 ) );
	object.setRelativeY( MxNumberTenths( 205.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 14.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 14.1 ) );
	object.setBezierX( MxNumberTenths( 14.1 ) );
	object.setBezierY( MxNumberTenths( 14.1 ) );
	object.setBezierX2( MxNumberTenths( 14.1 ) );
	object.setBezierY2( MxNumberTenths( 14.1 ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"205.7\" default-y=\"205.7\" placement=\"above\" orientation=\"under\" bezier-offset=\"14.1\" bezier-offset2=\"14.1\" bezier-x=\"14.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 64.7 ) );
	object.setSpaceLength( MxNumberTenths( 64.7 ) );
	object.setDefaultX( MxNumberTenths( 205.8 ) );
	object.setDefaultY( MxNumberTenths( 205.8 ) );
	object.setRelativeX( MxNumberTenths( 205.8 ) );
	object.setRelativeY( MxNumberTenths( 205.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 14.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 14.2 ) );
	object.setBezierX( MxNumberTenths( 14.2 ) );
	object.setBezierY( MxNumberTenths( 14.2 ) );
	object.setBezierX2( MxNumberTenths( 14.2 ) );
	object.setBezierY2( MxNumberTenths( 14.2 ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<booksmart type=\"start\" line-type=\"wavy\" space-length=\"64.7\" default-y=\"205.8\" orientation=\"over\" bezier-offset=\"14.2\" bezier-offset2=\"14.2\" bezier-x=\"14.2\" bezier-y=\"14.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 64.8 ) );
	object.setSpaceLength( MxNumberTenths( 64.8 ) );
	object.setDefaultX( MxNumberTenths( 205.9 ) );
	object.setDefaultY( MxNumberTenths( 205.9 ) );
	object.setRelativeX( MxNumberTenths( 205.9 ) );
	object.setRelativeY( MxNumberTenths( 205.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 14.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 14.3 ) );
	object.setBezierX( MxNumberTenths( 14.3 ) );
	object.setBezierY( MxNumberTenths( 14.3 ) );
	object.setBezierX2( MxNumberTenths( 14.3 ) );
	object.setBezierY2( MxNumberTenths( 14.3 ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<quiet type=\"start\" line-type=\"solid\" space-length=\"64.8\" default-y=\"205.9\" orientation=\"under\" bezier-offset=\"14.3\" bezier-offset2=\"14.3\" bezier-x=\"14.3\" bezier-y=\"14.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 64.9 ) );
	object.setSpaceLength( MxNumberTenths( 64.9 ) );
	object.setDefaultX( MxNumberTenths( 206 ) );
	object.setDefaultY( MxNumberTenths( 206 ) );
	object.setRelativeX( MxNumberTenths( 206 ) );
	object.setRelativeY( MxNumberTenths( 206 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 14.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 14.4 ) );
	object.setBezierX( MxNumberTenths( 14.4 ) );
	object.setBezierY( MxNumberTenths( 14.4 ) );
	object.setBezierX2( MxNumberTenths( 14.4 ) );
	object.setBezierY2( MxNumberTenths( 14.4 ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"64.9\" space-length=\"64.9\" default-y=\"206\" relative-x=\"206\" orientation=\"over\" bezier-offset=\"14.4\" bezier-offset2=\"14.4\" bezier-x=\"14.4\" bezier-y=\"14.4\" bezier-x2=\"14.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 65 ) );
	object.setSpaceLength( MxNumberTenths( 65 ) );
	object.setDefaultX( MxNumberTenths( 206.1 ) );
	object.setDefaultY( MxNumberTenths( 206.1 ) );
	object.setRelativeX( MxNumberTenths( 206.1 ) );
	object.setRelativeY( MxNumberTenths( 206.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 14.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 14.5 ) );
	object.setBezierX( MxNumberTenths( 14.5 ) );
	object.setBezierY( MxNumberTenths( 14.5 ) );
	object.setBezierX2( MxNumberTenths( 14.5 ) );
	object.setBezierY2( MxNumberTenths( 14.5 ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<bishop type=\"start\" number=\"1\" dash-length=\"65\" space-length=\"65\" default-y=\"206.1\" relative-x=\"206.1\" bezier-offset=\"14.5\" bezier-offset2=\"14.5\" bezier-x=\"14.5\" bezier-y=\"14.5\" bezier-x2=\"14.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 65.1 ) );
	object.setSpaceLength( MxNumberTenths( 65.1 ) );
	object.setDefaultX( MxNumberTenths( 206.2 ) );
	object.setDefaultY( MxNumberTenths( 206.2 ) );
	object.setRelativeX( MxNumberTenths( 206.2 ) );
	object.setRelativeY( MxNumberTenths( 206.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 14.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 14.6 ) );
	object.setBezierX( MxNumberTenths( 14.6 ) );
	object.setBezierY( MxNumberTenths( 14.6 ) );
	object.setBezierX2( MxNumberTenths( 14.6 ) );
	object.setBezierY2( MxNumberTenths( 14.6 ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<charlie type=\"start\" dash-length=\"65.1\" space-length=\"65.1\" default-y=\"206.2\" relative-x=\"206.2\" bezier-offset=\"14.6\" bezier-offset2=\"14.6\" bezier-x=\"14.6\" bezier-y=\"14.6\" bezier-x2=\"14.6\" bezier-y2=\"14.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 65.2 ) );
	object.setSpaceLength( MxNumberTenths( 65.2 ) );
	object.setDefaultX( MxNumberTenths( 206.3 ) );
	object.setDefaultY( MxNumberTenths( 206.3 ) );
	object.setRelativeX( MxNumberTenths( 206.3 ) );
	object.setRelativeY( MxNumberTenths( 206.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 14.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 14.7 ) );
	object.setBezierX( MxNumberTenths( 14.7 ) );
	object.setBezierY( MxNumberTenths( 14.7 ) );
	object.setBezierX2( MxNumberTenths( 14.7 ) );
	object.setBezierY2( MxNumberTenths( 14.7 ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<booksmart type=\"start\" dash-length=\"65.2\" relative-x=\"206.3\" bezier-offset=\"14.7\" bezier-offset2=\"14.7\" bezier-x=\"14.7\" bezier-y=\"14.7\" bezier-x2=\"14.7\" bezier-y2=\"14.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 65.3 ) );
	object.setSpaceLength( MxNumberTenths( 65.3 ) );
	object.setDefaultX( MxNumberTenths( 206.4 ) );
	object.setDefaultY( MxNumberTenths( 206.4 ) );
	object.setRelativeX( MxNumberTenths( 206.4 ) );
	object.setRelativeY( MxNumberTenths( 206.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 14.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 14.8 ) );
	object.setBezierX( MxNumberTenths( 14.8 ) );
	object.setBezierY( MxNumberTenths( 14.8 ) );
	object.setBezierX2( MxNumberTenths( 14.8 ) );
	object.setBezierY2( MxNumberTenths( 14.8 ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-type=\"dashed\" default-x=\"206.4\" relative-x=\"206.4\" relative-y=\"206.4\" bezier-offset2=\"14.8\" bezier-x=\"14.8\" bezier-y=\"14.8\" bezier-x2=\"14.8\" bezier-y2=\"14.8\" color=\"#81828180\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 65.4 ) );
	object.setSpaceLength( MxNumberTenths( 65.4 ) );
	object.setDefaultX( MxNumberTenths( 206.5 ) );
	object.setDefaultY( MxNumberTenths( 206.5 ) );
	object.setRelativeX( MxNumberTenths( 206.5 ) );
	object.setRelativeY( MxNumberTenths( 206.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 14.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 14.9 ) );
	object.setBezierX( MxNumberTenths( 14.9 ) );
	object.setBezierY( MxNumberTenths( 14.9 ) );
	object.setBezierX2( MxNumberTenths( 14.9 ) );
	object.setBezierY2( MxNumberTenths( 14.9 ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"dotted\" default-x=\"206.5\" relative-x=\"206.5\" relative-y=\"206.5\" bezier-offset2=\"14.9\" bezier-x=\"14.9\" bezier-y=\"14.9\" bezier-x2=\"14.9\" bezier-y2=\"14.9\" color=\"#848382\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 65.5 ) );
	object.setSpaceLength( MxNumberTenths( 65.5 ) );
	object.setDefaultX( MxNumberTenths( 206.6 ) );
	object.setDefaultY( MxNumberTenths( 206.6 ) );
	object.setRelativeX( MxNumberTenths( 206.6 ) );
	object.setRelativeY( MxNumberTenths( 206.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 15 ) );
	object.setBezierOffset2( MxNumberDivisions( 15 ) );
	object.setBezierX( MxNumberTenths( 15 ) );
	object.setBezierY( MxNumberTenths( 15 ) );
	object.setBezierX2( MxNumberTenths( 15 ) );
	object.setBezierY2( MxNumberTenths( 15 ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<bishop type=\"start\" line-type=\"wavy\" default-x=\"206.6\" relative-x=\"206.6\" relative-y=\"206.6\" bezier-offset2=\"15\" bezier-x=\"15\" bezier-y=\"15\" bezier-x2=\"15\" bezier-y2=\"15\" color=\"#85868584\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 65.6 ) );
	object.setSpaceLength( MxNumberTenths( 65.6 ) );
	object.setDefaultX( MxNumberTenths( 206.7 ) );
	object.setDefaultY( MxNumberTenths( 206.7 ) );
	object.setRelativeX( MxNumberTenths( 206.7 ) );
	object.setRelativeY( MxNumberTenths( 206.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 15.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 15.1 ) );
	object.setBezierX( MxNumberTenths( 15.1 ) );
	object.setBezierY( MxNumberTenths( 15.1 ) );
	object.setBezierX2( MxNumberTenths( 15.1 ) );
	object.setBezierY2( MxNumberTenths( 15.1 ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<charlie type=\"start\" default-x=\"206.7\" relative-x=\"206.7\" relative-y=\"206.7\" bezier-x=\"15.1\" bezier-y=\"15.1\" bezier-x2=\"15.1\" bezier-y2=\"15.1\" color=\"#888786\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 65.7 ) );
	object.setSpaceLength( MxNumberTenths( 65.7 ) );
	object.setDefaultX( MxNumberTenths( 206.8 ) );
	object.setDefaultY( MxNumberTenths( 206.8 ) );
	object.setRelativeX( MxNumberTenths( 206.8 ) );
	object.setRelativeY( MxNumberTenths( 206.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 15.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 15.2 ) );
	object.setBezierX( MxNumberTenths( 15.2 ) );
	object.setBezierY( MxNumberTenths( 15.2 ) );
	object.setBezierX2( MxNumberTenths( 15.2 ) );
	object.setBezierY2( MxNumberTenths( 15.2 ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<booksmart type=\"start\" number=\"1\" dash-length=\"65.7\" space-length=\"65.7\" default-x=\"206.8\" relative-y=\"206.8\" placement=\"below\" bezier-x=\"15.2\" bezier-y=\"15.2\" bezier-x2=\"15.2\" bezier-y2=\"15.2\" color=\"#898A8988\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 65.8 ) );
	object.setSpaceLength( MxNumberTenths( 65.8 ) );
	object.setDefaultX( MxNumberTenths( 206.9 ) );
	object.setDefaultY( MxNumberTenths( 206.9 ) );
	object.setRelativeX( MxNumberTenths( 206.9 ) );
	object.setRelativeY( MxNumberTenths( 206.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 15.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 15.3 ) );
	object.setBezierX( MxNumberTenths( 15.3 ) );
	object.setBezierY( MxNumberTenths( 15.3 ) );
	object.setBezierX2( MxNumberTenths( 15.3 ) );
	object.setBezierY2( MxNumberTenths( 15.3 ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"65.8\" space-length=\"65.8\" default-x=\"206.9\" relative-y=\"206.9\" placement=\"above\" bezier-x=\"15.3\" bezier-y=\"15.3\" bezier-x2=\"15.3\" bezier-y2=\"15.3\" color=\"#8C8B8A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 65.9 ) );
	object.setSpaceLength( MxNumberTenths( 65.9 ) );
	object.setDefaultX( MxNumberTenths( 207 ) );
	object.setDefaultY( MxNumberTenths( 207 ) );
	object.setRelativeX( MxNumberTenths( 207 ) );
	object.setRelativeY( MxNumberTenths( 207 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 15.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 15.4 ) );
	object.setBezierX( MxNumberTenths( 15.4 ) );
	object.setBezierY( MxNumberTenths( 15.4 ) );
	object.setBezierX2( MxNumberTenths( 15.4 ) );
	object.setBezierY2( MxNumberTenths( 15.4 ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<musicxmlishard type=\"start\" line-type=\"wavy\" dash-length=\"65.9\" space-length=\"65.9\" default-y=\"207\" relative-y=\"207\" placement=\"below\" bezier-y=\"15.4\" bezier-x2=\"15.4\" bezier-y2=\"15.4\" color=\"#8D8E8D8C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 66 ) );
	object.setSpaceLength( MxNumberTenths( 66 ) );
	object.setDefaultX( MxNumberTenths( 207.1 ) );
	object.setDefaultY( MxNumberTenths( 207.1 ) );
	object.setRelativeX( MxNumberTenths( 207.1 ) );
	object.setRelativeY( MxNumberTenths( 207.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 15.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 15.5 ) );
	object.setBezierX( MxNumberTenths( 15.5 ) );
	object.setBezierY( MxNumberTenths( 15.5 ) );
	object.setBezierX2( MxNumberTenths( 15.5 ) );
	object.setBezierY2( MxNumberTenths( 15.5 ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<bishop type=\"start\" line-type=\"solid\" dash-length=\"66\" space-length=\"66\" default-y=\"207.1\" relative-y=\"207.1\" placement=\"above\" bezier-y=\"15.5\" bezier-x2=\"15.5\" bezier-y2=\"15.5\" color=\"#908F8E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 66.1 ) );
	object.setSpaceLength( MxNumberTenths( 66.1 ) );
	object.setDefaultX( MxNumberTenths( 207.2 ) );
	object.setDefaultY( MxNumberTenths( 207.2 ) );
	object.setRelativeX( MxNumberTenths( 207.2 ) );
	object.setRelativeY( MxNumberTenths( 207.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 15.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 15.6 ) );
	object.setBezierX( MxNumberTenths( 15.6 ) );
	object.setBezierY( MxNumberTenths( 15.6 ) );
	object.setBezierX2( MxNumberTenths( 15.6 ) );
	object.setBezierY2( MxNumberTenths( 15.6 ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-type=\"dashed\" space-length=\"66.1\" default-y=\"207.2\" relative-y=\"207.2\" placement=\"below\" orientation=\"over\" bezier-y=\"15.6\" bezier-x2=\"15.6\" bezier-y2=\"15.6\" color=\"#91929190\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 66.2 ) );
	object.setSpaceLength( MxNumberTenths( 66.2 ) );
	object.setDefaultX( MxNumberTenths( 207.3 ) );
	object.setDefaultY( MxNumberTenths( 207.3 ) );
	object.setRelativeX( MxNumberTenths( 207.3 ) );
	object.setRelativeY( MxNumberTenths( 207.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 15.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 15.7 ) );
	object.setBezierX( MxNumberTenths( 15.7 ) );
	object.setBezierY( MxNumberTenths( 15.7 ) );
	object.setBezierX2( MxNumberTenths( 15.7 ) );
	object.setBezierY2( MxNumberTenths( 15.7 ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-y=\"207.3\" placement=\"above\" orientation=\"under\" bezier-x2=\"15.7\" bezier-y2=\"15.7\" color=\"#949392\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 66.3 ) );
	object.setSpaceLength( MxNumberTenths( 66.3 ) );
	object.setDefaultX( MxNumberTenths( 207.4 ) );
	object.setDefaultY( MxNumberTenths( 207.4 ) );
	object.setRelativeX( MxNumberTenths( 207.4 ) );
	object.setRelativeY( MxNumberTenths( 207.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 15.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 15.8 ) );
	object.setBezierX( MxNumberTenths( 15.8 ) );
	object.setBezierY( MxNumberTenths( 15.8 ) );
	object.setBezierX2( MxNumberTenths( 15.8 ) );
	object.setBezierY2( MxNumberTenths( 15.8 ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<quiet type=\"start\" default-y=\"207.4\" placement=\"below\" orientation=\"over\" bezier-x2=\"15.8\" bezier-y2=\"15.8\" color=\"#95969594\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 66.4 ) );
	object.setSpaceLength( MxNumberTenths( 66.4 ) );
	object.setDefaultX( MxNumberTenths( 207.5 ) );
	object.setDefaultY( MxNumberTenths( 207.5 ) );
	object.setRelativeX( MxNumberTenths( 207.5 ) );
	object.setRelativeY( MxNumberTenths( 207.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 15.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 15.9 ) );
	object.setBezierX( MxNumberTenths( 15.9 ) );
	object.setBezierY( MxNumberTenths( 15.9 ) );
	object.setBezierX2( MxNumberTenths( 15.9 ) );
	object.setBezierY2( MxNumberTenths( 15.9 ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"207.5\" placement=\"above\" orientation=\"under\" bezier-x2=\"15.9\" bezier-y2=\"15.9\" color=\"#989796\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 66.5 ) );
	object.setSpaceLength( MxNumberTenths( 66.5 ) );
	object.setDefaultX( MxNumberTenths( 207.6 ) );
	object.setDefaultY( MxNumberTenths( 207.6 ) );
	object.setRelativeX( MxNumberTenths( 207.6 ) );
	object.setRelativeY( MxNumberTenths( 207.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 16 ) );
	object.setBezierOffset2( MxNumberDivisions( 16 ) );
	object.setBezierX( MxNumberTenths( 16 ) );
	object.setBezierY( MxNumberTenths( 16 ) );
	object.setBezierX2( MxNumberTenths( 16 ) );
	object.setBezierY2( MxNumberTenths( 16 ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"66.5\" default-x=\"207.6\" default-y=\"207.6\" relative-x=\"207.6\" placement=\"below\" orientation=\"over\" bezier-offset=\"16\" bezier-y2=\"16\" color=\"#999A9998\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 66.6 ) );
	object.setSpaceLength( MxNumberTenths( 66.6 ) );
	object.setDefaultX( MxNumberTenths( 207.7 ) );
	object.setDefaultY( MxNumberTenths( 207.7 ) );
	object.setRelativeX( MxNumberTenths( 207.7 ) );
	object.setRelativeY( MxNumberTenths( 207.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 16.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 16.1 ) );
	object.setBezierX( MxNumberTenths( 16.1 ) );
	object.setBezierY( MxNumberTenths( 16.1 ) );
	object.setBezierX2( MxNumberTenths( 16.1 ) );
	object.setBezierY2( MxNumberTenths( 16.1 ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-type=\"dotted\" dash-length=\"66.6\" default-x=\"207.7\" relative-x=\"207.7\" placement=\"above\" orientation=\"under\" bezier-offset=\"16.1\" bezier-y2=\"16.1\" color=\"#9C9B9A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 66.7 ) );
	object.setSpaceLength( MxNumberTenths( 66.7 ) );
	object.setDefaultX( MxNumberTenths( 207.8 ) );
	object.setDefaultY( MxNumberTenths( 207.8 ) );
	object.setRelativeX( MxNumberTenths( 207.8 ) );
	object.setRelativeY( MxNumberTenths( 207.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 16.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 16.2 ) );
	object.setBezierX( MxNumberTenths( 16.2 ) );
	object.setBezierY( MxNumberTenths( 16.2 ) );
	object.setBezierX2( MxNumberTenths( 16.2 ) );
	object.setBezierY2( MxNumberTenths( 16.2 ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<booksmart type=\"start\" line-type=\"wavy\" dash-length=\"66.7\" space-length=\"66.7\" default-x=\"207.8\" relative-x=\"207.8\" orientation=\"over\" bezier-offset=\"16.2\" bezier-y2=\"16.2\" color=\"#9D9E9D9C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 66.8 ) );
	object.setSpaceLength( MxNumberTenths( 66.8 ) );
	object.setDefaultX( MxNumberTenths( 207.9 ) );
	object.setDefaultY( MxNumberTenths( 207.9 ) );
	object.setRelativeX( MxNumberTenths( 207.9 ) );
	object.setRelativeY( MxNumberTenths( 207.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 16.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 16.3 ) );
	object.setBezierX( MxNumberTenths( 16.3 ) );
	object.setBezierY( MxNumberTenths( 16.3 ) );
	object.setBezierX2( MxNumberTenths( 16.3 ) );
	object.setBezierY2( MxNumberTenths( 16.3 ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<quiet type=\"start\" dash-length=\"66.8\" space-length=\"66.8\" default-x=\"207.9\" relative-x=\"207.9\" orientation=\"under\" bezier-offset=\"16.3\" color=\"#A09F9E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 66.9 ) );
	object.setSpaceLength( MxNumberTenths( 66.9 ) );
	object.setDefaultX( MxNumberTenths( 208 ) );
	object.setDefaultY( MxNumberTenths( 208 ) );
	object.setRelativeX( MxNumberTenths( 208 ) );
	object.setRelativeY( MxNumberTenths( 208 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 16.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 16.4 ) );
	object.setBezierX( MxNumberTenths( 16.4 ) );
	object.setBezierY( MxNumberTenths( 16.4 ) );
	object.setBezierX2( MxNumberTenths( 16.4 ) );
	object.setBezierY2( MxNumberTenths( 16.4 ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" space-length=\"66.9\" default-x=\"208\" relative-x=\"208\" orientation=\"over\" bezier-offset=\"16.4\" bezier-offset2=\"16.4\" color=\"#A1A2A1A0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 67 ) );
	object.setSpaceLength( MxNumberTenths( 67 ) );
	object.setDefaultX( MxNumberTenths( 208.1 ) );
	object.setDefaultY( MxNumberTenths( 208.1 ) );
	object.setRelativeX( MxNumberTenths( 208.1 ) );
	object.setRelativeY( MxNumberTenths( 208.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 16.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 16.5 ) );
	object.setBezierX( MxNumberTenths( 16.5 ) );
	object.setBezierY( MxNumberTenths( 16.5 ) );
	object.setBezierX2( MxNumberTenths( 16.5 ) );
	object.setBezierY2( MxNumberTenths( 16.5 ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<bishop type=\"start\" number=\"1\" space-length=\"67\" default-x=\"208.1\" relative-x=\"208.1\" orientation=\"under\" bezier-offset=\"16.5\" bezier-offset2=\"16.5\" color=\"#A4A3A2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 67.1 ) );
	object.setSpaceLength( MxNumberTenths( 67.1 ) );
	object.setDefaultX( MxNumberTenths( 208.2 ) );
	object.setDefaultY( MxNumberTenths( 208.2 ) );
	object.setRelativeX( MxNumberTenths( 208.2 ) );
	object.setRelativeY( MxNumberTenths( 208.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 16.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 16.6 ) );
	object.setBezierX( MxNumberTenths( 16.6 ) );
	object.setBezierY( MxNumberTenths( 16.6 ) );
	object.setBezierX2( MxNumberTenths( 16.6 ) );
	object.setBezierY2( MxNumberTenths( 16.6 ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<charlie type=\"start\" line-type=\"wavy\" space-length=\"67.1\" relative-x=\"208.2\" relative-y=\"208.2\" orientation=\"over\" bezier-offset=\"16.6\" bezier-offset2=\"16.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 67.2 ) );
	object.setSpaceLength( MxNumberTenths( 67.2 ) );
	object.setDefaultX( MxNumberTenths( 208.3 ) );
	object.setDefaultY( MxNumberTenths( 208.3 ) );
	object.setRelativeX( MxNumberTenths( 208.3 ) );
	object.setRelativeY( MxNumberTenths( 208.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 16.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 16.7 ) );
	object.setBezierX( MxNumberTenths( 16.7 ) );
	object.setBezierY( MxNumberTenths( 16.7 ) );
	object.setBezierX2( MxNumberTenths( 16.7 ) );
	object.setBezierY2( MxNumberTenths( 16.7 ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<booksmart type=\"start\" line-type=\"solid\" relative-x=\"208.3\" relative-y=\"208.3\" bezier-offset=\"16.7\" bezier-offset2=\"16.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 67.3 ) );
	object.setSpaceLength( MxNumberTenths( 67.3 ) );
	object.setDefaultX( MxNumberTenths( 208.4 ) );
	object.setDefaultY( MxNumberTenths( 208.4 ) );
	object.setRelativeX( MxNumberTenths( 208.4 ) );
	object.setRelativeY( MxNumberTenths( 208.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 16.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 16.8 ) );
	object.setBezierX( MxNumberTenths( 16.8 ) );
	object.setBezierY( MxNumberTenths( 16.8 ) );
	object.setBezierX2( MxNumberTenths( 16.8 ) );
	object.setBezierY2( MxNumberTenths( 16.8 ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"67.3\" default-y=\"208.4\" relative-y=\"208.4\" bezier-offset=\"16.8\" bezier-offset2=\"16.8\" bezier-x=\"16.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 67.4 ) );
	object.setSpaceLength( MxNumberTenths( 67.4 ) );
	object.setDefaultX( MxNumberTenths( 208.5 ) );
	object.setDefaultY( MxNumberTenths( 208.5 ) );
	object.setRelativeX( MxNumberTenths( 208.5 ) );
	object.setRelativeY( MxNumberTenths( 208.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 16.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 16.9 ) );
	object.setBezierX( MxNumberTenths( 16.9 ) );
	object.setBezierY( MxNumberTenths( 16.9 ) );
	object.setBezierX2( MxNumberTenths( 16.9 ) );
	object.setBezierY2( MxNumberTenths( 16.9 ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" dash-length=\"67.4\" default-y=\"208.5\" relative-y=\"208.5\" bezier-offset=\"16.9\" bezier-offset2=\"16.9\" bezier-x=\"16.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 67.5 ) );
	object.setSpaceLength( MxNumberTenths( 67.5 ) );
	object.setDefaultX( MxNumberTenths( 208.6 ) );
	object.setDefaultY( MxNumberTenths( 208.6 ) );
	object.setRelativeX( MxNumberTenths( 208.6 ) );
	object.setRelativeY( MxNumberTenths( 208.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 17 ) );
	object.setBezierOffset2( MxNumberDivisions( 17 ) );
	object.setBezierX( MxNumberTenths( 17 ) );
	object.setBezierY( MxNumberTenths( 17 ) );
	object.setBezierX2( MxNumberTenths( 17 ) );
	object.setBezierY2( MxNumberTenths( 17 ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<bishop type=\"start\" dash-length=\"67.5\" default-y=\"208.6\" relative-y=\"208.6\" bezier-offset=\"17\" bezier-offset2=\"17\" bezier-x=\"17\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 67.6 ) );
	object.setSpaceLength( MxNumberTenths( 67.6 ) );
	object.setDefaultX( MxNumberTenths( 208.7 ) );
	object.setDefaultY( MxNumberTenths( 208.7 ) );
	object.setRelativeX( MxNumberTenths( 208.7 ) );
	object.setRelativeY( MxNumberTenths( 208.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 17.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 17.1 ) );
	object.setBezierX( MxNumberTenths( 17.1 ) );
	object.setBezierY( MxNumberTenths( 17.1 ) );
	object.setBezierX2( MxNumberTenths( 17.1 ) );
	object.setBezierY2( MxNumberTenths( 17.1 ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<charlie type=\"start\" dash-length=\"67.6\" default-y=\"208.7\" relative-y=\"208.7\" bezier-offset=\"17.1\" bezier-offset2=\"17.1\" bezier-x=\"17.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 67.7 ) );
	object.setSpaceLength( MxNumberTenths( 67.7 ) );
	object.setDefaultX( MxNumberTenths( 208.8 ) );
	object.setDefaultY( MxNumberTenths( 208.8 ) );
	object.setRelativeX( MxNumberTenths( 208.8 ) );
	object.setRelativeY( MxNumberTenths( 208.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 17.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 17.2 ) );
	object.setBezierX( MxNumberTenths( 17.2 ) );
	object.setBezierY( MxNumberTenths( 17.2 ) );
	object.setBezierX2( MxNumberTenths( 17.2 ) );
	object.setBezierY2( MxNumberTenths( 17.2 ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"dashed\" space-length=\"67.7\" default-x=\"208.8\" default-y=\"208.8\" relative-y=\"208.8\" placement=\"below\" bezier-offset2=\"17.2\" bezier-x=\"17.2\" bezier-y=\"17.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 67.8 ) );
	object.setSpaceLength( MxNumberTenths( 67.8 ) );
	object.setDefaultX( MxNumberTenths( 208.9 ) );
	object.setDefaultY( MxNumberTenths( 208.9 ) );
	object.setRelativeX( MxNumberTenths( 208.9 ) );
	object.setRelativeY( MxNumberTenths( 208.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 17.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 17.3 ) );
	object.setBezierX( MxNumberTenths( 17.3 ) );
	object.setBezierY( MxNumberTenths( 17.3 ) );
	object.setBezierX2( MxNumberTenths( 17.3 ) );
	object.setBezierY2( MxNumberTenths( 17.3 ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-type=\"dotted\" space-length=\"67.8\" default-x=\"208.9\" default-y=\"208.9\" relative-y=\"208.9\" placement=\"above\" bezier-offset2=\"17.3\" bezier-x=\"17.3\" bezier-y=\"17.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 67.9 ) );
	object.setSpaceLength( MxNumberTenths( 67.9 ) );
	object.setDefaultX( MxNumberTenths( 209 ) );
	object.setDefaultY( MxNumberTenths( 209 ) );
	object.setRelativeX( MxNumberTenths( 209 ) );
	object.setRelativeY( MxNumberTenths( 209 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 17.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 17.4 ) );
	object.setBezierX( MxNumberTenths( 17.4 ) );
	object.setBezierY( MxNumberTenths( 17.4 ) );
	object.setBezierX2( MxNumberTenths( 17.4 ) );
	object.setBezierY2( MxNumberTenths( 17.4 ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<musicxmlishard type=\"start\" line-type=\"wavy\" space-length=\"67.9\" default-x=\"209\" default-y=\"209\" relative-y=\"209\" placement=\"below\" bezier-offset2=\"17.4\" bezier-x=\"17.4\" bezier-y=\"17.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 68 ) );
	object.setSpaceLength( MxNumberTenths( 68 ) );
	object.setDefaultX( MxNumberTenths( 209.1 ) );
	object.setDefaultY( MxNumberTenths( 209.1 ) );
	object.setRelativeX( MxNumberTenths( 209.1 ) );
	object.setRelativeY( MxNumberTenths( 209.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 17.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 17.5 ) );
	object.setBezierX( MxNumberTenths( 17.5 ) );
	object.setBezierY( MxNumberTenths( 17.5 ) );
	object.setBezierX2( MxNumberTenths( 17.5 ) );
	object.setBezierY2( MxNumberTenths( 17.5 ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<bishop type=\"start\" space-length=\"68\" default-x=\"209.1\" placement=\"above\" bezier-offset2=\"17.5\" bezier-x=\"17.5\" bezier-y=\"17.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 68.1 ) );
	object.setSpaceLength( MxNumberTenths( 68.1 ) );
	object.setDefaultX( MxNumberTenths( 209.2 ) );
	object.setDefaultY( MxNumberTenths( 209.2 ) );
	object.setRelativeX( MxNumberTenths( 209.2 ) );
	object.setRelativeY( MxNumberTenths( 209.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 17.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 17.6 ) );
	object.setBezierX( MxNumberTenths( 17.6 ) );
	object.setBezierY( MxNumberTenths( 17.6 ) );
	object.setBezierX2( MxNumberTenths( 17.6 ) );
	object.setBezierY2( MxNumberTenths( 17.6 ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<charlie type=\"start\" number=\"1\" dash-length=\"68.1\" space-length=\"68.1\" default-x=\"209.2\" relative-x=\"209.2\" placement=\"below\" bezier-offset2=\"17.6\" bezier-x=\"17.6\" bezier-y=\"17.6\" bezier-x2=\"17.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 68.2 ) );
	object.setSpaceLength( MxNumberTenths( 68.2 ) );
	object.setDefaultX( MxNumberTenths( 209.3 ) );
	object.setDefaultY( MxNumberTenths( 209.3 ) );
	object.setRelativeX( MxNumberTenths( 209.3 ) );
	object.setRelativeY( MxNumberTenths( 209.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 17.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 17.7 ) );
	object.setBezierX( MxNumberTenths( 17.7 ) );
	object.setBezierY( MxNumberTenths( 17.7 ) );
	object.setBezierX2( MxNumberTenths( 17.7 ) );
	object.setBezierY2( MxNumberTenths( 17.7 ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<booksmart type=\"start\" number=\"1\" dash-length=\"68.2\" default-x=\"209.3\" relative-x=\"209.3\" placement=\"above\" bezier-x=\"17.7\" bezier-y=\"17.7\" bezier-x2=\"17.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 68.3 ) );
	object.setSpaceLength( MxNumberTenths( 68.3 ) );
	object.setDefaultX( MxNumberTenths( 209.4 ) );
	object.setDefaultY( MxNumberTenths( 209.4 ) );
	object.setRelativeX( MxNumberTenths( 209.4 ) );
	object.setRelativeY( MxNumberTenths( 209.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 17.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 17.8 ) );
	object.setBezierX( MxNumberTenths( 17.8 ) );
	object.setBezierY( MxNumberTenths( 17.8 ) );
	object.setBezierX2( MxNumberTenths( 17.8 ) );
	object.setBezierY2( MxNumberTenths( 17.8 ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<quiet type=\"start\" line-type=\"wavy\" dash-length=\"68.3\" relative-x=\"209.4\" placement=\"below\" orientation=\"over\" bezier-x=\"17.8\" bezier-y=\"17.8\" bezier-x2=\"17.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 68.4 ) );
	object.setSpaceLength( MxNumberTenths( 68.4 ) );
	object.setDefaultX( MxNumberTenths( 209.5 ) );
	object.setDefaultY( MxNumberTenths( 209.5 ) );
	object.setRelativeX( MxNumberTenths( 209.5 ) );
	object.setRelativeY( MxNumberTenths( 209.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 17.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 17.9 ) );
	object.setBezierX( MxNumberTenths( 17.9 ) );
	object.setBezierY( MxNumberTenths( 17.9 ) );
	object.setBezierX2( MxNumberTenths( 17.9 ) );
	object.setBezierY2( MxNumberTenths( 17.9 ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<musicxmlishard type=\"start\" line-type=\"solid\" dash-length=\"68.4\" relative-x=\"209.5\" placement=\"above\" orientation=\"under\" bezier-x=\"17.9\" bezier-y=\"17.9\" bezier-x2=\"17.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 68.5 ) );
	object.setSpaceLength( MxNumberTenths( 68.5 ) );
	object.setDefaultX( MxNumberTenths( 209.6 ) );
	object.setDefaultY( MxNumberTenths( 209.6 ) );
	object.setRelativeX( MxNumberTenths( 209.6 ) );
	object.setRelativeY( MxNumberTenths( 209.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 18 ) );
	object.setBezierOffset2( MxNumberDivisions( 18 ) );
	object.setBezierX( MxNumberTenths( 18 ) );
	object.setBezierY( MxNumberTenths( 18 ) );
	object.setBezierX2( MxNumberTenths( 18 ) );
	object.setBezierY2( MxNumberTenths( 18 ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-type=\"dashed\" relative-x=\"209.6\" placement=\"below\" orientation=\"over\" bezier-x=\"18\" bezier-y=\"18\" bezier-x2=\"18\" bezier-y2=\"18\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 68.6 ) );
	object.setSpaceLength( MxNumberTenths( 68.6 ) );
	object.setDefaultX( MxNumberTenths( 209.7 ) );
	object.setDefaultY( MxNumberTenths( 209.7 ) );
	object.setRelativeX( MxNumberTenths( 209.7 ) );
	object.setRelativeY( MxNumberTenths( 209.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 18.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 18.1 ) );
	object.setBezierX( MxNumberTenths( 18.1 ) );
	object.setBezierY( MxNumberTenths( 18.1 ) );
	object.setBezierX2( MxNumberTenths( 18.1 ) );
	object.setBezierY2( MxNumberTenths( 18.1 ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<charlie type=\"start\" number=\"1\" relative-x=\"209.7\" placement=\"above\" orientation=\"under\" bezier-x=\"18.1\" bezier-y=\"18.1\" bezier-x2=\"18.1\" bezier-y2=\"18.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 68.7 ) );
	object.setSpaceLength( MxNumberTenths( 68.7 ) );
	object.setDefaultX( MxNumberTenths( 209.8 ) );
	object.setDefaultY( MxNumberTenths( 209.8 ) );
	object.setRelativeX( MxNumberTenths( 209.8 ) );
	object.setRelativeY( MxNumberTenths( 209.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 18.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 18.2 ) );
	object.setBezierX( MxNumberTenths( 18.2 ) );
	object.setBezierY( MxNumberTenths( 18.2 ) );
	object.setBezierX2( MxNumberTenths( 18.2 ) );
	object.setBezierY2( MxNumberTenths( 18.2 ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<booksmart type=\"start\" space-length=\"68.7\" default-y=\"209.8\" relative-x=\"209.8\" orientation=\"over\" bezier-y=\"18.2\" bezier-x2=\"18.2\" bezier-y2=\"18.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 68.8 ) );
	object.setSpaceLength( MxNumberTenths( 68.8 ) );
	object.setDefaultX( MxNumberTenths( 209.9 ) );
	object.setDefaultY( MxNumberTenths( 209.9 ) );
	object.setRelativeX( MxNumberTenths( 209.9 ) );
	object.setRelativeY( MxNumberTenths( 209.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 18.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 18.3 ) );
	object.setBezierX( MxNumberTenths( 18.3 ) );
	object.setBezierY( MxNumberTenths( 18.3 ) );
	object.setBezierX2( MxNumberTenths( 18.3 ) );
	object.setBezierY2( MxNumberTenths( 18.3 ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<quiet type=\"start\" space-length=\"68.8\" default-y=\"209.9\" relative-x=\"209.9\" orientation=\"under\" bezier-y=\"18.3\" bezier-x2=\"18.3\" bezier-y2=\"18.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 68.9 ) );
	object.setSpaceLength( MxNumberTenths( 68.9 ) );
	object.setDefaultX( MxNumberTenths( 210 ) );
	object.setDefaultY( MxNumberTenths( 210 ) );
	object.setRelativeX( MxNumberTenths( 210 ) );
	object.setRelativeY( MxNumberTenths( 210 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 18.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 18.4 ) );
	object.setBezierX( MxNumberTenths( 18.4 ) );
	object.setBezierY( MxNumberTenths( 18.4 ) );
	object.setBezierX2( MxNumberTenths( 18.4 ) );
	object.setBezierY2( MxNumberTenths( 18.4 ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"68.9\" space-length=\"68.9\" default-x=\"210\" default-y=\"210\" relative-y=\"210\" orientation=\"over\" bezier-offset=\"18.4\" bezier-y=\"18.4\" bezier-x2=\"18.4\" bezier-y2=\"18.4\" color=\"#C9CAC9C8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 69 ) );
	object.setSpaceLength( MxNumberTenths( 69 ) );
	object.setDefaultX( MxNumberTenths( 210.1 ) );
	object.setDefaultY( MxNumberTenths( 210.1 ) );
	object.setRelativeX( MxNumberTenths( 210.1 ) );
	object.setRelativeY( MxNumberTenths( 210.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 18.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 18.5 ) );
	object.setBezierX( MxNumberTenths( 18.5 ) );
	object.setBezierY( MxNumberTenths( 18.5 ) );
	object.setBezierX2( MxNumberTenths( 18.5 ) );
	object.setBezierY2( MxNumberTenths( 18.5 ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-type=\"dotted\" dash-length=\"69\" space-length=\"69\" default-x=\"210.1\" default-y=\"210.1\" relative-y=\"210.1\" orientation=\"under\" bezier-offset=\"18.5\" bezier-y=\"18.5\" bezier-x2=\"18.5\" bezier-y2=\"18.5\" color=\"#CCCBCA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 69.1 ) );
	object.setSpaceLength( MxNumberTenths( 69.1 ) );
	object.setDefaultX( MxNumberTenths( 210.2 ) );
	object.setDefaultY( MxNumberTenths( 210.2 ) );
	object.setRelativeX( MxNumberTenths( 210.2 ) );
	object.setRelativeY( MxNumberTenths( 210.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 18.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 18.6 ) );
	object.setBezierX( MxNumberTenths( 18.6 ) );
	object.setBezierY( MxNumberTenths( 18.6 ) );
	object.setBezierX2( MxNumberTenths( 18.6 ) );
	object.setBezierY2( MxNumberTenths( 18.6 ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<charlie type=\"start\" line-type=\"wavy\" dash-length=\"69.1\" space-length=\"69.1\" default-x=\"210.2\" default-y=\"210.2\" relative-y=\"210.2\" orientation=\"over\" bezier-offset=\"18.6\" bezier-y=\"18.6\" bezier-x2=\"18.6\" bezier-y2=\"18.6\" color=\"#CDCECDCC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 69.2 ) );
	object.setSpaceLength( MxNumberTenths( 69.2 ) );
	object.setDefaultX( MxNumberTenths( 210.3 ) );
	object.setDefaultY( MxNumberTenths( 210.3 ) );
	object.setRelativeX( MxNumberTenths( 210.3 ) );
	object.setRelativeY( MxNumberTenths( 210.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 18.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 18.7 ) );
	object.setBezierX( MxNumberTenths( 18.7 ) );
	object.setBezierY( MxNumberTenths( 18.7 ) );
	object.setBezierX2( MxNumberTenths( 18.7 ) );
	object.setBezierY2( MxNumberTenths( 18.7 ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<booksmart type=\"start\" dash-length=\"69.2\" default-x=\"210.3\" default-y=\"210.3\" relative-y=\"210.3\" orientation=\"under\" bezier-offset=\"18.7\" bezier-x2=\"18.7\" bezier-y2=\"18.7\" color=\"#D0CFCE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 69.3 ) );
	object.setSpaceLength( MxNumberTenths( 69.3 ) );
	object.setDefaultX( MxNumberTenths( 210.4 ) );
	object.setDefaultY( MxNumberTenths( 210.4 ) );
	object.setRelativeX( MxNumberTenths( 210.4 ) );
	object.setRelativeY( MxNumberTenths( 210.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 18.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 18.8 ) );
	object.setBezierX( MxNumberTenths( 18.8 ) );
	object.setBezierY( MxNumberTenths( 18.8 ) );
	object.setBezierX2( MxNumberTenths( 18.8 ) );
	object.setBezierY2( MxNumberTenths( 18.8 ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"210.4\" default-y=\"210.4\" relative-y=\"210.4\" orientation=\"over\" bezier-offset=\"18.8\" bezier-x2=\"18.8\" bezier-y2=\"18.8\" color=\"#D1D2D1D0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 69.4 ) );
	object.setSpaceLength( MxNumberTenths( 69.4 ) );
	object.setDefaultX( MxNumberTenths( 210.5 ) );
	object.setDefaultY( MxNumberTenths( 210.5 ) );
	object.setRelativeX( MxNumberTenths( 210.5 ) );
	object.setRelativeY( MxNumberTenths( 210.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 18.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 18.9 ) );
	object.setBezierX( MxNumberTenths( 18.9 ) );
	object.setBezierY( MxNumberTenths( 18.9 ) );
	object.setBezierX2( MxNumberTenths( 18.9 ) );
	object.setBezierY2( MxNumberTenths( 18.9 ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"210.5\" relative-y=\"210.5\" bezier-offset=\"18.9\" bezier-x2=\"18.9\" bezier-y2=\"18.9\" color=\"#D4D3D2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 69.5 ) );
	object.setSpaceLength( MxNumberTenths( 69.5 ) );
	object.setDefaultX( MxNumberTenths( 210.6 ) );
	object.setDefaultY( MxNumberTenths( 210.6 ) );
	object.setRelativeX( MxNumberTenths( 210.6 ) );
	object.setRelativeY( MxNumberTenths( 210.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 19 ) );
	object.setBezierOffset2( MxNumberDivisions( 19 ) );
	object.setBezierX( MxNumberTenths( 19 ) );
	object.setBezierY( MxNumberTenths( 19 ) );
	object.setBezierX2( MxNumberTenths( 19 ) );
	object.setBezierY2( MxNumberTenths( 19 ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<bishop type=\"start\" line-type=\"wavy\" relative-y=\"210.6\" bezier-offset=\"19\" bezier-offset2=\"19\" bezier-x2=\"19\" bezier-y2=\"19\" color=\"#D5D6D5D4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 69.6 ) );
	object.setSpaceLength( MxNumberTenths( 69.6 ) );
	object.setDefaultX( MxNumberTenths( 210.7 ) );
	object.setDefaultY( MxNumberTenths( 210.7 ) );
	object.setRelativeX( MxNumberTenths( 210.7 ) );
	object.setRelativeY( MxNumberTenths( 210.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 19.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 19.1 ) );
	object.setBezierX( MxNumberTenths( 19.1 ) );
	object.setBezierY( MxNumberTenths( 19.1 ) );
	object.setBezierX2( MxNumberTenths( 19.1 ) );
	object.setBezierY2( MxNumberTenths( 19.1 ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<charlie type=\"start\" line-type=\"solid\" relative-y=\"210.7\" bezier-offset=\"19.1\" bezier-offset2=\"19.1\" bezier-x2=\"19.1\" bezier-y2=\"19.1\" color=\"#D8D7D6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 69.7 ) );
	object.setSpaceLength( MxNumberTenths( 69.7 ) );
	object.setDefaultX( MxNumberTenths( 210.8 ) );
	object.setDefaultY( MxNumberTenths( 210.8 ) );
	object.setRelativeX( MxNumberTenths( 210.8 ) );
	object.setRelativeY( MxNumberTenths( 210.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 19.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 19.2 ) );
	object.setBezierX( MxNumberTenths( 19.2 ) );
	object.setBezierY( MxNumberTenths( 19.2 ) );
	object.setBezierX2( MxNumberTenths( 19.2 ) );
	object.setBezierY2( MxNumberTenths( 19.2 ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"69.7\" space-length=\"69.7\" relative-x=\"210.8\" relative-y=\"210.8\" placement=\"below\" bezier-offset=\"19.2\" bezier-offset2=\"19.2\" bezier-y2=\"19.2\" color=\"#D9DAD9D8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 69.8 ) );
	object.setSpaceLength( MxNumberTenths( 69.8 ) );
	object.setDefaultX( MxNumberTenths( 210.9 ) );
	object.setDefaultY( MxNumberTenths( 210.9 ) );
	object.setRelativeX( MxNumberTenths( 210.9 ) );
	object.setRelativeY( MxNumberTenths( 210.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 19.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 19.3 ) );
	object.setBezierX( MxNumberTenths( 19.3 ) );
	object.setBezierY( MxNumberTenths( 19.3 ) );
	object.setBezierX2( MxNumberTenths( 19.3 ) );
	object.setBezierY2( MxNumberTenths( 19.3 ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"69.8\" space-length=\"69.8\" relative-x=\"210.9\" placement=\"above\" bezier-offset=\"19.3\" bezier-offset2=\"19.3\" bezier-y2=\"19.3\" color=\"#DCDBDA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 69.9 ) );
	object.setSpaceLength( MxNumberTenths( 69.9 ) );
	object.setDefaultX( MxNumberTenths( 211 ) );
	object.setDefaultY( MxNumberTenths( 211 ) );
	object.setRelativeX( MxNumberTenths( 211 ) );
	object.setRelativeY( MxNumberTenths( 211 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 19.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 19.4 ) );
	object.setBezierX( MxNumberTenths( 19.4 ) );
	object.setBezierY( MxNumberTenths( 19.4 ) );
	object.setBezierX2( MxNumberTenths( 19.4 ) );
	object.setBezierY2( MxNumberTenths( 19.4 ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<musicxmlishard type=\"start\" dash-length=\"69.9\" space-length=\"69.9\" relative-x=\"211\" placement=\"below\" bezier-offset=\"19.4\" bezier-offset2=\"19.4\" bezier-y2=\"19.4\" color=\"#DDDEDDDC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 70 ) );
	object.setSpaceLength( MxNumberTenths( 70 ) );
	object.setDefaultX( MxNumberTenths( 211.1 ) );
	object.setDefaultY( MxNumberTenths( 211.1 ) );
	object.setRelativeX( MxNumberTenths( 211.1 ) );
	object.setRelativeY( MxNumberTenths( 211.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 19.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 19.5 ) );
	object.setBezierX( MxNumberTenths( 19.5 ) );
	object.setBezierY( MxNumberTenths( 19.5 ) );
	object.setBezierX2( MxNumberTenths( 19.5 ) );
	object.setBezierY2( MxNumberTenths( 19.5 ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<bishop type=\"start\" dash-length=\"70\" space-length=\"70\" relative-x=\"211.1\" placement=\"above\" bezier-offset=\"19.5\" bezier-offset2=\"19.5\" bezier-y2=\"19.5\" color=\"#E0DFDE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 70.1 ) );
	object.setSpaceLength( MxNumberTenths( 70.1 ) );
	object.setDefaultX( MxNumberTenths( 211.2 ) );
	object.setDefaultY( MxNumberTenths( 211.2 ) );
	object.setRelativeX( MxNumberTenths( 211.2 ) );
	object.setRelativeY( MxNumberTenths( 211.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 19.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 19.6 ) );
	object.setBezierX( MxNumberTenths( 19.6 ) );
	object.setBezierY( MxNumberTenths( 19.6 ) );
	object.setBezierX2( MxNumberTenths( 19.6 ) );
	object.setBezierY2( MxNumberTenths( 19.6 ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-type=\"dashed\" space-length=\"70.1\" default-x=\"211.2\" default-y=\"211.2\" relative-x=\"211.2\" placement=\"below\" bezier-offset2=\"19.6\" bezier-x=\"19.6\" bezier-y2=\"19.6\" color=\"#E1E2E1E0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 70.2 ) );
	object.setSpaceLength( MxNumberTenths( 70.2 ) );
	object.setDefaultX( MxNumberTenths( 211.3 ) );
	object.setDefaultY( MxNumberTenths( 211.3 ) );
	object.setRelativeX( MxNumberTenths( 211.3 ) );
	object.setRelativeY( MxNumberTenths( 211.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 19.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 19.7 ) );
	object.setBezierX( MxNumberTenths( 19.7 ) );
	object.setBezierY( MxNumberTenths( 19.7 ) );
	object.setBezierX2( MxNumberTenths( 19.7 ) );
	object.setBezierY2( MxNumberTenths( 19.7 ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"dotted\" default-x=\"211.3\" default-y=\"211.3\" relative-x=\"211.3\" placement=\"above\" bezier-offset2=\"19.7\" bezier-x=\"19.7\" color=\"#E4E3E2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 70.3 ) );
	object.setSpaceLength( MxNumberTenths( 70.3 ) );
	object.setDefaultX( MxNumberTenths( 211.4 ) );
	object.setDefaultY( MxNumberTenths( 211.4 ) );
	object.setRelativeX( MxNumberTenths( 211.4 ) );
	object.setRelativeY( MxNumberTenths( 211.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 19.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 19.8 ) );
	object.setBezierX( MxNumberTenths( 19.8 ) );
	object.setBezierY( MxNumberTenths( 19.8 ) );
	object.setBezierX2( MxNumberTenths( 19.8 ) );
	object.setBezierY2( MxNumberTenths( 19.8 ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<quiet type=\"start\" line-type=\"wavy\" default-x=\"211.4\" default-y=\"211.4\" relative-x=\"211.4\" placement=\"below\" bezier-offset2=\"19.8\" bezier-x=\"19.8\" color=\"#E5E6E5E4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 70.4 ) );
	object.setSpaceLength( MxNumberTenths( 70.4 ) );
	object.setDefaultX( MxNumberTenths( 211.5 ) );
	object.setDefaultY( MxNumberTenths( 211.5 ) );
	object.setRelativeX( MxNumberTenths( 211.5 ) );
	object.setRelativeY( MxNumberTenths( 211.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 19.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 19.9 ) );
	object.setBezierX( MxNumberTenths( 19.9 ) );
	object.setBezierY( MxNumberTenths( 19.9 ) );
	object.setBezierX2( MxNumberTenths( 19.9 ) );
	object.setBezierY2( MxNumberTenths( 19.9 ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"211.5\" default-y=\"211.5\" relative-x=\"211.5\" placement=\"above\" bezier-offset2=\"19.9\" bezier-x=\"19.9\" color=\"#E8E7E6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 70.5 ) );
	object.setSpaceLength( MxNumberTenths( 70.5 ) );
	object.setDefaultX( MxNumberTenths( 211.6 ) );
	object.setDefaultY( MxNumberTenths( 211.6 ) );
	object.setRelativeX( MxNumberTenths( 211.6 ) );
	object.setRelativeY( MxNumberTenths( 211.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 20 ) );
	object.setBezierOffset2( MxNumberDivisions( 20 ) );
	object.setBezierX( MxNumberTenths( 20 ) );
	object.setBezierY( MxNumberTenths( 20 ) );
	object.setBezierX2( MxNumberTenths( 20 ) );
	object.setBezierY2( MxNumberTenths( 20 ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<bishop type=\"start\" number=\"1\" dash-length=\"70.5\" default-x=\"211.6\" default-y=\"211.6\" placement=\"below\" orientation=\"over\" bezier-offset2=\"20\" bezier-x=\"20\" color=\"#E9EAE9E8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 70.6 ) );
	object.setSpaceLength( MxNumberTenths( 70.6 ) );
	object.setDefaultX( MxNumberTenths( 211.7 ) );
	object.setDefaultY( MxNumberTenths( 211.7 ) );
	object.setRelativeX( MxNumberTenths( 211.7 ) );
	object.setRelativeY( MxNumberTenths( 211.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 20.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 20.1 ) );
	object.setBezierX( MxNumberTenths( 20.1 ) );
	object.setBezierY( MxNumberTenths( 20.1 ) );
	object.setBezierX2( MxNumberTenths( 20.1 ) );
	object.setBezierY2( MxNumberTenths( 20.1 ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<charlie type=\"start\" number=\"1\" dash-length=\"70.6\" default-x=\"211.7\" default-y=\"211.7\" placement=\"above\" orientation=\"under\" bezier-offset2=\"20.1\" bezier-x=\"20.1\" color=\"#ECEBEA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 70.7 ) );
	object.setSpaceLength( MxNumberTenths( 70.7 ) );
	object.setDefaultX( MxNumberTenths( 211.8 ) );
	object.setDefaultY( MxNumberTenths( 211.8 ) );
	object.setRelativeX( MxNumberTenths( 211.8 ) );
	object.setRelativeY( MxNumberTenths( 211.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 20.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 20.2 ) );
	object.setBezierX( MxNumberTenths( 20.2 ) );
	object.setBezierY( MxNumberTenths( 20.2 ) );
	object.setBezierX2( MxNumberTenths( 20.2 ) );
	object.setBezierY2( MxNumberTenths( 20.2 ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<booksmart type=\"start\" line-type=\"wavy\" dash-length=\"70.7\" space-length=\"70.7\" default-y=\"211.8\" relative-y=\"211.8\" orientation=\"over\" bezier-offset2=\"20.2\" bezier-x=\"20.2\" bezier-y=\"20.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 70.8 ) );
	object.setSpaceLength( MxNumberTenths( 70.8 ) );
	object.setDefaultX( MxNumberTenths( 211.9 ) );
	object.setDefaultY( MxNumberTenths( 211.9 ) );
	object.setRelativeX( MxNumberTenths( 211.9 ) );
	object.setRelativeY( MxNumberTenths( 211.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 20.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 20.3 ) );
	object.setBezierX( MxNumberTenths( 20.3 ) );
	object.setBezierY( MxNumberTenths( 20.3 ) );
	object.setBezierX2( MxNumberTenths( 20.3 ) );
	object.setBezierY2( MxNumberTenths( 20.3 ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<quiet type=\"start\" line-type=\"solid\" dash-length=\"70.8\" space-length=\"70.8\" relative-y=\"211.9\" orientation=\"under\" bezier-x=\"20.3\" bezier-y=\"20.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 70.9 ) );
	object.setSpaceLength( MxNumberTenths( 70.9 ) );
	object.setDefaultX( MxNumberTenths( 212 ) );
	object.setDefaultY( MxNumberTenths( 212 ) );
	object.setRelativeX( MxNumberTenths( 212 ) );
	object.setRelativeY( MxNumberTenths( 212 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 20.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 20.4 ) );
	object.setBezierX( MxNumberTenths( 20.4 ) );
	object.setBezierY( MxNumberTenths( 20.4 ) );
	object.setBezierX2( MxNumberTenths( 20.4 ) );
	object.setBezierY2( MxNumberTenths( 20.4 ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"dashed\" space-length=\"70.9\" relative-y=\"212\" orientation=\"over\" bezier-x=\"20.4\" bezier-y=\"20.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 71 ) );
	object.setSpaceLength( MxNumberTenths( 71 ) );
	object.setDefaultX( MxNumberTenths( 212.1 ) );
	object.setDefaultY( MxNumberTenths( 212.1 ) );
	object.setRelativeX( MxNumberTenths( 212.1 ) );
	object.setRelativeY( MxNumberTenths( 212.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 20.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 20.5 ) );
	object.setBezierX( MxNumberTenths( 20.5 ) );
	object.setBezierY( MxNumberTenths( 20.5 ) );
	object.setBezierX2( MxNumberTenths( 20.5 ) );
	object.setBezierY2( MxNumberTenths( 20.5 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<bishop type=\"start\" number=\"1\" space-length=\"71\" relative-y=\"212.1\" orientation=\"under\" bezier-x=\"20.5\" bezier-y=\"20.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 71.1 ) );
	object.setSpaceLength( MxNumberTenths( 71.1 ) );
	object.setDefaultX( MxNumberTenths( 212.2 ) );
	object.setDefaultY( MxNumberTenths( 212.2 ) );
	object.setRelativeX( MxNumberTenths( 212.2 ) );
	object.setRelativeY( MxNumberTenths( 212.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 20.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 20.6 ) );
	object.setBezierX( MxNumberTenths( 20.6 ) );
	object.setBezierY( MxNumberTenths( 20.6 ) );
	object.setBezierX2( MxNumberTenths( 20.6 ) );
	object.setBezierY2( MxNumberTenths( 20.6 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<charlie type=\"start\" space-length=\"71.1\" relative-y=\"212.2\" orientation=\"over\" bezier-x=\"20.6\" bezier-y=\"20.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 71.2 ) );
	object.setSpaceLength( MxNumberTenths( 71.2 ) );
	object.setDefaultX( MxNumberTenths( 212.3 ) );
	object.setDefaultY( MxNumberTenths( 212.3 ) );
	object.setRelativeX( MxNumberTenths( 212.3 ) );
	object.setRelativeY( MxNumberTenths( 212.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 20.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 20.7 ) );
	object.setBezierX( MxNumberTenths( 20.7 ) );
	object.setBezierY( MxNumberTenths( 20.7 ) );
	object.setBezierX2( MxNumberTenths( 20.7 ) );
	object.setBezierY2( MxNumberTenths( 20.7 ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<booksmart type=\"start\" relative-y=\"212.3\" orientation=\"under\" bezier-x=\"20.7\" bezier-y=\"20.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyTied )
{
	MxCxEmptyTied object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 71.3 ) );
	object.setSpaceLength( MxNumberTenths( 71.3 ) );
	object.setDefaultX( MxNumberTenths( 212.4 ) );
	object.setDefaultY( MxNumberTenths( 212.4 ) );
	object.setRelativeX( MxNumberTenths( 212.4 ) );
	object.setRelativeY( MxNumberTenths( 212.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 20.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 20.8 ) );
	object.setBezierX( MxNumberTenths( 20.8 ) );
	object.setBezierY( MxNumberTenths( 20.8 ) );
	object.setBezierX2( MxNumberTenths( 20.8 ) );
	object.setBezierY2( MxNumberTenths( 20.8 ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"71.3\" default-x=\"212.4\" relative-x=\"212.4\" relative-y=\"212.4\" orientation=\"over\" bezier-offset=\"20.8\" bezier-x=\"20.8\" bezier-y=\"20.8\" bezier-x2=\"20.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyTied )
{
	MxCxEmptyTied object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 71.4 ) );
	object.setSpaceLength( MxNumberTenths( 71.4 ) );
	object.setDefaultX( MxNumberTenths( 212.5 ) );
	object.setDefaultY( MxNumberTenths( 212.5 ) );
	object.setRelativeX( MxNumberTenths( 212.5 ) );
	object.setRelativeY( MxNumberTenths( 212.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 20.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 20.9 ) );
	object.setBezierX( MxNumberTenths( 20.9 ) );
	object.setBezierY( MxNumberTenths( 20.9 ) );
	object.setBezierX2( MxNumberTenths( 20.9 ) );
	object.setBezierY2( MxNumberTenths( 20.9 ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"dotted\" dash-length=\"71.4\" default-x=\"212.5\" relative-x=\"212.5\" relative-y=\"212.5\" orientation=\"under\" bezier-offset=\"20.9\" bezier-x=\"20.9\" bezier-y=\"20.9\" bezier-x2=\"20.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyTied )
{
	MxCxEmptyTied object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( true );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 71.5 ) );
	object.setSpaceLength( MxNumberTenths( 71.5 ) );
	object.setDefaultX( MxNumberTenths( 212.6 ) );
	object.setDefaultY( MxNumberTenths( 212.6 ) );
	object.setRelativeX( MxNumberTenths( 212.6 ) );
	object.setRelativeY( MxNumberTenths( 212.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 21 ) );
	object.setBezierOffset2( MxNumberDivisions( 21 ) );
	object.setBezierX( MxNumberTenths( 21 ) );
	object.setBezierY( MxNumberTenths( 21 ) );
	object.setBezierX2( MxNumberTenths( 21 ) );
	object.setBezierY2( MxNumberTenths( 21 ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<bishop type=\"start\" line-type=\"wavy\" dash-length=\"71.5\" default-x=\"212.6\" default-y=\"212.6\" relative-x=\"212.6\" relative-y=\"212.6\" orientation=\"over\" bezier-offset=\"21\" bezier-y=\"21\" bezier-x2=\"21\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyTied )
{
	MxCxEmptyTied object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 71.6 ) );
	object.setSpaceLength( MxNumberTenths( 71.6 ) );
	object.setDefaultX( MxNumberTenths( 212.7 ) );
	object.setDefaultY( MxNumberTenths( 212.7 ) );
	object.setRelativeX( MxNumberTenths( 212.7 ) );
	object.setRelativeY( MxNumberTenths( 212.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 21.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 21.1 ) );
	object.setBezierX( MxNumberTenths( 21.1 ) );
	object.setBezierY( MxNumberTenths( 21.1 ) );
	object.setBezierX2( MxNumberTenths( 21.1 ) );
	object.setBezierY2( MxNumberTenths( 21.1 ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<charlie type=\"start\" dash-length=\"71.6\" default-x=\"212.7\" default-y=\"212.7\" relative-x=\"212.7\" bezier-offset=\"21.1\" bezier-y=\"21.1\" bezier-x2=\"21.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptyTied )
{
	MxCxEmptyTied object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsOrientationPresent( false );
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 71.7 ) );
	object.setSpaceLength( MxNumberTenths( 71.7 ) );
	object.setDefaultX( MxNumberTenths( 212.8 ) );
	object.setDefaultY( MxNumberTenths( 212.8 ) );
	object.setRelativeX( MxNumberTenths( 212.8 ) );
	object.setRelativeY( MxNumberTenths( 212.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 21.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 21.2 ) );
	object.setBezierX( MxNumberTenths( 21.2 ) );
	object.setBezierY( MxNumberTenths( 21.2 ) );
	object.setBezierX2( MxNumberTenths( 21.2 ) );
	object.setBezierY2( MxNumberTenths( 21.2 ) );
	object.setColor( MxColor( "#01020100" ) );
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


