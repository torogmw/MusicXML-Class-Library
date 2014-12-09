/** *******************************************************
  * 
  * MxEeBracketTest.cpp
  * Created: 2014-12-05 16:47:04
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeBracket.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeBracket )
{
	MxEeBracket object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxEnumStartStopContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxEnumLineEnd(  ) ).toString();
	std::string actual = object.getLineEnd().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getEndLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxEnumLineType(  ) ).toString();
	std::string actual = object.getLineType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeBracket )
{
	MxEeBracket object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeBracket )
{
	MxEeBracket object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = "MxEeBracket";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = "bracket";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeBracket )
{
	MxEeBracket object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEeBracket )
{
	MxEnumStartStopContinue value1( lexicon::enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue value2( lexicon::enums::StartStopContinue::stop );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setType( value1 );
	MxEnumStartStopContinue expected = value1;
	MxEnumStartStopContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxEeBracket )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineEnd2, MxEeBracket )
{
	MxEnumLineEnd value1( lexicon::enums::LineEnd::none );
	MxEnumLineEnd value2( lexicon::enums::LineEnd::arrow );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setLineEnd( value1 );
	MxEnumLineEnd expected = value1;
	MxEnumLineEnd actual = object.getLineEnd();
	CHECK_EQUAL( expected, actual )
	object.setLineEnd( value2 );
	expected = value2;
	actual = object.getLineEnd();
	CHECK_EQUAL( expected, actual )
}
TEST( setEndLength3, MxEeBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setEndLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getEndLength();
	CHECK_EQUAL( expected, actual )
	object.setEndLength( value2 );
	expected = value2;
	actual = object.getEndLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineType4, MxEeBracket )
{
	MxEnumLineType value1( lexicon::enums::LineType::wavy );
	MxEnumLineType value2( lexicon::enums::LineType::dotted );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setLineType( value1 );
	MxEnumLineType expected = value1;
	MxEnumLineType actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
	object.setLineType( value2 );
	expected = value2;
	actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength5, MxEeBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength6, MxEeBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX7, MxEeBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY8, MxEeBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX9, MxEeBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY10, MxEeBracket )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor11, MxEeBracket )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEeBracket object;
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

TEST( getIsTypeRequired0, MxEeBracket )
{
	MxEeBracket object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineEndRequired2, MxEeBracket )
{
	MxEeBracket object;
	bool expected = true;
	bool actual = object.getIsLineEndRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEndLengthRequired3, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsEndLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeRequired4, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsLineTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired5, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired6, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired7, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired8, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired9, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired10, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired11, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsNumberPresent1, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsLineEndPresent2, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsEndLengthPresent3, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsLineTypePresent4, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsDashLengthPresent5, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsSpaceLengthPresent6, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsDefaultXPresent7, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsDefaultYPresent8, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsRelativeXPresent9, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsRelativeYPresent10, MxEeBracket )
{
	MxEeBracket object;
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
TEST( getIsColorPresent11, MxEeBracket )
{
	MxEeBracket object;
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

TEST( getIsTypeDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineEndDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsLineEndDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsEndLengthDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsEndLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsLineTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEeBracket )
{
	MxEeBracket object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxEnumStartStopContinue expected;
	MxEnumStartStopContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineEndDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxEnumLineEnd expected;
	MxEnumLineEnd actual = object.getLineEndDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getEndLengthDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getEndLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineTypeDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxEnumLineType expected;
	MxEnumLineType actual = object.getLineTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEeBracket )
{
	MxEeBracket object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeBracket )
{
	MxEeBracket object;
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setLineEnd( MxEnumLineEnd( lexicon::enums::LineEnd::up ) );
	object.setEndLength( MxNumberTenths( 1 ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 21.3 ) );
	object.setSpaceLength( MxNumberTenths( 21.3 ) );
	object.setDefaultX( MxNumberTenths( 71.8 ) );
	object.setDefaultY( MxNumberTenths( 71.8 ) );
	object.setRelativeX( MxNumberTenths( 71.8 ) );
	object.setRelativeY( MxNumberTenths( 71.8 ) );
	object.setColor( MxColor( "#888786" ) );
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
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" dash-length=\"21.3\" space-length=\"21.3\" default-x=\"71.8\" default-y=\"71.8\" relative-x=\"71.8\" relative-y=\"71.8\" color=\"#888786\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 21.4 ) );
	object.setSpaceLength( MxNumberTenths( 21.4 ) );
	object.setDefaultX( MxNumberTenths( 71.9 ) );
	object.setDefaultY( MxNumberTenths( 71.9 ) );
	object.setRelativeX( MxNumberTenths( 71.9 ) );
	object.setRelativeY( MxNumberTenths( 71.9 ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" dash-length=\"21.4\" space-length=\"21.4\" default-x=\"71.9\" default-y=\"71.9\" relative-x=\"71.9\" relative-y=\"71.9\" color=\"#898A8988\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 21.5 ) );
	object.setSpaceLength( MxNumberTenths( 21.5 ) );
	object.setDefaultX( MxNumberTenths( 72 ) );
	object.setDefaultY( MxNumberTenths( 72 ) );
	object.setRelativeX( MxNumberTenths( 72 ) );
	object.setRelativeY( MxNumberTenths( 72 ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" dash-length=\"21.5\" space-length=\"21.5\" default-x=\"72\" default-y=\"72\" relative-x=\"72\" relative-y=\"72\" color=\"#8C8B8A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 21.6 ) );
	object.setSpaceLength( MxNumberTenths( 21.6 ) );
	object.setDefaultX( MxNumberTenths( 72.1 ) );
	object.setDefaultY( MxNumberTenths( 72.1 ) );
	object.setRelativeX( MxNumberTenths( 72.1 ) );
	object.setRelativeY( MxNumberTenths( 72.1 ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" dash-length=\"21.6\" space-length=\"21.6\" default-x=\"72.1\" default-y=\"72.1\" relative-x=\"72.1\" relative-y=\"72.1\" color=\"#8D8E8D8C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 21.7 ) );
	object.setSpaceLength( MxNumberTenths( 21.7 ) );
	object.setDefaultX( MxNumberTenths( 72.2 ) );
	object.setDefaultY( MxNumberTenths( 72.2 ) );
	object.setRelativeX( MxNumberTenths( 72.2 ) );
	object.setRelativeY( MxNumberTenths( 72.2 ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" dash-length=\"21.7\" space-length=\"21.7\" default-x=\"72.2\" default-y=\"72.2\" relative-x=\"72.2\" relative-y=\"72.2\" color=\"#908F8E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 21.8 ) );
	object.setSpaceLength( MxNumberTenths( 21.8 ) );
	object.setDefaultX( MxNumberTenths( 72.3 ) );
	object.setDefaultY( MxNumberTenths( 72.3 ) );
	object.setRelativeX( MxNumberTenths( 72.3 ) );
	object.setRelativeY( MxNumberTenths( 72.3 ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"21.8\" space-length=\"21.8\" default-x=\"72.3\" default-y=\"72.3\" relative-x=\"72.3\" relative-y=\"72.3\" color=\"#91929190\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 21.9 ) );
	object.setSpaceLength( MxNumberTenths( 21.9 ) );
	object.setDefaultX( MxNumberTenths( 72.4 ) );
	object.setDefaultY( MxNumberTenths( 72.4 ) );
	object.setRelativeX( MxNumberTenths( 72.4 ) );
	object.setRelativeY( MxNumberTenths( 72.4 ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" space-length=\"21.9\" default-x=\"72.4\" default-y=\"72.4\" relative-x=\"72.4\" relative-y=\"72.4\" color=\"#949392\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 22 ) );
	object.setSpaceLength( MxNumberTenths( 22 ) );
	object.setDefaultX( MxNumberTenths( 72.5 ) );
	object.setDefaultY( MxNumberTenths( 72.5 ) );
	object.setRelativeX( MxNumberTenths( 72.5 ) );
	object.setRelativeY( MxNumberTenths( 72.5 ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" default-x=\"72.5\" default-y=\"72.5\" relative-x=\"72.5\" relative-y=\"72.5\" color=\"#95969594\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 22.1 ) );
	object.setSpaceLength( MxNumberTenths( 22.1 ) );
	object.setDefaultX( MxNumberTenths( 72.6 ) );
	object.setDefaultY( MxNumberTenths( 72.6 ) );
	object.setRelativeX( MxNumberTenths( 72.6 ) );
	object.setRelativeY( MxNumberTenths( 72.6 ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" default-y=\"72.6\" relative-x=\"72.6\" relative-y=\"72.6\" color=\"#989796\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 22.2 ) );
	object.setSpaceLength( MxNumberTenths( 22.2 ) );
	object.setDefaultX( MxNumberTenths( 72.7 ) );
	object.setDefaultY( MxNumberTenths( 72.7 ) );
	object.setRelativeX( MxNumberTenths( 72.7 ) );
	object.setRelativeY( MxNumberTenths( 72.7 ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" relative-x=\"72.7\" relative-y=\"72.7\" color=\"#999A9998\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 22.3 ) );
	object.setSpaceLength( MxNumberTenths( 22.3 ) );
	object.setDefaultX( MxNumberTenths( 72.8 ) );
	object.setDefaultY( MxNumberTenths( 72.8 ) );
	object.setRelativeX( MxNumberTenths( 72.8 ) );
	object.setRelativeY( MxNumberTenths( 72.8 ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" relative-y=\"72.8\" color=\"#9C9B9A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 22.4 ) );
	object.setSpaceLength( MxNumberTenths( 22.4 ) );
	object.setDefaultX( MxNumberTenths( 72.9 ) );
	object.setDefaultY( MxNumberTenths( 72.9 ) );
	object.setRelativeX( MxNumberTenths( 72.9 ) );
	object.setRelativeY( MxNumberTenths( 72.9 ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" color=\"#9D9E9D9C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 22.5 ) );
	object.setSpaceLength( MxNumberTenths( 22.5 ) );
	object.setDefaultX( MxNumberTenths( 73 ) );
	object.setDefaultY( MxNumberTenths( 73 ) );
	object.setRelativeX( MxNumberTenths( 73 ) );
	object.setRelativeY( MxNumberTenths( 73 ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" dash-length=\"22.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 22.6 ) );
	object.setSpaceLength( MxNumberTenths( 22.6 ) );
	object.setDefaultX( MxNumberTenths( 73.1 ) );
	object.setDefaultY( MxNumberTenths( 73.1 ) );
	object.setRelativeX( MxNumberTenths( 73.1 ) );
	object.setRelativeY( MxNumberTenths( 73.1 ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"wavy\" dash-length=\"22.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 22.7 ) );
	object.setSpaceLength( MxNumberTenths( 22.7 ) );
	object.setDefaultX( MxNumberTenths( 73.2 ) );
	object.setDefaultY( MxNumberTenths( 73.2 ) );
	object.setRelativeX( MxNumberTenths( 73.2 ) );
	object.setRelativeY( MxNumberTenths( 73.2 ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"solid\" dash-length=\"22.7\" space-length=\"22.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 22.8 ) );
	object.setSpaceLength( MxNumberTenths( 22.8 ) );
	object.setDefaultX( MxNumberTenths( 73.3 ) );
	object.setDefaultY( MxNumberTenths( 73.3 ) );
	object.setRelativeX( MxNumberTenths( 73.3 ) );
	object.setRelativeY( MxNumberTenths( 73.3 ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" dash-length=\"22.8\" space-length=\"22.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 22.9 ) );
	object.setSpaceLength( MxNumberTenths( 22.9 ) );
	object.setDefaultX( MxNumberTenths( 73.4 ) );
	object.setDefaultY( MxNumberTenths( 73.4 ) );
	object.setRelativeX( MxNumberTenths( 73.4 ) );
	object.setRelativeY( MxNumberTenths( 73.4 ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"22.9\" space-length=\"22.9\" default-x=\"73.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 23 ) );
	object.setSpaceLength( MxNumberTenths( 23 ) );
	object.setDefaultX( MxNumberTenths( 73.5 ) );
	object.setDefaultY( MxNumberTenths( 73.5 ) );
	object.setRelativeX( MxNumberTenths( 73.5 ) );
	object.setRelativeY( MxNumberTenths( 73.5 ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"23\" space-length=\"23\" default-x=\"73.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 23.1 ) );
	object.setSpaceLength( MxNumberTenths( 23.1 ) );
	object.setDefaultX( MxNumberTenths( 73.6 ) );
	object.setDefaultY( MxNumberTenths( 73.6 ) );
	object.setRelativeX( MxNumberTenths( 73.6 ) );
	object.setRelativeY( MxNumberTenths( 73.6 ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" space-length=\"23.1\" default-x=\"73.6\" default-y=\"73.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 23.2 ) );
	object.setSpaceLength( MxNumberTenths( 23.2 ) );
	object.setDefaultX( MxNumberTenths( 73.7 ) );
	object.setDefaultY( MxNumberTenths( 73.7 ) );
	object.setRelativeX( MxNumberTenths( 73.7 ) );
	object.setRelativeY( MxNumberTenths( 73.7 ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" space-length=\"23.2\" default-x=\"73.7\" default-y=\"73.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 23.3 ) );
	object.setSpaceLength( MxNumberTenths( 23.3 ) );
	object.setDefaultX( MxNumberTenths( 73.8 ) );
	object.setDefaultY( MxNumberTenths( 73.8 ) );
	object.setRelativeX( MxNumberTenths( 73.8 ) );
	object.setRelativeY( MxNumberTenths( 73.8 ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" space-length=\"23.3\" default-x=\"73.8\" default-y=\"73.8\" relative-x=\"73.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 23.4 ) );
	object.setSpaceLength( MxNumberTenths( 23.4 ) );
	object.setDefaultX( MxNumberTenths( 73.9 ) );
	object.setDefaultY( MxNumberTenths( 73.9 ) );
	object.setRelativeX( MxNumberTenths( 73.9 ) );
	object.setRelativeY( MxNumberTenths( 73.9 ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"wavy\" default-x=\"73.9\" default-y=\"73.9\" relative-x=\"73.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 23.5 ) );
	object.setSpaceLength( MxNumberTenths( 23.5 ) );
	object.setDefaultX( MxNumberTenths( 74 ) );
	object.setDefaultY( MxNumberTenths( 74 ) );
	object.setRelativeX( MxNumberTenths( 74 ) );
	object.setRelativeY( MxNumberTenths( 74 ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"solid\" default-x=\"74\" default-y=\"74\" relative-x=\"74\" relative-y=\"74\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 23.6 ) );
	object.setSpaceLength( MxNumberTenths( 23.6 ) );
	object.setDefaultX( MxNumberTenths( 74.1 ) );
	object.setDefaultY( MxNumberTenths( 74.1 ) );
	object.setRelativeX( MxNumberTenths( 74.1 ) );
	object.setRelativeY( MxNumberTenths( 74.1 ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"dashed\" default-x=\"74.1\" default-y=\"74.1\" relative-x=\"74.1\" relative-y=\"74.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 23.7 ) );
	object.setSpaceLength( MxNumberTenths( 23.7 ) );
	object.setDefaultX( MxNumberTenths( 74.2 ) );
	object.setDefaultY( MxNumberTenths( 74.2 ) );
	object.setRelativeX( MxNumberTenths( 74.2 ) );
	object.setRelativeY( MxNumberTenths( 74.2 ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" dash-length=\"23.7\" default-y=\"74.2\" relative-x=\"74.2\" relative-y=\"74.2\" color=\"#B8B7B6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 23.8 ) );
	object.setSpaceLength( MxNumberTenths( 23.8 ) );
	object.setDefaultX( MxNumberTenths( 74.3 ) );
	object.setDefaultY( MxNumberTenths( 74.3 ) );
	object.setRelativeX( MxNumberTenths( 74.3 ) );
	object.setRelativeY( MxNumberTenths( 74.3 ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"23.8\" default-y=\"74.3\" relative-x=\"74.3\" relative-y=\"74.3\" color=\"#B9BAB9B8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 23.9 ) );
	object.setSpaceLength( MxNumberTenths( 23.9 ) );
	object.setDefaultX( MxNumberTenths( 74.4 ) );
	object.setDefaultY( MxNumberTenths( 74.4 ) );
	object.setRelativeX( MxNumberTenths( 74.4 ) );
	object.setRelativeY( MxNumberTenths( 74.4 ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" dash-length=\"23.9\" default-y=\"74.4\" relative-x=\"74.4\" relative-y=\"74.4\" color=\"#BCBBBA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 24 ) );
	object.setSpaceLength( MxNumberTenths( 24 ) );
	object.setDefaultX( MxNumberTenths( 74.5 ) );
	object.setDefaultY( MxNumberTenths( 74.5 ) );
	object.setRelativeX( MxNumberTenths( 74.5 ) );
	object.setRelativeY( MxNumberTenths( 74.5 ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" dash-length=\"24\" relative-x=\"74.5\" relative-y=\"74.5\" color=\"#BDBEBDBC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 24.1 ) );
	object.setSpaceLength( MxNumberTenths( 24.1 ) );
	object.setDefaultX( MxNumberTenths( 74.6 ) );
	object.setDefaultY( MxNumberTenths( 74.6 ) );
	object.setRelativeX( MxNumberTenths( 74.6 ) );
	object.setRelativeY( MxNumberTenths( 74.6 ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"24.1\" space-length=\"24.1\" relative-x=\"74.6\" relative-y=\"74.6\" color=\"#C0BFBE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 24.2 ) );
	object.setSpaceLength( MxNumberTenths( 24.2 ) );
	object.setDefaultX( MxNumberTenths( 74.7 ) );
	object.setDefaultY( MxNumberTenths( 74.7 ) );
	object.setRelativeX( MxNumberTenths( 74.7 ) );
	object.setRelativeY( MxNumberTenths( 74.7 ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"24.2\" space-length=\"24.2\" relative-x=\"74.7\" relative-y=\"74.7\" color=\"#C1C2C1C0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 24.3 ) );
	object.setSpaceLength( MxNumberTenths( 24.3 ) );
	object.setDefaultX( MxNumberTenths( 74.8 ) );
	object.setDefaultY( MxNumberTenths( 74.8 ) );
	object.setRelativeX( MxNumberTenths( 74.8 ) );
	object.setRelativeY( MxNumberTenths( 74.8 ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"solid\" space-length=\"24.3\" relative-y=\"74.8\" color=\"#C4C3C2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 24.4 ) );
	object.setSpaceLength( MxNumberTenths( 24.4 ) );
	object.setDefaultX( MxNumberTenths( 74.9 ) );
	object.setDefaultY( MxNumberTenths( 74.9 ) );
	object.setRelativeX( MxNumberTenths( 74.9 ) );
	object.setRelativeY( MxNumberTenths( 74.9 ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"dashed\" space-length=\"24.4\" relative-y=\"74.9\" color=\"#C5C6C5C4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 24.5 ) );
	object.setSpaceLength( MxNumberTenths( 24.5 ) );
	object.setDefaultX( MxNumberTenths( 75 ) );
	object.setDefaultY( MxNumberTenths( 75 ) );
	object.setRelativeX( MxNumberTenths( 75 ) );
	object.setRelativeY( MxNumberTenths( 75 ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" space-length=\"24.5\" default-x=\"75\" relative-y=\"75\" color=\"#C8C7C6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 24.6 ) );
	object.setSpaceLength( MxNumberTenths( 24.6 ) );
	object.setDefaultX( MxNumberTenths( 75.1 ) );
	object.setDefaultY( MxNumberTenths( 75.1 ) );
	object.setRelativeX( MxNumberTenths( 75.1 ) );
	object.setRelativeY( MxNumberTenths( 75.1 ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" space-length=\"24.6\" default-x=\"75.1\" color=\"#C9CAC9C8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 24.7 ) );
	object.setSpaceLength( MxNumberTenths( 24.7 ) );
	object.setDefaultX( MxNumberTenths( 75.2 ) );
	object.setDefaultY( MxNumberTenths( 75.2 ) );
	object.setRelativeX( MxNumberTenths( 75.2 ) );
	object.setRelativeY( MxNumberTenths( 75.2 ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" space-length=\"24.7\" default-x=\"75.2\" color=\"#CCCBCA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 24.8 ) );
	object.setSpaceLength( MxNumberTenths( 24.8 ) );
	object.setDefaultX( MxNumberTenths( 75.3 ) );
	object.setDefaultY( MxNumberTenths( 75.3 ) );
	object.setRelativeX( MxNumberTenths( 75.3 ) );
	object.setRelativeY( MxNumberTenths( 75.3 ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" default-x=\"75.3\" color=\"#CDCECDCC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 24.9 ) );
	object.setSpaceLength( MxNumberTenths( 24.9 ) );
	object.setDefaultX( MxNumberTenths( 75.4 ) );
	object.setDefaultY( MxNumberTenths( 75.4 ) );
	object.setRelativeX( MxNumberTenths( 75.4 ) );
	object.setRelativeY( MxNumberTenths( 75.4 ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"24.9\" default-x=\"75.4\" default-y=\"75.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 25 ) );
	object.setSpaceLength( MxNumberTenths( 25 ) );
	object.setDefaultX( MxNumberTenths( 75.5 ) );
	object.setDefaultY( MxNumberTenths( 75.5 ) );
	object.setRelativeX( MxNumberTenths( 75.5 ) );
	object.setRelativeY( MxNumberTenths( 75.5 ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"25\" default-x=\"75.5\" default-y=\"75.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 25.1 ) );
	object.setSpaceLength( MxNumberTenths( 25.1 ) );
	object.setDefaultX( MxNumberTenths( 75.6 ) );
	object.setDefaultY( MxNumberTenths( 75.6 ) );
	object.setRelativeX( MxNumberTenths( 75.6 ) );
	object.setRelativeY( MxNumberTenths( 75.6 ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" dash-length=\"25.1\" default-x=\"75.6\" default-y=\"75.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 25.2 ) );
	object.setSpaceLength( MxNumberTenths( 25.2 ) );
	object.setDefaultX( MxNumberTenths( 75.7 ) );
	object.setDefaultY( MxNumberTenths( 75.7 ) );
	object.setRelativeX( MxNumberTenths( 75.7 ) );
	object.setRelativeY( MxNumberTenths( 75.7 ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" dash-length=\"25.2\" default-x=\"75.7\" default-y=\"75.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 25.3 ) );
	object.setSpaceLength( MxNumberTenths( 25.3 ) );
	object.setDefaultX( MxNumberTenths( 75.8 ) );
	object.setDefaultY( MxNumberTenths( 75.8 ) );
	object.setRelativeX( MxNumberTenths( 75.8 ) );
	object.setRelativeY( MxNumberTenths( 75.8 ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" dash-length=\"25.3\" default-y=\"75.8\" relative-x=\"75.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 25.4 ) );
	object.setSpaceLength( MxNumberTenths( 25.4 ) );
	object.setDefaultX( MxNumberTenths( 75.9 ) );
	object.setDefaultY( MxNumberTenths( 75.9 ) );
	object.setRelativeX( MxNumberTenths( 75.9 ) );
	object.setRelativeY( MxNumberTenths( 75.9 ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" dash-length=\"25.4\" default-y=\"75.9\" relative-x=\"75.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 25.5 ) );
	object.setSpaceLength( MxNumberTenths( 25.5 ) );
	object.setDefaultX( MxNumberTenths( 76 ) );
	object.setDefaultY( MxNumberTenths( 76 ) );
	object.setRelativeX( MxNumberTenths( 76 ) );
	object.setRelativeY( MxNumberTenths( 76 ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" space-length=\"25.5\" default-y=\"76\" relative-x=\"76\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 25.6 ) );
	object.setSpaceLength( MxNumberTenths( 25.6 ) );
	object.setDefaultX( MxNumberTenths( 76.1 ) );
	object.setDefaultY( MxNumberTenths( 76.1 ) );
	object.setRelativeX( MxNumberTenths( 76.1 ) );
	object.setRelativeY( MxNumberTenths( 76.1 ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" space-length=\"25.6\" default-y=\"76.1\" relative-x=\"76.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 25.7 ) );
	object.setSpaceLength( MxNumberTenths( 25.7 ) );
	object.setDefaultX( MxNumberTenths( 76.2 ) );
	object.setDefaultY( MxNumberTenths( 76.2 ) );
	object.setRelativeX( MxNumberTenths( 76.2 ) );
	object.setRelativeY( MxNumberTenths( 76.2 ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" space-length=\"25.7\" default-y=\"76.2\" relative-x=\"76.2\" relative-y=\"76.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 25.8 ) );
	object.setSpaceLength( MxNumberTenths( 25.8 ) );
	object.setDefaultX( MxNumberTenths( 76.3 ) );
	object.setDefaultY( MxNumberTenths( 76.3 ) );
	object.setRelativeX( MxNumberTenths( 76.3 ) );
	object.setRelativeY( MxNumberTenths( 76.3 ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" space-length=\"25.8\" relative-x=\"76.3\" relative-y=\"76.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 25.9 ) );
	object.setSpaceLength( MxNumberTenths( 25.9 ) );
	object.setDefaultX( MxNumberTenths( 76.4 ) );
	object.setDefaultY( MxNumberTenths( 76.4 ) );
	object.setRelativeX( MxNumberTenths( 76.4 ) );
	object.setRelativeY( MxNumberTenths( 76.4 ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" space-length=\"25.9\" relative-x=\"76.4\" relative-y=\"76.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 26 ) );
	object.setSpaceLength( MxNumberTenths( 26 ) );
	object.setDefaultX( MxNumberTenths( 76.5 ) );
	object.setDefaultY( MxNumberTenths( 76.5 ) );
	object.setRelativeX( MxNumberTenths( 76.5 ) );
	object.setRelativeY( MxNumberTenths( 76.5 ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" space-length=\"26\" relative-x=\"76.5\" relative-y=\"76.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 26.1 ) );
	object.setSpaceLength( MxNumberTenths( 26.1 ) );
	object.setDefaultX( MxNumberTenths( 76.6 ) );
	object.setDefaultY( MxNumberTenths( 76.6 ) );
	object.setRelativeX( MxNumberTenths( 76.6 ) );
	object.setRelativeY( MxNumberTenths( 76.6 ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"26.1\" space-length=\"26.1\" default-x=\"76.6\" relative-x=\"76.6\" relative-y=\"76.6\" color=\"#E8E7E6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 26.2 ) );
	object.setSpaceLength( MxNumberTenths( 26.2 ) );
	object.setDefaultX( MxNumberTenths( 76.7 ) );
	object.setDefaultY( MxNumberTenths( 76.7 ) );
	object.setRelativeX( MxNumberTenths( 76.7 ) );
	object.setRelativeY( MxNumberTenths( 76.7 ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"26.2\" default-x=\"76.7\" relative-x=\"76.7\" relative-y=\"76.7\" color=\"#E9EAE9E8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 26.3 ) );
	object.setSpaceLength( MxNumberTenths( 26.3 ) );
	object.setDefaultX( MxNumberTenths( 76.8 ) );
	object.setDefaultY( MxNumberTenths( 76.8 ) );
	object.setRelativeX( MxNumberTenths( 76.8 ) );
	object.setRelativeY( MxNumberTenths( 76.8 ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" dash-length=\"26.3\" default-x=\"76.8\" relative-y=\"76.8\" color=\"#ECEBEA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 26.4 ) );
	object.setSpaceLength( MxNumberTenths( 26.4 ) );
	object.setDefaultX( MxNumberTenths( 76.9 ) );
	object.setDefaultY( MxNumberTenths( 76.9 ) );
	object.setRelativeX( MxNumberTenths( 76.9 ) );
	object.setRelativeY( MxNumberTenths( 76.9 ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" dash-length=\"26.4\" default-x=\"76.9\" relative-y=\"76.9\" color=\"#EDEEEDEC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 26.5 ) );
	object.setSpaceLength( MxNumberTenths( 26.5 ) );
	object.setDefaultX( MxNumberTenths( 77 ) );
	object.setDefaultY( MxNumberTenths( 77 ) );
	object.setRelativeX( MxNumberTenths( 77 ) );
	object.setRelativeY( MxNumberTenths( 77 ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" dash-length=\"26.5\" default-x=\"77\" relative-y=\"77\" color=\"#F0EFEE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 26.6 ) );
	object.setSpaceLength( MxNumberTenths( 26.6 ) );
	object.setDefaultX( MxNumberTenths( 77.1 ) );
	object.setDefaultY( MxNumberTenths( 77.1 ) );
	object.setRelativeX( MxNumberTenths( 77.1 ) );
	object.setRelativeY( MxNumberTenths( 77.1 ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"wavy\" dash-length=\"26.6\" default-x=\"77.1\" relative-y=\"77.1\" color=\"#F1F2F1F0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 26.7 ) );
	object.setSpaceLength( MxNumberTenths( 26.7 ) );
	object.setDefaultX( MxNumberTenths( 77.2 ) );
	object.setDefaultY( MxNumberTenths( 77.2 ) );
	object.setRelativeX( MxNumberTenths( 77.2 ) );
	object.setRelativeY( MxNumberTenths( 77.2 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"solid\" default-x=\"77.2\" default-y=\"77.2\" relative-y=\"77.2\" color=\"#F4F3F2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 26.8 ) );
	object.setSpaceLength( MxNumberTenths( 26.8 ) );
	object.setDefaultX( MxNumberTenths( 77.3 ) );
	object.setDefaultY( MxNumberTenths( 77.3 ) );
	object.setRelativeX( MxNumberTenths( 77.3 ) );
	object.setRelativeY( MxNumberTenths( 77.3 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" default-x=\"77.3\" default-y=\"77.3\" color=\"#F5F6F5F4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 26.9 ) );
	object.setSpaceLength( MxNumberTenths( 26.9 ) );
	object.setDefaultX( MxNumberTenths( 77.4 ) );
	object.setDefaultY( MxNumberTenths( 77.4 ) );
	object.setRelativeX( MxNumberTenths( 77.4 ) );
	object.setRelativeY( MxNumberTenths( 77.4 ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" space-length=\"26.9\" default-y=\"77.4\" color=\"#F8F7F6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 27 ) );
	object.setSpaceLength( MxNumberTenths( 27 ) );
	object.setDefaultX( MxNumberTenths( 77.5 ) );
	object.setDefaultY( MxNumberTenths( 77.5 ) );
	object.setRelativeX( MxNumberTenths( 77.5 ) );
	object.setRelativeY( MxNumberTenths( 77.5 ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" space-length=\"27\" default-y=\"77.5\" color=\"#F9FAF9F8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 27.1 ) );
	object.setSpaceLength( MxNumberTenths( 27.1 ) );
	object.setDefaultX( MxNumberTenths( 77.6 ) );
	object.setDefaultY( MxNumberTenths( 77.6 ) );
	object.setRelativeX( MxNumberTenths( 77.6 ) );
	object.setRelativeY( MxNumberTenths( 77.6 ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" space-length=\"27.1\" default-y=\"77.6\" color=\"#FCFBFA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 27.2 ) );
	object.setSpaceLength( MxNumberTenths( 27.2 ) );
	object.setDefaultX( MxNumberTenths( 77.7 ) );
	object.setDefaultY( MxNumberTenths( 77.7 ) );
	object.setRelativeX( MxNumberTenths( 77.7 ) );
	object.setRelativeY( MxNumberTenths( 77.7 ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" space-length=\"27.2\" default-y=\"77.7\" color=\"#FDFEFDFC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 27.3 ) );
	object.setSpaceLength( MxNumberTenths( 27.3 ) );
	object.setDefaultX( MxNumberTenths( 77.8 ) );
	object.setDefaultY( MxNumberTenths( 77.8 ) );
	object.setRelativeX( MxNumberTenths( 77.8 ) );
	object.setRelativeY( MxNumberTenths( 77.8 ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" dash-length=\"27.3\" space-length=\"27.3\" default-y=\"77.8\" relative-x=\"77.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 27.4 ) );
	object.setSpaceLength( MxNumberTenths( 27.4 ) );
	object.setDefaultX( MxNumberTenths( 77.9 ) );
	object.setDefaultY( MxNumberTenths( 77.9 ) );
	object.setRelativeX( MxNumberTenths( 77.9 ) );
	object.setRelativeY( MxNumberTenths( 77.9 ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"wavy\" dash-length=\"27.4\" space-length=\"27.4\" default-y=\"77.9\" relative-x=\"77.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 27.5 ) );
	object.setSpaceLength( MxNumberTenths( 27.5 ) );
	object.setDefaultX( MxNumberTenths( 78 ) );
	object.setDefaultY( MxNumberTenths( 78 ) );
	object.setRelativeX( MxNumberTenths( 78 ) );
	object.setRelativeY( MxNumberTenths( 78 ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"solid\" dash-length=\"27.5\" space-length=\"27.5\" default-y=\"78\" relative-x=\"78\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 27.6 ) );
	object.setSpaceLength( MxNumberTenths( 27.6 ) );
	object.setDefaultX( MxNumberTenths( 78.1 ) );
	object.setDefaultY( MxNumberTenths( 78.1 ) );
	object.setRelativeX( MxNumberTenths( 78.1 ) );
	object.setRelativeY( MxNumberTenths( 78.1 ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"dashed\" dash-length=\"27.6\" relative-x=\"78.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 27.7 ) );
	object.setSpaceLength( MxNumberTenths( 27.7 ) );
	object.setDefaultX( MxNumberTenths( 78.2 ) );
	object.setDefaultY( MxNumberTenths( 78.2 ) );
	object.setRelativeX( MxNumberTenths( 78.2 ) );
	object.setRelativeY( MxNumberTenths( 78.2 ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" dash-length=\"27.7\" default-x=\"78.2\" relative-x=\"78.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 27.8 ) );
	object.setSpaceLength( MxNumberTenths( 27.8 ) );
	object.setDefaultX( MxNumberTenths( 78.3 ) );
	object.setDefaultY( MxNumberTenths( 78.3 ) );
	object.setRelativeX( MxNumberTenths( 78.3 ) );
	object.setRelativeY( MxNumberTenths( 78.3 ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"27.8\" default-x=\"78.3\" relative-x=\"78.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 27.9 ) );
	object.setSpaceLength( MxNumberTenths( 27.9 ) );
	object.setDefaultX( MxNumberTenths( 78.4 ) );
	object.setDefaultY( MxNumberTenths( 78.4 ) );
	object.setRelativeX( MxNumberTenths( 78.4 ) );
	object.setRelativeY( MxNumberTenths( 78.4 ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" default-x=\"78.4\" relative-x=\"78.4\" relative-y=\"78.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 28 ) );
	object.setSpaceLength( MxNumberTenths( 28 ) );
	object.setDefaultX( MxNumberTenths( 78.5 ) );
	object.setDefaultY( MxNumberTenths( 78.5 ) );
	object.setRelativeX( MxNumberTenths( 78.5 ) );
	object.setRelativeY( MxNumberTenths( 78.5 ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" default-x=\"78.5\" relative-x=\"78.5\" relative-y=\"78.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 28.1 ) );
	object.setSpaceLength( MxNumberTenths( 28.1 ) );
	object.setDefaultX( MxNumberTenths( 78.6 ) );
	object.setDefaultY( MxNumberTenths( 78.6 ) );
	object.setRelativeX( MxNumberTenths( 78.6 ) );
	object.setRelativeY( MxNumberTenths( 78.6 ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" default-x=\"78.6\" relative-x=\"78.6\" relative-y=\"78.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 28.2 ) );
	object.setSpaceLength( MxNumberTenths( 28.2 ) );
	object.setDefaultX( MxNumberTenths( 78.7 ) );
	object.setDefaultY( MxNumberTenths( 78.7 ) );
	object.setRelativeX( MxNumberTenths( 78.7 ) );
	object.setRelativeY( MxNumberTenths( 78.7 ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" default-x=\"78.7\" relative-x=\"78.7\" relative-y=\"78.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 28.3 ) );
	object.setSpaceLength( MxNumberTenths( 28.3 ) );
	object.setDefaultX( MxNumberTenths( 78.8 ) );
	object.setDefaultY( MxNumberTenths( 78.8 ) );
	object.setRelativeX( MxNumberTenths( 78.8 ) );
	object.setRelativeY( MxNumberTenths( 78.8 ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"solid\" space-length=\"28.3\" default-x=\"78.8\" relative-y=\"78.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 28.4 ) );
	object.setSpaceLength( MxNumberTenths( 28.4 ) );
	object.setDefaultX( MxNumberTenths( 78.9 ) );
	object.setDefaultY( MxNumberTenths( 78.9 ) );
	object.setRelativeX( MxNumberTenths( 78.9 ) );
	object.setRelativeY( MxNumberTenths( 78.9 ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"dashed\" space-length=\"28.4\" default-x=\"78.9\" relative-y=\"78.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 28.5 ) );
	object.setSpaceLength( MxNumberTenths( 28.5 ) );
	object.setDefaultX( MxNumberTenths( 79 ) );
	object.setDefaultY( MxNumberTenths( 79 ) );
	object.setRelativeX( MxNumberTenths( 79 ) );
	object.setRelativeY( MxNumberTenths( 79 ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" dash-length=\"28.5\" space-length=\"28.5\" default-y=\"79\" relative-y=\"79\" color=\"#181716\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 28.6 ) );
	object.setSpaceLength( MxNumberTenths( 28.6 ) );
	object.setDefaultX( MxNumberTenths( 79.1 ) );
	object.setDefaultY( MxNumberTenths( 79.1 ) );
	object.setRelativeX( MxNumberTenths( 79.1 ) );
	object.setRelativeY( MxNumberTenths( 79.1 ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" dash-length=\"28.6\" space-length=\"28.6\" default-y=\"79.1\" relative-y=\"79.1\" color=\"#191A1918\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 28.7 ) );
	object.setSpaceLength( MxNumberTenths( 28.7 ) );
	object.setDefaultX( MxNumberTenths( 79.2 ) );
	object.setDefaultY( MxNumberTenths( 79.2 ) );
	object.setRelativeX( MxNumberTenths( 79.2 ) );
	object.setRelativeY( MxNumberTenths( 79.2 ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" dash-length=\"28.7\" space-length=\"28.7\" default-y=\"79.2\" relative-y=\"79.2\" color=\"#1C1B1A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 28.8 ) );
	object.setSpaceLength( MxNumberTenths( 28.8 ) );
	object.setDefaultX( MxNumberTenths( 79.3 ) );
	object.setDefaultY( MxNumberTenths( 79.3 ) );
	object.setRelativeX( MxNumberTenths( 79.3 ) );
	object.setRelativeY( MxNumberTenths( 79.3 ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" dash-length=\"28.8\" space-length=\"28.8\" default-y=\"79.3\" relative-y=\"79.3\" color=\"#1D1E1D1C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 28.9 ) );
	object.setSpaceLength( MxNumberTenths( 28.9 ) );
	object.setDefaultX( MxNumberTenths( 79.4 ) );
	object.setDefaultY( MxNumberTenths( 79.4 ) );
	object.setRelativeX( MxNumberTenths( 79.4 ) );
	object.setRelativeY( MxNumberTenths( 79.4 ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"28.9\" space-length=\"28.9\" default-y=\"79.4\" relative-y=\"79.4\" color=\"#201F1E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 29 ) );
	object.setSpaceLength( MxNumberTenths( 29 ) );
	object.setDefaultX( MxNumberTenths( 79.5 ) );
	object.setDefaultY( MxNumberTenths( 79.5 ) );
	object.setRelativeX( MxNumberTenths( 79.5 ) );
	object.setRelativeY( MxNumberTenths( 79.5 ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"29\" default-y=\"79.5\" color=\"#21222120\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 29.1 ) );
	object.setSpaceLength( MxNumberTenths( 29.1 ) );
	object.setDefaultX( MxNumberTenths( 79.6 ) );
	object.setDefaultY( MxNumberTenths( 79.6 ) );
	object.setRelativeX( MxNumberTenths( 79.6 ) );
	object.setRelativeY( MxNumberTenths( 79.6 ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" default-y=\"79.6\" color=\"#242322\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 29.2 ) );
	object.setSpaceLength( MxNumberTenths( 29.2 ) );
	object.setDefaultX( MxNumberTenths( 79.7 ) );
	object.setDefaultY( MxNumberTenths( 79.7 ) );
	object.setRelativeX( MxNumberTenths( 79.7 ) );
	object.setRelativeY( MxNumberTenths( 79.7 ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" default-y=\"79.7\" color=\"#25262524\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 29.3 ) );
	object.setSpaceLength( MxNumberTenths( 29.3 ) );
	object.setDefaultX( MxNumberTenths( 79.8 ) );
	object.setDefaultY( MxNumberTenths( 79.8 ) );
	object.setRelativeX( MxNumberTenths( 79.8 ) );
	object.setRelativeY( MxNumberTenths( 79.8 ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"dotted\" default-x=\"79.8\" default-y=\"79.8\" relative-x=\"79.8\" color=\"#282726\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 29.4 ) );
	object.setSpaceLength( MxNumberTenths( 29.4 ) );
	object.setDefaultX( MxNumberTenths( 79.9 ) );
	object.setDefaultY( MxNumberTenths( 79.9 ) );
	object.setRelativeX( MxNumberTenths( 79.9 ) );
	object.setRelativeY( MxNumberTenths( 79.9 ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" line-type=\"wavy\" default-x=\"79.9\" relative-x=\"79.9\" color=\"#292A2928\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 29.5 ) );
	object.setSpaceLength( MxNumberTenths( 29.5 ) );
	object.setDefaultX( MxNumberTenths( 80 ) );
	object.setDefaultY( MxNumberTenths( 80 ) );
	object.setRelativeX( MxNumberTenths( 80 ) );
	object.setRelativeY( MxNumberTenths( 80 ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" default-x=\"80\" relative-x=\"80\" color=\"#2C2B2A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 29.6 ) );
	object.setSpaceLength( MxNumberTenths( 29.6 ) );
	object.setDefaultX( MxNumberTenths( 80.1 ) );
	object.setDefaultY( MxNumberTenths( 80.1 ) );
	object.setRelativeX( MxNumberTenths( 80.1 ) );
	object.setRelativeY( MxNumberTenths( 80.1 ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" default-x=\"80.1\" relative-x=\"80.1\" color=\"#2D2E2D2C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 29.7 ) );
	object.setSpaceLength( MxNumberTenths( 29.7 ) );
	object.setDefaultX( MxNumberTenths( 80.2 ) );
	object.setDefaultY( MxNumberTenths( 80.2 ) );
	object.setRelativeX( MxNumberTenths( 80.2 ) );
	object.setRelativeY( MxNumberTenths( 80.2 ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" dash-length=\"29.7\" space-length=\"29.7\" default-x=\"80.2\" relative-x=\"80.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 29.8 ) );
	object.setSpaceLength( MxNumberTenths( 29.8 ) );
	object.setDefaultX( MxNumberTenths( 80.3 ) );
	object.setDefaultY( MxNumberTenths( 80.3 ) );
	object.setRelativeX( MxNumberTenths( 80.3 ) );
	object.setRelativeY( MxNumberTenths( 80.3 ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" dash-length=\"29.8\" space-length=\"29.8\" default-x=\"80.3\" relative-x=\"80.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 29.9 ) );
	object.setSpaceLength( MxNumberTenths( 29.9 ) );
	object.setDefaultX( MxNumberTenths( 80.4 ) );
	object.setDefaultY( MxNumberTenths( 80.4 ) );
	object.setRelativeX( MxNumberTenths( 80.4 ) );
	object.setRelativeY( MxNumberTenths( 80.4 ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" dash-length=\"29.9\" space-length=\"29.9\" default-x=\"80.4\" relative-x=\"80.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 30 ) );
	object.setSpaceLength( MxNumberTenths( 30 ) );
	object.setDefaultX( MxNumberTenths( 80.5 ) );
	object.setDefaultY( MxNumberTenths( 80.5 ) );
	object.setRelativeX( MxNumberTenths( 80.5 ) );
	object.setRelativeY( MxNumberTenths( 80.5 ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" dash-length=\"30\" space-length=\"30\" default-x=\"80.5\" relative-x=\"80.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 30.1 ) );
	object.setSpaceLength( MxNumberTenths( 30.1 ) );
	object.setDefaultX( MxNumberTenths( 80.6 ) );
	object.setDefaultY( MxNumberTenths( 80.6 ) );
	object.setRelativeX( MxNumberTenths( 80.6 ) );
	object.setRelativeY( MxNumberTenths( 80.6 ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"30.1\" space-length=\"30.1\" relative-x=\"80.6\" relative-y=\"80.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 30.2 ) );
	object.setSpaceLength( MxNumberTenths( 30.2 ) );
	object.setDefaultX( MxNumberTenths( 80.7 ) );
	object.setDefaultY( MxNumberTenths( 80.7 ) );
	object.setRelativeX( MxNumberTenths( 80.7 ) );
	object.setRelativeY( MxNumberTenths( 80.7 ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"30.2\" space-length=\"30.2\" relative-x=\"80.7\" relative-y=\"80.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 30.3 ) );
	object.setSpaceLength( MxNumberTenths( 30.3 ) );
	object.setDefaultX( MxNumberTenths( 80.8 ) );
	object.setDefaultY( MxNumberTenths( 80.8 ) );
	object.setRelativeX( MxNumberTenths( 80.8 ) );
	object.setRelativeY( MxNumberTenths( 80.8 ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"solid\" space-length=\"30.3\" default-y=\"80.8\" relative-y=\"80.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 30.4 ) );
	object.setSpaceLength( MxNumberTenths( 30.4 ) );
	object.setDefaultX( MxNumberTenths( 80.9 ) );
	object.setDefaultY( MxNumberTenths( 80.9 ) );
	object.setRelativeX( MxNumberTenths( 80.9 ) );
	object.setRelativeY( MxNumberTenths( 80.9 ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" line-type=\"dashed\" default-y=\"80.9\" relative-y=\"80.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 30.5 ) );
	object.setSpaceLength( MxNumberTenths( 30.5 ) );
	object.setDefaultX( MxNumberTenths( 81 ) );
	object.setDefaultY( MxNumberTenths( 81 ) );
	object.setRelativeX( MxNumberTenths( 81 ) );
	object.setRelativeY( MxNumberTenths( 81 ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"dotted\" default-y=\"81\" relative-y=\"81\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 30.6 ) );
	object.setSpaceLength( MxNumberTenths( 30.6 ) );
	object.setDefaultX( MxNumberTenths( 81.1 ) );
	object.setDefaultY( MxNumberTenths( 81.1 ) );
	object.setRelativeX( MxNumberTenths( 81.1 ) );
	object.setRelativeY( MxNumberTenths( 81.1 ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" line-type=\"wavy\" default-y=\"81.1\" relative-y=\"81.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 30.7 ) );
	object.setSpaceLength( MxNumberTenths( 30.7 ) );
	object.setDefaultX( MxNumberTenths( 81.2 ) );
	object.setDefaultY( MxNumberTenths( 81.2 ) );
	object.setRelativeX( MxNumberTenths( 81.2 ) );
	object.setRelativeY( MxNumberTenths( 81.2 ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" line-type=\"solid\" default-y=\"81.2\" relative-y=\"81.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 30.8 ) );
	object.setSpaceLength( MxNumberTenths( 30.8 ) );
	object.setDefaultX( MxNumberTenths( 81.3 ) );
	object.setDefaultY( MxNumberTenths( 81.3 ) );
	object.setRelativeX( MxNumberTenths( 81.3 ) );
	object.setRelativeY( MxNumberTenths( 81.3 ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" default-y=\"81.3\" relative-y=\"81.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEeBracket )
{
	MxEeBracket object;
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
	object.setDashLength( MxNumberTenths( 30.9 ) );
	object.setSpaceLength( MxNumberTenths( 30.9 ) );
	object.setDefaultX( MxNumberTenths( 81.4 ) );
	object.setDefaultY( MxNumberTenths( 81.4 ) );
	object.setRelativeX( MxNumberTenths( 81.4 ) );
	object.setRelativeY( MxNumberTenths( 81.4 ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"30.9\" default-x=\"81.4\" default-y=\"81.4\" relative-y=\"81.4\" color=\"#484746\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 31 ) );
	object.setSpaceLength( MxNumberTenths( 31 ) );
	object.setDefaultX( MxNumberTenths( 81.5 ) );
	object.setDefaultY( MxNumberTenths( 81.5 ) );
	object.setRelativeX( MxNumberTenths( 81.5 ) );
	object.setRelativeY( MxNumberTenths( 81.5 ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<bracket type=\"start\" number=\"1\" line-end=\"up\" end-length=\"1\" dash-length=\"31\" default-x=\"81.5\" default-y=\"81.5\" relative-y=\"81.5\" color=\"#494A4948\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 31.1 ) );
	object.setSpaceLength( MxNumberTenths( 31.1 ) );
	object.setDefaultX( MxNumberTenths( 81.6 ) );
	object.setDefaultY( MxNumberTenths( 81.6 ) );
	object.setRelativeX( MxNumberTenths( 81.6 ) );
	object.setRelativeY( MxNumberTenths( 81.6 ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" dash-length=\"31.1\" space-length=\"31.1\" default-x=\"81.6\" default-y=\"81.6\" relative-y=\"81.6\" color=\"#4C4B4A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 31.2 ) );
	object.setSpaceLength( MxNumberTenths( 31.2 ) );
	object.setDefaultX( MxNumberTenths( 81.7 ) );
	object.setDefaultY( MxNumberTenths( 81.7 ) );
	object.setRelativeX( MxNumberTenths( 81.7 ) );
	object.setRelativeY( MxNumberTenths( 81.7 ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<bracket type=\"start\" line-end=\"up\" end-length=\"1\" dash-length=\"31.2\" space-length=\"31.2\" default-x=\"81.7\" color=\"#4D4E4D4C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEeBracket )
{
	MxEeBracket object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 31.3 ) );
	object.setSpaceLength( MxNumberTenths( 31.3 ) );
	object.setDefaultX( MxNumberTenths( 81.8 ) );
	object.setDefaultY( MxNumberTenths( 81.8 ) );
	object.setRelativeX( MxNumberTenths( 81.8 ) );
	object.setRelativeY( MxNumberTenths( 81.8 ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<bracket type=\"start\" line-end=\"up\"/>";
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


