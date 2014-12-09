/** *******************************************************
  * 
  * MxCxEmptyBracketTest.cpp
  * Created: 2014-12-03 16:31:28
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyBracket.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxEnumStartStopContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxEnumLineEnd(  ) ).toString();
	std::string actual = object.getLineEnd().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getEndLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxEnumLineType(  ) ).toString();
	std::string actual = object.getLineType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = "MxCxEmptyBracket";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = "bracket";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	std::string expected = "Brackets are combined with words in a variety of modern directions. The line-end attribute specifies if there is a jog up or down (or both), an arrow, or nothing at the start or end of the bracket. If the line-end is up or down, the length of the jog can be specified using the end-length attribute. The line-type is solid by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptyBracket )
{
	MxEnumStartStopContinue value1( lexicon::enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue value2( lexicon::enums::StartStopContinue::stop );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setType( value1 );
	MxEnumStartStopContinue expected = value1;
	MxEnumStartStopContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxCxEmptyBracket )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineEnd2, MxCxEmptyBracket )
{
	MxEnumLineEnd value1( lexicon::enums::LineEnd::none );
	MxEnumLineEnd value2( lexicon::enums::LineEnd::arrow );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setLineEnd( value1 );
	MxEnumLineEnd expected = value1;
	MxEnumLineEnd actual = object.getLineEnd();
	CHECK_EQUAL( expected, actual )
	object.setLineEnd( value2 );
	expected = value2;
	actual = object.getLineEnd();
	CHECK_EQUAL( expected, actual )
}
TEST( setEndLength3, MxCxEmptyBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setEndLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getEndLength();
	CHECK_EQUAL( expected, actual )
	object.setEndLength( value2 );
	expected = value2;
	actual = object.getEndLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineType4, MxCxEmptyBracket )
{
	MxEnumLineType value1( lexicon::enums::LineType::wavy );
	MxEnumLineType value2( lexicon::enums::LineType::dotted );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setLineType( value1 );
	MxEnumLineType expected = value1;
	MxEnumLineType actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
	object.setLineType( value2 );
	expected = value2;
	actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength5, MxCxEmptyBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength6, MxCxEmptyBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX7, MxCxEmptyBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY8, MxCxEmptyBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX9, MxCxEmptyBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY10, MxCxEmptyBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor11, MxCxEmptyBracket )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBracket object;
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

TEST( getIsTypeRequired0, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineEndRequired2, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = true;
	bool actual = object.getIsLineEndRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEndLengthRequired3, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsEndLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeRequired4, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsLineTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired5, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired6, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired7, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired8, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired9, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired10, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired11, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
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
TEST( getIsNumberPresent1, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
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
TEST( getIsLineEndPresent2, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = true;
	bool actual = object.getIsLineEndPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsLineEndPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsLineEndPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEndLengthPresent3, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsEndLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsEndLengthPresent( true );
	expected = true;
	actual = object.getIsEndLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsEndLengthPresent( false );
	expected = false;
	actual = object.getIsEndLengthPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypePresent4, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
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
TEST( getIsDashLengthPresent5, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
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
TEST( getIsSpaceLengthPresent6, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
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
TEST( getIsDefaultXPresent7, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
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
TEST( getIsDefaultYPresent8, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
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
TEST( getIsRelativeXPresent9, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
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
TEST( getIsRelativeYPresent10, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
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
TEST( getIsColorPresent11, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
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

TEST( getIsTypeDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineEndDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsLineEndDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEndLengthDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsEndLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsLineTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxEnumStartStopContinue expected;
	MxEnumStartStopContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineEndDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxEnumLineEnd expected;
	MxEnumLineEnd actual = object.getLineEndDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEndLengthDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getEndLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineTypeDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxEnumLineType expected;
	MxEnumLineType actual = object.getLineTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyBracket )
{
	MxCxEmptyBracket object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 1.1 ) );
	object.setSpaceLength( MxNumberTenths( 1.1 ) );
	object.setDefaultX( MxNumberTenths( 71.8 ) );
	object.setDefaultY( MxNumberTenths( 71.8 ) );
	object.setRelativeX( MxNumberTenths( 71.8 ) );
	object.setRelativeY( MxNumberTenths( 71.8 ) );
	object.setColor( MxColor( "#908F8E" ) );
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" dash-length=\"1.1\" space-length=\"1.1\" default-x=\"71.8\" default-y=\"71.8\" relative-x=\"71.8\" relative-y=\"71.8\" color=\"#908F8E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 1.2 ) );
	object.setSpaceLength( MxNumberTenths( 1.2 ) );
	object.setDefaultX( MxNumberTenths( 71.9 ) );
	object.setDefaultY( MxNumberTenths( 71.9 ) );
	object.setRelativeX( MxNumberTenths( 71.9 ) );
	object.setRelativeY( MxNumberTenths( 71.9 ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" dash-length=\"1.2\" space-length=\"1.2\" default-x=\"71.9\" default-y=\"71.9\" relative-x=\"71.9\" relative-y=\"71.9\" color=\"#91929190\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 1.3 ) );
	object.setSpaceLength( MxNumberTenths( 1.3 ) );
	object.setDefaultX( MxNumberTenths( 72 ) );
	object.setDefaultY( MxNumberTenths( 72 ) );
	object.setRelativeX( MxNumberTenths( 72 ) );
	object.setRelativeY( MxNumberTenths( 72 ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<musicxmlishard type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" dash-length=\"1.3\" space-length=\"1.3\" default-x=\"72\" default-y=\"72\" relative-x=\"72\" relative-y=\"72\" color=\"#949392\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 1.4 ) );
	object.setSpaceLength( MxNumberTenths( 1.4 ) );
	object.setDefaultX( MxNumberTenths( 72.1 ) );
	object.setDefaultY( MxNumberTenths( 72.1 ) );
	object.setRelativeX( MxNumberTenths( 72.1 ) );
	object.setRelativeY( MxNumberTenths( 72.1 ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<bishop type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" dash-length=\"1.4\" space-length=\"1.4\" default-x=\"72.1\" default-y=\"72.1\" relative-x=\"72.1\" relative-y=\"72.1\" color=\"#95969594\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 1.5 ) );
	object.setSpaceLength( MxNumberTenths( 1.5 ) );
	object.setDefaultX( MxNumberTenths( 72.2 ) );
	object.setDefaultY( MxNumberTenths( 72.2 ) );
	object.setRelativeX( MxNumberTenths( 72.2 ) );
	object.setRelativeY( MxNumberTenths( 72.2 ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dashed\" dash-length=\"1.5\" space-length=\"1.5\" default-x=\"72.2\" default-y=\"72.2\" relative-x=\"72.2\" relative-y=\"72.2\" color=\"#989796\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 1.6 ) );
	object.setSpaceLength( MxNumberTenths( 1.6 ) );
	object.setDefaultX( MxNumberTenths( 72.3 ) );
	object.setDefaultY( MxNumberTenths( 72.3 ) );
	object.setRelativeX( MxNumberTenths( 72.3 ) );
	object.setRelativeY( MxNumberTenths( 72.3 ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"1.6\" space-length=\"1.6\" default-x=\"72.3\" default-y=\"72.3\" relative-x=\"72.3\" relative-y=\"72.3\" color=\"#999A9998\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 1.7 ) );
	object.setSpaceLength( MxNumberTenths( 1.7 ) );
	object.setDefaultX( MxNumberTenths( 72.4 ) );
	object.setDefaultY( MxNumberTenths( 72.4 ) );
	object.setRelativeX( MxNumberTenths( 72.4 ) );
	object.setRelativeY( MxNumberTenths( 72.4 ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<quiet type=\"start\" line-end=\"up\" space-length=\"1.7\" default-x=\"72.4\" default-y=\"72.4\" relative-x=\"72.4\" relative-y=\"72.4\" color=\"#9C9B9A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 1.8 ) );
	object.setSpaceLength( MxNumberTenths( 1.8 ) );
	object.setDefaultX( MxNumberTenths( 72.5 ) );
	object.setDefaultY( MxNumberTenths( 72.5 ) );
	object.setRelativeX( MxNumberTenths( 72.5 ) );
	object.setRelativeY( MxNumberTenths( 72.5 ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<musicxmlishard type=\"start\" line-end=\"up\" default-x=\"72.5\" default-y=\"72.5\" relative-x=\"72.5\" relative-y=\"72.5\" color=\"#9D9E9D9C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 1.9 ) );
	object.setSpaceLength( MxNumberTenths( 1.9 ) );
	object.setDefaultX( MxNumberTenths( 72.6 ) );
	object.setDefaultY( MxNumberTenths( 72.6 ) );
	object.setRelativeX( MxNumberTenths( 72.6 ) );
	object.setRelativeY( MxNumberTenths( 72.6 ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" default-y=\"72.6\" relative-x=\"72.6\" relative-y=\"72.6\" color=\"#A09F9E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 2 ) );
	object.setSpaceLength( MxNumberTenths( 2 ) );
	object.setDefaultX( MxNumberTenths( 72.7 ) );
	object.setDefaultY( MxNumberTenths( 72.7 ) );
	object.setRelativeX( MxNumberTenths( 72.7 ) );
	object.setRelativeY( MxNumberTenths( 72.7 ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" relative-x=\"72.7\" relative-y=\"72.7\" color=\"#A1A2A1A0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 2.1 ) );
	object.setSpaceLength( MxNumberTenths( 2.1 ) );
	object.setDefaultX( MxNumberTenths( 72.8 ) );
	object.setDefaultY( MxNumberTenths( 72.8 ) );
	object.setRelativeX( MxNumberTenths( 72.8 ) );
	object.setRelativeY( MxNumberTenths( 72.8 ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" relative-y=\"72.8\" color=\"#A4A3A2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 2.2 ) );
	object.setSpaceLength( MxNumberTenths( 2.2 ) );
	object.setDefaultX( MxNumberTenths( 72.9 ) );
	object.setDefaultY( MxNumberTenths( 72.9 ) );
	object.setRelativeX( MxNumberTenths( 72.9 ) );
	object.setRelativeY( MxNumberTenths( 72.9 ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<quiet type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" color=\"#A5A6A5A4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 2.3 ) );
	object.setSpaceLength( MxNumberTenths( 2.3 ) );
	object.setDefaultX( MxNumberTenths( 73 ) );
	object.setDefaultY( MxNumberTenths( 73 ) );
	object.setRelativeX( MxNumberTenths( 73 ) );
	object.setRelativeY( MxNumberTenths( 73 ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dashed\" dash-length=\"2.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 2.4 ) );
	object.setSpaceLength( MxNumberTenths( 2.4 ) );
	object.setDefaultX( MxNumberTenths( 73.1 ) );
	object.setDefaultY( MxNumberTenths( 73.1 ) );
	object.setRelativeX( MxNumberTenths( 73.1 ) );
	object.setRelativeY( MxNumberTenths( 73.1 ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" dash-length=\"2.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 2.5 ) );
	object.setSpaceLength( MxNumberTenths( 2.5 ) );
	object.setDefaultX( MxNumberTenths( 73.2 ) );
	object.setDefaultY( MxNumberTenths( 73.2 ) );
	object.setRelativeX( MxNumberTenths( 73.2 ) );
	object.setRelativeY( MxNumberTenths( 73.2 ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<charlie type=\"start\" line-end=\"up\" line-type=\"wavy\" dash-length=\"2.5\" space-length=\"2.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 2.6 ) );
	object.setSpaceLength( MxNumberTenths( 2.6 ) );
	object.setDefaultX( MxNumberTenths( 73.3 ) );
	object.setDefaultY( MxNumberTenths( 73.3 ) );
	object.setRelativeX( MxNumberTenths( 73.3 ) );
	object.setRelativeY( MxNumberTenths( 73.3 ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\" dash-length=\"2.6\" space-length=\"2.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 2.7 ) );
	object.setSpaceLength( MxNumberTenths( 2.7 ) );
	object.setDefaultX( MxNumberTenths( 73.4 ) );
	object.setDefaultY( MxNumberTenths( 73.4 ) );
	object.setRelativeX( MxNumberTenths( 73.4 ) );
	object.setRelativeY( MxNumberTenths( 73.4 ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"2.7\" space-length=\"2.7\" default-x=\"73.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 2.8 ) );
	object.setSpaceLength( MxNumberTenths( 2.8 ) );
	object.setDefaultX( MxNumberTenths( 73.5 ) );
	object.setDefaultY( MxNumberTenths( 73.5 ) );
	object.setRelativeX( MxNumberTenths( 73.5 ) );
	object.setRelativeY( MxNumberTenths( 73.5 ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"2.8\" space-length=\"2.8\" default-x=\"73.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 2.9 ) );
	object.setSpaceLength( MxNumberTenths( 2.9 ) );
	object.setDefaultX( MxNumberTenths( 73.6 ) );
	object.setDefaultY( MxNumberTenths( 73.6 ) );
	object.setRelativeX( MxNumberTenths( 73.6 ) );
	object.setRelativeY( MxNumberTenths( 73.6 ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<bishop type=\"start\" line-end=\"up\" end-length=\"1\" space-length=\"2.9\" default-x=\"73.6\" default-y=\"73.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 3 ) );
	object.setSpaceLength( MxNumberTenths( 3 ) );
	object.setDefaultX( MxNumberTenths( 73.7 ) );
	object.setDefaultY( MxNumberTenths( 73.7 ) );
	object.setRelativeX( MxNumberTenths( 73.7 ) );
	object.setRelativeY( MxNumberTenths( 73.7 ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<charlie type=\"start\" line-end=\"up\" end-length=\"1\" space-length=\"3\" default-x=\"73.7\" default-y=\"73.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 3.1 ) );
	object.setSpaceLength( MxNumberTenths( 3.1 ) );
	object.setDefaultX( MxNumberTenths( 73.8 ) );
	object.setDefaultY( MxNumberTenths( 73.8 ) );
	object.setRelativeX( MxNumberTenths( 73.8 ) );
	object.setRelativeY( MxNumberTenths( 73.8 ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dashed\" space-length=\"3.1\" default-x=\"73.8\" default-y=\"73.8\" relative-x=\"73.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 3.2 ) );
	object.setSpaceLength( MxNumberTenths( 3.2 ) );
	object.setDefaultX( MxNumberTenths( 73.9 ) );
	object.setDefaultY( MxNumberTenths( 73.9 ) );
	object.setRelativeX( MxNumberTenths( 73.9 ) );
	object.setRelativeY( MxNumberTenths( 73.9 ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" default-x=\"73.9\" default-y=\"73.9\" relative-x=\"73.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 3.3 ) );
	object.setSpaceLength( MxNumberTenths( 3.3 ) );
	object.setDefaultX( MxNumberTenths( 74 ) );
	object.setDefaultY( MxNumberTenths( 74 ) );
	object.setRelativeX( MxNumberTenths( 74 ) );
	object.setRelativeY( MxNumberTenths( 74 ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<musicxmlishard type=\"start\" line-end=\"up\" line-type=\"wavy\" default-x=\"74\" default-y=\"74\" relative-x=\"74\" relative-y=\"74\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 3.4 ) );
	object.setSpaceLength( MxNumberTenths( 3.4 ) );
	object.setDefaultX( MxNumberTenths( 74.1 ) );
	object.setDefaultY( MxNumberTenths( 74.1 ) );
	object.setRelativeX( MxNumberTenths( 74.1 ) );
	object.setRelativeY( MxNumberTenths( 74.1 ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<bishop type=\"start\" line-end=\"up\" line-type=\"solid\" default-x=\"74.1\" default-y=\"74.1\" relative-x=\"74.1\" relative-y=\"74.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 3.5 ) );
	object.setSpaceLength( MxNumberTenths( 3.5 ) );
	object.setDefaultX( MxNumberTenths( 74.2 ) );
	object.setDefaultY( MxNumberTenths( 74.2 ) );
	object.setRelativeX( MxNumberTenths( 74.2 ) );
	object.setRelativeY( MxNumberTenths( 74.2 ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" dash-length=\"3.5\" default-y=\"74.2\" relative-x=\"74.2\" relative-y=\"74.2\" color=\"#C0BFBE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 3.6 ) );
	object.setSpaceLength( MxNumberTenths( 3.6 ) );
	object.setDefaultX( MxNumberTenths( 74.3 ) );
	object.setDefaultY( MxNumberTenths( 74.3 ) );
	object.setRelativeX( MxNumberTenths( 74.3 ) );
	object.setRelativeY( MxNumberTenths( 74.3 ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"3.6\" default-y=\"74.3\" relative-x=\"74.3\" relative-y=\"74.3\" color=\"#C1C2C1C0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 3.7 ) );
	object.setSpaceLength( MxNumberTenths( 3.7 ) );
	object.setDefaultX( MxNumberTenths( 74.4 ) );
	object.setDefaultY( MxNumberTenths( 74.4 ) );
	object.setRelativeX( MxNumberTenths( 74.4 ) );
	object.setRelativeY( MxNumberTenths( 74.4 ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<quiet type=\"start\" line-end=\"up\" end-length=\"1\" dash-length=\"3.7\" default-y=\"74.4\" relative-x=\"74.4\" relative-y=\"74.4\" color=\"#C4C3C2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 3.8 ) );
	object.setSpaceLength( MxNumberTenths( 3.8 ) );
	object.setDefaultX( MxNumberTenths( 74.5 ) );
	object.setDefaultY( MxNumberTenths( 74.5 ) );
	object.setRelativeX( MxNumberTenths( 74.5 ) );
	object.setRelativeY( MxNumberTenths( 74.5 ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<musicxmlishard type=\"start\" line-end=\"up\" end-length=\"1\" dash-length=\"3.8\" relative-x=\"74.5\" relative-y=\"74.5\" color=\"#C5C6C5C4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 3.9 ) );
	object.setSpaceLength( MxNumberTenths( 3.9 ) );
	object.setDefaultX( MxNumberTenths( 74.6 ) );
	object.setDefaultY( MxNumberTenths( 74.6 ) );
	object.setRelativeX( MxNumberTenths( 74.6 ) );
	object.setRelativeY( MxNumberTenths( 74.6 ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"3.9\" space-length=\"3.9\" relative-x=\"74.6\" relative-y=\"74.6\" color=\"#C8C7C6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 4 ) );
	object.setSpaceLength( MxNumberTenths( 4 ) );
	object.setDefaultX( MxNumberTenths( 74.7 ) );
	object.setDefaultY( MxNumberTenths( 74.7 ) );
	object.setRelativeX( MxNumberTenths( 74.7 ) );
	object.setRelativeY( MxNumberTenths( 74.7 ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"4\" space-length=\"4\" relative-x=\"74.7\" relative-y=\"74.7\" color=\"#C9CAC9C8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 4.1 ) );
	object.setSpaceLength( MxNumberTenths( 4.1 ) );
	object.setDefaultX( MxNumberTenths( 74.8 ) );
	object.setDefaultY( MxNumberTenths( 74.8 ) );
	object.setRelativeX( MxNumberTenths( 74.8 ) );
	object.setRelativeY( MxNumberTenths( 74.8 ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\" line-type=\"wavy\" space-length=\"4.1\" relative-y=\"74.8\" color=\"#CCCBCA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 4.2 ) );
	object.setSpaceLength( MxNumberTenths( 4.2 ) );
	object.setDefaultX( MxNumberTenths( 74.9 ) );
	object.setDefaultY( MxNumberTenths( 74.9 ) );
	object.setRelativeX( MxNumberTenths( 74.9 ) );
	object.setRelativeY( MxNumberTenths( 74.9 ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<quiet type=\"start\" line-end=\"up\" line-type=\"solid\" space-length=\"4.2\" relative-y=\"74.9\" color=\"#CDCECDCC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 4.3 ) );
	object.setSpaceLength( MxNumberTenths( 4.3 ) );
	object.setDefaultX( MxNumberTenths( 75 ) );
	object.setDefaultY( MxNumberTenths( 75 ) );
	object.setRelativeX( MxNumberTenths( 75 ) );
	object.setRelativeY( MxNumberTenths( 75 ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" space-length=\"4.3\" default-x=\"75\" relative-y=\"75\" color=\"#D0CFCE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 4.4 ) );
	object.setSpaceLength( MxNumberTenths( 4.4 ) );
	object.setDefaultX( MxNumberTenths( 75.1 ) );
	object.setDefaultY( MxNumberTenths( 75.1 ) );
	object.setRelativeX( MxNumberTenths( 75.1 ) );
	object.setRelativeY( MxNumberTenths( 75.1 ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" space-length=\"4.4\" default-x=\"75.1\" color=\"#D1D2D1D0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 4.5 ) );
	object.setSpaceLength( MxNumberTenths( 4.5 ) );
	object.setDefaultX( MxNumberTenths( 75.2 ) );
	object.setDefaultY( MxNumberTenths( 75.2 ) );
	object.setRelativeX( MxNumberTenths( 75.2 ) );
	object.setRelativeY( MxNumberTenths( 75.2 ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<charlie type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" space-length=\"4.5\" default-x=\"75.2\" color=\"#D4D3D2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 4.6 ) );
	object.setSpaceLength( MxNumberTenths( 4.6 ) );
	object.setDefaultX( MxNumberTenths( 75.3 ) );
	object.setDefaultY( MxNumberTenths( 75.3 ) );
	object.setRelativeX( MxNumberTenths( 75.3 ) );
	object.setRelativeY( MxNumberTenths( 75.3 ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\" end-length=\"1\" default-x=\"75.3\" color=\"#D5D6D5D4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 4.7 ) );
	object.setSpaceLength( MxNumberTenths( 4.7 ) );
	object.setDefaultX( MxNumberTenths( 75.4 ) );
	object.setDefaultY( MxNumberTenths( 75.4 ) );
	object.setRelativeX( MxNumberTenths( 75.4 ) );
	object.setRelativeY( MxNumberTenths( 75.4 ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"4.7\" default-x=\"75.4\" default-y=\"75.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 4.8 ) );
	object.setSpaceLength( MxNumberTenths( 4.8 ) );
	object.setDefaultX( MxNumberTenths( 75.5 ) );
	object.setDefaultY( MxNumberTenths( 75.5 ) );
	object.setRelativeX( MxNumberTenths( 75.5 ) );
	object.setRelativeY( MxNumberTenths( 75.5 ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"4.8\" default-x=\"75.5\" default-y=\"75.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 4.9 ) );
	object.setSpaceLength( MxNumberTenths( 4.9 ) );
	object.setDefaultX( MxNumberTenths( 75.6 ) );
	object.setDefaultY( MxNumberTenths( 75.6 ) );
	object.setRelativeX( MxNumberTenths( 75.6 ) );
	object.setRelativeY( MxNumberTenths( 75.6 ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<bishop type=\"start\" line-end=\"up\" dash-length=\"4.9\" default-x=\"75.6\" default-y=\"75.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 5 ) );
	object.setSpaceLength( MxNumberTenths( 5 ) );
	object.setDefaultX( MxNumberTenths( 75.7 ) );
	object.setDefaultY( MxNumberTenths( 75.7 ) );
	object.setRelativeX( MxNumberTenths( 75.7 ) );
	object.setRelativeY( MxNumberTenths( 75.7 ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<charlie type=\"start\" line-end=\"up\" dash-length=\"5\" default-x=\"75.7\" default-y=\"75.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 5.1 ) );
	object.setSpaceLength( MxNumberTenths( 5.1 ) );
	object.setDefaultX( MxNumberTenths( 75.8 ) );
	object.setDefaultY( MxNumberTenths( 75.8 ) );
	object.setRelativeX( MxNumberTenths( 75.8 ) );
	object.setRelativeY( MxNumberTenths( 75.8 ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" dash-length=\"5.1\" default-y=\"75.8\" relative-x=\"75.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 5.2 ) );
	object.setSpaceLength( MxNumberTenths( 5.2 ) );
	object.setDefaultX( MxNumberTenths( 75.9 ) );
	object.setDefaultY( MxNumberTenths( 75.9 ) );
	object.setRelativeX( MxNumberTenths( 75.9 ) );
	object.setRelativeY( MxNumberTenths( 75.9 ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" dash-length=\"5.2\" default-y=\"75.9\" relative-x=\"75.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 5.3 ) );
	object.setSpaceLength( MxNumberTenths( 5.3 ) );
	object.setDefaultX( MxNumberTenths( 76 ) );
	object.setDefaultY( MxNumberTenths( 76 ) );
	object.setRelativeX( MxNumberTenths( 76 ) );
	object.setRelativeY( MxNumberTenths( 76 ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<musicxmlishard type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" space-length=\"5.3\" default-y=\"76\" relative-x=\"76\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 5.4 ) );
	object.setSpaceLength( MxNumberTenths( 5.4 ) );
	object.setDefaultX( MxNumberTenths( 76.1 ) );
	object.setDefaultY( MxNumberTenths( 76.1 ) );
	object.setRelativeX( MxNumberTenths( 76.1 ) );
	object.setRelativeY( MxNumberTenths( 76.1 ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<bishop type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" space-length=\"5.4\" default-y=\"76.1\" relative-x=\"76.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 5.5 ) );
	object.setSpaceLength( MxNumberTenths( 5.5 ) );
	object.setDefaultX( MxNumberTenths( 76.2 ) );
	object.setDefaultY( MxNumberTenths( 76.2 ) );
	object.setRelativeX( MxNumberTenths( 76.2 ) );
	object.setRelativeY( MxNumberTenths( 76.2 ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dashed\" space-length=\"5.5\" default-y=\"76.2\" relative-x=\"76.2\" relative-y=\"76.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 5.6 ) );
	object.setSpaceLength( MxNumberTenths( 5.6 ) );
	object.setDefaultX( MxNumberTenths( 76.3 ) );
	object.setDefaultY( MxNumberTenths( 76.3 ) );
	object.setRelativeX( MxNumberTenths( 76.3 ) );
	object.setRelativeY( MxNumberTenths( 76.3 ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-end=\"up\" space-length=\"5.6\" relative-x=\"76.3\" relative-y=\"76.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 5.7 ) );
	object.setSpaceLength( MxNumberTenths( 5.7 ) );
	object.setDefaultX( MxNumberTenths( 76.4 ) );
	object.setDefaultY( MxNumberTenths( 76.4 ) );
	object.setRelativeX( MxNumberTenths( 76.4 ) );
	object.setRelativeY( MxNumberTenths( 76.4 ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<quiet type=\"start\" line-end=\"up\" space-length=\"5.7\" relative-x=\"76.4\" relative-y=\"76.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 5.8 ) );
	object.setSpaceLength( MxNumberTenths( 5.8 ) );
	object.setDefaultX( MxNumberTenths( 76.5 ) );
	object.setDefaultY( MxNumberTenths( 76.5 ) );
	object.setRelativeX( MxNumberTenths( 76.5 ) );
	object.setRelativeY( MxNumberTenths( 76.5 ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<musicxmlishard type=\"start\" line-end=\"up\" space-length=\"5.8\" relative-x=\"76.5\" relative-y=\"76.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 5.9 ) );
	object.setSpaceLength( MxNumberTenths( 5.9 ) );
	object.setDefaultX( MxNumberTenths( 76.6 ) );
	object.setDefaultY( MxNumberTenths( 76.6 ) );
	object.setRelativeX( MxNumberTenths( 76.6 ) );
	object.setRelativeY( MxNumberTenths( 76.6 ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"5.9\" space-length=\"5.9\" default-x=\"76.6\" relative-x=\"76.6\" relative-y=\"76.6\" color=\"#F0EFEE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 6 ) );
	object.setSpaceLength( MxNumberTenths( 6 ) );
	object.setDefaultX( MxNumberTenths( 76.7 ) );
	object.setDefaultY( MxNumberTenths( 76.7 ) );
	object.setRelativeX( MxNumberTenths( 76.7 ) );
	object.setRelativeY( MxNumberTenths( 76.7 ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"6\" default-x=\"76.7\" relative-x=\"76.7\" relative-y=\"76.7\" color=\"#F1F2F1F0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 6.1 ) );
	object.setSpaceLength( MxNumberTenths( 6.1 ) );
	object.setDefaultX( MxNumberTenths( 76.8 ) );
	object.setDefaultY( MxNumberTenths( 76.8 ) );
	object.setRelativeX( MxNumberTenths( 76.8 ) );
	object.setRelativeY( MxNumberTenths( 76.8 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" dash-length=\"6.1\" default-x=\"76.8\" relative-y=\"76.8\" color=\"#F4F3F2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 6.2 ) );
	object.setSpaceLength( MxNumberTenths( 6.2 ) );
	object.setDefaultX( MxNumberTenths( 76.9 ) );
	object.setDefaultY( MxNumberTenths( 76.9 ) );
	object.setRelativeX( MxNumberTenths( 76.9 ) );
	object.setRelativeY( MxNumberTenths( 76.9 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<quiet type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" dash-length=\"6.2\" default-x=\"76.9\" relative-y=\"76.9\" color=\"#F5F6F5F4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 6.3 ) );
	object.setSpaceLength( MxNumberTenths( 6.3 ) );
	object.setDefaultX( MxNumberTenths( 77 ) );
	object.setDefaultY( MxNumberTenths( 77 ) );
	object.setRelativeX( MxNumberTenths( 77 ) );
	object.setRelativeY( MxNumberTenths( 77 ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dashed\" dash-length=\"6.3\" default-x=\"77\" relative-y=\"77\" color=\"#F8F7F6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 6.4 ) );
	object.setSpaceLength( MxNumberTenths( 6.4 ) );
	object.setDefaultX( MxNumberTenths( 77.1 ) );
	object.setDefaultY( MxNumberTenths( 77.1 ) );
	object.setRelativeX( MxNumberTenths( 77.1 ) );
	object.setRelativeY( MxNumberTenths( 77.1 ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" dash-length=\"6.4\" default-x=\"77.1\" relative-y=\"77.1\" color=\"#F9FAF9F8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 6.5 ) );
	object.setSpaceLength( MxNumberTenths( 6.5 ) );
	object.setDefaultX( MxNumberTenths( 77.2 ) );
	object.setDefaultY( MxNumberTenths( 77.2 ) );
	object.setRelativeX( MxNumberTenths( 77.2 ) );
	object.setRelativeY( MxNumberTenths( 77.2 ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<charlie type=\"start\" line-end=\"up\" line-type=\"wavy\" default-x=\"77.2\" default-y=\"77.2\" relative-y=\"77.2\" color=\"#FCFBFA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 6.6 ) );
	object.setSpaceLength( MxNumberTenths( 6.6 ) );
	object.setDefaultX( MxNumberTenths( 77.3 ) );
	object.setDefaultY( MxNumberTenths( 77.3 ) );
	object.setRelativeX( MxNumberTenths( 77.3 ) );
	object.setRelativeY( MxNumberTenths( 77.3 ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\" default-x=\"77.3\" default-y=\"77.3\" color=\"#FDFEFDFC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 6.7 ) );
	object.setSpaceLength( MxNumberTenths( 6.7 ) );
	object.setDefaultX( MxNumberTenths( 77.4 ) );
	object.setDefaultY( MxNumberTenths( 77.4 ) );
	object.setRelativeX( MxNumberTenths( 77.4 ) );
	object.setRelativeY( MxNumberTenths( 77.4 ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" space-length=\"6.7\" default-y=\"77.4\" color=\"#00FFFE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 6.8 ) );
	object.setSpaceLength( MxNumberTenths( 6.8 ) );
	object.setDefaultX( MxNumberTenths( 77.5 ) );
	object.setDefaultY( MxNumberTenths( 77.5 ) );
	object.setRelativeX( MxNumberTenths( 77.5 ) );
	object.setRelativeY( MxNumberTenths( 77.5 ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" space-length=\"6.8\" default-y=\"77.5\" color=\"#01020100\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 6.9 ) );
	object.setSpaceLength( MxNumberTenths( 6.9 ) );
	object.setDefaultX( MxNumberTenths( 77.6 ) );
	object.setDefaultY( MxNumberTenths( 77.6 ) );
	object.setRelativeX( MxNumberTenths( 77.6 ) );
	object.setRelativeY( MxNumberTenths( 77.6 ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<bishop type=\"start\" line-end=\"up\" end-length=\"1\" space-length=\"6.9\" default-y=\"77.6\" color=\"#040302\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 7 ) );
	object.setSpaceLength( MxNumberTenths( 7 ) );
	object.setDefaultX( MxNumberTenths( 77.7 ) );
	object.setDefaultY( MxNumberTenths( 77.7 ) );
	object.setRelativeX( MxNumberTenths( 77.7 ) );
	object.setRelativeY( MxNumberTenths( 77.7 ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<charlie type=\"start\" line-end=\"up\" end-length=\"1\" space-length=\"7\" default-y=\"77.7\" color=\"#05060504\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 7.1 ) );
	object.setSpaceLength( MxNumberTenths( 7.1 ) );
	object.setDefaultX( MxNumberTenths( 77.8 ) );
	object.setDefaultY( MxNumberTenths( 77.8 ) );
	object.setRelativeX( MxNumberTenths( 77.8 ) );
	object.setRelativeY( MxNumberTenths( 77.8 ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dashed\" dash-length=\"7.1\" space-length=\"7.1\" default-y=\"77.8\" relative-x=\"77.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 7.2 ) );
	object.setSpaceLength( MxNumberTenths( 7.2 ) );
	object.setDefaultX( MxNumberTenths( 77.9 ) );
	object.setDefaultY( MxNumberTenths( 77.9 ) );
	object.setRelativeX( MxNumberTenths( 77.9 ) );
	object.setRelativeY( MxNumberTenths( 77.9 ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" dash-length=\"7.2\" space-length=\"7.2\" default-y=\"77.9\" relative-x=\"77.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 7.3 ) );
	object.setSpaceLength( MxNumberTenths( 7.3 ) );
	object.setDefaultX( MxNumberTenths( 78 ) );
	object.setDefaultY( MxNumberTenths( 78 ) );
	object.setRelativeX( MxNumberTenths( 78 ) );
	object.setRelativeY( MxNumberTenths( 78 ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<musicxmlishard type=\"start\" line-end=\"up\" line-type=\"wavy\" dash-length=\"7.3\" space-length=\"7.3\" default-y=\"78\" relative-x=\"78\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 7.4 ) );
	object.setSpaceLength( MxNumberTenths( 7.4 ) );
	object.setDefaultX( MxNumberTenths( 78.1 ) );
	object.setDefaultY( MxNumberTenths( 78.1 ) );
	object.setRelativeX( MxNumberTenths( 78.1 ) );
	object.setRelativeY( MxNumberTenths( 78.1 ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<bishop type=\"start\" line-end=\"up\" line-type=\"solid\" dash-length=\"7.4\" relative-x=\"78.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 7.5 ) );
	object.setSpaceLength( MxNumberTenths( 7.5 ) );
	object.setDefaultX( MxNumberTenths( 78.2 ) );
	object.setDefaultY( MxNumberTenths( 78.2 ) );
	object.setRelativeX( MxNumberTenths( 78.2 ) );
	object.setRelativeY( MxNumberTenths( 78.2 ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" dash-length=\"7.5\" default-x=\"78.2\" relative-x=\"78.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 7.6 ) );
	object.setSpaceLength( MxNumberTenths( 7.6 ) );
	object.setDefaultX( MxNumberTenths( 78.3 ) );
	object.setDefaultY( MxNumberTenths( 78.3 ) );
	object.setRelativeX( MxNumberTenths( 78.3 ) );
	object.setRelativeY( MxNumberTenths( 78.3 ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"7.6\" default-x=\"78.3\" relative-x=\"78.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 7.7 ) );
	object.setSpaceLength( MxNumberTenths( 7.7 ) );
	object.setDefaultX( MxNumberTenths( 78.4 ) );
	object.setDefaultY( MxNumberTenths( 78.4 ) );
	object.setRelativeX( MxNumberTenths( 78.4 ) );
	object.setRelativeY( MxNumberTenths( 78.4 ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<quiet type=\"start\" line-end=\"up\" end-length=\"1\" default-x=\"78.4\" relative-x=\"78.4\" relative-y=\"78.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 7.8 ) );
	object.setSpaceLength( MxNumberTenths( 7.8 ) );
	object.setDefaultX( MxNumberTenths( 78.5 ) );
	object.setDefaultY( MxNumberTenths( 78.5 ) );
	object.setRelativeX( MxNumberTenths( 78.5 ) );
	object.setRelativeY( MxNumberTenths( 78.5 ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<musicxmlishard type=\"start\" line-end=\"up\" end-length=\"1\" default-x=\"78.5\" relative-x=\"78.5\" relative-y=\"78.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 7.9 ) );
	object.setSpaceLength( MxNumberTenths( 7.9 ) );
	object.setDefaultX( MxNumberTenths( 78.6 ) );
	object.setDefaultY( MxNumberTenths( 78.6 ) );
	object.setRelativeX( MxNumberTenths( 78.6 ) );
	object.setRelativeY( MxNumberTenths( 78.6 ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-end=\"up\" default-x=\"78.6\" relative-x=\"78.6\" relative-y=\"78.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 8 ) );
	object.setSpaceLength( MxNumberTenths( 8 ) );
	object.setDefaultX( MxNumberTenths( 78.7 ) );
	object.setDefaultY( MxNumberTenths( 78.7 ) );
	object.setRelativeX( MxNumberTenths( 78.7 ) );
	object.setRelativeY( MxNumberTenths( 78.7 ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-end=\"up\" default-x=\"78.7\" relative-x=\"78.7\" relative-y=\"78.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 8.1 ) );
	object.setSpaceLength( MxNumberTenths( 8.1 ) );
	object.setDefaultX( MxNumberTenths( 78.8 ) );
	object.setDefaultY( MxNumberTenths( 78.8 ) );
	object.setRelativeX( MxNumberTenths( 78.8 ) );
	object.setRelativeY( MxNumberTenths( 78.8 ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\" line-type=\"wavy\" space-length=\"8.1\" default-x=\"78.8\" relative-y=\"78.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 8.2 ) );
	object.setSpaceLength( MxNumberTenths( 8.2 ) );
	object.setDefaultX( MxNumberTenths( 78.9 ) );
	object.setDefaultY( MxNumberTenths( 78.9 ) );
	object.setRelativeX( MxNumberTenths( 78.9 ) );
	object.setRelativeY( MxNumberTenths( 78.9 ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<quiet type=\"start\" line-end=\"up\" line-type=\"solid\" space-length=\"8.2\" default-x=\"78.9\" relative-y=\"78.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 8.3 ) );
	object.setSpaceLength( MxNumberTenths( 8.3 ) );
	object.setDefaultX( MxNumberTenths( 79 ) );
	object.setDefaultY( MxNumberTenths( 79 ) );
	object.setRelativeX( MxNumberTenths( 79 ) );
	object.setRelativeY( MxNumberTenths( 79 ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" dash-length=\"8.3\" space-length=\"8.3\" default-y=\"79\" relative-y=\"79\" color=\"#201F1E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 8.4 ) );
	object.setSpaceLength( MxNumberTenths( 8.4 ) );
	object.setDefaultX( MxNumberTenths( 79.1 ) );
	object.setDefaultY( MxNumberTenths( 79.1 ) );
	object.setRelativeX( MxNumberTenths( 79.1 ) );
	object.setRelativeY( MxNumberTenths( 79.1 ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" dash-length=\"8.4\" space-length=\"8.4\" default-y=\"79.1\" relative-y=\"79.1\" color=\"#21222120\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 8.5 ) );
	object.setSpaceLength( MxNumberTenths( 8.5 ) );
	object.setDefaultX( MxNumberTenths( 79.2 ) );
	object.setDefaultY( MxNumberTenths( 79.2 ) );
	object.setRelativeX( MxNumberTenths( 79.2 ) );
	object.setRelativeY( MxNumberTenths( 79.2 ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<charlie type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" dash-length=\"8.5\" space-length=\"8.5\" default-y=\"79.2\" relative-y=\"79.2\" color=\"#242322\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 8.6 ) );
	object.setSpaceLength( MxNumberTenths( 8.6 ) );
	object.setDefaultX( MxNumberTenths( 79.3 ) );
	object.setDefaultY( MxNumberTenths( 79.3 ) );
	object.setRelativeX( MxNumberTenths( 79.3 ) );
	object.setRelativeY( MxNumberTenths( 79.3 ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\" end-length=\"1\" dash-length=\"8.6\" space-length=\"8.6\" default-y=\"79.3\" relative-y=\"79.3\" color=\"#25262524\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 8.7 ) );
	object.setSpaceLength( MxNumberTenths( 8.7 ) );
	object.setDefaultX( MxNumberTenths( 79.4 ) );
	object.setDefaultY( MxNumberTenths( 79.4 ) );
	object.setRelativeX( MxNumberTenths( 79.4 ) );
	object.setRelativeY( MxNumberTenths( 79.4 ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"8.7\" space-length=\"8.7\" default-y=\"79.4\" relative-y=\"79.4\" color=\"#282726\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 8.8 ) );
	object.setSpaceLength( MxNumberTenths( 8.8 ) );
	object.setDefaultX( MxNumberTenths( 79.5 ) );
	object.setDefaultY( MxNumberTenths( 79.5 ) );
	object.setRelativeX( MxNumberTenths( 79.5 ) );
	object.setRelativeY( MxNumberTenths( 79.5 ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"8.8\" default-y=\"79.5\" color=\"#292A2928\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 8.9 ) );
	object.setSpaceLength( MxNumberTenths( 8.9 ) );
	object.setDefaultX( MxNumberTenths( 79.6 ) );
	object.setDefaultY( MxNumberTenths( 79.6 ) );
	object.setRelativeX( MxNumberTenths( 79.6 ) );
	object.setRelativeY( MxNumberTenths( 79.6 ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<bishop type=\"start\" line-end=\"up\" default-y=\"79.6\" color=\"#2C2B2A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 9 ) );
	object.setSpaceLength( MxNumberTenths( 9 ) );
	object.setDefaultX( MxNumberTenths( 79.7 ) );
	object.setDefaultY( MxNumberTenths( 79.7 ) );
	object.setRelativeX( MxNumberTenths( 79.7 ) );
	object.setRelativeY( MxNumberTenths( 79.7 ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<charlie type=\"start\" line-end=\"up\" default-y=\"79.7\" color=\"#2D2E2D2C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 9.1 ) );
	object.setSpaceLength( MxNumberTenths( 9.1 ) );
	object.setDefaultX( MxNumberTenths( 79.8 ) );
	object.setDefaultY( MxNumberTenths( 79.8 ) );
	object.setRelativeX( MxNumberTenths( 79.8 ) );
	object.setRelativeY( MxNumberTenths( 79.8 ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" default-x=\"79.8\" default-y=\"79.8\" relative-x=\"79.8\" color=\"#302F2E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 9.2 ) );
	object.setSpaceLength( MxNumberTenths( 9.2 ) );
	object.setDefaultX( MxNumberTenths( 79.9 ) );
	object.setDefaultY( MxNumberTenths( 79.9 ) );
	object.setRelativeX( MxNumberTenths( 79.9 ) );
	object.setRelativeY( MxNumberTenths( 79.9 ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" default-x=\"79.9\" relative-x=\"79.9\" color=\"#31323130\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 9.3 ) );
	object.setSpaceLength( MxNumberTenths( 9.3 ) );
	object.setDefaultX( MxNumberTenths( 80 ) );
	object.setDefaultY( MxNumberTenths( 80 ) );
	object.setRelativeX( MxNumberTenths( 80 ) );
	object.setRelativeY( MxNumberTenths( 80 ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<musicxmlishard type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" default-x=\"80\" relative-x=\"80\" color=\"#343332\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 9.4 ) );
	object.setSpaceLength( MxNumberTenths( 9.4 ) );
	object.setDefaultX( MxNumberTenths( 80.1 ) );
	object.setDefaultY( MxNumberTenths( 80.1 ) );
	object.setRelativeX( MxNumberTenths( 80.1 ) );
	object.setRelativeY( MxNumberTenths( 80.1 ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<bishop type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" default-x=\"80.1\" relative-x=\"80.1\" color=\"#35363534\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 9.5 ) );
	object.setSpaceLength( MxNumberTenths( 9.5 ) );
	object.setDefaultX( MxNumberTenths( 80.2 ) );
	object.setDefaultY( MxNumberTenths( 80.2 ) );
	object.setRelativeX( MxNumberTenths( 80.2 ) );
	object.setRelativeY( MxNumberTenths( 80.2 ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dashed\" dash-length=\"9.5\" space-length=\"9.5\" default-x=\"80.2\" relative-x=\"80.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 9.6 ) );
	object.setSpaceLength( MxNumberTenths( 9.6 ) );
	object.setDefaultX( MxNumberTenths( 80.3 ) );
	object.setDefaultY( MxNumberTenths( 80.3 ) );
	object.setRelativeX( MxNumberTenths( 80.3 ) );
	object.setRelativeY( MxNumberTenths( 80.3 ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<booksmart type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"9.6\" space-length=\"9.6\" default-x=\"80.3\" relative-x=\"80.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 9.7 ) );
	object.setSpaceLength( MxNumberTenths( 9.7 ) );
	object.setDefaultX( MxNumberTenths( 80.4 ) );
	object.setDefaultY( MxNumberTenths( 80.4 ) );
	object.setRelativeX( MxNumberTenths( 80.4 ) );
	object.setRelativeY( MxNumberTenths( 80.4 ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<quiet type=\"start\" line-end=\"up\" dash-length=\"9.7\" space-length=\"9.7\" default-x=\"80.4\" relative-x=\"80.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 9.8 ) );
	object.setSpaceLength( MxNumberTenths( 9.8 ) );
	object.setDefaultX( MxNumberTenths( 80.5 ) );
	object.setDefaultY( MxNumberTenths( 80.5 ) );
	object.setRelativeX( MxNumberTenths( 80.5 ) );
	object.setRelativeY( MxNumberTenths( 80.5 ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<musicxmlishard type=\"start\" line-end=\"up\" dash-length=\"9.8\" space-length=\"9.8\" default-x=\"80.5\" relative-x=\"80.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 9.9 ) );
	object.setSpaceLength( MxNumberTenths( 9.9 ) );
	object.setDefaultX( MxNumberTenths( 80.6 ) );
	object.setDefaultY( MxNumberTenths( 80.6 ) );
	object.setRelativeX( MxNumberTenths( 80.6 ) );
	object.setRelativeY( MxNumberTenths( 80.6 ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"9.9\" space-length=\"9.9\" relative-x=\"80.6\" relative-y=\"80.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 10 ) );
	object.setSpaceLength( MxNumberTenths( 10 ) );
	object.setDefaultX( MxNumberTenths( 80.7 ) );
	object.setDefaultY( MxNumberTenths( 80.7 ) );
	object.setRelativeX( MxNumberTenths( 80.7 ) );
	object.setRelativeY( MxNumberTenths( 80.7 ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<charlie type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"10\" space-length=\"10\" relative-x=\"80.7\" relative-y=\"80.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 10.1 ) );
	object.setSpaceLength( MxNumberTenths( 10.1 ) );
	object.setDefaultX( MxNumberTenths( 80.8 ) );
	object.setDefaultY( MxNumberTenths( 80.8 ) );
	object.setRelativeX( MxNumberTenths( 80.8 ) );
	object.setRelativeY( MxNumberTenths( 80.8 ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" space-length=\"10.1\" default-y=\"80.8\" relative-y=\"80.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 10.2 ) );
	object.setSpaceLength( MxNumberTenths( 10.2 ) );
	object.setDefaultX( MxNumberTenths( 80.9 ) );
	object.setDefaultY( MxNumberTenths( 80.9 ) );
	object.setRelativeX( MxNumberTenths( 80.9 ) );
	object.setRelativeY( MxNumberTenths( 80.9 ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<quiet type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" default-y=\"80.9\" relative-y=\"80.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 10.3 ) );
	object.setSpaceLength( MxNumberTenths( 10.3 ) );
	object.setDefaultX( MxNumberTenths( 81 ) );
	object.setDefaultY( MxNumberTenths( 81 ) );
	object.setRelativeX( MxNumberTenths( 81 ) );
	object.setRelativeY( MxNumberTenths( 81 ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dashed\" default-y=\"81\" relative-y=\"81\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 10.4 ) );
	object.setSpaceLength( MxNumberTenths( 10.4 ) );
	object.setDefaultX( MxNumberTenths( 81.1 ) );
	object.setDefaultY( MxNumberTenths( 81.1 ) );
	object.setRelativeX( MxNumberTenths( 81.1 ) );
	object.setRelativeY( MxNumberTenths( 81.1 ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<bishop type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" default-y=\"81.1\" relative-y=\"81.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 10.5 ) );
	object.setSpaceLength( MxNumberTenths( 10.5 ) );
	object.setDefaultX( MxNumberTenths( 81.2 ) );
	object.setDefaultY( MxNumberTenths( 81.2 ) );
	object.setRelativeX( MxNumberTenths( 81.2 ) );
	object.setRelativeY( MxNumberTenths( 81.2 ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<charlie type=\"start\" line-end=\"up\" line-type=\"wavy\" default-y=\"81.2\" relative-y=\"81.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 10.6 ) );
	object.setSpaceLength( MxNumberTenths( 10.6 ) );
	object.setDefaultX( MxNumberTenths( 81.3 ) );
	object.setDefaultY( MxNumberTenths( 81.3 ) );
	object.setRelativeX( MxNumberTenths( 81.3 ) );
	object.setRelativeY( MxNumberTenths( 81.3 ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\" default-y=\"81.3\" relative-y=\"81.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 10.7 ) );
	object.setSpaceLength( MxNumberTenths( 10.7 ) );
	object.setDefaultX( MxNumberTenths( 81.4 ) );
	object.setDefaultY( MxNumberTenths( 81.4 ) );
	object.setRelativeX( MxNumberTenths( 81.4 ) );
	object.setRelativeY( MxNumberTenths( 81.4 ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<quiet type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"10.7\" default-x=\"81.4\" default-y=\"81.4\" relative-y=\"81.4\" color=\"#504F4E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 10.8 ) );
	object.setSpaceLength( MxNumberTenths( 10.8 ) );
	object.setDefaultX( MxNumberTenths( 81.5 ) );
	object.setDefaultY( MxNumberTenths( 81.5 ) );
	object.setRelativeX( MxNumberTenths( 81.5 ) );
	object.setRelativeY( MxNumberTenths( 81.5 ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"10.8\" default-x=\"81.5\" default-y=\"81.5\" relative-y=\"81.5\" color=\"#51525150\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 10.9 ) );
	object.setSpaceLength( MxNumberTenths( 10.9 ) );
	object.setDefaultX( MxNumberTenths( 81.6 ) );
	object.setDefaultY( MxNumberTenths( 81.6 ) );
	object.setRelativeX( MxNumberTenths( 81.6 ) );
	object.setRelativeY( MxNumberTenths( 81.6 ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<bishop type=\"start\" line-end=\"up\" end-length=\"1\" dash-length=\"10.9\" space-length=\"10.9\" default-x=\"81.6\" default-y=\"81.6\" relative-y=\"81.6\" color=\"#545352\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 11 ) );
	object.setSpaceLength( MxNumberTenths( 11 ) );
	object.setDefaultX( MxNumberTenths( 81.7 ) );
	object.setDefaultY( MxNumberTenths( 81.7 ) );
	object.setRelativeX( MxNumberTenths( 81.7 ) );
	object.setRelativeY( MxNumberTenths( 81.7 ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<charlie type=\"start\" line-end=\"up\" end-length=\"1\" dash-length=\"11\" space-length=\"11\" default-x=\"81.7\" color=\"#55565554\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptyBracket )
{
	MxCxEmptyBracket object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsEndLengthPresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 11.1 ) );
	object.setSpaceLength( MxNumberTenths( 11.1 ) );
	object.setDefaultX( MxNumberTenths( 81.8 ) );
	object.setDefaultY( MxNumberTenths( 81.8 ) );
	object.setRelativeX( MxNumberTenths( 81.8 ) );
	object.setRelativeY( MxNumberTenths( 81.8 ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<booksmart type=\"start\" line-end=\"up\"/>";
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


