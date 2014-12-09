/** *******************************************************
  * 
  * MxCxEmptyWedgeTest.cpp
  * Created: 2014-12-03 16:31:29
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyWedge.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxEnumWedgeType(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpread().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getNiente().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxEnumLineType(  ) ).toString();
	std::string actual = object.getLineType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = "MxCxEmptyWedge";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = "wedge";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	std::string expected = "The wedge type represents crescendo and diminuendo wedge symbols. The type attribute is crescendo for the start of a wedge that is closed at the left side, and diminuendo for the start of a wedge that is closed on the right side. Spread values are measured in tenths; those at the start of a crescendo wedge or end of a diminuendo wedge are ignored. The niente attribute is yes if a circle appears at the point of the wedge, indicating a crescendo from nothing or diminuendo to nothing. It is no by default, and used only when the type is crescendo, or the type is stop for a wedge that began with a diminuendo type. The line-type is solid by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptyWedge )
{
	MxEnumWedgeType value1( lexicon::enums::WedgeType::continue_ );
	MxEnumWedgeType value2( lexicon::enums::WedgeType::stop );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setType( value1 );
	MxEnumWedgeType expected = value1;
	MxEnumWedgeType actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxCxEmptyWedge )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpread2, MxCxEmptyWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setSpread( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpread();
	CHECK_EQUAL( expected, actual )
	object.setSpread( value2 );
	expected = value2;
	actual = object.getSpread();
	CHECK_EQUAL( expected, actual )
}
TEST( setNiente3, MxCxEmptyWedge )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setNiente( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getNiente();
	CHECK_EQUAL( expected, actual )
	object.setNiente( value2 );
	expected = value2;
	actual = object.getNiente();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineType4, MxCxEmptyWedge )
{
	MxEnumLineType value1( lexicon::enums::LineType::wavy );
	MxEnumLineType value2( lexicon::enums::LineType::dotted );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setLineType( value1 );
	MxEnumLineType expected = value1;
	MxEnumLineType actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
	object.setLineType( value2 );
	expected = value2;
	actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength5, MxCxEmptyWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength6, MxCxEmptyWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX7, MxCxEmptyWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY8, MxCxEmptyWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX9, MxCxEmptyWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY10, MxCxEmptyWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor11, MxCxEmptyWedge )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyWedge object;
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

TEST( getIsTypeRequired0, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpreadRequired2, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsSpreadRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNienteRequired3, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsNienteRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeRequired4, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsLineTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired5, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired6, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired7, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired8, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired9, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired10, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired11, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
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
TEST( getIsNumberPresent1, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
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
TEST( getIsSpreadPresent2, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsSpreadPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSpreadPresent( true );
	expected = true;
	actual = object.getIsSpreadPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSpreadPresent( false );
	expected = false;
	actual = object.getIsSpreadPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNientePresent3, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsNientePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNientePresent( true );
	expected = true;
	actual = object.getIsNientePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNientePresent( false );
	expected = false;
	actual = object.getIsNientePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypePresent4, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
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
TEST( getIsDashLengthPresent5, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
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
TEST( getIsSpaceLengthPresent6, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
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
TEST( getIsDefaultXPresent7, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
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
TEST( getIsDefaultYPresent8, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
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
TEST( getIsRelativeXPresent9, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
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
TEST( getIsRelativeYPresent10, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
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
TEST( getIsColorPresent11, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
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

TEST( getIsTypeDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpreadDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsSpreadDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNienteDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsNienteDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsLineTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxEnumWedgeType expected;
	MxEnumWedgeType actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpreadDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpreadDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNienteDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getNienteDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineTypeDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxEnumLineType expected;
	MxEnumLineType actual = object.getLineTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyWedge )
{
	MxCxEmptyWedge object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 31.4 ) );
	object.setSpaceLength( MxNumberTenths( 31.4 ) );
	object.setDefaultX( MxNumberTenths( 132.3 ) );
	object.setDefaultY( MxNumberTenths( 132.3 ) );
	object.setRelativeX( MxNumberTenths( 132.3 ) );
	object.setRelativeY( MxNumberTenths( 132.3 ) );
	object.setColor( MxColor( "#81828180" ) );
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dotted\" dash-length=\"31.4\" space-length=\"31.4\" default-x=\"132.3\" default-y=\"132.3\" relative-x=\"132.3\" relative-y=\"132.3\" color=\"#81828180\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 31.5 ) );
	object.setSpaceLength( MxNumberTenths( 31.5 ) );
	object.setDefaultX( MxNumberTenths( 132.4 ) );
	object.setDefaultY( MxNumberTenths( 132.4 ) );
	object.setRelativeX( MxNumberTenths( 132.4 ) );
	object.setRelativeY( MxNumberTenths( 132.4 ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<quiet type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"wavy\" dash-length=\"31.5\" space-length=\"31.5\" default-x=\"132.4\" default-y=\"132.4\" relative-x=\"132.4\" relative-y=\"132.4\" color=\"#848382\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 31.6 ) );
	object.setSpaceLength( MxNumberTenths( 31.6 ) );
	object.setDefaultX( MxNumberTenths( 132.5 ) );
	object.setDefaultY( MxNumberTenths( 132.5 ) );
	object.setRelativeX( MxNumberTenths( 132.5 ) );
	object.setRelativeY( MxNumberTenths( 132.5 ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<musicxmlishard type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"solid\" dash-length=\"31.6\" space-length=\"31.6\" default-x=\"132.5\" default-y=\"132.5\" relative-x=\"132.5\" relative-y=\"132.5\" color=\"#85868584\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 31.7 ) );
	object.setSpaceLength( MxNumberTenths( 31.7 ) );
	object.setDefaultX( MxNumberTenths( 132.6 ) );
	object.setDefaultY( MxNumberTenths( 132.6 ) );
	object.setRelativeX( MxNumberTenths( 132.6 ) );
	object.setRelativeY( MxNumberTenths( 132.6 ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<bishop type=\"crescendo\" niente=\"yes\" line-type=\"dashed\" dash-length=\"31.7\" space-length=\"31.7\" default-x=\"132.6\" default-y=\"132.6\" relative-x=\"132.6\" relative-y=\"132.6\" color=\"#888786\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 31.8 ) );
	object.setSpaceLength( MxNumberTenths( 31.8 ) );
	object.setDefaultX( MxNumberTenths( 132.7 ) );
	object.setDefaultY( MxNumberTenths( 132.7 ) );
	object.setRelativeX( MxNumberTenths( 132.7 ) );
	object.setRelativeY( MxNumberTenths( 132.7 ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<charlie type=\"crescendo\" number=\"1\" line-type=\"dotted\" dash-length=\"31.8\" space-length=\"31.8\" default-x=\"132.7\" default-y=\"132.7\" relative-x=\"132.7\" relative-y=\"132.7\" color=\"#898A8988\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 31.9 ) );
	object.setSpaceLength( MxNumberTenths( 31.9 ) );
	object.setDefaultX( MxNumberTenths( 132.8 ) );
	object.setDefaultY( MxNumberTenths( 132.8 ) );
	object.setRelativeX( MxNumberTenths( 132.8 ) );
	object.setRelativeY( MxNumberTenths( 132.8 ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<booksmart type=\"crescendo\" number=\"1\" dash-length=\"31.9\" space-length=\"31.9\" default-x=\"132.8\" default-y=\"132.8\" relative-x=\"132.8\" relative-y=\"132.8\" color=\"#8C8B8A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 32 ) );
	object.setSpaceLength( MxNumberTenths( 32 ) );
	object.setDefaultX( MxNumberTenths( 132.9 ) );
	object.setDefaultY( MxNumberTenths( 132.9 ) );
	object.setRelativeX( MxNumberTenths( 132.9 ) );
	object.setRelativeY( MxNumberTenths( 132.9 ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<quiet type=\"crescendo\" spread=\"1\" space-length=\"32\" default-x=\"132.9\" default-y=\"132.9\" relative-x=\"132.9\" relative-y=\"132.9\" color=\"#8D8E8D8C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 32.1 ) );
	object.setSpaceLength( MxNumberTenths( 32.1 ) );
	object.setDefaultX( MxNumberTenths( 133 ) );
	object.setDefaultY( MxNumberTenths( 133 ) );
	object.setRelativeX( MxNumberTenths( 133 ) );
	object.setRelativeY( MxNumberTenths( 133 ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<musicxmlishard type=\"crescendo\" spread=\"1\" default-x=\"133\" default-y=\"133\" relative-x=\"133\" relative-y=\"133\" color=\"#908F8E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 32.2 ) );
	object.setSpaceLength( MxNumberTenths( 32.2 ) );
	object.setDefaultX( MxNumberTenths( 133.1 ) );
	object.setDefaultY( MxNumberTenths( 133.1 ) );
	object.setRelativeX( MxNumberTenths( 133.1 ) );
	object.setRelativeY( MxNumberTenths( 133.1 ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<bishop type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" default-y=\"133.1\" relative-x=\"133.1\" relative-y=\"133.1\" color=\"#91929190\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 32.3 ) );
	object.setSpaceLength( MxNumberTenths( 32.3 ) );
	object.setDefaultX( MxNumberTenths( 133.2 ) );
	object.setDefaultY( MxNumberTenths( 133.2 ) );
	object.setRelativeX( MxNumberTenths( 133.2 ) );
	object.setRelativeY( MxNumberTenths( 133.2 ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<charlie type=\"crescendo\" number=\"1\" niente=\"yes\" relative-x=\"133.2\" relative-y=\"133.2\" color=\"#949392\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 32.4 ) );
	object.setSpaceLength( MxNumberTenths( 32.4 ) );
	object.setDefaultX( MxNumberTenths( 133.3 ) );
	object.setDefaultY( MxNumberTenths( 133.3 ) );
	object.setRelativeX( MxNumberTenths( 133.3 ) );
	object.setRelativeY( MxNumberTenths( 133.3 ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<booksmart type=\"crescendo\" niente=\"yes\" line-type=\"solid\" relative-y=\"133.3\" color=\"#95969594\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 32.5 ) );
	object.setSpaceLength( MxNumberTenths( 32.5 ) );
	object.setDefaultX( MxNumberTenths( 133.4 ) );
	object.setDefaultY( MxNumberTenths( 133.4 ) );
	object.setRelativeX( MxNumberTenths( 133.4 ) );
	object.setRelativeY( MxNumberTenths( 133.4 ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<quiet type=\"crescendo\" niente=\"yes\" line-type=\"dashed\" color=\"#989796\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 32.6 ) );
	object.setSpaceLength( MxNumberTenths( 32.6 ) );
	object.setDefaultX( MxNumberTenths( 133.5 ) );
	object.setDefaultY( MxNumberTenths( 133.5 ) );
	object.setRelativeX( MxNumberTenths( 133.5 ) );
	object.setRelativeY( MxNumberTenths( 133.5 ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<musicxmlishard type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dotted\" dash-length=\"32.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 32.7 ) );
	object.setSpaceLength( MxNumberTenths( 32.7 ) );
	object.setDefaultX( MxNumberTenths( 133.6 ) );
	object.setDefaultY( MxNumberTenths( 133.6 ) );
	object.setRelativeX( MxNumberTenths( 133.6 ) );
	object.setRelativeY( MxNumberTenths( 133.6 ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<bishop type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"wavy\" dash-length=\"32.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 32.8 ) );
	object.setSpaceLength( MxNumberTenths( 32.8 ) );
	object.setDefaultX( MxNumberTenths( 133.7 ) );
	object.setDefaultY( MxNumberTenths( 133.7 ) );
	object.setRelativeX( MxNumberTenths( 133.7 ) );
	object.setRelativeY( MxNumberTenths( 133.7 ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<charlie type=\"crescendo\" spread=\"1\" line-type=\"solid\" dash-length=\"32.8\" space-length=\"32.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 32.9 ) );
	object.setSpaceLength( MxNumberTenths( 32.9 ) );
	object.setDefaultX( MxNumberTenths( 133.8 ) );
	object.setDefaultY( MxNumberTenths( 133.8 ) );
	object.setRelativeX( MxNumberTenths( 133.8 ) );
	object.setRelativeY( MxNumberTenths( 133.8 ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<booksmart type=\"crescendo\" dash-length=\"32.9\" space-length=\"32.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 33 ) );
	object.setSpaceLength( MxNumberTenths( 33 ) );
	object.setDefaultX( MxNumberTenths( 133.9 ) );
	object.setDefaultY( MxNumberTenths( 133.9 ) );
	object.setRelativeX( MxNumberTenths( 133.9 ) );
	object.setRelativeY( MxNumberTenths( 133.9 ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<quiet type=\"crescendo\" number=\"1\" niente=\"yes\" dash-length=\"33\" space-length=\"33\" default-x=\"133.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 33.1 ) );
	object.setSpaceLength( MxNumberTenths( 33.1 ) );
	object.setDefaultX( MxNumberTenths( 134 ) );
	object.setDefaultY( MxNumberTenths( 134 ) );
	object.setRelativeX( MxNumberTenths( 134 ) );
	object.setRelativeY( MxNumberTenths( 134 ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<musicxmlishard type=\"crescendo\" number=\"1\" niente=\"yes\" dash-length=\"33.1\" space-length=\"33.1\" default-x=\"134\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 33.2 ) );
	object.setSpaceLength( MxNumberTenths( 33.2 ) );
	object.setDefaultX( MxNumberTenths( 134.1 ) );
	object.setDefaultY( MxNumberTenths( 134.1 ) );
	object.setRelativeX( MxNumberTenths( 134.1 ) );
	object.setRelativeY( MxNumberTenths( 134.1 ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<bishop type=\"crescendo\" spread=\"1\" niente=\"yes\" space-length=\"33.2\" default-x=\"134.1\" default-y=\"134.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 33.3 ) );
	object.setSpaceLength( MxNumberTenths( 33.3 ) );
	object.setDefaultX( MxNumberTenths( 134.2 ) );
	object.setDefaultY( MxNumberTenths( 134.2 ) );
	object.setRelativeX( MxNumberTenths( 134.2 ) );
	object.setRelativeY( MxNumberTenths( 134.2 ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<charlie type=\"crescendo\" spread=\"1\" niente=\"yes\" space-length=\"33.3\" default-x=\"134.2\" default-y=\"134.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 33.4 ) );
	object.setSpaceLength( MxNumberTenths( 33.4 ) );
	object.setDefaultX( MxNumberTenths( 134.3 ) );
	object.setDefaultY( MxNumberTenths( 134.3 ) );
	object.setRelativeX( MxNumberTenths( 134.3 ) );
	object.setRelativeY( MxNumberTenths( 134.3 ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<booksmart type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dotted\" space-length=\"33.4\" default-x=\"134.3\" default-y=\"134.3\" relative-x=\"134.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 33.5 ) );
	object.setSpaceLength( MxNumberTenths( 33.5 ) );
	object.setDefaultX( MxNumberTenths( 134.4 ) );
	object.setDefaultY( MxNumberTenths( 134.4 ) );
	object.setRelativeX( MxNumberTenths( 134.4 ) );
	object.setRelativeY( MxNumberTenths( 134.4 ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<quiet type=\"crescendo\" number=\"1\" line-type=\"wavy\" default-x=\"134.4\" default-y=\"134.4\" relative-x=\"134.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 33.6 ) );
	object.setSpaceLength( MxNumberTenths( 33.6 ) );
	object.setDefaultX( MxNumberTenths( 134.5 ) );
	object.setDefaultY( MxNumberTenths( 134.5 ) );
	object.setRelativeX( MxNumberTenths( 134.5 ) );
	object.setRelativeY( MxNumberTenths( 134.5 ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<musicxmlishard type=\"crescendo\" line-type=\"solid\" default-x=\"134.5\" default-y=\"134.5\" relative-x=\"134.5\" relative-y=\"134.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 33.7 ) );
	object.setSpaceLength( MxNumberTenths( 33.7 ) );
	object.setDefaultX( MxNumberTenths( 134.6 ) );
	object.setDefaultY( MxNumberTenths( 134.6 ) );
	object.setRelativeX( MxNumberTenths( 134.6 ) );
	object.setRelativeY( MxNumberTenths( 134.6 ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<bishop type=\"crescendo\" line-type=\"dashed\" default-x=\"134.6\" default-y=\"134.6\" relative-x=\"134.6\" relative-y=\"134.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 33.8 ) );
	object.setSpaceLength( MxNumberTenths( 33.8 ) );
	object.setDefaultX( MxNumberTenths( 134.7 ) );
	object.setDefaultY( MxNumberTenths( 134.7 ) );
	object.setRelativeX( MxNumberTenths( 134.7 ) );
	object.setRelativeY( MxNumberTenths( 134.7 ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<charlie type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dotted\" dash-length=\"33.8\" default-y=\"134.7\" relative-x=\"134.7\" relative-y=\"134.7\" color=\"#B1B2B1B0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 33.9 ) );
	object.setSpaceLength( MxNumberTenths( 33.9 ) );
	object.setDefaultX( MxNumberTenths( 134.8 ) );
	object.setDefaultY( MxNumberTenths( 134.8 ) );
	object.setRelativeX( MxNumberTenths( 134.8 ) );
	object.setRelativeY( MxNumberTenths( 134.8 ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<booksmart type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" dash-length=\"33.9\" default-y=\"134.8\" relative-x=\"134.8\" relative-y=\"134.8\" color=\"#B4B3B2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 34 ) );
	object.setSpaceLength( MxNumberTenths( 34 ) );
	object.setDefaultX( MxNumberTenths( 134.9 ) );
	object.setDefaultY( MxNumberTenths( 134.9 ) );
	object.setRelativeX( MxNumberTenths( 134.9 ) );
	object.setRelativeY( MxNumberTenths( 134.9 ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<quiet type=\"crescendo\" spread=\"1\" niente=\"yes\" dash-length=\"34\" default-y=\"134.9\" relative-x=\"134.9\" relative-y=\"134.9\" color=\"#B5B6B5B4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 34.1 ) );
	object.setSpaceLength( MxNumberTenths( 34.1 ) );
	object.setDefaultX( MxNumberTenths( 135 ) );
	object.setDefaultY( MxNumberTenths( 135 ) );
	object.setRelativeX( MxNumberTenths( 135 ) );
	object.setRelativeY( MxNumberTenths( 135 ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<musicxmlishard type=\"crescendo\" niente=\"yes\" dash-length=\"34.1\" relative-x=\"135\" relative-y=\"135\" color=\"#B8B7B6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 34.2 ) );
	object.setSpaceLength( MxNumberTenths( 34.2 ) );
	object.setDefaultX( MxNumberTenths( 135.1 ) );
	object.setDefaultY( MxNumberTenths( 135.1 ) );
	object.setRelativeX( MxNumberTenths( 135.1 ) );
	object.setRelativeY( MxNumberTenths( 135.1 ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<bishop type=\"crescendo\" number=\"1\" dash-length=\"34.2\" space-length=\"34.2\" relative-x=\"135.1\" relative-y=\"135.1\" color=\"#B9BAB9B8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 34.3 ) );
	object.setSpaceLength( MxNumberTenths( 34.3 ) );
	object.setDefaultX( MxNumberTenths( 135.2 ) );
	object.setDefaultY( MxNumberTenths( 135.2 ) );
	object.setRelativeX( MxNumberTenths( 135.2 ) );
	object.setRelativeY( MxNumberTenths( 135.2 ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<charlie type=\"crescendo\" number=\"1\" dash-length=\"34.3\" space-length=\"34.3\" relative-x=\"135.2\" relative-y=\"135.2\" color=\"#BCBBBA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 34.4 ) );
	object.setSpaceLength( MxNumberTenths( 34.4 ) );
	object.setDefaultX( MxNumberTenths( 135.3 ) );
	object.setDefaultY( MxNumberTenths( 135.3 ) );
	object.setRelativeX( MxNumberTenths( 135.3 ) );
	object.setRelativeY( MxNumberTenths( 135.3 ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<booksmart type=\"crescendo\" spread=\"1\" line-type=\"solid\" space-length=\"34.4\" relative-y=\"135.3\" color=\"#BDBEBDBC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 34.5 ) );
	object.setSpaceLength( MxNumberTenths( 34.5 ) );
	object.setDefaultX( MxNumberTenths( 135.4 ) );
	object.setDefaultY( MxNumberTenths( 135.4 ) );
	object.setRelativeX( MxNumberTenths( 135.4 ) );
	object.setRelativeY( MxNumberTenths( 135.4 ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<quiet type=\"crescendo\" spread=\"1\" line-type=\"dashed\" space-length=\"34.5\" relative-y=\"135.4\" color=\"#C0BFBE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 34.6 ) );
	object.setSpaceLength( MxNumberTenths( 34.6 ) );
	object.setDefaultX( MxNumberTenths( 135.5 ) );
	object.setDefaultY( MxNumberTenths( 135.5 ) );
	object.setRelativeX( MxNumberTenths( 135.5 ) );
	object.setRelativeY( MxNumberTenths( 135.5 ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<musicxmlishard type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dotted\" space-length=\"34.6\" default-x=\"135.5\" relative-y=\"135.5\" color=\"#C1C2C1C0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 34.7 ) );
	object.setSpaceLength( MxNumberTenths( 34.7 ) );
	object.setDefaultX( MxNumberTenths( 135.6 ) );
	object.setDefaultY( MxNumberTenths( 135.6 ) );
	object.setRelativeX( MxNumberTenths( 135.6 ) );
	object.setRelativeY( MxNumberTenths( 135.6 ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<bishop type=\"crescendo\" number=\"1\" niente=\"yes\" line-type=\"wavy\" space-length=\"34.7\" default-x=\"135.6\" color=\"#C4C3C2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 34.8 ) );
	object.setSpaceLength( MxNumberTenths( 34.8 ) );
	object.setDefaultX( MxNumberTenths( 135.7 ) );
	object.setDefaultY( MxNumberTenths( 135.7 ) );
	object.setRelativeX( MxNumberTenths( 135.7 ) );
	object.setRelativeY( MxNumberTenths( 135.7 ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<charlie type=\"crescendo\" niente=\"yes\" line-type=\"solid\" space-length=\"34.8\" default-x=\"135.7\" color=\"#C5C6C5C4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 34.9 ) );
	object.setSpaceLength( MxNumberTenths( 34.9 ) );
	object.setDefaultX( MxNumberTenths( 135.8 ) );
	object.setDefaultY( MxNumberTenths( 135.8 ) );
	object.setRelativeX( MxNumberTenths( 135.8 ) );
	object.setRelativeY( MxNumberTenths( 135.8 ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<booksmart type=\"crescendo\" niente=\"yes\" default-x=\"135.8\" color=\"#C8C7C6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 35 ) );
	object.setSpaceLength( MxNumberTenths( 35 ) );
	object.setDefaultX( MxNumberTenths( 135.9 ) );
	object.setDefaultY( MxNumberTenths( 135.9 ) );
	object.setRelativeX( MxNumberTenths( 135.9 ) );
	object.setRelativeY( MxNumberTenths( 135.9 ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<quiet type=\"crescendo\" number=\"1\" spread=\"1\" dash-length=\"35\" default-x=\"135.9\" default-y=\"135.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 35.1 ) );
	object.setSpaceLength( MxNumberTenths( 35.1 ) );
	object.setDefaultX( MxNumberTenths( 136 ) );
	object.setDefaultY( MxNumberTenths( 136 ) );
	object.setRelativeX( MxNumberTenths( 136 ) );
	object.setRelativeY( MxNumberTenths( 136 ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<musicxmlishard type=\"crescendo\" number=\"1\" spread=\"1\" dash-length=\"35.1\" default-x=\"136\" default-y=\"136\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 35.2 ) );
	object.setSpaceLength( MxNumberTenths( 35.2 ) );
	object.setDefaultX( MxNumberTenths( 136.1 ) );
	object.setDefaultY( MxNumberTenths( 136.1 ) );
	object.setRelativeX( MxNumberTenths( 136.1 ) );
	object.setRelativeY( MxNumberTenths( 136.1 ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<bishop type=\"crescendo\" spread=\"1\" dash-length=\"35.2\" default-x=\"136.1\" default-y=\"136.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 35.3 ) );
	object.setSpaceLength( MxNumberTenths( 35.3 ) );
	object.setDefaultX( MxNumberTenths( 136.2 ) );
	object.setDefaultY( MxNumberTenths( 136.2 ) );
	object.setRelativeX( MxNumberTenths( 136.2 ) );
	object.setRelativeY( MxNumberTenths( 136.2 ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<charlie type=\"crescendo\" dash-length=\"35.3\" default-x=\"136.2\" default-y=\"136.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 35.4 ) );
	object.setSpaceLength( MxNumberTenths( 35.4 ) );
	object.setDefaultX( MxNumberTenths( 136.3 ) );
	object.setDefaultY( MxNumberTenths( 136.3 ) );
	object.setRelativeX( MxNumberTenths( 136.3 ) );
	object.setRelativeY( MxNumberTenths( 136.3 ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<booksmart type=\"crescendo\" number=\"1\" niente=\"yes\" line-type=\"dotted\" dash-length=\"35.4\" default-y=\"136.3\" relative-x=\"136.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 35.5 ) );
	object.setSpaceLength( MxNumberTenths( 35.5 ) );
	object.setDefaultX( MxNumberTenths( 136.4 ) );
	object.setDefaultY( MxNumberTenths( 136.4 ) );
	object.setRelativeX( MxNumberTenths( 136.4 ) );
	object.setRelativeY( MxNumberTenths( 136.4 ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<quiet type=\"crescendo\" number=\"1\" niente=\"yes\" line-type=\"wavy\" dash-length=\"35.5\" default-y=\"136.4\" relative-x=\"136.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 35.6 ) );
	object.setSpaceLength( MxNumberTenths( 35.6 ) );
	object.setDefaultX( MxNumberTenths( 136.5 ) );
	object.setDefaultY( MxNumberTenths( 136.5 ) );
	object.setRelativeX( MxNumberTenths( 136.5 ) );
	object.setRelativeY( MxNumberTenths( 136.5 ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<musicxmlishard type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"solid\" space-length=\"35.6\" default-y=\"136.5\" relative-x=\"136.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 35.7 ) );
	object.setSpaceLength( MxNumberTenths( 35.7 ) );
	object.setDefaultX( MxNumberTenths( 136.6 ) );
	object.setDefaultY( MxNumberTenths( 136.6 ) );
	object.setRelativeX( MxNumberTenths( 136.6 ) );
	object.setRelativeY( MxNumberTenths( 136.6 ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<bishop type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"dashed\" space-length=\"35.7\" default-y=\"136.6\" relative-x=\"136.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 35.8 ) );
	object.setSpaceLength( MxNumberTenths( 35.8 ) );
	object.setDefaultX( MxNumberTenths( 136.7 ) );
	object.setDefaultY( MxNumberTenths( 136.7 ) );
	object.setRelativeX( MxNumberTenths( 136.7 ) );
	object.setRelativeY( MxNumberTenths( 136.7 ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<charlie type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dotted\" space-length=\"35.8\" default-y=\"136.7\" relative-x=\"136.7\" relative-y=\"136.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 35.9 ) );
	object.setSpaceLength( MxNumberTenths( 35.9 ) );
	object.setDefaultX( MxNumberTenths( 136.8 ) );
	object.setDefaultY( MxNumberTenths( 136.8 ) );
	object.setRelativeX( MxNumberTenths( 136.8 ) );
	object.setRelativeY( MxNumberTenths( 136.8 ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<booksmart type=\"crescendo\" number=\"1\" space-length=\"35.9\" relative-x=\"136.8\" relative-y=\"136.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 36 ) );
	object.setSpaceLength( MxNumberTenths( 36 ) );
	object.setDefaultX( MxNumberTenths( 136.9 ) );
	object.setDefaultY( MxNumberTenths( 136.9 ) );
	object.setRelativeX( MxNumberTenths( 136.9 ) );
	object.setRelativeY( MxNumberTenths( 136.9 ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<quiet type=\"crescendo\" space-length=\"36\" relative-x=\"136.9\" relative-y=\"136.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 36.1 ) );
	object.setSpaceLength( MxNumberTenths( 36.1 ) );
	object.setDefaultX( MxNumberTenths( 137 ) );
	object.setDefaultY( MxNumberTenths( 137 ) );
	object.setRelativeX( MxNumberTenths( 137 ) );
	object.setRelativeY( MxNumberTenths( 137 ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<musicxmlishard type=\"crescendo\" space-length=\"36.1\" relative-x=\"137\" relative-y=\"137\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 36.2 ) );
	object.setSpaceLength( MxNumberTenths( 36.2 ) );
	object.setDefaultX( MxNumberTenths( 137.1 ) );
	object.setDefaultY( MxNumberTenths( 137.1 ) );
	object.setRelativeX( MxNumberTenths( 137.1 ) );
	object.setRelativeY( MxNumberTenths( 137.1 ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<bishop type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" dash-length=\"36.2\" space-length=\"36.2\" default-x=\"137.1\" relative-x=\"137.1\" relative-y=\"137.1\" color=\"#E1E2E1E0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 36.3 ) );
	object.setSpaceLength( MxNumberTenths( 36.3 ) );
	object.setDefaultX( MxNumberTenths( 137.2 ) );
	object.setDefaultY( MxNumberTenths( 137.2 ) );
	object.setRelativeX( MxNumberTenths( 137.2 ) );
	object.setRelativeY( MxNumberTenths( 137.2 ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<charlie type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" dash-length=\"36.3\" default-x=\"137.2\" relative-x=\"137.2\" relative-y=\"137.2\" color=\"#E4E3E2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 36.4 ) );
	object.setSpaceLength( MxNumberTenths( 36.4 ) );
	object.setDefaultX( MxNumberTenths( 137.3 ) );
	object.setDefaultY( MxNumberTenths( 137.3 ) );
	object.setRelativeX( MxNumberTenths( 137.3 ) );
	object.setRelativeY( MxNumberTenths( 137.3 ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<booksmart type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"solid\" dash-length=\"36.4\" default-x=\"137.3\" relative-y=\"137.3\" color=\"#E5E6E5E4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 36.5 ) );
	object.setSpaceLength( MxNumberTenths( 36.5 ) );
	object.setDefaultX( MxNumberTenths( 137.4 ) );
	object.setDefaultY( MxNumberTenths( 137.4 ) );
	object.setRelativeX( MxNumberTenths( 137.4 ) );
	object.setRelativeY( MxNumberTenths( 137.4 ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<quiet type=\"crescendo\" niente=\"yes\" line-type=\"dashed\" dash-length=\"36.5\" default-x=\"137.4\" relative-y=\"137.4\" color=\"#E8E7E6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 36.6 ) );
	object.setSpaceLength( MxNumberTenths( 36.6 ) );
	object.setDefaultX( MxNumberTenths( 137.5 ) );
	object.setDefaultY( MxNumberTenths( 137.5 ) );
	object.setRelativeX( MxNumberTenths( 137.5 ) );
	object.setRelativeY( MxNumberTenths( 137.5 ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<musicxmlishard type=\"crescendo\" number=\"1\" line-type=\"dotted\" dash-length=\"36.6\" default-x=\"137.5\" relative-y=\"137.5\" color=\"#E9EAE9E8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 36.7 ) );
	object.setSpaceLength( MxNumberTenths( 36.7 ) );
	object.setDefaultX( MxNumberTenths( 137.6 ) );
	object.setDefaultY( MxNumberTenths( 137.6 ) );
	object.setRelativeX( MxNumberTenths( 137.6 ) );
	object.setRelativeY( MxNumberTenths( 137.6 ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<bishop type=\"crescendo\" number=\"1\" line-type=\"wavy\" dash-length=\"36.7\" default-x=\"137.6\" relative-y=\"137.6\" color=\"#ECEBEA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 36.8 ) );
	object.setSpaceLength( MxNumberTenths( 36.8 ) );
	object.setDefaultX( MxNumberTenths( 137.7 ) );
	object.setDefaultY( MxNumberTenths( 137.7 ) );
	object.setRelativeX( MxNumberTenths( 137.7 ) );
	object.setRelativeY( MxNumberTenths( 137.7 ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<charlie type=\"crescendo\" spread=\"1\" line-type=\"solid\" default-x=\"137.7\" default-y=\"137.7\" relative-y=\"137.7\" color=\"#EDEEEDEC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 36.9 ) );
	object.setSpaceLength( MxNumberTenths( 36.9 ) );
	object.setDefaultX( MxNumberTenths( 137.8 ) );
	object.setDefaultY( MxNumberTenths( 137.8 ) );
	object.setRelativeX( MxNumberTenths( 137.8 ) );
	object.setRelativeY( MxNumberTenths( 137.8 ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<booksmart type=\"crescendo\" spread=\"1\" default-x=\"137.8\" default-y=\"137.8\" color=\"#F0EFEE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 37 ) );
	object.setSpaceLength( MxNumberTenths( 37 ) );
	object.setDefaultX( MxNumberTenths( 137.9 ) );
	object.setDefaultY( MxNumberTenths( 137.9 ) );
	object.setRelativeX( MxNumberTenths( 137.9 ) );
	object.setRelativeY( MxNumberTenths( 137.9 ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<quiet type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" space-length=\"37\" default-y=\"137.9\" color=\"#F1F2F1F0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 37.1 ) );
	object.setSpaceLength( MxNumberTenths( 37.1 ) );
	object.setDefaultX( MxNumberTenths( 138 ) );
	object.setDefaultY( MxNumberTenths( 138 ) );
	object.setRelativeX( MxNumberTenths( 138 ) );
	object.setRelativeY( MxNumberTenths( 138 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<musicxmlishard type=\"crescendo\" number=\"1\" niente=\"yes\" space-length=\"37.1\" default-y=\"138\" color=\"#F4F3F2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 37.2 ) );
	object.setSpaceLength( MxNumberTenths( 37.2 ) );
	object.setDefaultX( MxNumberTenths( 138.1 ) );
	object.setDefaultY( MxNumberTenths( 138.1 ) );
	object.setRelativeX( MxNumberTenths( 138.1 ) );
	object.setRelativeY( MxNumberTenths( 138.1 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<bishop type=\"crescendo\" niente=\"yes\" space-length=\"37.2\" default-y=\"138.1\" color=\"#F5F6F5F4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 37.3 ) );
	object.setSpaceLength( MxNumberTenths( 37.3 ) );
	object.setDefaultX( MxNumberTenths( 138.2 ) );
	object.setDefaultY( MxNumberTenths( 138.2 ) );
	object.setRelativeX( MxNumberTenths( 138.2 ) );
	object.setRelativeY( MxNumberTenths( 138.2 ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<charlie type=\"crescendo\" niente=\"yes\" space-length=\"37.3\" default-y=\"138.2\" color=\"#F8F7F6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 37.4 ) );
	object.setSpaceLength( MxNumberTenths( 37.4 ) );
	object.setDefaultX( MxNumberTenths( 138.3 ) );
	object.setDefaultY( MxNumberTenths( 138.3 ) );
	object.setRelativeX( MxNumberTenths( 138.3 ) );
	object.setRelativeY( MxNumberTenths( 138.3 ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<booksmart type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dotted\" dash-length=\"37.4\" space-length=\"37.4\" default-y=\"138.3\" relative-x=\"138.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 37.5 ) );
	object.setSpaceLength( MxNumberTenths( 37.5 ) );
	object.setDefaultX( MxNumberTenths( 138.4 ) );
	object.setDefaultY( MxNumberTenths( 138.4 ) );
	object.setRelativeX( MxNumberTenths( 138.4 ) );
	object.setRelativeY( MxNumberTenths( 138.4 ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<quiet type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"wavy\" dash-length=\"37.5\" space-length=\"37.5\" default-y=\"138.4\" relative-x=\"138.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 37.6 ) );
	object.setSpaceLength( MxNumberTenths( 37.6 ) );
	object.setDefaultX( MxNumberTenths( 138.5 ) );
	object.setDefaultY( MxNumberTenths( 138.5 ) );
	object.setRelativeX( MxNumberTenths( 138.5 ) );
	object.setRelativeY( MxNumberTenths( 138.5 ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<musicxmlishard type=\"crescendo\" spread=\"1\" line-type=\"solid\" dash-length=\"37.6\" space-length=\"37.6\" default-y=\"138.5\" relative-x=\"138.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 37.7 ) );
	object.setSpaceLength( MxNumberTenths( 37.7 ) );
	object.setDefaultX( MxNumberTenths( 138.6 ) );
	object.setDefaultY( MxNumberTenths( 138.6 ) );
	object.setRelativeX( MxNumberTenths( 138.6 ) );
	object.setRelativeY( MxNumberTenths( 138.6 ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<bishop type=\"crescendo\" line-type=\"dashed\" dash-length=\"37.7\" relative-x=\"138.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 37.8 ) );
	object.setSpaceLength( MxNumberTenths( 37.8 ) );
	object.setDefaultX( MxNumberTenths( 138.7 ) );
	object.setDefaultY( MxNumberTenths( 138.7 ) );
	object.setRelativeX( MxNumberTenths( 138.7 ) );
	object.setRelativeY( MxNumberTenths( 138.7 ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<charlie type=\"crescendo\" number=\"1\" niente=\"yes\" line-type=\"dotted\" dash-length=\"37.8\" default-x=\"138.7\" relative-x=\"138.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 37.9 ) );
	object.setSpaceLength( MxNumberTenths( 37.9 ) );
	object.setDefaultX( MxNumberTenths( 138.8 ) );
	object.setDefaultY( MxNumberTenths( 138.8 ) );
	object.setRelativeX( MxNumberTenths( 138.8 ) );
	object.setRelativeY( MxNumberTenths( 138.8 ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<booksmart type=\"crescendo\" number=\"1\" niente=\"yes\" dash-length=\"37.9\" default-x=\"138.8\" relative-x=\"138.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 38 ) );
	object.setSpaceLength( MxNumberTenths( 38 ) );
	object.setDefaultX( MxNumberTenths( 138.9 ) );
	object.setDefaultY( MxNumberTenths( 138.9 ) );
	object.setRelativeX( MxNumberTenths( 138.9 ) );
	object.setRelativeY( MxNumberTenths( 138.9 ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<quiet type=\"crescendo\" spread=\"1\" niente=\"yes\" default-x=\"138.9\" relative-x=\"138.9\" relative-y=\"138.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 38.1 ) );
	object.setSpaceLength( MxNumberTenths( 38.1 ) );
	object.setDefaultX( MxNumberTenths( 139 ) );
	object.setDefaultY( MxNumberTenths( 139 ) );
	object.setRelativeX( MxNumberTenths( 139 ) );
	object.setRelativeY( MxNumberTenths( 139 ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<musicxmlishard type=\"crescendo\" spread=\"1\" niente=\"yes\" default-x=\"139\" relative-x=\"139\" relative-y=\"139\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 38.2 ) );
	object.setSpaceLength( MxNumberTenths( 38.2 ) );
	object.setDefaultX( MxNumberTenths( 139.1 ) );
	object.setDefaultY( MxNumberTenths( 139.1 ) );
	object.setRelativeX( MxNumberTenths( 139.1 ) );
	object.setRelativeY( MxNumberTenths( 139.1 ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<bishop type=\"crescendo\" number=\"1\" spread=\"1\" default-x=\"139.1\" relative-x=\"139.1\" relative-y=\"139.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 38.3 ) );
	object.setSpaceLength( MxNumberTenths( 38.3 ) );
	object.setDefaultX( MxNumberTenths( 139.2 ) );
	object.setDefaultY( MxNumberTenths( 139.2 ) );
	object.setRelativeX( MxNumberTenths( 139.2 ) );
	object.setRelativeY( MxNumberTenths( 139.2 ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<charlie type=\"crescendo\" number=\"1\" default-x=\"139.2\" relative-x=\"139.2\" relative-y=\"139.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 38.4 ) );
	object.setSpaceLength( MxNumberTenths( 38.4 ) );
	object.setDefaultX( MxNumberTenths( 139.3 ) );
	object.setDefaultY( MxNumberTenths( 139.3 ) );
	object.setRelativeX( MxNumberTenths( 139.3 ) );
	object.setRelativeY( MxNumberTenths( 139.3 ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<booksmart type=\"crescendo\" line-type=\"solid\" space-length=\"38.4\" default-x=\"139.3\" relative-y=\"139.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 38.5 ) );
	object.setSpaceLength( MxNumberTenths( 38.5 ) );
	object.setDefaultX( MxNumberTenths( 139.4 ) );
	object.setDefaultY( MxNumberTenths( 139.4 ) );
	object.setRelativeX( MxNumberTenths( 139.4 ) );
	object.setRelativeY( MxNumberTenths( 139.4 ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<quiet type=\"crescendo\" line-type=\"dashed\" space-length=\"38.5\" default-x=\"139.4\" relative-y=\"139.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 38.6 ) );
	object.setSpaceLength( MxNumberTenths( 38.6 ) );
	object.setDefaultX( MxNumberTenths( 139.5 ) );
	object.setDefaultY( MxNumberTenths( 139.5 ) );
	object.setRelativeX( MxNumberTenths( 139.5 ) );
	object.setRelativeY( MxNumberTenths( 139.5 ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<musicxmlishard type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dotted\" dash-length=\"38.6\" space-length=\"38.6\" default-y=\"139.5\" relative-y=\"139.5\" color=\"#11121110\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 38.7 ) );
	object.setSpaceLength( MxNumberTenths( 38.7 ) );
	object.setDefaultX( MxNumberTenths( 139.6 ) );
	object.setDefaultY( MxNumberTenths( 139.6 ) );
	object.setRelativeX( MxNumberTenths( 139.6 ) );
	object.setRelativeY( MxNumberTenths( 139.6 ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<bishop type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"wavy\" dash-length=\"38.7\" space-length=\"38.7\" default-y=\"139.6\" relative-y=\"139.6\" color=\"#141312\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 38.8 ) );
	object.setSpaceLength( MxNumberTenths( 38.8 ) );
	object.setDefaultX( MxNumberTenths( 139.7 ) );
	object.setDefaultY( MxNumberTenths( 139.7 ) );
	object.setRelativeX( MxNumberTenths( 139.7 ) );
	object.setRelativeY( MxNumberTenths( 139.7 ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<charlie type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"solid\" dash-length=\"38.8\" space-length=\"38.8\" default-y=\"139.7\" relative-y=\"139.7\" color=\"#15161514\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 38.9 ) );
	object.setSpaceLength( MxNumberTenths( 38.9 ) );
	object.setDefaultX( MxNumberTenths( 139.8 ) );
	object.setDefaultY( MxNumberTenths( 139.8 ) );
	object.setRelativeX( MxNumberTenths( 139.8 ) );
	object.setRelativeY( MxNumberTenths( 139.8 ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<booksmart type=\"crescendo\" niente=\"yes\" dash-length=\"38.9\" space-length=\"38.9\" default-y=\"139.8\" relative-y=\"139.8\" color=\"#181716\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 39 ) );
	object.setSpaceLength( MxNumberTenths( 39 ) );
	object.setDefaultX( MxNumberTenths( 139.9 ) );
	object.setDefaultY( MxNumberTenths( 139.9 ) );
	object.setRelativeX( MxNumberTenths( 139.9 ) );
	object.setRelativeY( MxNumberTenths( 139.9 ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<quiet type=\"crescendo\" number=\"1\" dash-length=\"39\" space-length=\"39\" default-y=\"139.9\" relative-y=\"139.9\" color=\"#191A1918\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 39.1 ) );
	object.setSpaceLength( MxNumberTenths( 39.1 ) );
	object.setDefaultX( MxNumberTenths( 140 ) );
	object.setDefaultY( MxNumberTenths( 140 ) );
	object.setRelativeX( MxNumberTenths( 140 ) );
	object.setRelativeY( MxNumberTenths( 140 ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<musicxmlishard type=\"crescendo\" number=\"1\" dash-length=\"39.1\" default-y=\"140\" color=\"#1C1B1A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 39.2 ) );
	object.setSpaceLength( MxNumberTenths( 39.2 ) );
	object.setDefaultX( MxNumberTenths( 140.1 ) );
	object.setDefaultY( MxNumberTenths( 140.1 ) );
	object.setRelativeX( MxNumberTenths( 140.1 ) );
	object.setRelativeY( MxNumberTenths( 140.1 ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<bishop type=\"crescendo\" spread=\"1\" default-y=\"140.1\" color=\"#1D1E1D1C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 39.3 ) );
	object.setSpaceLength( MxNumberTenths( 39.3 ) );
	object.setDefaultX( MxNumberTenths( 140.2 ) );
	object.setDefaultY( MxNumberTenths( 140.2 ) );
	object.setRelativeX( MxNumberTenths( 140.2 ) );
	object.setRelativeY( MxNumberTenths( 140.2 ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<charlie type=\"crescendo\" spread=\"1\" default-y=\"140.2\" color=\"#201F1E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 39.4 ) );
	object.setSpaceLength( MxNumberTenths( 39.4 ) );
	object.setDefaultX( MxNumberTenths( 140.3 ) );
	object.setDefaultY( MxNumberTenths( 140.3 ) );
	object.setRelativeX( MxNumberTenths( 140.3 ) );
	object.setRelativeY( MxNumberTenths( 140.3 ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<booksmart type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dotted\" default-x=\"140.3\" default-y=\"140.3\" relative-x=\"140.3\" color=\"#21222120\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 39.5 ) );
	object.setSpaceLength( MxNumberTenths( 39.5 ) );
	object.setDefaultX( MxNumberTenths( 140.4 ) );
	object.setDefaultY( MxNumberTenths( 140.4 ) );
	object.setRelativeX( MxNumberTenths( 140.4 ) );
	object.setRelativeY( MxNumberTenths( 140.4 ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<quiet type=\"crescendo\" number=\"1\" niente=\"yes\" line-type=\"wavy\" default-x=\"140.4\" relative-x=\"140.4\" color=\"#242322\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 39.6 ) );
	object.setSpaceLength( MxNumberTenths( 39.6 ) );
	object.setDefaultX( MxNumberTenths( 140.5 ) );
	object.setDefaultY( MxNumberTenths( 140.5 ) );
	object.setRelativeX( MxNumberTenths( 140.5 ) );
	object.setRelativeY( MxNumberTenths( 140.5 ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<musicxmlishard type=\"crescendo\" niente=\"yes\" line-type=\"solid\" default-x=\"140.5\" relative-x=\"140.5\" color=\"#25262524\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 39.7 ) );
	object.setSpaceLength( MxNumberTenths( 39.7 ) );
	object.setDefaultX( MxNumberTenths( 140.6 ) );
	object.setDefaultY( MxNumberTenths( 140.6 ) );
	object.setRelativeX( MxNumberTenths( 140.6 ) );
	object.setRelativeY( MxNumberTenths( 140.6 ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<bishop type=\"crescendo\" niente=\"yes\" line-type=\"dashed\" default-x=\"140.6\" relative-x=\"140.6\" color=\"#282726\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 39.8 ) );
	object.setSpaceLength( MxNumberTenths( 39.8 ) );
	object.setDefaultX( MxNumberTenths( 140.7 ) );
	object.setDefaultY( MxNumberTenths( 140.7 ) );
	object.setRelativeX( MxNumberTenths( 140.7 ) );
	object.setRelativeY( MxNumberTenths( 140.7 ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<charlie type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dotted\" dash-length=\"39.8\" space-length=\"39.8\" default-x=\"140.7\" relative-x=\"140.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 39.9 ) );
	object.setSpaceLength( MxNumberTenths( 39.9 ) );
	object.setDefaultX( MxNumberTenths( 140.8 ) );
	object.setDefaultY( MxNumberTenths( 140.8 ) );
	object.setRelativeX( MxNumberTenths( 140.8 ) );
	object.setRelativeY( MxNumberTenths( 140.8 ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<booksmart type=\"crescendo\" number=\"1\" spread=\"1\" dash-length=\"39.9\" space-length=\"39.9\" default-x=\"140.8\" relative-x=\"140.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 40 ) );
	object.setSpaceLength( MxNumberTenths( 40 ) );
	object.setDefaultX( MxNumberTenths( 140.9 ) );
	object.setDefaultY( MxNumberTenths( 140.9 ) );
	object.setRelativeX( MxNumberTenths( 140.9 ) );
	object.setRelativeY( MxNumberTenths( 140.9 ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<quiet type=\"crescendo\" spread=\"1\" dash-length=\"40\" space-length=\"40\" default-x=\"140.9\" relative-x=\"140.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 40.1 ) );
	object.setSpaceLength( MxNumberTenths( 40.1 ) );
	object.setDefaultX( MxNumberTenths( 141 ) );
	object.setDefaultY( MxNumberTenths( 141 ) );
	object.setRelativeX( MxNumberTenths( 141 ) );
	object.setRelativeY( MxNumberTenths( 141 ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<musicxmlishard type=\"crescendo\" dash-length=\"40.1\" space-length=\"40.1\" default-x=\"141\" relative-x=\"141\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 40.2 ) );
	object.setSpaceLength( MxNumberTenths( 40.2 ) );
	object.setDefaultX( MxNumberTenths( 141.1 ) );
	object.setDefaultY( MxNumberTenths( 141.1 ) );
	object.setRelativeX( MxNumberTenths( 141.1 ) );
	object.setRelativeY( MxNumberTenths( 141.1 ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<bishop type=\"crescendo\" number=\"1\" niente=\"yes\" dash-length=\"40.2\" space-length=\"40.2\" relative-x=\"141.1\" relative-y=\"141.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 40.3 ) );
	object.setSpaceLength( MxNumberTenths( 40.3 ) );
	object.setDefaultX( MxNumberTenths( 141.2 ) );
	object.setDefaultY( MxNumberTenths( 141.2 ) );
	object.setRelativeX( MxNumberTenths( 141.2 ) );
	object.setRelativeY( MxNumberTenths( 141.2 ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<charlie type=\"crescendo\" number=\"1\" niente=\"yes\" dash-length=\"40.3\" space-length=\"40.3\" relative-x=\"141.2\" relative-y=\"141.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 40.4 ) );
	object.setSpaceLength( MxNumberTenths( 40.4 ) );
	object.setDefaultX( MxNumberTenths( 141.3 ) );
	object.setDefaultY( MxNumberTenths( 141.3 ) );
	object.setRelativeX( MxNumberTenths( 141.3 ) );
	object.setRelativeY( MxNumberTenths( 141.3 ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<booksmart type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"solid\" space-length=\"40.4\" default-y=\"141.3\" relative-y=\"141.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 40.5 ) );
	object.setSpaceLength( MxNumberTenths( 40.5 ) );
	object.setDefaultX( MxNumberTenths( 141.4 ) );
	object.setDefaultY( MxNumberTenths( 141.4 ) );
	object.setRelativeX( MxNumberTenths( 141.4 ) );
	object.setRelativeY( MxNumberTenths( 141.4 ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<quiet type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"dashed\" default-y=\"141.4\" relative-y=\"141.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 40.6 ) );
	object.setSpaceLength( MxNumberTenths( 40.6 ) );
	object.setDefaultX( MxNumberTenths( 141.5 ) );
	object.setDefaultY( MxNumberTenths( 141.5 ) );
	object.setRelativeX( MxNumberTenths( 141.5 ) );
	object.setRelativeY( MxNumberTenths( 141.5 ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<musicxmlishard type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dotted\" default-y=\"141.5\" relative-y=\"141.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 40.7 ) );
	object.setSpaceLength( MxNumberTenths( 40.7 ) );
	object.setDefaultX( MxNumberTenths( 141.6 ) );
	object.setDefaultY( MxNumberTenths( 141.6 ) );
	object.setRelativeX( MxNumberTenths( 141.6 ) );
	object.setRelativeY( MxNumberTenths( 141.6 ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<bishop type=\"crescendo\" number=\"1\" line-type=\"wavy\" default-y=\"141.6\" relative-y=\"141.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 40.8 ) );
	object.setSpaceLength( MxNumberTenths( 40.8 ) );
	object.setDefaultX( MxNumberTenths( 141.7 ) );
	object.setDefaultY( MxNumberTenths( 141.7 ) );
	object.setRelativeX( MxNumberTenths( 141.7 ) );
	object.setRelativeY( MxNumberTenths( 141.7 ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<charlie type=\"crescendo\" line-type=\"solid\" default-y=\"141.7\" relative-y=\"141.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 40.9 ) );
	object.setSpaceLength( MxNumberTenths( 40.9 ) );
	object.setDefaultX( MxNumberTenths( 141.8 ) );
	object.setDefaultY( MxNumberTenths( 141.8 ) );
	object.setRelativeX( MxNumberTenths( 141.8 ) );
	object.setRelativeY( MxNumberTenths( 141.8 ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<booksmart type=\"crescendo\" default-y=\"141.8\" relative-y=\"141.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 41 ) );
	object.setSpaceLength( MxNumberTenths( 41 ) );
	object.setDefaultX( MxNumberTenths( 141.9 ) );
	object.setDefaultY( MxNumberTenths( 141.9 ) );
	object.setRelativeX( MxNumberTenths( 141.9 ) );
	object.setRelativeY( MxNumberTenths( 141.9 ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<quiet type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" dash-length=\"41\" default-x=\"141.9\" default-y=\"141.9\" relative-y=\"141.9\" color=\"#41424140\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 41.1 ) );
	object.setSpaceLength( MxNumberTenths( 41.1 ) );
	object.setDefaultX( MxNumberTenths( 142 ) );
	object.setDefaultY( MxNumberTenths( 142 ) );
	object.setRelativeX( MxNumberTenths( 142 ) );
	object.setRelativeY( MxNumberTenths( 142 ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<musicxmlishard type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" dash-length=\"41.1\" default-x=\"142\" default-y=\"142\" relative-y=\"142\" color=\"#444342\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( true );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 41.2 ) );
	object.setSpaceLength( MxNumberTenths( 41.2 ) );
	object.setDefaultX( MxNumberTenths( 142.1 ) );
	object.setDefaultY( MxNumberTenths( 142.1 ) );
	object.setRelativeX( MxNumberTenths( 142.1 ) );
	object.setRelativeY( MxNumberTenths( 142.1 ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<bishop type=\"crescendo\" spread=\"1\" niente=\"yes\" dash-length=\"41.2\" space-length=\"41.2\" default-x=\"142.1\" default-y=\"142.1\" relative-y=\"142.1\" color=\"#45464544\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( true );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 41.3 ) );
	object.setSpaceLength( MxNumberTenths( 41.3 ) );
	object.setDefaultX( MxNumberTenths( 142.2 ) );
	object.setDefaultY( MxNumberTenths( 142.2 ) );
	object.setRelativeX( MxNumberTenths( 142.2 ) );
	object.setRelativeY( MxNumberTenths( 142.2 ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<charlie type=\"crescendo\" niente=\"yes\" dash-length=\"41.3\" space-length=\"41.3\" default-x=\"142.2\" color=\"#484746\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptyWedge )
{
	MxCxEmptyWedge object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsSpreadPresent( false );
	object.setIsNientePresent( false );
	object.setIsLineTypePresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 41.4 ) );
	object.setSpaceLength( MxNumberTenths( 41.4 ) );
	object.setDefaultX( MxNumberTenths( 142.3 ) );
	object.setDefaultY( MxNumberTenths( 142.3 ) );
	object.setRelativeX( MxNumberTenths( 142.3 ) );
	object.setRelativeY( MxNumberTenths( 142.3 ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<booksmart type=\"crescendo\"/>";
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


