/** *******************************************************
  * 
  * MxCxEmptySlurTest.cpp
  * Created: 2014-12-03 16:31:30
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptySlur.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxEnumStartStopContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberNumberLevel( 1 ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxEnumLineType(  ) ).toString();
	std::string actual = object.getLineType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxEnumOverUnder(  ) ).toString();
	std::string actual = object.getOrientation().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberDivisions(  ) ).toString();
	std::string actual = object.getBezierOffset().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberDivisions(  ) ).toString();
	std::string actual = object.getBezierOffset2().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues13, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues14, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues15, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierX2().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues16, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierY2().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues17, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = "MxCxEmptySlur";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = "slur";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	std::string expected = "Slur types are empty. Most slurs are represented with two elements: one with a start type, and one with a stop type. Slurs can add more elements using a continue type. This is typically used to specify the formatting of cross-system slurs, or to specify the shape of very complex slurs.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptySlur )
{
	MxEnumStartStopContinue value1( lexicon::enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue value2( lexicon::enums::StartStopContinue::stop );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setType( value1 );
	MxEnumStartStopContinue expected = value1;
	MxEnumStartStopContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxCxEmptySlur )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineType2, MxCxEmptySlur )
{
	MxEnumLineType value1( lexicon::enums::LineType::wavy );
	MxEnumLineType value2( lexicon::enums::LineType::dotted );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setLineType( value1 );
	MxEnumLineType expected = value1;
	MxEnumLineType actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
	object.setLineType( value2 );
	expected = value2;
	actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength3, MxCxEmptySlur )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength4, MxCxEmptySlur )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX5, MxCxEmptySlur )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY6, MxCxEmptySlur )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX7, MxCxEmptySlur )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY8, MxCxEmptySlur )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement9, MxCxEmptySlur )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setPlacement( value1 );
	MxEnumAboveBelow expected = value1;
	MxEnumAboveBelow actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
	object.setPlacement( value2 );
	expected = value2;
	actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
}
TEST( setOrientation10, MxCxEmptySlur )
{
	MxEnumOverUnder value1( lexicon::enums::OverUnder::under );
	MxEnumOverUnder value2( lexicon::enums::OverUnder::over );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setOrientation( value1 );
	MxEnumOverUnder expected = value1;
	MxEnumOverUnder actual = object.getOrientation();
	CHECK_EQUAL( expected, actual )
	object.setOrientation( value2 );
	expected = value2;
	actual = object.getOrientation();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierOffset11, MxCxEmptySlur )
{
	MxNumberDivisions value1( 0.1 );
	MxNumberDivisions value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setBezierOffset( value1 );
	MxNumberDivisions expected = value1;
	MxNumberDivisions actual = object.getBezierOffset();
	CHECK_EQUAL( expected, actual )
	object.setBezierOffset( value2 );
	expected = value2;
	actual = object.getBezierOffset();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierOffset212, MxCxEmptySlur )
{
	MxNumberDivisions value1( 0.1 );
	MxNumberDivisions value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setBezierOffset2( value1 );
	MxNumberDivisions expected = value1;
	MxNumberDivisions actual = object.getBezierOffset2();
	CHECK_EQUAL( expected, actual )
	object.setBezierOffset2( value2 );
	expected = value2;
	actual = object.getBezierOffset2();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierX13, MxCxEmptySlur )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setBezierX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierX();
	CHECK_EQUAL( expected, actual )
	object.setBezierX( value2 );
	expected = value2;
	actual = object.getBezierX();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierY14, MxCxEmptySlur )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setBezierY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierY();
	CHECK_EQUAL( expected, actual )
	object.setBezierY( value2 );
	expected = value2;
	actual = object.getBezierY();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierX215, MxCxEmptySlur )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setBezierX2( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierX2();
	CHECK_EQUAL( expected, actual )
	object.setBezierX2( value2 );
	expected = value2;
	actual = object.getBezierX2();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierY216, MxCxEmptySlur )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
	object.setBezierY2( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierY2();
	CHECK_EQUAL( expected, actual )
	object.setBezierY2( value2 );
	expected = value2;
	actual = object.getBezierY2();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor17, MxCxEmptySlur )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySlur object;
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

TEST( getIsTypeRequired0, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeRequired2, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsLineTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired3, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired4, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired5, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired6, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired7, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired8, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired9, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOrientationRequired10, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsOrientationRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffsetRequired11, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierOffsetRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffset2Required12, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierOffset2Required();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierXRequired13, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierYRequired14, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierX2Required15, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierX2Required();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierY2Required16, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierY2Required();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired17, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsNumberPresent1, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsLineTypePresent2, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsDashLengthPresent3, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsSpaceLengthPresent4, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsDefaultXPresent5, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsDefaultYPresent6, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsRelativeXPresent7, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsRelativeYPresent8, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsPlacementPresent9, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsOrientationPresent10, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsBezierOffsetPresent11, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsBezierOffset2Present12, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsBezierXPresent13, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsBezierYPresent14, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsBezierX2Present15, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsBezierY2Present16, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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
TEST( getIsColorPresent17, MxCxEmptySlur )
{
	MxCxEmptySlur object;
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

TEST( getIsTypeDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = true;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsLineTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsOrientationDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsOrientationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffsetDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierOffsetDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffset2DefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierOffset2DefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierXDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierYDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierX2DefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierX2DefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierY2DefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsBezierY2DefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxEnumStartStopContinue expected;
	MxEnumStartStopContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberNumberLevel expected( 1 );
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineTypeDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxEnumLineType expected;
	MxEnumLineType actual = object.getLineTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getOrientationDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxEnumOverUnder expected;
	MxEnumOverUnder actual = object.getOrientationDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierOffsetDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberDivisions expected;
	MxNumberDivisions actual = object.getBezierOffsetDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierOffset2DefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberDivisions expected;
	MxNumberDivisions actual = object.getBezierOffset2DefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierXDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierYDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierX2DefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierX2DefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierY2DefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierY2DefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptySlur )
{
	MxCxEmptySlur object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 51.6 ) );
	object.setSpaceLength( MxNumberTenths( 51.6 ) );
	object.setDefaultX( MxNumberTenths( 192.7 ) );
	object.setDefaultY( MxNumberTenths( 192.7 ) );
	object.setRelativeX( MxNumberTenths( 192.7 ) );
	object.setRelativeY( MxNumberTenths( 192.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 1.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.1 ) );
	object.setBezierX( MxNumberTenths( 1.1 ) );
	object.setBezierY( MxNumberTenths( 1.1 ) );
	object.setBezierX2( MxNumberTenths( 1.1 ) );
	object.setBezierY2( MxNumberTenths( 1.1 ) );
	object.setColor( MxColor( "#706F6E" ) );
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
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"solid\" dash-length=\"51.6\" space-length=\"51.6\" default-x=\"192.7\" default-y=\"192.7\" relative-x=\"192.7\" relative-y=\"192.7\" placement=\"above\" orientation=\"under\" bezier-offset=\"1.1\" bezier-offset2=\"1.1\" bezier-x=\"1.1\" bezier-y=\"1.1\" bezier-x2=\"1.1\" bezier-y2=\"1.1\" color=\"#706F6E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 51.7 ) );
	object.setSpaceLength( MxNumberTenths( 51.7 ) );
	object.setDefaultX( MxNumberTenths( 192.8 ) );
	object.setDefaultY( MxNumberTenths( 192.8 ) );
	object.setRelativeX( MxNumberTenths( 192.8 ) );
	object.setRelativeY( MxNumberTenths( 192.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 1.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.2 ) );
	object.setBezierX( MxNumberTenths( 1.2 ) );
	object.setBezierY( MxNumberTenths( 1.2 ) );
	object.setBezierX2( MxNumberTenths( 1.2 ) );
	object.setBezierY2( MxNumberTenths( 1.2 ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"51.7\" space-length=\"51.7\" default-x=\"192.8\" default-y=\"192.8\" relative-x=\"192.8\" relative-y=\"192.8\" placement=\"below\" orientation=\"over\" bezier-offset=\"1.2\" bezier-offset2=\"1.2\" bezier-x=\"1.2\" bezier-y=\"1.2\" bezier-x2=\"1.2\" bezier-y2=\"1.2\" color=\"#71727170\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 51.8 ) );
	object.setSpaceLength( MxNumberTenths( 51.8 ) );
	object.setDefaultX( MxNumberTenths( 192.9 ) );
	object.setDefaultY( MxNumberTenths( 192.9 ) );
	object.setRelativeX( MxNumberTenths( 192.9 ) );
	object.setRelativeY( MxNumberTenths( 192.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 1.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.3 ) );
	object.setBezierX( MxNumberTenths( 1.3 ) );
	object.setBezierY( MxNumberTenths( 1.3 ) );
	object.setBezierX2( MxNumberTenths( 1.3 ) );
	object.setBezierY2( MxNumberTenths( 1.3 ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<musicxmlishard type=\"start\" line-type=\"dotted\" dash-length=\"51.8\" space-length=\"51.8\" default-x=\"192.9\" default-y=\"192.9\" relative-x=\"192.9\" relative-y=\"192.9\" placement=\"above\" orientation=\"under\" bezier-offset=\"1.3\" bezier-offset2=\"1.3\" bezier-x=\"1.3\" bezier-y=\"1.3\" bezier-x2=\"1.3\" bezier-y2=\"1.3\" color=\"#747372\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 51.9 ) );
	object.setSpaceLength( MxNumberTenths( 51.9 ) );
	object.setDefaultX( MxNumberTenths( 193 ) );
	object.setDefaultY( MxNumberTenths( 193 ) );
	object.setRelativeX( MxNumberTenths( 193 ) );
	object.setRelativeY( MxNumberTenths( 193 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 1.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.4 ) );
	object.setBezierX( MxNumberTenths( 1.4 ) );
	object.setBezierY( MxNumberTenths( 1.4 ) );
	object.setBezierX2( MxNumberTenths( 1.4 ) );
	object.setBezierY2( MxNumberTenths( 1.4 ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<bishop type=\"start\" dash-length=\"51.9\" space-length=\"51.9\" default-x=\"193\" default-y=\"193\" relative-x=\"193\" relative-y=\"193\" placement=\"below\" orientation=\"over\" bezier-offset=\"1.4\" bezier-offset2=\"1.4\" bezier-x=\"1.4\" bezier-y=\"1.4\" bezier-x2=\"1.4\" bezier-y2=\"1.4\" color=\"#75767574\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 52 ) );
	object.setSpaceLength( MxNumberTenths( 52 ) );
	object.setDefaultX( MxNumberTenths( 193.1 ) );
	object.setDefaultY( MxNumberTenths( 193.1 ) );
	object.setRelativeX( MxNumberTenths( 193.1 ) );
	object.setRelativeY( MxNumberTenths( 193.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 1.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.5 ) );
	object.setBezierX( MxNumberTenths( 1.5 ) );
	object.setBezierY( MxNumberTenths( 1.5 ) );
	object.setBezierX2( MxNumberTenths( 1.5 ) );
	object.setBezierY2( MxNumberTenths( 1.5 ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<charlie type=\"start\" number=\"1\" space-length=\"52\" default-x=\"193.1\" default-y=\"193.1\" relative-x=\"193.1\" relative-y=\"193.1\" placement=\"above\" orientation=\"under\" bezier-offset=\"1.5\" bezier-offset2=\"1.5\" bezier-x=\"1.5\" bezier-y=\"1.5\" bezier-x2=\"1.5\" bezier-y2=\"1.5\" color=\"#787776\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 52.1 ) );
	object.setSpaceLength( MxNumberTenths( 52.1 ) );
	object.setDefaultX( MxNumberTenths( 193.2 ) );
	object.setDefaultY( MxNumberTenths( 193.2 ) );
	object.setRelativeX( MxNumberTenths( 193.2 ) );
	object.setRelativeY( MxNumberTenths( 193.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 1.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.6 ) );
	object.setBezierX( MxNumberTenths( 1.6 ) );
	object.setBezierY( MxNumberTenths( 1.6 ) );
	object.setBezierX2( MxNumberTenths( 1.6 ) );
	object.setBezierY2( MxNumberTenths( 1.6 ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-x=\"193.2\" default-y=\"193.2\" relative-x=\"193.2\" relative-y=\"193.2\" placement=\"below\" orientation=\"over\" bezier-offset=\"1.6\" bezier-offset2=\"1.6\" bezier-x=\"1.6\" bezier-y=\"1.6\" bezier-x2=\"1.6\" bezier-y2=\"1.6\" color=\"#797A7978\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 52.2 ) );
	object.setSpaceLength( MxNumberTenths( 52.2 ) );
	object.setDefaultX( MxNumberTenths( 193.3 ) );
	object.setDefaultY( MxNumberTenths( 193.3 ) );
	object.setRelativeX( MxNumberTenths( 193.3 ) );
	object.setRelativeY( MxNumberTenths( 193.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 1.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.7 ) );
	object.setBezierX( MxNumberTenths( 1.7 ) );
	object.setBezierY( MxNumberTenths( 1.7 ) );
	object.setBezierX2( MxNumberTenths( 1.7 ) );
	object.setBezierY2( MxNumberTenths( 1.7 ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<quiet type=\"start\" line-type=\"dotted\" default-y=\"193.3\" relative-x=\"193.3\" relative-y=\"193.3\" placement=\"above\" orientation=\"under\" bezier-offset=\"1.7\" bezier-offset2=\"1.7\" bezier-x=\"1.7\" bezier-y=\"1.7\" bezier-x2=\"1.7\" bezier-y2=\"1.7\" color=\"#7C7B7A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 52.3 ) );
	object.setSpaceLength( MxNumberTenths( 52.3 ) );
	object.setDefaultX( MxNumberTenths( 193.4 ) );
	object.setDefaultY( MxNumberTenths( 193.4 ) );
	object.setRelativeX( MxNumberTenths( 193.4 ) );
	object.setRelativeY( MxNumberTenths( 193.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 1.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.8 ) );
	object.setBezierX( MxNumberTenths( 1.8 ) );
	object.setBezierY( MxNumberTenths( 1.8 ) );
	object.setBezierX2( MxNumberTenths( 1.8 ) );
	object.setBezierY2( MxNumberTenths( 1.8 ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<musicxmlishard type=\"start\" line-type=\"wavy\" relative-x=\"193.4\" relative-y=\"193.4\" placement=\"below\" orientation=\"over\" bezier-offset=\"1.8\" bezier-offset2=\"1.8\" bezier-x=\"1.8\" bezier-y=\"1.8\" bezier-x2=\"1.8\" bezier-y2=\"1.8\" color=\"#7D7E7D7C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 52.4 ) );
	object.setSpaceLength( MxNumberTenths( 52.4 ) );
	object.setDefaultX( MxNumberTenths( 193.5 ) );
	object.setDefaultY( MxNumberTenths( 193.5 ) );
	object.setRelativeX( MxNumberTenths( 193.5 ) );
	object.setRelativeY( MxNumberTenths( 193.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 1.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.9 ) );
	object.setBezierX( MxNumberTenths( 1.9 ) );
	object.setBezierY( MxNumberTenths( 1.9 ) );
	object.setBezierX2( MxNumberTenths( 1.9 ) );
	object.setBezierY2( MxNumberTenths( 1.9 ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-type=\"solid\" dash-length=\"52.4\" relative-y=\"193.5\" placement=\"above\" orientation=\"under\" bezier-offset=\"1.9\" bezier-offset2=\"1.9\" bezier-x=\"1.9\" bezier-y=\"1.9\" bezier-x2=\"1.9\" bezier-y2=\"1.9\" color=\"#807F7E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 52.5 ) );
	object.setSpaceLength( MxNumberTenths( 52.5 ) );
	object.setDefaultX( MxNumberTenths( 193.6 ) );
	object.setDefaultY( MxNumberTenths( 193.6 ) );
	object.setRelativeX( MxNumberTenths( 193.6 ) );
	object.setRelativeY( MxNumberTenths( 193.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 2 ) );
	object.setBezierOffset2( MxNumberDivisions( 2 ) );
	object.setBezierX( MxNumberTenths( 2 ) );
	object.setBezierY( MxNumberTenths( 2 ) );
	object.setBezierX2( MxNumberTenths( 2 ) );
	object.setBezierY2( MxNumberTenths( 2 ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<charlie type=\"start\" number=\"1\" dash-length=\"52.5\" placement=\"below\" orientation=\"over\" bezier-offset=\"2\" bezier-offset2=\"2\" bezier-x=\"2\" bezier-y=\"2\" bezier-x2=\"2\" bezier-y2=\"2\" color=\"#81828180\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 52.6 ) );
	object.setSpaceLength( MxNumberTenths( 52.6 ) );
	object.setDefaultX( MxNumberTenths( 193.7 ) );
	object.setDefaultY( MxNumberTenths( 193.7 ) );
	object.setRelativeX( MxNumberTenths( 193.7 ) );
	object.setRelativeY( MxNumberTenths( 193.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 2.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.1 ) );
	object.setBezierX( MxNumberTenths( 2.1 ) );
	object.setBezierY( MxNumberTenths( 2.1 ) );
	object.setBezierX2( MxNumberTenths( 2.1 ) );
	object.setBezierY2( MxNumberTenths( 2.1 ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<booksmart type=\"start\" dash-length=\"52.6\" space-length=\"52.6\" orientation=\"under\" bezier-offset=\"2.1\" bezier-offset2=\"2.1\" bezier-x=\"2.1\" bezier-y=\"2.1\" bezier-x2=\"2.1\" bezier-y2=\"2.1\" color=\"#848382\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 52.7 ) );
	object.setSpaceLength( MxNumberTenths( 52.7 ) );
	object.setDefaultX( MxNumberTenths( 193.8 ) );
	object.setDefaultY( MxNumberTenths( 193.8 ) );
	object.setRelativeX( MxNumberTenths( 193.8 ) );
	object.setRelativeY( MxNumberTenths( 193.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 2.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.2 ) );
	object.setBezierX( MxNumberTenths( 2.2 ) );
	object.setBezierY( MxNumberTenths( 2.2 ) );
	object.setBezierX2( MxNumberTenths( 2.2 ) );
	object.setBezierY2( MxNumberTenths( 2.2 ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<quiet type=\"start\" dash-length=\"52.7\" space-length=\"52.7\" bezier-offset=\"2.2\" bezier-offset2=\"2.2\" bezier-x=\"2.2\" bezier-y=\"2.2\" bezier-x2=\"2.2\" bezier-y2=\"2.2\" color=\"#85868584\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 52.8 ) );
	object.setSpaceLength( MxNumberTenths( 52.8 ) );
	object.setDefaultX( MxNumberTenths( 193.9 ) );
	object.setDefaultY( MxNumberTenths( 193.9 ) );
	object.setRelativeX( MxNumberTenths( 193.9 ) );
	object.setRelativeY( MxNumberTenths( 193.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 2.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.3 ) );
	object.setBezierX( MxNumberTenths( 2.3 ) );
	object.setBezierY( MxNumberTenths( 2.3 ) );
	object.setBezierX2( MxNumberTenths( 2.3 ) );
	object.setBezierY2( MxNumberTenths( 2.3 ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"solid\" space-length=\"52.8\" default-x=\"193.9\" bezier-offset2=\"2.3\" bezier-x=\"2.3\" bezier-y=\"2.3\" bezier-x2=\"2.3\" bezier-y2=\"2.3\" color=\"#888786\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 52.9 ) );
	object.setSpaceLength( MxNumberTenths( 52.9 ) );
	object.setDefaultX( MxNumberTenths( 194 ) );
	object.setDefaultY( MxNumberTenths( 194 ) );
	object.setRelativeX( MxNumberTenths( 194 ) );
	object.setRelativeY( MxNumberTenths( 194 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 2.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.4 ) );
	object.setBezierX( MxNumberTenths( 2.4 ) );
	object.setBezierY( MxNumberTenths( 2.4 ) );
	object.setBezierX2( MxNumberTenths( 2.4 ) );
	object.setBezierY2( MxNumberTenths( 2.4 ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-type=\"dashed\" space-length=\"52.9\" default-x=\"194\" bezier-x=\"2.4\" bezier-y=\"2.4\" bezier-x2=\"2.4\" bezier-y2=\"2.4\" color=\"#898A8988\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 53 ) );
	object.setSpaceLength( MxNumberTenths( 53 ) );
	object.setDefaultX( MxNumberTenths( 194.1 ) );
	object.setDefaultY( MxNumberTenths( 194.1 ) );
	object.setRelativeX( MxNumberTenths( 194.1 ) );
	object.setRelativeY( MxNumberTenths( 194.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 2.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.5 ) );
	object.setBezierX( MxNumberTenths( 2.5 ) );
	object.setBezierY( MxNumberTenths( 2.5 ) );
	object.setBezierX2( MxNumberTenths( 2.5 ) );
	object.setBezierY2( MxNumberTenths( 2.5 ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<charlie type=\"start\" line-type=\"dotted\" space-length=\"53\" default-x=\"194.1\" default-y=\"194.1\" bezier-y=\"2.5\" bezier-x2=\"2.5\" bezier-y2=\"2.5\" color=\"#8C8B8A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 53.1 ) );
	object.setSpaceLength( MxNumberTenths( 53.1 ) );
	object.setDefaultX( MxNumberTenths( 194.2 ) );
	object.setDefaultY( MxNumberTenths( 194.2 ) );
	object.setRelativeX( MxNumberTenths( 194.2 ) );
	object.setRelativeY( MxNumberTenths( 194.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 2.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.6 ) );
	object.setBezierX( MxNumberTenths( 2.6 ) );
	object.setBezierY( MxNumberTenths( 2.6 ) );
	object.setBezierX2( MxNumberTenths( 2.6 ) );
	object.setBezierY2( MxNumberTenths( 2.6 ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<booksmart type=\"start\" default-x=\"194.2\" default-y=\"194.2\" bezier-x2=\"2.6\" bezier-y2=\"2.6\" color=\"#8D8E8D8C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 53.2 ) );
	object.setSpaceLength( MxNumberTenths( 53.2 ) );
	object.setDefaultX( MxNumberTenths( 194.3 ) );
	object.setDefaultY( MxNumberTenths( 194.3 ) );
	object.setRelativeX( MxNumberTenths( 194.3 ) );
	object.setRelativeY( MxNumberTenths( 194.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 2.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.7 ) );
	object.setBezierX( MxNumberTenths( 2.7 ) );
	object.setBezierY( MxNumberTenths( 2.7 ) );
	object.setBezierX2( MxNumberTenths( 2.7 ) );
	object.setBezierY2( MxNumberTenths( 2.7 ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"53.2\" default-x=\"194.3\" default-y=\"194.3\" relative-x=\"194.3\" bezier-y2=\"2.7\" color=\"#908F8E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 53.3 ) );
	object.setSpaceLength( MxNumberTenths( 53.3 ) );
	object.setDefaultX( MxNumberTenths( 194.4 ) );
	object.setDefaultY( MxNumberTenths( 194.4 ) );
	object.setRelativeX( MxNumberTenths( 194.4 ) );
	object.setRelativeY( MxNumberTenths( 194.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 2.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.8 ) );
	object.setBezierX( MxNumberTenths( 2.8 ) );
	object.setBezierY( MxNumberTenths( 2.8 ) );
	object.setBezierX2( MxNumberTenths( 2.8 ) );
	object.setBezierY2( MxNumberTenths( 2.8 ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" dash-length=\"53.3\" default-x=\"194.4\" default-y=\"194.4\" relative-x=\"194.4\" color=\"#91929190\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 53.4 ) );
	object.setSpaceLength( MxNumberTenths( 53.4 ) );
	object.setDefaultX( MxNumberTenths( 194.5 ) );
	object.setDefaultY( MxNumberTenths( 194.5 ) );
	object.setRelativeX( MxNumberTenths( 194.5 ) );
	object.setRelativeY( MxNumberTenths( 194.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 2.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.9 ) );
	object.setBezierX( MxNumberTenths( 2.9 ) );
	object.setBezierY( MxNumberTenths( 2.9 ) );
	object.setBezierX2( MxNumberTenths( 2.9 ) );
	object.setBezierY2( MxNumberTenths( 2.9 ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<bishop type=\"start\" line-type=\"dotted\" dash-length=\"53.4\" default-y=\"194.5\" relative-x=\"194.5\" relative-y=\"194.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 53.5 ) );
	object.setSpaceLength( MxNumberTenths( 53.5 ) );
	object.setDefaultX( MxNumberTenths( 194.6 ) );
	object.setDefaultY( MxNumberTenths( 194.6 ) );
	object.setRelativeX( MxNumberTenths( 194.6 ) );
	object.setRelativeY( MxNumberTenths( 194.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 3 ) );
	object.setBezierOffset2( MxNumberDivisions( 3 ) );
	object.setBezierX( MxNumberTenths( 3 ) );
	object.setBezierY( MxNumberTenths( 3 ) );
	object.setBezierX2( MxNumberTenths( 3 ) );
	object.setBezierY2( MxNumberTenths( 3 ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<charlie type=\"start\" line-type=\"wavy\" dash-length=\"53.5\" default-y=\"194.6\" relative-x=\"194.6\" relative-y=\"194.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 53.6 ) );
	object.setSpaceLength( MxNumberTenths( 53.6 ) );
	object.setDefaultX( MxNumberTenths( 194.7 ) );
	object.setDefaultY( MxNumberTenths( 194.7 ) );
	object.setRelativeX( MxNumberTenths( 194.7 ) );
	object.setRelativeY( MxNumberTenths( 194.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 3.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.1 ) );
	object.setBezierX( MxNumberTenths( 3.1 ) );
	object.setBezierY( MxNumberTenths( 3.1 ) );
	object.setBezierX2( MxNumberTenths( 3.1 ) );
	object.setBezierY2( MxNumberTenths( 3.1 ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"solid\" space-length=\"53.6\" default-y=\"194.7\" relative-x=\"194.7\" relative-y=\"194.7\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 53.7 ) );
	object.setSpaceLength( MxNumberTenths( 53.7 ) );
	object.setDefaultX( MxNumberTenths( 194.8 ) );
	object.setDefaultY( MxNumberTenths( 194.8 ) );
	object.setRelativeX( MxNumberTenths( 194.8 ) );
	object.setRelativeY( MxNumberTenths( 194.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 3.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.2 ) );
	object.setBezierX( MxNumberTenths( 3.2 ) );
	object.setBezierY( MxNumberTenths( 3.2 ) );
	object.setBezierX2( MxNumberTenths( 3.2 ) );
	object.setBezierY2( MxNumberTenths( 3.2 ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<quiet type=\"start\" number=\"1\" space-length=\"53.7\" relative-x=\"194.8\" relative-y=\"194.8\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 53.8 ) );
	object.setSpaceLength( MxNumberTenths( 53.8 ) );
	object.setDefaultX( MxNumberTenths( 194.9 ) );
	object.setDefaultY( MxNumberTenths( 194.9 ) );
	object.setRelativeX( MxNumberTenths( 194.9 ) );
	object.setRelativeY( MxNumberTenths( 194.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 3.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.3 ) );
	object.setBezierX( MxNumberTenths( 3.3 ) );
	object.setBezierY( MxNumberTenths( 3.3 ) );
	object.setBezierX2( MxNumberTenths( 3.3 ) );
	object.setBezierY2( MxNumberTenths( 3.3 ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<musicxmlishard type=\"start\" space-length=\"53.8\" relative-x=\"194.9\" relative-y=\"194.9\" placement=\"above\" orientation=\"under\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 53.9 ) );
	object.setSpaceLength( MxNumberTenths( 53.9 ) );
	object.setDefaultX( MxNumberTenths( 195 ) );
	object.setDefaultY( MxNumberTenths( 195 ) );
	object.setRelativeX( MxNumberTenths( 195 ) );
	object.setRelativeY( MxNumberTenths( 195 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 3.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.4 ) );
	object.setBezierX( MxNumberTenths( 3.4 ) );
	object.setBezierY( MxNumberTenths( 3.4 ) );
	object.setBezierX2( MxNumberTenths( 3.4 ) );
	object.setBezierY2( MxNumberTenths( 3.4 ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<bishop type=\"start\" space-length=\"53.9\" relative-x=\"195\" relative-y=\"195\" placement=\"below\" orientation=\"over\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 54 ) );
	object.setSpaceLength( MxNumberTenths( 54 ) );
	object.setDefaultX( MxNumberTenths( 195.1 ) );
	object.setDefaultY( MxNumberTenths( 195.1 ) );
	object.setRelativeX( MxNumberTenths( 195.1 ) );
	object.setRelativeY( MxNumberTenths( 195.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 3.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.5 ) );
	object.setBezierX( MxNumberTenths( 3.5 ) );
	object.setBezierY( MxNumberTenths( 3.5 ) );
	object.setBezierX2( MxNumberTenths( 3.5 ) );
	object.setBezierY2( MxNumberTenths( 3.5 ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-type=\"solid\" dash-length=\"54\" space-length=\"54\" default-x=\"195.1\" relative-y=\"195.1\" placement=\"above\" orientation=\"under\" bezier-offset=\"3.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 54.1 ) );
	object.setSpaceLength( MxNumberTenths( 54.1 ) );
	object.setDefaultX( MxNumberTenths( 195.2 ) );
	object.setDefaultY( MxNumberTenths( 195.2 ) );
	object.setRelativeX( MxNumberTenths( 195.2 ) );
	object.setRelativeY( MxNumberTenths( 195.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 3.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.6 ) );
	object.setBezierX( MxNumberTenths( 3.6 ) );
	object.setBezierY( MxNumberTenths( 3.6 ) );
	object.setBezierX2( MxNumberTenths( 3.6 ) );
	object.setBezierY2( MxNumberTenths( 3.6 ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"54.1\" default-x=\"195.2\" relative-y=\"195.2\" placement=\"below\" orientation=\"over\" bezier-offset=\"3.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 54.2 ) );
	object.setSpaceLength( MxNumberTenths( 54.2 ) );
	object.setDefaultX( MxNumberTenths( 195.3 ) );
	object.setDefaultY( MxNumberTenths( 195.3 ) );
	object.setRelativeX( MxNumberTenths( 195.3 ) );
	object.setRelativeY( MxNumberTenths( 195.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 3.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.7 ) );
	object.setBezierX( MxNumberTenths( 3.7 ) );
	object.setBezierY( MxNumberTenths( 3.7 ) );
	object.setBezierX2( MxNumberTenths( 3.7 ) );
	object.setBezierY2( MxNumberTenths( 3.7 ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<quiet type=\"start\" line-type=\"dotted\" dash-length=\"54.2\" default-x=\"195.3\" relative-y=\"195.3\" placement=\"above\" orientation=\"under\" bezier-offset=\"3.7\" bezier-offset2=\"3.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 54.3 ) );
	object.setSpaceLength( MxNumberTenths( 54.3 ) );
	object.setDefaultX( MxNumberTenths( 195.4 ) );
	object.setDefaultY( MxNumberTenths( 195.4 ) );
	object.setRelativeX( MxNumberTenths( 195.4 ) );
	object.setRelativeY( MxNumberTenths( 195.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 3.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.8 ) );
	object.setBezierX( MxNumberTenths( 3.8 ) );
	object.setBezierY( MxNumberTenths( 3.8 ) );
	object.setBezierX2( MxNumberTenths( 3.8 ) );
	object.setBezierY2( MxNumberTenths( 3.8 ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<musicxmlishard type=\"start\" dash-length=\"54.3\" default-x=\"195.4\" placement=\"below\" orientation=\"over\" bezier-offset=\"3.8\" bezier-offset2=\"3.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 54.4 ) );
	object.setSpaceLength( MxNumberTenths( 54.4 ) );
	object.setDefaultX( MxNumberTenths( 195.5 ) );
	object.setDefaultY( MxNumberTenths( 195.5 ) );
	object.setRelativeX( MxNumberTenths( 195.5 ) );
	object.setRelativeY( MxNumberTenths( 195.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 3.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.9 ) );
	object.setBezierX( MxNumberTenths( 3.9 ) );
	object.setBezierY( MxNumberTenths( 3.9 ) );
	object.setBezierX2( MxNumberTenths( 3.9 ) );
	object.setBezierY2( MxNumberTenths( 3.9 ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"195.5\" default-y=\"195.5\" placement=\"above\" orientation=\"under\" bezier-offset=\"3.9\" bezier-offset2=\"3.9\" bezier-x=\"3.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 54.5 ) );
	object.setSpaceLength( MxNumberTenths( 54.5 ) );
	object.setDefaultX( MxNumberTenths( 195.6 ) );
	object.setDefaultY( MxNumberTenths( 195.6 ) );
	object.setRelativeX( MxNumberTenths( 195.6 ) );
	object.setRelativeY( MxNumberTenths( 195.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 4 ) );
	object.setBezierOffset2( MxNumberDivisions( 4 ) );
	object.setBezierX( MxNumberTenths( 4 ) );
	object.setBezierY( MxNumberTenths( 4 ) );
	object.setBezierX2( MxNumberTenths( 4 ) );
	object.setBezierY2( MxNumberTenths( 4 ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"195.6\" default-y=\"195.6\" placement=\"below\" orientation=\"over\" bezier-offset=\"4\" bezier-offset2=\"4\" bezier-x=\"4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 54.6 ) );
	object.setSpaceLength( MxNumberTenths( 54.6 ) );
	object.setDefaultX( MxNumberTenths( 195.7 ) );
	object.setDefaultY( MxNumberTenths( 195.7 ) );
	object.setRelativeX( MxNumberTenths( 195.7 ) );
	object.setRelativeY( MxNumberTenths( 195.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 4.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.1 ) );
	object.setBezierX( MxNumberTenths( 4.1 ) );
	object.setBezierY( MxNumberTenths( 4.1 ) );
	object.setBezierX2( MxNumberTenths( 4.1 ) );
	object.setBezierY2( MxNumberTenths( 4.1 ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<booksmart type=\"start\" line-type=\"dotted\" space-length=\"54.6\" default-y=\"195.7\" orientation=\"under\" bezier-offset=\"4.1\" bezier-offset2=\"4.1\" bezier-x=\"4.1\" bezier-y=\"4.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 54.7 ) );
	object.setSpaceLength( MxNumberTenths( 54.7 ) );
	object.setDefaultX( MxNumberTenths( 195.8 ) );
	object.setDefaultY( MxNumberTenths( 195.8 ) );
	object.setRelativeX( MxNumberTenths( 195.8 ) );
	object.setRelativeY( MxNumberTenths( 195.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 4.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.2 ) );
	object.setBezierX( MxNumberTenths( 4.2 ) );
	object.setBezierY( MxNumberTenths( 4.2 ) );
	object.setBezierX2( MxNumberTenths( 4.2 ) );
	object.setBezierY2( MxNumberTenths( 4.2 ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<quiet type=\"start\" line-type=\"wavy\" space-length=\"54.7\" default-y=\"195.8\" orientation=\"over\" bezier-offset=\"4.2\" bezier-offset2=\"4.2\" bezier-x=\"4.2\" bezier-y=\"4.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 54.8 ) );
	object.setSpaceLength( MxNumberTenths( 54.8 ) );
	object.setDefaultX( MxNumberTenths( 195.9 ) );
	object.setDefaultY( MxNumberTenths( 195.9 ) );
	object.setRelativeX( MxNumberTenths( 195.9 ) );
	object.setRelativeY( MxNumberTenths( 195.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 4.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.3 ) );
	object.setBezierX( MxNumberTenths( 4.3 ) );
	object.setBezierY( MxNumberTenths( 4.3 ) );
	object.setBezierX2( MxNumberTenths( 4.3 ) );
	object.setBezierY2( MxNumberTenths( 4.3 ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"solid\" dash-length=\"54.8\" space-length=\"54.8\" default-y=\"195.9\" relative-x=\"195.9\" orientation=\"under\" bezier-offset=\"4.3\" bezier-offset2=\"4.3\" bezier-x=\"4.3\" bezier-y=\"4.3\" bezier-x2=\"4.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 54.9 ) );
	object.setSpaceLength( MxNumberTenths( 54.9 ) );
	object.setDefaultX( MxNumberTenths( 196 ) );
	object.setDefaultY( MxNumberTenths( 196 ) );
	object.setRelativeX( MxNumberTenths( 196 ) );
	object.setRelativeY( MxNumberTenths( 196 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 4.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.4 ) );
	object.setBezierX( MxNumberTenths( 4.4 ) );
	object.setBezierY( MxNumberTenths( 4.4 ) );
	object.setBezierX2( MxNumberTenths( 4.4 ) );
	object.setBezierY2( MxNumberTenths( 4.4 ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<bishop type=\"start\" number=\"1\" dash-length=\"54.9\" space-length=\"54.9\" default-y=\"196\" relative-x=\"196\" bezier-offset=\"4.4\" bezier-offset2=\"4.4\" bezier-x=\"4.4\" bezier-y=\"4.4\" bezier-x2=\"4.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 55 ) );
	object.setSpaceLength( MxNumberTenths( 55 ) );
	object.setDefaultX( MxNumberTenths( 196.1 ) );
	object.setDefaultY( MxNumberTenths( 196.1 ) );
	object.setRelativeX( MxNumberTenths( 196.1 ) );
	object.setRelativeY( MxNumberTenths( 196.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 4.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.5 ) );
	object.setBezierX( MxNumberTenths( 4.5 ) );
	object.setBezierY( MxNumberTenths( 4.5 ) );
	object.setBezierX2( MxNumberTenths( 4.5 ) );
	object.setBezierY2( MxNumberTenths( 4.5 ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<charlie type=\"start\" dash-length=\"55\" space-length=\"55\" default-y=\"196.1\" relative-x=\"196.1\" bezier-offset=\"4.5\" bezier-offset2=\"4.5\" bezier-x=\"4.5\" bezier-y=\"4.5\" bezier-x2=\"4.5\" bezier-y2=\"4.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 55.1 ) );
	object.setSpaceLength( MxNumberTenths( 55.1 ) );
	object.setDefaultX( MxNumberTenths( 196.2 ) );
	object.setDefaultY( MxNumberTenths( 196.2 ) );
	object.setRelativeX( MxNumberTenths( 196.2 ) );
	object.setRelativeY( MxNumberTenths( 196.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 4.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.6 ) );
	object.setBezierX( MxNumberTenths( 4.6 ) );
	object.setBezierY( MxNumberTenths( 4.6 ) );
	object.setBezierX2( MxNumberTenths( 4.6 ) );
	object.setBezierY2( MxNumberTenths( 4.6 ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<booksmart type=\"start\" dash-length=\"55.1\" relative-x=\"196.2\" bezier-offset=\"4.6\" bezier-offset2=\"4.6\" bezier-x=\"4.6\" bezier-y=\"4.6\" bezier-x2=\"4.6\" bezier-y2=\"4.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 55.2 ) );
	object.setSpaceLength( MxNumberTenths( 55.2 ) );
	object.setDefaultX( MxNumberTenths( 196.3 ) );
	object.setDefaultY( MxNumberTenths( 196.3 ) );
	object.setRelativeX( MxNumberTenths( 196.3 ) );
	object.setRelativeY( MxNumberTenths( 196.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 4.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.7 ) );
	object.setBezierX( MxNumberTenths( 4.7 ) );
	object.setBezierY( MxNumberTenths( 4.7 ) );
	object.setBezierX2( MxNumberTenths( 4.7 ) );
	object.setBezierY2( MxNumberTenths( 4.7 ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-type=\"solid\" default-x=\"196.3\" relative-x=\"196.3\" relative-y=\"196.3\" bezier-offset2=\"4.7\" bezier-x=\"4.7\" bezier-y=\"4.7\" bezier-x2=\"4.7\" bezier-y2=\"4.7\" color=\"#B8B7B6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 55.3 ) );
	object.setSpaceLength( MxNumberTenths( 55.3 ) );
	object.setDefaultX( MxNumberTenths( 196.4 ) );
	object.setDefaultY( MxNumberTenths( 196.4 ) );
	object.setRelativeX( MxNumberTenths( 196.4 ) );
	object.setRelativeY( MxNumberTenths( 196.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 4.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.8 ) );
	object.setBezierX( MxNumberTenths( 4.8 ) );
	object.setBezierY( MxNumberTenths( 4.8 ) );
	object.setBezierX2( MxNumberTenths( 4.8 ) );
	object.setBezierY2( MxNumberTenths( 4.8 ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"dashed\" default-x=\"196.4\" relative-x=\"196.4\" relative-y=\"196.4\" bezier-offset2=\"4.8\" bezier-x=\"4.8\" bezier-y=\"4.8\" bezier-x2=\"4.8\" bezier-y2=\"4.8\" color=\"#B9BAB9B8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 55.4 ) );
	object.setSpaceLength( MxNumberTenths( 55.4 ) );
	object.setDefaultX( MxNumberTenths( 196.5 ) );
	object.setDefaultY( MxNumberTenths( 196.5 ) );
	object.setRelativeX( MxNumberTenths( 196.5 ) );
	object.setRelativeY( MxNumberTenths( 196.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 4.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.9 ) );
	object.setBezierX( MxNumberTenths( 4.9 ) );
	object.setBezierY( MxNumberTenths( 4.9 ) );
	object.setBezierX2( MxNumberTenths( 4.9 ) );
	object.setBezierY2( MxNumberTenths( 4.9 ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<bishop type=\"start\" line-type=\"dotted\" default-x=\"196.5\" relative-x=\"196.5\" relative-y=\"196.5\" bezier-offset2=\"4.9\" bezier-x=\"4.9\" bezier-y=\"4.9\" bezier-x2=\"4.9\" bezier-y2=\"4.9\" color=\"#BCBBBA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 55.5 ) );
	object.setSpaceLength( MxNumberTenths( 55.5 ) );
	object.setDefaultX( MxNumberTenths( 196.6 ) );
	object.setDefaultY( MxNumberTenths( 196.6 ) );
	object.setRelativeX( MxNumberTenths( 196.6 ) );
	object.setRelativeY( MxNumberTenths( 196.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 5 ) );
	object.setBezierOffset2( MxNumberDivisions( 5 ) );
	object.setBezierX( MxNumberTenths( 5 ) );
	object.setBezierY( MxNumberTenths( 5 ) );
	object.setBezierX2( MxNumberTenths( 5 ) );
	object.setBezierY2( MxNumberTenths( 5 ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<charlie type=\"start\" default-x=\"196.6\" relative-x=\"196.6\" relative-y=\"196.6\" bezier-x=\"5\" bezier-y=\"5\" bezier-x2=\"5\" bezier-y2=\"5\" color=\"#BDBEBDBC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 55.6 ) );
	object.setSpaceLength( MxNumberTenths( 55.6 ) );
	object.setDefaultX( MxNumberTenths( 196.7 ) );
	object.setDefaultY( MxNumberTenths( 196.7 ) );
	object.setRelativeX( MxNumberTenths( 196.7 ) );
	object.setRelativeY( MxNumberTenths( 196.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 5.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.1 ) );
	object.setBezierX( MxNumberTenths( 5.1 ) );
	object.setBezierY( MxNumberTenths( 5.1 ) );
	object.setBezierX2( MxNumberTenths( 5.1 ) );
	object.setBezierY2( MxNumberTenths( 5.1 ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<booksmart type=\"start\" number=\"1\" dash-length=\"55.6\" space-length=\"55.6\" default-x=\"196.7\" relative-y=\"196.7\" placement=\"above\" bezier-x=\"5.1\" bezier-y=\"5.1\" bezier-x2=\"5.1\" bezier-y2=\"5.1\" color=\"#C0BFBE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 55.7 ) );
	object.setSpaceLength( MxNumberTenths( 55.7 ) );
	object.setDefaultX( MxNumberTenths( 196.8 ) );
	object.setDefaultY( MxNumberTenths( 196.8 ) );
	object.setRelativeX( MxNumberTenths( 196.8 ) );
	object.setRelativeY( MxNumberTenths( 196.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 5.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.2 ) );
	object.setBezierX( MxNumberTenths( 5.2 ) );
	object.setBezierY( MxNumberTenths( 5.2 ) );
	object.setBezierX2( MxNumberTenths( 5.2 ) );
	object.setBezierY2( MxNumberTenths( 5.2 ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"55.7\" space-length=\"55.7\" default-x=\"196.8\" relative-y=\"196.8\" placement=\"below\" bezier-x=\"5.2\" bezier-y=\"5.2\" bezier-x2=\"5.2\" bezier-y2=\"5.2\" color=\"#C1C2C1C0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 55.8 ) );
	object.setSpaceLength( MxNumberTenths( 55.8 ) );
	object.setDefaultX( MxNumberTenths( 196.9 ) );
	object.setDefaultY( MxNumberTenths( 196.9 ) );
	object.setRelativeX( MxNumberTenths( 196.9 ) );
	object.setRelativeY( MxNumberTenths( 196.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 5.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.3 ) );
	object.setBezierX( MxNumberTenths( 5.3 ) );
	object.setBezierY( MxNumberTenths( 5.3 ) );
	object.setBezierX2( MxNumberTenths( 5.3 ) );
	object.setBezierY2( MxNumberTenths( 5.3 ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<musicxmlishard type=\"start\" line-type=\"dotted\" dash-length=\"55.8\" space-length=\"55.8\" default-y=\"196.9\" relative-y=\"196.9\" placement=\"above\" bezier-y=\"5.3\" bezier-x2=\"5.3\" bezier-y2=\"5.3\" color=\"#C4C3C2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 55.9 ) );
	object.setSpaceLength( MxNumberTenths( 55.9 ) );
	object.setDefaultX( MxNumberTenths( 197 ) );
	object.setDefaultY( MxNumberTenths( 197 ) );
	object.setRelativeX( MxNumberTenths( 197 ) );
	object.setRelativeY( MxNumberTenths( 197 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 5.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.4 ) );
	object.setBezierX( MxNumberTenths( 5.4 ) );
	object.setBezierY( MxNumberTenths( 5.4 ) );
	object.setBezierX2( MxNumberTenths( 5.4 ) );
	object.setBezierY2( MxNumberTenths( 5.4 ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<bishop type=\"start\" line-type=\"wavy\" dash-length=\"55.9\" space-length=\"55.9\" default-y=\"197\" relative-y=\"197\" placement=\"below\" bezier-y=\"5.4\" bezier-x2=\"5.4\" bezier-y2=\"5.4\" color=\"#C5C6C5C4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 56 ) );
	object.setSpaceLength( MxNumberTenths( 56 ) );
	object.setDefaultX( MxNumberTenths( 197.1 ) );
	object.setDefaultY( MxNumberTenths( 197.1 ) );
	object.setRelativeX( MxNumberTenths( 197.1 ) );
	object.setRelativeY( MxNumberTenths( 197.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 5.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.5 ) );
	object.setBezierX( MxNumberTenths( 5.5 ) );
	object.setBezierY( MxNumberTenths( 5.5 ) );
	object.setBezierX2( MxNumberTenths( 5.5 ) );
	object.setBezierY2( MxNumberTenths( 5.5 ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-type=\"solid\" space-length=\"56\" default-y=\"197.1\" relative-y=\"197.1\" placement=\"above\" orientation=\"under\" bezier-y=\"5.5\" bezier-x2=\"5.5\" bezier-y2=\"5.5\" color=\"#C8C7C6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 56.1 ) );
	object.setSpaceLength( MxNumberTenths( 56.1 ) );
	object.setDefaultX( MxNumberTenths( 197.2 ) );
	object.setDefaultY( MxNumberTenths( 197.2 ) );
	object.setRelativeX( MxNumberTenths( 197.2 ) );
	object.setRelativeY( MxNumberTenths( 197.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 5.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.6 ) );
	object.setBezierX( MxNumberTenths( 5.6 ) );
	object.setBezierY( MxNumberTenths( 5.6 ) );
	object.setBezierX2( MxNumberTenths( 5.6 ) );
	object.setBezierY2( MxNumberTenths( 5.6 ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-y=\"197.2\" placement=\"below\" orientation=\"over\" bezier-x2=\"5.6\" bezier-y2=\"5.6\" color=\"#C9CAC9C8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 56.2 ) );
	object.setSpaceLength( MxNumberTenths( 56.2 ) );
	object.setDefaultX( MxNumberTenths( 197.3 ) );
	object.setDefaultY( MxNumberTenths( 197.3 ) );
	object.setRelativeX( MxNumberTenths( 197.3 ) );
	object.setRelativeY( MxNumberTenths( 197.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 5.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.7 ) );
	object.setBezierX( MxNumberTenths( 5.7 ) );
	object.setBezierY( MxNumberTenths( 5.7 ) );
	object.setBezierX2( MxNumberTenths( 5.7 ) );
	object.setBezierY2( MxNumberTenths( 5.7 ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<quiet type=\"start\" default-y=\"197.3\" placement=\"above\" orientation=\"under\" bezier-x2=\"5.7\" bezier-y2=\"5.7\" color=\"#CCCBCA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 56.3 ) );
	object.setSpaceLength( MxNumberTenths( 56.3 ) );
	object.setDefaultX( MxNumberTenths( 197.4 ) );
	object.setDefaultY( MxNumberTenths( 197.4 ) );
	object.setRelativeX( MxNumberTenths( 197.4 ) );
	object.setRelativeY( MxNumberTenths( 197.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 5.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.8 ) );
	object.setBezierX( MxNumberTenths( 5.8 ) );
	object.setBezierY( MxNumberTenths( 5.8 ) );
	object.setBezierX2( MxNumberTenths( 5.8 ) );
	object.setBezierY2( MxNumberTenths( 5.8 ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"197.4\" placement=\"below\" orientation=\"over\" bezier-x2=\"5.8\" bezier-y2=\"5.8\" color=\"#CDCECDCC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 56.4 ) );
	object.setSpaceLength( MxNumberTenths( 56.4 ) );
	object.setDefaultX( MxNumberTenths( 197.5 ) );
	object.setDefaultY( MxNumberTenths( 197.5 ) );
	object.setRelativeX( MxNumberTenths( 197.5 ) );
	object.setRelativeY( MxNumberTenths( 197.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 5.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.9 ) );
	object.setBezierX( MxNumberTenths( 5.9 ) );
	object.setBezierY( MxNumberTenths( 5.9 ) );
	object.setBezierX2( MxNumberTenths( 5.9 ) );
	object.setBezierY2( MxNumberTenths( 5.9 ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-type=\"solid\" dash-length=\"56.4\" default-x=\"197.5\" default-y=\"197.5\" relative-x=\"197.5\" placement=\"above\" orientation=\"under\" bezier-offset=\"5.9\" bezier-y2=\"5.9\" color=\"#D0CFCE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 56.5 ) );
	object.setSpaceLength( MxNumberTenths( 56.5 ) );
	object.setDefaultX( MxNumberTenths( 197.6 ) );
	object.setDefaultY( MxNumberTenths( 197.6 ) );
	object.setRelativeX( MxNumberTenths( 197.6 ) );
	object.setRelativeY( MxNumberTenths( 197.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 6 ) );
	object.setBezierOffset2( MxNumberDivisions( 6 ) );
	object.setBezierX( MxNumberTenths( 6 ) );
	object.setBezierY( MxNumberTenths( 6 ) );
	object.setBezierX2( MxNumberTenths( 6 ) );
	object.setBezierY2( MxNumberTenths( 6 ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"56.5\" default-x=\"197.6\" relative-x=\"197.6\" placement=\"below\" orientation=\"over\" bezier-offset=\"6\" bezier-y2=\"6\" color=\"#D1D2D1D0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 56.6 ) );
	object.setSpaceLength( MxNumberTenths( 56.6 ) );
	object.setDefaultX( MxNumberTenths( 197.7 ) );
	object.setDefaultY( MxNumberTenths( 197.7 ) );
	object.setRelativeX( MxNumberTenths( 197.7 ) );
	object.setRelativeY( MxNumberTenths( 197.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 6.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.1 ) );
	object.setBezierX( MxNumberTenths( 6.1 ) );
	object.setBezierY( MxNumberTenths( 6.1 ) );
	object.setBezierX2( MxNumberTenths( 6.1 ) );
	object.setBezierY2( MxNumberTenths( 6.1 ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<booksmart type=\"start\" line-type=\"dotted\" dash-length=\"56.6\" space-length=\"56.6\" default-x=\"197.7\" relative-x=\"197.7\" orientation=\"under\" bezier-offset=\"6.1\" bezier-y2=\"6.1\" color=\"#D4D3D2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 56.7 ) );
	object.setSpaceLength( MxNumberTenths( 56.7 ) );
	object.setDefaultX( MxNumberTenths( 197.8 ) );
	object.setDefaultY( MxNumberTenths( 197.8 ) );
	object.setRelativeX( MxNumberTenths( 197.8 ) );
	object.setRelativeY( MxNumberTenths( 197.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 6.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.2 ) );
	object.setBezierX( MxNumberTenths( 6.2 ) );
	object.setBezierY( MxNumberTenths( 6.2 ) );
	object.setBezierX2( MxNumberTenths( 6.2 ) );
	object.setBezierY2( MxNumberTenths( 6.2 ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<quiet type=\"start\" dash-length=\"56.7\" space-length=\"56.7\" default-x=\"197.8\" relative-x=\"197.8\" orientation=\"over\" bezier-offset=\"6.2\" color=\"#D5D6D5D4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 56.8 ) );
	object.setSpaceLength( MxNumberTenths( 56.8 ) );
	object.setDefaultX( MxNumberTenths( 197.9 ) );
	object.setDefaultY( MxNumberTenths( 197.9 ) );
	object.setRelativeX( MxNumberTenths( 197.9 ) );
	object.setRelativeY( MxNumberTenths( 197.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 6.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.3 ) );
	object.setBezierX( MxNumberTenths( 6.3 ) );
	object.setBezierY( MxNumberTenths( 6.3 ) );
	object.setBezierX2( MxNumberTenths( 6.3 ) );
	object.setBezierY2( MxNumberTenths( 6.3 ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" space-length=\"56.8\" default-x=\"197.9\" relative-x=\"197.9\" orientation=\"under\" bezier-offset=\"6.3\" bezier-offset2=\"6.3\" color=\"#D8D7D6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 56.9 ) );
	object.setSpaceLength( MxNumberTenths( 56.9 ) );
	object.setDefaultX( MxNumberTenths( 198 ) );
	object.setDefaultY( MxNumberTenths( 198 ) );
	object.setRelativeX( MxNumberTenths( 198 ) );
	object.setRelativeY( MxNumberTenths( 198 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 6.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.4 ) );
	object.setBezierX( MxNumberTenths( 6.4 ) );
	object.setBezierY( MxNumberTenths( 6.4 ) );
	object.setBezierX2( MxNumberTenths( 6.4 ) );
	object.setBezierY2( MxNumberTenths( 6.4 ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<bishop type=\"start\" number=\"1\" space-length=\"56.9\" default-x=\"198\" relative-x=\"198\" orientation=\"over\" bezier-offset=\"6.4\" bezier-offset2=\"6.4\" color=\"#D9DAD9D8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 57 ) );
	object.setSpaceLength( MxNumberTenths( 57 ) );
	object.setDefaultX( MxNumberTenths( 198.1 ) );
	object.setDefaultY( MxNumberTenths( 198.1 ) );
	object.setRelativeX( MxNumberTenths( 198.1 ) );
	object.setRelativeY( MxNumberTenths( 198.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 6.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.5 ) );
	object.setBezierX( MxNumberTenths( 6.5 ) );
	object.setBezierY( MxNumberTenths( 6.5 ) );
	object.setBezierX2( MxNumberTenths( 6.5 ) );
	object.setBezierY2( MxNumberTenths( 6.5 ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<charlie type=\"start\" line-type=\"dotted\" space-length=\"57\" relative-x=\"198.1\" relative-y=\"198.1\" orientation=\"under\" bezier-offset=\"6.5\" bezier-offset2=\"6.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 57.1 ) );
	object.setSpaceLength( MxNumberTenths( 57.1 ) );
	object.setDefaultX( MxNumberTenths( 198.2 ) );
	object.setDefaultY( MxNumberTenths( 198.2 ) );
	object.setRelativeX( MxNumberTenths( 198.2 ) );
	object.setRelativeY( MxNumberTenths( 198.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 6.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.6 ) );
	object.setBezierX( MxNumberTenths( 6.6 ) );
	object.setBezierY( MxNumberTenths( 6.6 ) );
	object.setBezierX2( MxNumberTenths( 6.6 ) );
	object.setBezierY2( MxNumberTenths( 6.6 ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<booksmart type=\"start\" line-type=\"wavy\" relative-x=\"198.2\" relative-y=\"198.2\" bezier-offset=\"6.6\" bezier-offset2=\"6.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 57.2 ) );
	object.setSpaceLength( MxNumberTenths( 57.2 ) );
	object.setDefaultX( MxNumberTenths( 198.3 ) );
	object.setDefaultY( MxNumberTenths( 198.3 ) );
	object.setRelativeX( MxNumberTenths( 198.3 ) );
	object.setRelativeY( MxNumberTenths( 198.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 6.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.7 ) );
	object.setBezierX( MxNumberTenths( 6.7 ) );
	object.setBezierY( MxNumberTenths( 6.7 ) );
	object.setBezierX2( MxNumberTenths( 6.7 ) );
	object.setBezierY2( MxNumberTenths( 6.7 ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-type=\"solid\" dash-length=\"57.2\" default-y=\"198.3\" relative-y=\"198.3\" bezier-offset=\"6.7\" bezier-offset2=\"6.7\" bezier-x=\"6.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 57.3 ) );
	object.setSpaceLength( MxNumberTenths( 57.3 ) );
	object.setDefaultX( MxNumberTenths( 198.4 ) );
	object.setDefaultY( MxNumberTenths( 198.4 ) );
	object.setRelativeX( MxNumberTenths( 198.4 ) );
	object.setRelativeY( MxNumberTenths( 198.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 6.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.8 ) );
	object.setBezierX( MxNumberTenths( 6.8 ) );
	object.setBezierY( MxNumberTenths( 6.8 ) );
	object.setBezierX2( MxNumberTenths( 6.8 ) );
	object.setBezierY2( MxNumberTenths( 6.8 ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" dash-length=\"57.3\" default-y=\"198.4\" relative-y=\"198.4\" bezier-offset=\"6.8\" bezier-offset2=\"6.8\" bezier-x=\"6.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 57.4 ) );
	object.setSpaceLength( MxNumberTenths( 57.4 ) );
	object.setDefaultX( MxNumberTenths( 198.5 ) );
	object.setDefaultY( MxNumberTenths( 198.5 ) );
	object.setRelativeX( MxNumberTenths( 198.5 ) );
	object.setRelativeY( MxNumberTenths( 198.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 6.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.9 ) );
	object.setBezierX( MxNumberTenths( 6.9 ) );
	object.setBezierY( MxNumberTenths( 6.9 ) );
	object.setBezierX2( MxNumberTenths( 6.9 ) );
	object.setBezierY2( MxNumberTenths( 6.9 ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<bishop type=\"start\" dash-length=\"57.4\" default-y=\"198.5\" relative-y=\"198.5\" bezier-offset=\"6.9\" bezier-offset2=\"6.9\" bezier-x=\"6.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 57.5 ) );
	object.setSpaceLength( MxNumberTenths( 57.5 ) );
	object.setDefaultX( MxNumberTenths( 198.6 ) );
	object.setDefaultY( MxNumberTenths( 198.6 ) );
	object.setRelativeX( MxNumberTenths( 198.6 ) );
	object.setRelativeY( MxNumberTenths( 198.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 7 ) );
	object.setBezierOffset2( MxNumberDivisions( 7 ) );
	object.setBezierX( MxNumberTenths( 7 ) );
	object.setBezierY( MxNumberTenths( 7 ) );
	object.setBezierX2( MxNumberTenths( 7 ) );
	object.setBezierY2( MxNumberTenths( 7 ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<charlie type=\"start\" dash-length=\"57.5\" default-y=\"198.6\" relative-y=\"198.6\" bezier-offset=\"7\" bezier-offset2=\"7\" bezier-x=\"7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 57.6 ) );
	object.setSpaceLength( MxNumberTenths( 57.6 ) );
	object.setDefaultX( MxNumberTenths( 198.7 ) );
	object.setDefaultY( MxNumberTenths( 198.7 ) );
	object.setRelativeX( MxNumberTenths( 198.7 ) );
	object.setRelativeY( MxNumberTenths( 198.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 7.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.1 ) );
	object.setBezierX( MxNumberTenths( 7.1 ) );
	object.setBezierY( MxNumberTenths( 7.1 ) );
	object.setBezierX2( MxNumberTenths( 7.1 ) );
	object.setBezierY2( MxNumberTenths( 7.1 ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"solid\" space-length=\"57.6\" default-x=\"198.7\" default-y=\"198.7\" relative-y=\"198.7\" placement=\"above\" bezier-offset2=\"7.1\" bezier-x=\"7.1\" bezier-y=\"7.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 57.7 ) );
	object.setSpaceLength( MxNumberTenths( 57.7 ) );
	object.setDefaultX( MxNumberTenths( 198.8 ) );
	object.setDefaultY( MxNumberTenths( 198.8 ) );
	object.setRelativeX( MxNumberTenths( 198.8 ) );
	object.setRelativeY( MxNumberTenths( 198.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 7.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.2 ) );
	object.setBezierX( MxNumberTenths( 7.2 ) );
	object.setBezierY( MxNumberTenths( 7.2 ) );
	object.setBezierX2( MxNumberTenths( 7.2 ) );
	object.setBezierY2( MxNumberTenths( 7.2 ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-type=\"dashed\" space-length=\"57.7\" default-x=\"198.8\" default-y=\"198.8\" relative-y=\"198.8\" placement=\"below\" bezier-offset2=\"7.2\" bezier-x=\"7.2\" bezier-y=\"7.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 57.8 ) );
	object.setSpaceLength( MxNumberTenths( 57.8 ) );
	object.setDefaultX( MxNumberTenths( 198.9 ) );
	object.setDefaultY( MxNumberTenths( 198.9 ) );
	object.setRelativeX( MxNumberTenths( 198.9 ) );
	object.setRelativeY( MxNumberTenths( 198.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 7.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.3 ) );
	object.setBezierX( MxNumberTenths( 7.3 ) );
	object.setBezierY( MxNumberTenths( 7.3 ) );
	object.setBezierX2( MxNumberTenths( 7.3 ) );
	object.setBezierY2( MxNumberTenths( 7.3 ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<musicxmlishard type=\"start\" line-type=\"dotted\" space-length=\"57.8\" default-x=\"198.9\" default-y=\"198.9\" relative-y=\"198.9\" placement=\"above\" bezier-offset2=\"7.3\" bezier-x=\"7.3\" bezier-y=\"7.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 57.9 ) );
	object.setSpaceLength( MxNumberTenths( 57.9 ) );
	object.setDefaultX( MxNumberTenths( 199 ) );
	object.setDefaultY( MxNumberTenths( 199 ) );
	object.setRelativeX( MxNumberTenths( 199 ) );
	object.setRelativeY( MxNumberTenths( 199 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 7.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.4 ) );
	object.setBezierX( MxNumberTenths( 7.4 ) );
	object.setBezierY( MxNumberTenths( 7.4 ) );
	object.setBezierX2( MxNumberTenths( 7.4 ) );
	object.setBezierY2( MxNumberTenths( 7.4 ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<bishop type=\"start\" space-length=\"57.9\" default-x=\"199\" placement=\"below\" bezier-offset2=\"7.4\" bezier-x=\"7.4\" bezier-y=\"7.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 58 ) );
	object.setSpaceLength( MxNumberTenths( 58 ) );
	object.setDefaultX( MxNumberTenths( 199.1 ) );
	object.setDefaultY( MxNumberTenths( 199.1 ) );
	object.setRelativeX( MxNumberTenths( 199.1 ) );
	object.setRelativeY( MxNumberTenths( 199.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 7.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.5 ) );
	object.setBezierX( MxNumberTenths( 7.5 ) );
	object.setBezierY( MxNumberTenths( 7.5 ) );
	object.setBezierX2( MxNumberTenths( 7.5 ) );
	object.setBezierY2( MxNumberTenths( 7.5 ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<charlie type=\"start\" number=\"1\" dash-length=\"58\" space-length=\"58\" default-x=\"199.1\" relative-x=\"199.1\" placement=\"above\" bezier-offset2=\"7.5\" bezier-x=\"7.5\" bezier-y=\"7.5\" bezier-x2=\"7.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 58.1 ) );
	object.setSpaceLength( MxNumberTenths( 58.1 ) );
	object.setDefaultX( MxNumberTenths( 199.2 ) );
	object.setDefaultY( MxNumberTenths( 199.2 ) );
	object.setRelativeX( MxNumberTenths( 199.2 ) );
	object.setRelativeY( MxNumberTenths( 199.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 7.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.6 ) );
	object.setBezierX( MxNumberTenths( 7.6 ) );
	object.setBezierY( MxNumberTenths( 7.6 ) );
	object.setBezierX2( MxNumberTenths( 7.6 ) );
	object.setBezierY2( MxNumberTenths( 7.6 ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<booksmart type=\"start\" number=\"1\" dash-length=\"58.1\" default-x=\"199.2\" relative-x=\"199.2\" placement=\"below\" bezier-x=\"7.6\" bezier-y=\"7.6\" bezier-x2=\"7.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 58.2 ) );
	object.setSpaceLength( MxNumberTenths( 58.2 ) );
	object.setDefaultX( MxNumberTenths( 199.3 ) );
	object.setDefaultY( MxNumberTenths( 199.3 ) );
	object.setRelativeX( MxNumberTenths( 199.3 ) );
	object.setRelativeY( MxNumberTenths( 199.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 7.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.7 ) );
	object.setBezierX( MxNumberTenths( 7.7 ) );
	object.setBezierY( MxNumberTenths( 7.7 ) );
	object.setBezierX2( MxNumberTenths( 7.7 ) );
	object.setBezierY2( MxNumberTenths( 7.7 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<quiet type=\"start\" line-type=\"dotted\" dash-length=\"58.2\" relative-x=\"199.3\" placement=\"above\" orientation=\"under\" bezier-x=\"7.7\" bezier-y=\"7.7\" bezier-x2=\"7.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 58.3 ) );
	object.setSpaceLength( MxNumberTenths( 58.3 ) );
	object.setDefaultX( MxNumberTenths( 199.4 ) );
	object.setDefaultY( MxNumberTenths( 199.4 ) );
	object.setRelativeX( MxNumberTenths( 199.4 ) );
	object.setRelativeY( MxNumberTenths( 199.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 7.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.8 ) );
	object.setBezierX( MxNumberTenths( 7.8 ) );
	object.setBezierY( MxNumberTenths( 7.8 ) );
	object.setBezierX2( MxNumberTenths( 7.8 ) );
	object.setBezierY2( MxNumberTenths( 7.8 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<musicxmlishard type=\"start\" line-type=\"wavy\" dash-length=\"58.3\" relative-x=\"199.4\" placement=\"below\" orientation=\"over\" bezier-x=\"7.8\" bezier-y=\"7.8\" bezier-x2=\"7.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 58.4 ) );
	object.setSpaceLength( MxNumberTenths( 58.4 ) );
	object.setDefaultX( MxNumberTenths( 199.5 ) );
	object.setDefaultY( MxNumberTenths( 199.5 ) );
	object.setRelativeX( MxNumberTenths( 199.5 ) );
	object.setRelativeY( MxNumberTenths( 199.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 7.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.9 ) );
	object.setBezierX( MxNumberTenths( 7.9 ) );
	object.setBezierY( MxNumberTenths( 7.9 ) );
	object.setBezierX2( MxNumberTenths( 7.9 ) );
	object.setBezierY2( MxNumberTenths( 7.9 ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-type=\"solid\" relative-x=\"199.5\" placement=\"above\" orientation=\"under\" bezier-x=\"7.9\" bezier-y=\"7.9\" bezier-x2=\"7.9\" bezier-y2=\"7.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 58.5 ) );
	object.setSpaceLength( MxNumberTenths( 58.5 ) );
	object.setDefaultX( MxNumberTenths( 199.6 ) );
	object.setDefaultY( MxNumberTenths( 199.6 ) );
	object.setRelativeX( MxNumberTenths( 199.6 ) );
	object.setRelativeY( MxNumberTenths( 199.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 8 ) );
	object.setBezierOffset2( MxNumberDivisions( 8 ) );
	object.setBezierX( MxNumberTenths( 8 ) );
	object.setBezierY( MxNumberTenths( 8 ) );
	object.setBezierX2( MxNumberTenths( 8 ) );
	object.setBezierY2( MxNumberTenths( 8 ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<charlie type=\"start\" number=\"1\" relative-x=\"199.6\" placement=\"below\" orientation=\"over\" bezier-x=\"8\" bezier-y=\"8\" bezier-x2=\"8\" bezier-y2=\"8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 58.6 ) );
	object.setSpaceLength( MxNumberTenths( 58.6 ) );
	object.setDefaultX( MxNumberTenths( 199.7 ) );
	object.setDefaultY( MxNumberTenths( 199.7 ) );
	object.setRelativeX( MxNumberTenths( 199.7 ) );
	object.setRelativeY( MxNumberTenths( 199.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 8.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 8.1 ) );
	object.setBezierX( MxNumberTenths( 8.1 ) );
	object.setBezierY( MxNumberTenths( 8.1 ) );
	object.setBezierX2( MxNumberTenths( 8.1 ) );
	object.setBezierY2( MxNumberTenths( 8.1 ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<booksmart type=\"start\" space-length=\"58.6\" default-y=\"199.7\" relative-x=\"199.7\" orientation=\"under\" bezier-y=\"8.1\" bezier-x2=\"8.1\" bezier-y2=\"8.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setDashLength( MxNumberTenths( 58.7 ) );
	object.setSpaceLength( MxNumberTenths( 58.7 ) );
	object.setDefaultX( MxNumberTenths( 199.8 ) );
	object.setDefaultY( MxNumberTenths( 199.8 ) );
	object.setRelativeX( MxNumberTenths( 199.8 ) );
	object.setRelativeY( MxNumberTenths( 199.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 8.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 8.2 ) );
	object.setBezierX( MxNumberTenths( 8.2 ) );
	object.setBezierY( MxNumberTenths( 8.2 ) );
	object.setBezierX2( MxNumberTenths( 8.2 ) );
	object.setBezierY2( MxNumberTenths( 8.2 ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<quiet type=\"start\" space-length=\"58.7\" default-y=\"199.8\" relative-x=\"199.8\" orientation=\"over\" bezier-y=\"8.2\" bezier-x2=\"8.2\" bezier-y2=\"8.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 58.8 ) );
	object.setSpaceLength( MxNumberTenths( 58.8 ) );
	object.setDefaultX( MxNumberTenths( 199.9 ) );
	object.setDefaultY( MxNumberTenths( 199.9 ) );
	object.setRelativeX( MxNumberTenths( 199.9 ) );
	object.setRelativeY( MxNumberTenths( 199.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 8.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 8.3 ) );
	object.setBezierX( MxNumberTenths( 8.3 ) );
	object.setBezierY( MxNumberTenths( 8.3 ) );
	object.setBezierX2( MxNumberTenths( 8.3 ) );
	object.setBezierY2( MxNumberTenths( 8.3 ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"solid\" dash-length=\"58.8\" space-length=\"58.8\" default-x=\"199.9\" default-y=\"199.9\" relative-y=\"199.9\" orientation=\"under\" bezier-offset=\"8.3\" bezier-y=\"8.3\" bezier-x2=\"8.3\" bezier-y2=\"8.3\" color=\"#00FFFE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 58.9 ) );
	object.setSpaceLength( MxNumberTenths( 58.9 ) );
	object.setDefaultX( MxNumberTenths( 200 ) );
	object.setDefaultY( MxNumberTenths( 200 ) );
	object.setRelativeX( MxNumberTenths( 200 ) );
	object.setRelativeY( MxNumberTenths( 200 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 8.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 8.4 ) );
	object.setBezierX( MxNumberTenths( 8.4 ) );
	object.setBezierY( MxNumberTenths( 8.4 ) );
	object.setBezierX2( MxNumberTenths( 8.4 ) );
	object.setBezierY2( MxNumberTenths( 8.4 ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"58.9\" space-length=\"58.9\" default-x=\"200\" default-y=\"200\" relative-y=\"200\" orientation=\"over\" bezier-offset=\"8.4\" bezier-y=\"8.4\" bezier-x2=\"8.4\" bezier-y2=\"8.4\" color=\"#01020100\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 59 ) );
	object.setSpaceLength( MxNumberTenths( 59 ) );
	object.setDefaultX( MxNumberTenths( 200.1 ) );
	object.setDefaultY( MxNumberTenths( 200.1 ) );
	object.setRelativeX( MxNumberTenths( 200.1 ) );
	object.setRelativeY( MxNumberTenths( 200.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 8.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 8.5 ) );
	object.setBezierX( MxNumberTenths( 8.5 ) );
	object.setBezierY( MxNumberTenths( 8.5 ) );
	object.setBezierX2( MxNumberTenths( 8.5 ) );
	object.setBezierY2( MxNumberTenths( 8.5 ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<charlie type=\"start\" line-type=\"dotted\" dash-length=\"59\" space-length=\"59\" default-x=\"200.1\" default-y=\"200.1\" relative-y=\"200.1\" orientation=\"under\" bezier-offset=\"8.5\" bezier-y=\"8.5\" bezier-x2=\"8.5\" bezier-y2=\"8.5\" color=\"#040302\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 59.1 ) );
	object.setSpaceLength( MxNumberTenths( 59.1 ) );
	object.setDefaultX( MxNumberTenths( 200.2 ) );
	object.setDefaultY( MxNumberTenths( 200.2 ) );
	object.setRelativeX( MxNumberTenths( 200.2 ) );
	object.setRelativeY( MxNumberTenths( 200.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 8.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 8.6 ) );
	object.setBezierX( MxNumberTenths( 8.6 ) );
	object.setBezierY( MxNumberTenths( 8.6 ) );
	object.setBezierX2( MxNumberTenths( 8.6 ) );
	object.setBezierY2( MxNumberTenths( 8.6 ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<booksmart type=\"start\" dash-length=\"59.1\" default-x=\"200.2\" default-y=\"200.2\" relative-y=\"200.2\" orientation=\"over\" bezier-offset=\"8.6\" bezier-x2=\"8.6\" bezier-y2=\"8.6\" color=\"#05060504\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 59.2 ) );
	object.setSpaceLength( MxNumberTenths( 59.2 ) );
	object.setDefaultX( MxNumberTenths( 200.3 ) );
	object.setDefaultY( MxNumberTenths( 200.3 ) );
	object.setRelativeX( MxNumberTenths( 200.3 ) );
	object.setRelativeY( MxNumberTenths( 200.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 8.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 8.7 ) );
	object.setBezierX( MxNumberTenths( 8.7 ) );
	object.setBezierY( MxNumberTenths( 8.7 ) );
	object.setBezierX2( MxNumberTenths( 8.7 ) );
	object.setBezierY2( MxNumberTenths( 8.7 ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"200.3\" default-y=\"200.3\" relative-y=\"200.3\" orientation=\"under\" bezier-offset=\"8.7\" bezier-x2=\"8.7\" bezier-y2=\"8.7\" color=\"#080706\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 59.3 ) );
	object.setSpaceLength( MxNumberTenths( 59.3 ) );
	object.setDefaultX( MxNumberTenths( 200.4 ) );
	object.setDefaultY( MxNumberTenths( 200.4 ) );
	object.setRelativeX( MxNumberTenths( 200.4 ) );
	object.setRelativeY( MxNumberTenths( 200.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 8.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 8.8 ) );
	object.setBezierX( MxNumberTenths( 8.8 ) );
	object.setBezierY( MxNumberTenths( 8.8 ) );
	object.setBezierX2( MxNumberTenths( 8.8 ) );
	object.setBezierY2( MxNumberTenths( 8.8 ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"200.4\" relative-y=\"200.4\" bezier-offset=\"8.8\" bezier-x2=\"8.8\" bezier-y2=\"8.8\" color=\"#090A0908\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 59.4 ) );
	object.setSpaceLength( MxNumberTenths( 59.4 ) );
	object.setDefaultX( MxNumberTenths( 200.5 ) );
	object.setDefaultY( MxNumberTenths( 200.5 ) );
	object.setRelativeX( MxNumberTenths( 200.5 ) );
	object.setRelativeY( MxNumberTenths( 200.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 8.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 8.9 ) );
	object.setBezierX( MxNumberTenths( 8.9 ) );
	object.setBezierY( MxNumberTenths( 8.9 ) );
	object.setBezierX2( MxNumberTenths( 8.9 ) );
	object.setBezierY2( MxNumberTenths( 8.9 ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<bishop type=\"start\" line-type=\"dotted\" relative-y=\"200.5\" bezier-offset=\"8.9\" bezier-offset2=\"8.9\" bezier-x2=\"8.9\" bezier-y2=\"8.9\" color=\"#0C0B0A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 59.5 ) );
	object.setSpaceLength( MxNumberTenths( 59.5 ) );
	object.setDefaultX( MxNumberTenths( 200.6 ) );
	object.setDefaultY( MxNumberTenths( 200.6 ) );
	object.setRelativeX( MxNumberTenths( 200.6 ) );
	object.setRelativeY( MxNumberTenths( 200.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 9 ) );
	object.setBezierOffset2( MxNumberDivisions( 9 ) );
	object.setBezierX( MxNumberTenths( 9 ) );
	object.setBezierY( MxNumberTenths( 9 ) );
	object.setBezierX2( MxNumberTenths( 9 ) );
	object.setBezierY2( MxNumberTenths( 9 ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<charlie type=\"start\" line-type=\"wavy\" relative-y=\"200.6\" bezier-offset=\"9\" bezier-offset2=\"9\" bezier-x2=\"9\" bezier-y2=\"9\" color=\"#0D0E0D0C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 59.6 ) );
	object.setSpaceLength( MxNumberTenths( 59.6 ) );
	object.setDefaultX( MxNumberTenths( 200.7 ) );
	object.setDefaultY( MxNumberTenths( 200.7 ) );
	object.setRelativeX( MxNumberTenths( 200.7 ) );
	object.setRelativeY( MxNumberTenths( 200.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 9.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 9.1 ) );
	object.setBezierX( MxNumberTenths( 9.1 ) );
	object.setBezierY( MxNumberTenths( 9.1 ) );
	object.setBezierX2( MxNumberTenths( 9.1 ) );
	object.setBezierY2( MxNumberTenths( 9.1 ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"solid\" dash-length=\"59.6\" space-length=\"59.6\" relative-x=\"200.7\" relative-y=\"200.7\" placement=\"above\" bezier-offset=\"9.1\" bezier-offset2=\"9.1\" bezier-y2=\"9.1\" color=\"#100F0E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 59.7 ) );
	object.setSpaceLength( MxNumberTenths( 59.7 ) );
	object.setDefaultX( MxNumberTenths( 200.8 ) );
	object.setDefaultY( MxNumberTenths( 200.8 ) );
	object.setRelativeX( MxNumberTenths( 200.8 ) );
	object.setRelativeY( MxNumberTenths( 200.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 9.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 9.2 ) );
	object.setBezierX( MxNumberTenths( 9.2 ) );
	object.setBezierY( MxNumberTenths( 9.2 ) );
	object.setBezierX2( MxNumberTenths( 9.2 ) );
	object.setBezierY2( MxNumberTenths( 9.2 ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"59.7\" space-length=\"59.7\" relative-x=\"200.8\" placement=\"below\" bezier-offset=\"9.2\" bezier-offset2=\"9.2\" bezier-y2=\"9.2\" color=\"#11121110\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 59.8 ) );
	object.setSpaceLength( MxNumberTenths( 59.8 ) );
	object.setDefaultX( MxNumberTenths( 200.9 ) );
	object.setDefaultY( MxNumberTenths( 200.9 ) );
	object.setRelativeX( MxNumberTenths( 200.9 ) );
	object.setRelativeY( MxNumberTenths( 200.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 9.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 9.3 ) );
	object.setBezierX( MxNumberTenths( 9.3 ) );
	object.setBezierY( MxNumberTenths( 9.3 ) );
	object.setBezierX2( MxNumberTenths( 9.3 ) );
	object.setBezierY2( MxNumberTenths( 9.3 ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<musicxmlishard type=\"start\" dash-length=\"59.8\" space-length=\"59.8\" relative-x=\"200.9\" placement=\"above\" bezier-offset=\"9.3\" bezier-offset2=\"9.3\" bezier-y2=\"9.3\" color=\"#141312\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setDashLength( MxNumberTenths( 59.9 ) );
	object.setSpaceLength( MxNumberTenths( 59.9 ) );
	object.setDefaultX( MxNumberTenths( 201 ) );
	object.setDefaultY( MxNumberTenths( 201 ) );
	object.setRelativeX( MxNumberTenths( 201 ) );
	object.setRelativeY( MxNumberTenths( 201 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 9.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 9.4 ) );
	object.setBezierX( MxNumberTenths( 9.4 ) );
	object.setBezierY( MxNumberTenths( 9.4 ) );
	object.setBezierX2( MxNumberTenths( 9.4 ) );
	object.setBezierY2( MxNumberTenths( 9.4 ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<bishop type=\"start\" dash-length=\"59.9\" space-length=\"59.9\" relative-x=\"201\" placement=\"below\" bezier-offset=\"9.4\" bezier-offset2=\"9.4\" bezier-y2=\"9.4\" color=\"#15161514\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 60 ) );
	object.setSpaceLength( MxNumberTenths( 60 ) );
	object.setDefaultX( MxNumberTenths( 201.1 ) );
	object.setDefaultY( MxNumberTenths( 201.1 ) );
	object.setRelativeX( MxNumberTenths( 201.1 ) );
	object.setRelativeY( MxNumberTenths( 201.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 9.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 9.5 ) );
	object.setBezierX( MxNumberTenths( 9.5 ) );
	object.setBezierY( MxNumberTenths( 9.5 ) );
	object.setBezierX2( MxNumberTenths( 9.5 ) );
	object.setBezierY2( MxNumberTenths( 9.5 ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-type=\"solid\" space-length=\"60\" default-x=\"201.1\" default-y=\"201.1\" relative-x=\"201.1\" placement=\"above\" bezier-offset2=\"9.5\" bezier-x=\"9.5\" bezier-y2=\"9.5\" color=\"#181716\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 60.1 ) );
	object.setSpaceLength( MxNumberTenths( 60.1 ) );
	object.setDefaultX( MxNumberTenths( 201.2 ) );
	object.setDefaultY( MxNumberTenths( 201.2 ) );
	object.setRelativeX( MxNumberTenths( 201.2 ) );
	object.setRelativeY( MxNumberTenths( 201.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 9.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 9.6 ) );
	object.setBezierX( MxNumberTenths( 9.6 ) );
	object.setBezierY( MxNumberTenths( 9.6 ) );
	object.setBezierX2( MxNumberTenths( 9.6 ) );
	object.setBezierY2( MxNumberTenths( 9.6 ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-type=\"dashed\" default-x=\"201.2\" default-y=\"201.2\" relative-x=\"201.2\" placement=\"below\" bezier-offset2=\"9.6\" bezier-x=\"9.6\" color=\"#191A1918\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 60.2 ) );
	object.setSpaceLength( MxNumberTenths( 60.2 ) );
	object.setDefaultX( MxNumberTenths( 201.3 ) );
	object.setDefaultY( MxNumberTenths( 201.3 ) );
	object.setRelativeX( MxNumberTenths( 201.3 ) );
	object.setRelativeY( MxNumberTenths( 201.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 9.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 9.7 ) );
	object.setBezierX( MxNumberTenths( 9.7 ) );
	object.setBezierY( MxNumberTenths( 9.7 ) );
	object.setBezierX2( MxNumberTenths( 9.7 ) );
	object.setBezierY2( MxNumberTenths( 9.7 ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<quiet type=\"start\" line-type=\"dotted\" default-x=\"201.3\" default-y=\"201.3\" relative-x=\"201.3\" placement=\"above\" bezier-offset2=\"9.7\" bezier-x=\"9.7\" color=\"#1C1B1A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 60.3 ) );
	object.setSpaceLength( MxNumberTenths( 60.3 ) );
	object.setDefaultX( MxNumberTenths( 201.4 ) );
	object.setDefaultY( MxNumberTenths( 201.4 ) );
	object.setRelativeX( MxNumberTenths( 201.4 ) );
	object.setRelativeY( MxNumberTenths( 201.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 9.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 9.8 ) );
	object.setBezierX( MxNumberTenths( 9.8 ) );
	object.setBezierY( MxNumberTenths( 9.8 ) );
	object.setBezierX2( MxNumberTenths( 9.8 ) );
	object.setBezierY2( MxNumberTenths( 9.8 ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"201.4\" default-y=\"201.4\" relative-x=\"201.4\" placement=\"below\" bezier-offset2=\"9.8\" bezier-x=\"9.8\" color=\"#1D1E1D1C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 60.4 ) );
	object.setSpaceLength( MxNumberTenths( 60.4 ) );
	object.setDefaultX( MxNumberTenths( 201.5 ) );
	object.setDefaultY( MxNumberTenths( 201.5 ) );
	object.setRelativeX( MxNumberTenths( 201.5 ) );
	object.setRelativeY( MxNumberTenths( 201.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 9.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 9.9 ) );
	object.setBezierX( MxNumberTenths( 9.9 ) );
	object.setBezierY( MxNumberTenths( 9.9 ) );
	object.setBezierX2( MxNumberTenths( 9.9 ) );
	object.setBezierY2( MxNumberTenths( 9.9 ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<bishop type=\"start\" number=\"1\" dash-length=\"60.4\" default-x=\"201.5\" default-y=\"201.5\" placement=\"above\" orientation=\"under\" bezier-offset2=\"9.9\" bezier-x=\"9.9\" color=\"#201F1E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setDashLength( MxNumberTenths( 60.5 ) );
	object.setSpaceLength( MxNumberTenths( 60.5 ) );
	object.setDefaultX( MxNumberTenths( 201.6 ) );
	object.setDefaultY( MxNumberTenths( 201.6 ) );
	object.setRelativeX( MxNumberTenths( 201.6 ) );
	object.setRelativeY( MxNumberTenths( 201.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 10 ) );
	object.setBezierOffset2( MxNumberDivisions( 10 ) );
	object.setBezierX( MxNumberTenths( 10 ) );
	object.setBezierY( MxNumberTenths( 10 ) );
	object.setBezierX2( MxNumberTenths( 10 ) );
	object.setBezierY2( MxNumberTenths( 10 ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<charlie type=\"start\" number=\"1\" dash-length=\"60.5\" default-x=\"201.6\" default-y=\"201.6\" placement=\"below\" orientation=\"over\" bezier-offset2=\"10\" bezier-x=\"10\" color=\"#21222120\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 60.6 ) );
	object.setSpaceLength( MxNumberTenths( 60.6 ) );
	object.setDefaultX( MxNumberTenths( 201.7 ) );
	object.setDefaultY( MxNumberTenths( 201.7 ) );
	object.setRelativeX( MxNumberTenths( 201.7 ) );
	object.setRelativeY( MxNumberTenths( 201.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 10.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 10.1 ) );
	object.setBezierX( MxNumberTenths( 10.1 ) );
	object.setBezierY( MxNumberTenths( 10.1 ) );
	object.setBezierX2( MxNumberTenths( 10.1 ) );
	object.setBezierY2( MxNumberTenths( 10.1 ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<booksmart type=\"start\" line-type=\"dotted\" dash-length=\"60.6\" space-length=\"60.6\" default-y=\"201.7\" relative-y=\"201.7\" orientation=\"under\" bezier-offset2=\"10.1\" bezier-x=\"10.1\" bezier-y=\"10.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 60.7 ) );
	object.setSpaceLength( MxNumberTenths( 60.7 ) );
	object.setDefaultX( MxNumberTenths( 201.8 ) );
	object.setDefaultY( MxNumberTenths( 201.8 ) );
	object.setRelativeX( MxNumberTenths( 201.8 ) );
	object.setRelativeY( MxNumberTenths( 201.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 10.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 10.2 ) );
	object.setBezierX( MxNumberTenths( 10.2 ) );
	object.setBezierY( MxNumberTenths( 10.2 ) );
	object.setBezierX2( MxNumberTenths( 10.2 ) );
	object.setBezierY2( MxNumberTenths( 10.2 ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<quiet type=\"start\" line-type=\"wavy\" dash-length=\"60.7\" space-length=\"60.7\" relative-y=\"201.8\" orientation=\"over\" bezier-x=\"10.2\" bezier-y=\"10.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 60.8 ) );
	object.setSpaceLength( MxNumberTenths( 60.8 ) );
	object.setDefaultX( MxNumberTenths( 201.9 ) );
	object.setDefaultY( MxNumberTenths( 201.9 ) );
	object.setRelativeX( MxNumberTenths( 201.9 ) );
	object.setRelativeY( MxNumberTenths( 201.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 10.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 10.3 ) );
	object.setBezierX( MxNumberTenths( 10.3 ) );
	object.setBezierY( MxNumberTenths( 10.3 ) );
	object.setBezierX2( MxNumberTenths( 10.3 ) );
	object.setBezierY2( MxNumberTenths( 10.3 ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"solid\" space-length=\"60.8\" relative-y=\"201.9\" orientation=\"under\" bezier-x=\"10.3\" bezier-y=\"10.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 60.9 ) );
	object.setSpaceLength( MxNumberTenths( 60.9 ) );
	object.setDefaultX( MxNumberTenths( 202 ) );
	object.setDefaultY( MxNumberTenths( 202 ) );
	object.setRelativeX( MxNumberTenths( 202 ) );
	object.setRelativeY( MxNumberTenths( 202 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 10.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 10.4 ) );
	object.setBezierX( MxNumberTenths( 10.4 ) );
	object.setBezierY( MxNumberTenths( 10.4 ) );
	object.setBezierX2( MxNumberTenths( 10.4 ) );
	object.setBezierY2( MxNumberTenths( 10.4 ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<bishop type=\"start\" number=\"1\" space-length=\"60.9\" relative-y=\"202\" orientation=\"over\" bezier-x=\"10.4\" bezier-y=\"10.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 61 ) );
	object.setSpaceLength( MxNumberTenths( 61 ) );
	object.setDefaultX( MxNumberTenths( 202.1 ) );
	object.setDefaultY( MxNumberTenths( 202.1 ) );
	object.setRelativeX( MxNumberTenths( 202.1 ) );
	object.setRelativeY( MxNumberTenths( 202.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 10.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 10.5 ) );
	object.setBezierX( MxNumberTenths( 10.5 ) );
	object.setBezierY( MxNumberTenths( 10.5 ) );
	object.setBezierX2( MxNumberTenths( 10.5 ) );
	object.setBezierY2( MxNumberTenths( 10.5 ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<charlie type=\"start\" space-length=\"61\" relative-y=\"202.1\" orientation=\"under\" bezier-x=\"10.5\" bezier-y=\"10.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 61.1 ) );
	object.setSpaceLength( MxNumberTenths( 61.1 ) );
	object.setDefaultX( MxNumberTenths( 202.2 ) );
	object.setDefaultY( MxNumberTenths( 202.2 ) );
	object.setRelativeX( MxNumberTenths( 202.2 ) );
	object.setRelativeY( MxNumberTenths( 202.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 10.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 10.6 ) );
	object.setBezierX( MxNumberTenths( 10.6 ) );
	object.setBezierY( MxNumberTenths( 10.6 ) );
	object.setBezierX2( MxNumberTenths( 10.6 ) );
	object.setBezierY2( MxNumberTenths( 10.6 ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<booksmart type=\"start\" relative-y=\"202.2\" orientation=\"over\" bezier-x=\"10.6\" bezier-y=\"10.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptySlur )
{
	MxCxEmptySlur object( "quiet" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 61.2 ) );
	object.setSpaceLength( MxNumberTenths( 61.2 ) );
	object.setDefaultX( MxNumberTenths( 202.3 ) );
	object.setDefaultY( MxNumberTenths( 202.3 ) );
	object.setRelativeX( MxNumberTenths( 202.3 ) );
	object.setRelativeY( MxNumberTenths( 202.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 10.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 10.7 ) );
	object.setBezierX( MxNumberTenths( 10.7 ) );
	object.setBezierY( MxNumberTenths( 10.7 ) );
	object.setBezierX2( MxNumberTenths( 10.7 ) );
	object.setBezierY2( MxNumberTenths( 10.7 ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-type=\"solid\" dash-length=\"61.2\" default-x=\"202.3\" relative-x=\"202.3\" relative-y=\"202.3\" orientation=\"under\" bezier-offset=\"10.7\" bezier-x=\"10.7\" bezier-y=\"10.7\" bezier-x2=\"10.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptySlur )
{
	MxCxEmptySlur object( "musicxmlishard" );
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
	object.setDashLength( MxNumberTenths( 61.3 ) );
	object.setSpaceLength( MxNumberTenths( 61.3 ) );
	object.setDefaultX( MxNumberTenths( 202.4 ) );
	object.setDefaultY( MxNumberTenths( 202.4 ) );
	object.setRelativeX( MxNumberTenths( 202.4 ) );
	object.setRelativeY( MxNumberTenths( 202.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 10.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 10.8 ) );
	object.setBezierX( MxNumberTenths( 10.8 ) );
	object.setBezierY( MxNumberTenths( 10.8 ) );
	object.setBezierX2( MxNumberTenths( 10.8 ) );
	object.setBezierY2( MxNumberTenths( 10.8 ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-type=\"dashed\" dash-length=\"61.3\" default-x=\"202.4\" relative-x=\"202.4\" relative-y=\"202.4\" orientation=\"over\" bezier-offset=\"10.8\" bezier-x=\"10.8\" bezier-y=\"10.8\" bezier-x2=\"10.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptySlur )
{
	MxCxEmptySlur object( "bishop" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 61.4 ) );
	object.setSpaceLength( MxNumberTenths( 61.4 ) );
	object.setDefaultX( MxNumberTenths( 202.5 ) );
	object.setDefaultY( MxNumberTenths( 202.5 ) );
	object.setRelativeX( MxNumberTenths( 202.5 ) );
	object.setRelativeY( MxNumberTenths( 202.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 10.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 10.9 ) );
	object.setBezierX( MxNumberTenths( 10.9 ) );
	object.setBezierY( MxNumberTenths( 10.9 ) );
	object.setBezierX2( MxNumberTenths( 10.9 ) );
	object.setBezierY2( MxNumberTenths( 10.9 ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<bishop type=\"start\" line-type=\"dotted\" dash-length=\"61.4\" default-x=\"202.5\" default-y=\"202.5\" relative-x=\"202.5\" relative-y=\"202.5\" orientation=\"under\" bezier-offset=\"10.9\" bezier-y=\"10.9\" bezier-x2=\"10.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptySlur )
{
	MxCxEmptySlur object( "charlie" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 61.5 ) );
	object.setSpaceLength( MxNumberTenths( 61.5 ) );
	object.setDefaultX( MxNumberTenths( 202.6 ) );
	object.setDefaultY( MxNumberTenths( 202.6 ) );
	object.setRelativeX( MxNumberTenths( 202.6 ) );
	object.setRelativeY( MxNumberTenths( 202.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
	object.setBezierOffset( MxNumberDivisions( 11 ) );
	object.setBezierOffset2( MxNumberDivisions( 11 ) );
	object.setBezierX( MxNumberTenths( 11 ) );
	object.setBezierY( MxNumberTenths( 11 ) );
	object.setBezierX2( MxNumberTenths( 11 ) );
	object.setBezierY2( MxNumberTenths( 11 ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<charlie type=\"start\" dash-length=\"61.5\" default-x=\"202.6\" default-y=\"202.6\" relative-x=\"202.6\" bezier-offset=\"11\" bezier-y=\"11\" bezier-x2=\"11\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptySlur )
{
	MxCxEmptySlur object( "booksmart" );
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 61.6 ) );
	object.setSpaceLength( MxNumberTenths( 61.6 ) );
	object.setDefaultX( MxNumberTenths( 202.7 ) );
	object.setDefaultY( MxNumberTenths( 202.7 ) );
	object.setRelativeX( MxNumberTenths( 202.7 ) );
	object.setRelativeY( MxNumberTenths( 202.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setBezierOffset( MxNumberDivisions( 11.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 11.1 ) );
	object.setBezierX( MxNumberTenths( 11.1 ) );
	object.setBezierY( MxNumberTenths( 11.1 ) );
	object.setBezierX2( MxNumberTenths( 11.1 ) );
	object.setBezierY2( MxNumberTenths( 11.1 ) );
	object.setColor( MxColor( "#383736" ) );
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


