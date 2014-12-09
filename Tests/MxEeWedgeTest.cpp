/** *******************************************************
  * 
  * MxEeWedgeTest.cpp
  * Created: 2014-12-05 16:47:04
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeWedge.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeWedge )
{
	MxEeWedge object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxEnumWedgeType(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpread().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getNiente().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxEnumLineType(  ) ).toString();
	std::string actual = object.getLineType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeWedge )
{
	MxEeWedge object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeWedge )
{
	MxEeWedge object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = "MxEeWedge";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = "wedge";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeWedge )
{
	MxEeWedge object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEeWedge )
{
	MxEnumWedgeType value1( lexicon::enums::WedgeType::continue_ );
	MxEnumWedgeType value2( lexicon::enums::WedgeType::stop );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setType( value1 );
	MxEnumWedgeType expected = value1;
	MxEnumWedgeType actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxEeWedge )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpread2, MxEeWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setSpread( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpread();
	CHECK_EQUAL( expected, actual )
	object.setSpread( value2 );
	expected = value2;
	actual = object.getSpread();
	CHECK_EQUAL( expected, actual )
}
TEST( setNiente3, MxEeWedge )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setNiente( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getNiente();
	CHECK_EQUAL( expected, actual )
	object.setNiente( value2 );
	expected = value2;
	actual = object.getNiente();
	CHECK_EQUAL( expected, actual )
}
TEST( setLineType4, MxEeWedge )
{
	MxEnumLineType value1( lexicon::enums::LineType::wavy );
	MxEnumLineType value2( lexicon::enums::LineType::dotted );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setLineType( value1 );
	MxEnumLineType expected = value1;
	MxEnumLineType actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
	object.setLineType( value2 );
	expected = value2;
	actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength5, MxEeWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength6, MxEeWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX7, MxEeWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY8, MxEeWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX9, MxEeWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY10, MxEeWedge )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor11, MxEeWedge )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEeWedge object;
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

TEST( getIsTypeRequired0, MxEeWedge )
{
	MxEeWedge object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpreadRequired2, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsSpreadRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNienteRequired3, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsNienteRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeRequired4, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsLineTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired5, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired6, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired7, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired8, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired9, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired10, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired11, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsNumberPresent1, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsSpreadPresent2, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsNientePresent3, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsLineTypePresent4, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsDashLengthPresent5, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsSpaceLengthPresent6, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsDefaultXPresent7, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsDefaultYPresent8, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsRelativeXPresent9, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsRelativeYPresent10, MxEeWedge )
{
	MxEeWedge object;
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
TEST( getIsColorPresent11, MxEeWedge )
{
	MxEeWedge object;
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

TEST( getIsTypeDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpreadDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsSpreadDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNienteDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsNienteDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLineTypeDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsLineTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEeWedge )
{
	MxEeWedge object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxEnumWedgeType expected;
	MxEnumWedgeType actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpreadDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpreadDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNienteDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getNienteDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLineTypeDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxEnumLineType expected;
	MxEnumLineType actual = object.getLineTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEeWedge )
{
	MxEeWedge object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeWedge )
{
	MxEeWedge object;
	std::string expected;
	std::string actual;
	object.setType( MxEnumWedgeType( lexicon::enums::WedgeType::crescendo ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setSpread( MxNumberTenths( 1 ) );
	object.setNiente( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 1.1 ) );
	object.setSpaceLength( MxNumberTenths( 1.1 ) );
	object.setDefaultX( MxNumberTenths( 51.6 ) );
	object.setDefaultY( MxNumberTenths( 51.6 ) );
	object.setRelativeX( MxNumberTenths( 51.6 ) );
	object.setRelativeY( MxNumberTenths( 51.6 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
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
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dashed\" dash-length=\"1.1\" space-length=\"1.1\" default-x=\"51.6\" default-y=\"51.6\" relative-x=\"51.6\" relative-y=\"51.6\" color=\"#F4F3F2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 1.2 ) );
	object.setSpaceLength( MxNumberTenths( 1.2 ) );
	object.setDefaultX( MxNumberTenths( 51.7 ) );
	object.setDefaultY( MxNumberTenths( 51.7 ) );
	object.setRelativeX( MxNumberTenths( 51.7 ) );
	object.setRelativeY( MxNumberTenths( 51.7 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dotted\" dash-length=\"1.2\" space-length=\"1.2\" default-x=\"51.7\" default-y=\"51.7\" relative-x=\"51.7\" relative-y=\"51.7\" color=\"#F5F6F5F4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 1.3 ) );
	object.setSpaceLength( MxNumberTenths( 1.3 ) );
	object.setDefaultX( MxNumberTenths( 51.8 ) );
	object.setDefaultY( MxNumberTenths( 51.8 ) );
	object.setRelativeX( MxNumberTenths( 51.8 ) );
	object.setRelativeY( MxNumberTenths( 51.8 ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"wavy\" dash-length=\"1.3\" space-length=\"1.3\" default-x=\"51.8\" default-y=\"51.8\" relative-x=\"51.8\" relative-y=\"51.8\" color=\"#F8F7F6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 1.4 ) );
	object.setSpaceLength( MxNumberTenths( 1.4 ) );
	object.setDefaultX( MxNumberTenths( 51.9 ) );
	object.setDefaultY( MxNumberTenths( 51.9 ) );
	object.setRelativeX( MxNumberTenths( 51.9 ) );
	object.setRelativeY( MxNumberTenths( 51.9 ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" line-type=\"solid\" dash-length=\"1.4\" space-length=\"1.4\" default-x=\"51.9\" default-y=\"51.9\" relative-x=\"51.9\" relative-y=\"51.9\" color=\"#F9FAF9F8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 1.5 ) );
	object.setSpaceLength( MxNumberTenths( 1.5 ) );
	object.setDefaultX( MxNumberTenths( 52 ) );
	object.setDefaultY( MxNumberTenths( 52 ) );
	object.setRelativeX( MxNumberTenths( 52 ) );
	object.setRelativeY( MxNumberTenths( 52 ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" line-type=\"dashed\" dash-length=\"1.5\" space-length=\"1.5\" default-x=\"52\" default-y=\"52\" relative-x=\"52\" relative-y=\"52\" color=\"#FCFBFA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 1.6 ) );
	object.setSpaceLength( MxNumberTenths( 1.6 ) );
	object.setDefaultX( MxNumberTenths( 52.1 ) );
	object.setDefaultY( MxNumberTenths( 52.1 ) );
	object.setRelativeX( MxNumberTenths( 52.1 ) );
	object.setRelativeY( MxNumberTenths( 52.1 ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" dash-length=\"1.6\" space-length=\"1.6\" default-x=\"52.1\" default-y=\"52.1\" relative-x=\"52.1\" relative-y=\"52.1\" color=\"#FDFEFDFC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 1.7 ) );
	object.setSpaceLength( MxNumberTenths( 1.7 ) );
	object.setDefaultX( MxNumberTenths( 52.2 ) );
	object.setDefaultY( MxNumberTenths( 52.2 ) );
	object.setRelativeX( MxNumberTenths( 52.2 ) );
	object.setRelativeY( MxNumberTenths( 52.2 ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" space-length=\"1.7\" default-x=\"52.2\" default-y=\"52.2\" relative-x=\"52.2\" relative-y=\"52.2\" color=\"#00FFFE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 1.8 ) );
	object.setSpaceLength( MxNumberTenths( 1.8 ) );
	object.setDefaultX( MxNumberTenths( 52.3 ) );
	object.setDefaultY( MxNumberTenths( 52.3 ) );
	object.setRelativeX( MxNumberTenths( 52.3 ) );
	object.setRelativeY( MxNumberTenths( 52.3 ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" default-x=\"52.3\" default-y=\"52.3\" relative-x=\"52.3\" relative-y=\"52.3\" color=\"#01020100\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 1.9 ) );
	object.setSpaceLength( MxNumberTenths( 1.9 ) );
	object.setDefaultX( MxNumberTenths( 52.4 ) );
	object.setDefaultY( MxNumberTenths( 52.4 ) );
	object.setRelativeX( MxNumberTenths( 52.4 ) );
	object.setRelativeY( MxNumberTenths( 52.4 ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" default-y=\"52.4\" relative-x=\"52.4\" relative-y=\"52.4\" color=\"#040302\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 2 ) );
	object.setSpaceLength( MxNumberTenths( 2 ) );
	object.setDefaultX( MxNumberTenths( 52.5 ) );
	object.setDefaultY( MxNumberTenths( 52.5 ) );
	object.setRelativeX( MxNumberTenths( 52.5 ) );
	object.setRelativeY( MxNumberTenths( 52.5 ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" relative-x=\"52.5\" relative-y=\"52.5\" color=\"#05060504\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 2.1 ) );
	object.setSpaceLength( MxNumberTenths( 2.1 ) );
	object.setDefaultX( MxNumberTenths( 52.6 ) );
	object.setDefaultY( MxNumberTenths( 52.6 ) );
	object.setRelativeX( MxNumberTenths( 52.6 ) );
	object.setRelativeY( MxNumberTenths( 52.6 ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" line-type=\"wavy\" relative-y=\"52.6\" color=\"#080706\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 2.2 ) );
	object.setSpaceLength( MxNumberTenths( 2.2 ) );
	object.setDefaultX( MxNumberTenths( 52.7 ) );
	object.setDefaultY( MxNumberTenths( 52.7 ) );
	object.setRelativeX( MxNumberTenths( 52.7 ) );
	object.setRelativeY( MxNumberTenths( 52.7 ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" line-type=\"solid\" color=\"#090A0908\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 2.3 ) );
	object.setSpaceLength( MxNumberTenths( 2.3 ) );
	object.setDefaultX( MxNumberTenths( 52.8 ) );
	object.setDefaultY( MxNumberTenths( 52.8 ) );
	object.setRelativeX( MxNumberTenths( 52.8 ) );
	object.setRelativeY( MxNumberTenths( 52.8 ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dashed\" dash-length=\"2.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 2.4 ) );
	object.setSpaceLength( MxNumberTenths( 2.4 ) );
	object.setDefaultX( MxNumberTenths( 52.9 ) );
	object.setDefaultY( MxNumberTenths( 52.9 ) );
	object.setRelativeX( MxNumberTenths( 52.9 ) );
	object.setRelativeY( MxNumberTenths( 52.9 ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dotted\" dash-length=\"2.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 2.5 ) );
	object.setSpaceLength( MxNumberTenths( 2.5 ) );
	object.setDefaultX( MxNumberTenths( 53 ) );
	object.setDefaultY( MxNumberTenths( 53 ) );
	object.setRelativeX( MxNumberTenths( 53 ) );
	object.setRelativeY( MxNumberTenths( 53 ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" line-type=\"wavy\" dash-length=\"2.5\" space-length=\"2.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 2.6 ) );
	object.setSpaceLength( MxNumberTenths( 2.6 ) );
	object.setDefaultX( MxNumberTenths( 53.1 ) );
	object.setDefaultY( MxNumberTenths( 53.1 ) );
	object.setRelativeX( MxNumberTenths( 53.1 ) );
	object.setRelativeY( MxNumberTenths( 53.1 ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<wedge type=\"crescendo\" dash-length=\"2.6\" space-length=\"2.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 2.7 ) );
	object.setSpaceLength( MxNumberTenths( 2.7 ) );
	object.setDefaultX( MxNumberTenths( 53.2 ) );
	object.setDefaultY( MxNumberTenths( 53.2 ) );
	object.setRelativeX( MxNumberTenths( 53.2 ) );
	object.setRelativeY( MxNumberTenths( 53.2 ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" dash-length=\"2.7\" space-length=\"2.7\" default-x=\"53.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 2.8 ) );
	object.setSpaceLength( MxNumberTenths( 2.8 ) );
	object.setDefaultX( MxNumberTenths( 53.3 ) );
	object.setDefaultY( MxNumberTenths( 53.3 ) );
	object.setRelativeX( MxNumberTenths( 53.3 ) );
	object.setRelativeY( MxNumberTenths( 53.3 ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" dash-length=\"2.8\" space-length=\"2.8\" default-x=\"53.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 2.9 ) );
	object.setSpaceLength( MxNumberTenths( 2.9 ) );
	object.setDefaultX( MxNumberTenths( 53.4 ) );
	object.setDefaultY( MxNumberTenths( 53.4 ) );
	object.setRelativeX( MxNumberTenths( 53.4 ) );
	object.setRelativeY( MxNumberTenths( 53.4 ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" space-length=\"2.9\" default-x=\"53.4\" default-y=\"53.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 3 ) );
	object.setSpaceLength( MxNumberTenths( 3 ) );
	object.setDefaultX( MxNumberTenths( 53.5 ) );
	object.setDefaultY( MxNumberTenths( 53.5 ) );
	object.setRelativeX( MxNumberTenths( 53.5 ) );
	object.setRelativeY( MxNumberTenths( 53.5 ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" space-length=\"3\" default-x=\"53.5\" default-y=\"53.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 3.1 ) );
	object.setSpaceLength( MxNumberTenths( 3.1 ) );
	object.setDefaultX( MxNumberTenths( 53.6 ) );
	object.setDefaultY( MxNumberTenths( 53.6 ) );
	object.setRelativeX( MxNumberTenths( 53.6 ) );
	object.setRelativeY( MxNumberTenths( 53.6 ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dashed\" space-length=\"3.1\" default-x=\"53.6\" default-y=\"53.6\" relative-x=\"53.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 3.2 ) );
	object.setSpaceLength( MxNumberTenths( 3.2 ) );
	object.setDefaultX( MxNumberTenths( 53.7 ) );
	object.setDefaultY( MxNumberTenths( 53.7 ) );
	object.setRelativeX( MxNumberTenths( 53.7 ) );
	object.setRelativeY( MxNumberTenths( 53.7 ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" line-type=\"dotted\" default-x=\"53.7\" default-y=\"53.7\" relative-x=\"53.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 3.3 ) );
	object.setSpaceLength( MxNumberTenths( 3.3 ) );
	object.setDefaultX( MxNumberTenths( 53.8 ) );
	object.setDefaultY( MxNumberTenths( 53.8 ) );
	object.setRelativeX( MxNumberTenths( 53.8 ) );
	object.setRelativeY( MxNumberTenths( 53.8 ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<wedge type=\"crescendo\" line-type=\"wavy\" default-x=\"53.8\" default-y=\"53.8\" relative-x=\"53.8\" relative-y=\"53.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 3.4 ) );
	object.setSpaceLength( MxNumberTenths( 3.4 ) );
	object.setDefaultX( MxNumberTenths( 53.9 ) );
	object.setDefaultY( MxNumberTenths( 53.9 ) );
	object.setRelativeX( MxNumberTenths( 53.9 ) );
	object.setRelativeY( MxNumberTenths( 53.9 ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<wedge type=\"crescendo\" line-type=\"solid\" default-x=\"53.9\" default-y=\"53.9\" relative-x=\"53.9\" relative-y=\"53.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 3.5 ) );
	object.setSpaceLength( MxNumberTenths( 3.5 ) );
	object.setDefaultX( MxNumberTenths( 54 ) );
	object.setDefaultY( MxNumberTenths( 54 ) );
	object.setRelativeX( MxNumberTenths( 54 ) );
	object.setRelativeY( MxNumberTenths( 54 ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dashed\" dash-length=\"3.5\" default-y=\"54\" relative-x=\"54\" relative-y=\"54\" color=\"#242322\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 3.6 ) );
	object.setSpaceLength( MxNumberTenths( 3.6 ) );
	object.setDefaultX( MxNumberTenths( 54.1 ) );
	object.setDefaultY( MxNumberTenths( 54.1 ) );
	object.setRelativeX( MxNumberTenths( 54.1 ) );
	object.setRelativeY( MxNumberTenths( 54.1 ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" dash-length=\"3.6\" default-y=\"54.1\" relative-x=\"54.1\" relative-y=\"54.1\" color=\"#25262524\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 3.7 ) );
	object.setSpaceLength( MxNumberTenths( 3.7 ) );
	object.setDefaultX( MxNumberTenths( 54.2 ) );
	object.setDefaultY( MxNumberTenths( 54.2 ) );
	object.setRelativeX( MxNumberTenths( 54.2 ) );
	object.setRelativeY( MxNumberTenths( 54.2 ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" dash-length=\"3.7\" default-y=\"54.2\" relative-x=\"54.2\" relative-y=\"54.2\" color=\"#282726\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 3.8 ) );
	object.setSpaceLength( MxNumberTenths( 3.8 ) );
	object.setDefaultX( MxNumberTenths( 54.3 ) );
	object.setDefaultY( MxNumberTenths( 54.3 ) );
	object.setRelativeX( MxNumberTenths( 54.3 ) );
	object.setRelativeY( MxNumberTenths( 54.3 ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" dash-length=\"3.8\" relative-x=\"54.3\" relative-y=\"54.3\" color=\"#292A2928\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 3.9 ) );
	object.setSpaceLength( MxNumberTenths( 3.9 ) );
	object.setDefaultX( MxNumberTenths( 54.4 ) );
	object.setDefaultY( MxNumberTenths( 54.4 ) );
	object.setRelativeX( MxNumberTenths( 54.4 ) );
	object.setRelativeY( MxNumberTenths( 54.4 ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" dash-length=\"3.9\" space-length=\"3.9\" relative-x=\"54.4\" relative-y=\"54.4\" color=\"#2C2B2A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 4 ) );
	object.setSpaceLength( MxNumberTenths( 4 ) );
	object.setDefaultX( MxNumberTenths( 54.5 ) );
	object.setDefaultY( MxNumberTenths( 54.5 ) );
	object.setRelativeX( MxNumberTenths( 54.5 ) );
	object.setRelativeY( MxNumberTenths( 54.5 ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" dash-length=\"4\" space-length=\"4\" relative-x=\"54.5\" relative-y=\"54.5\" color=\"#2D2E2D2C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 4.1 ) );
	object.setSpaceLength( MxNumberTenths( 4.1 ) );
	object.setDefaultX( MxNumberTenths( 54.6 ) );
	object.setDefaultY( MxNumberTenths( 54.6 ) );
	object.setRelativeX( MxNumberTenths( 54.6 ) );
	object.setRelativeY( MxNumberTenths( 54.6 ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" line-type=\"wavy\" space-length=\"4.1\" relative-y=\"54.6\" color=\"#302F2E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 4.2 ) );
	object.setSpaceLength( MxNumberTenths( 4.2 ) );
	object.setDefaultX( MxNumberTenths( 54.7 ) );
	object.setDefaultY( MxNumberTenths( 54.7 ) );
	object.setRelativeX( MxNumberTenths( 54.7 ) );
	object.setRelativeY( MxNumberTenths( 54.7 ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" line-type=\"solid\" space-length=\"4.2\" relative-y=\"54.7\" color=\"#31323130\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 4.3 ) );
	object.setSpaceLength( MxNumberTenths( 4.3 ) );
	object.setDefaultX( MxNumberTenths( 54.8 ) );
	object.setDefaultY( MxNumberTenths( 54.8 ) );
	object.setRelativeX( MxNumberTenths( 54.8 ) );
	object.setRelativeY( MxNumberTenths( 54.8 ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dashed\" space-length=\"4.3\" default-x=\"54.8\" relative-y=\"54.8\" color=\"#343332\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 4.4 ) );
	object.setSpaceLength( MxNumberTenths( 4.4 ) );
	object.setDefaultX( MxNumberTenths( 54.9 ) );
	object.setDefaultY( MxNumberTenths( 54.9 ) );
	object.setRelativeX( MxNumberTenths( 54.9 ) );
	object.setRelativeY( MxNumberTenths( 54.9 ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" line-type=\"dotted\" space-length=\"4.4\" default-x=\"54.9\" color=\"#35363534\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 4.5 ) );
	object.setSpaceLength( MxNumberTenths( 4.5 ) );
	object.setDefaultX( MxNumberTenths( 55 ) );
	object.setDefaultY( MxNumberTenths( 55 ) );
	object.setRelativeX( MxNumberTenths( 55 ) );
	object.setRelativeY( MxNumberTenths( 55 ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" line-type=\"wavy\" space-length=\"4.5\" default-x=\"55\" color=\"#383736\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 4.6 ) );
	object.setSpaceLength( MxNumberTenths( 4.6 ) );
	object.setDefaultX( MxNumberTenths( 55.1 ) );
	object.setDefaultY( MxNumberTenths( 55.1 ) );
	object.setRelativeX( MxNumberTenths( 55.1 ) );
	object.setRelativeY( MxNumberTenths( 55.1 ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" default-x=\"55.1\" color=\"#393A3938\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 4.7 ) );
	object.setSpaceLength( MxNumberTenths( 4.7 ) );
	object.setDefaultX( MxNumberTenths( 55.2 ) );
	object.setDefaultY( MxNumberTenths( 55.2 ) );
	object.setRelativeX( MxNumberTenths( 55.2 ) );
	object.setRelativeY( MxNumberTenths( 55.2 ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" dash-length=\"4.7\" default-x=\"55.2\" default-y=\"55.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 4.8 ) );
	object.setSpaceLength( MxNumberTenths( 4.8 ) );
	object.setDefaultX( MxNumberTenths( 55.3 ) );
	object.setDefaultY( MxNumberTenths( 55.3 ) );
	object.setRelativeX( MxNumberTenths( 55.3 ) );
	object.setRelativeY( MxNumberTenths( 55.3 ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" dash-length=\"4.8\" default-x=\"55.3\" default-y=\"55.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 4.9 ) );
	object.setSpaceLength( MxNumberTenths( 4.9 ) );
	object.setDefaultX( MxNumberTenths( 55.4 ) );
	object.setDefaultY( MxNumberTenths( 55.4 ) );
	object.setRelativeX( MxNumberTenths( 55.4 ) );
	object.setRelativeY( MxNumberTenths( 55.4 ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" dash-length=\"4.9\" default-x=\"55.4\" default-y=\"55.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 5 ) );
	object.setSpaceLength( MxNumberTenths( 5 ) );
	object.setDefaultX( MxNumberTenths( 55.5 ) );
	object.setDefaultY( MxNumberTenths( 55.5 ) );
	object.setRelativeX( MxNumberTenths( 55.5 ) );
	object.setRelativeY( MxNumberTenths( 55.5 ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<wedge type=\"crescendo\" dash-length=\"5\" default-x=\"55.5\" default-y=\"55.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 5.1 ) );
	object.setSpaceLength( MxNumberTenths( 5.1 ) );
	object.setDefaultX( MxNumberTenths( 55.6 ) );
	object.setDefaultY( MxNumberTenths( 55.6 ) );
	object.setRelativeX( MxNumberTenths( 55.6 ) );
	object.setRelativeY( MxNumberTenths( 55.6 ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" line-type=\"dashed\" dash-length=\"5.1\" default-y=\"55.6\" relative-x=\"55.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 5.2 ) );
	object.setSpaceLength( MxNumberTenths( 5.2 ) );
	object.setDefaultX( MxNumberTenths( 55.7 ) );
	object.setDefaultY( MxNumberTenths( 55.7 ) );
	object.setRelativeX( MxNumberTenths( 55.7 ) );
	object.setRelativeY( MxNumberTenths( 55.7 ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" line-type=\"dotted\" dash-length=\"5.2\" default-y=\"55.7\" relative-x=\"55.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 5.3 ) );
	object.setSpaceLength( MxNumberTenths( 5.3 ) );
	object.setDefaultX( MxNumberTenths( 55.8 ) );
	object.setDefaultY( MxNumberTenths( 55.8 ) );
	object.setRelativeX( MxNumberTenths( 55.8 ) );
	object.setRelativeY( MxNumberTenths( 55.8 ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"wavy\" space-length=\"5.3\" default-y=\"55.8\" relative-x=\"55.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 5.4 ) );
	object.setSpaceLength( MxNumberTenths( 5.4 ) );
	object.setDefaultX( MxNumberTenths( 55.9 ) );
	object.setDefaultY( MxNumberTenths( 55.9 ) );
	object.setRelativeX( MxNumberTenths( 55.9 ) );
	object.setRelativeY( MxNumberTenths( 55.9 ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"solid\" space-length=\"5.4\" default-y=\"55.9\" relative-x=\"55.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 5.5 ) );
	object.setSpaceLength( MxNumberTenths( 5.5 ) );
	object.setDefaultX( MxNumberTenths( 56 ) );
	object.setDefaultY( MxNumberTenths( 56 ) );
	object.setRelativeX( MxNumberTenths( 56 ) );
	object.setRelativeY( MxNumberTenths( 56 ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dashed\" space-length=\"5.5\" default-y=\"56\" relative-x=\"56\" relative-y=\"56\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 5.6 ) );
	object.setSpaceLength( MxNumberTenths( 5.6 ) );
	object.setDefaultX( MxNumberTenths( 56.1 ) );
	object.setDefaultY( MxNumberTenths( 56.1 ) );
	object.setRelativeX( MxNumberTenths( 56.1 ) );
	object.setRelativeY( MxNumberTenths( 56.1 ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" space-length=\"5.6\" relative-x=\"56.1\" relative-y=\"56.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 5.7 ) );
	object.setSpaceLength( MxNumberTenths( 5.7 ) );
	object.setDefaultX( MxNumberTenths( 56.2 ) );
	object.setDefaultY( MxNumberTenths( 56.2 ) );
	object.setRelativeX( MxNumberTenths( 56.2 ) );
	object.setRelativeY( MxNumberTenths( 56.2 ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<wedge type=\"crescendo\" space-length=\"5.7\" relative-x=\"56.2\" relative-y=\"56.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 5.8 ) );
	object.setSpaceLength( MxNumberTenths( 5.8 ) );
	object.setDefaultX( MxNumberTenths( 56.3 ) );
	object.setDefaultY( MxNumberTenths( 56.3 ) );
	object.setRelativeX( MxNumberTenths( 56.3 ) );
	object.setRelativeY( MxNumberTenths( 56.3 ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<wedge type=\"crescendo\" space-length=\"5.8\" relative-x=\"56.3\" relative-y=\"56.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 5.9 ) );
	object.setSpaceLength( MxNumberTenths( 5.9 ) );
	object.setDefaultX( MxNumberTenths( 56.4 ) );
	object.setDefaultY( MxNumberTenths( 56.4 ) );
	object.setRelativeX( MxNumberTenths( 56.4 ) );
	object.setRelativeY( MxNumberTenths( 56.4 ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" dash-length=\"5.9\" space-length=\"5.9\" default-x=\"56.4\" relative-x=\"56.4\" relative-y=\"56.4\" color=\"#545352\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 6 ) );
	object.setSpaceLength( MxNumberTenths( 6 ) );
	object.setDefaultX( MxNumberTenths( 56.5 ) );
	object.setDefaultY( MxNumberTenths( 56.5 ) );
	object.setRelativeX( MxNumberTenths( 56.5 ) );
	object.setRelativeY( MxNumberTenths( 56.5 ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" dash-length=\"6\" default-x=\"56.5\" relative-x=\"56.5\" relative-y=\"56.5\" color=\"#55565554\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 6.1 ) );
	object.setSpaceLength( MxNumberTenths( 6.1 ) );
	object.setDefaultX( MxNumberTenths( 56.6 ) );
	object.setDefaultY( MxNumberTenths( 56.6 ) );
	object.setRelativeX( MxNumberTenths( 56.6 ) );
	object.setRelativeY( MxNumberTenths( 56.6 ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"wavy\" dash-length=\"6.1\" default-x=\"56.6\" relative-y=\"56.6\" color=\"#585756\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 6.2 ) );
	object.setSpaceLength( MxNumberTenths( 6.2 ) );
	object.setDefaultX( MxNumberTenths( 56.7 ) );
	object.setDefaultY( MxNumberTenths( 56.7 ) );
	object.setRelativeX( MxNumberTenths( 56.7 ) );
	object.setRelativeY( MxNumberTenths( 56.7 ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" line-type=\"solid\" dash-length=\"6.2\" default-x=\"56.7\" relative-y=\"56.7\" color=\"#595A5958\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 6.3 ) );
	object.setSpaceLength( MxNumberTenths( 6.3 ) );
	object.setDefaultX( MxNumberTenths( 56.8 ) );
	object.setDefaultY( MxNumberTenths( 56.8 ) );
	object.setRelativeX( MxNumberTenths( 56.8 ) );
	object.setRelativeY( MxNumberTenths( 56.8 ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" line-type=\"dashed\" dash-length=\"6.3\" default-x=\"56.8\" relative-y=\"56.8\" color=\"#5C5B5A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 6.4 ) );
	object.setSpaceLength( MxNumberTenths( 6.4 ) );
	object.setDefaultX( MxNumberTenths( 56.9 ) );
	object.setDefaultY( MxNumberTenths( 56.9 ) );
	object.setRelativeX( MxNumberTenths( 56.9 ) );
	object.setRelativeY( MxNumberTenths( 56.9 ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" line-type=\"dotted\" dash-length=\"6.4\" default-x=\"56.9\" relative-y=\"56.9\" color=\"#5D5E5D5C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 6.5 ) );
	object.setSpaceLength( MxNumberTenths( 6.5 ) );
	object.setDefaultX( MxNumberTenths( 57 ) );
	object.setDefaultY( MxNumberTenths( 57 ) );
	object.setRelativeX( MxNumberTenths( 57 ) );
	object.setRelativeY( MxNumberTenths( 57 ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" line-type=\"wavy\" default-x=\"57\" default-y=\"57\" relative-y=\"57\" color=\"#605F5E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 6.6 ) );
	object.setSpaceLength( MxNumberTenths( 6.6 ) );
	object.setDefaultX( MxNumberTenths( 57.1 ) );
	object.setDefaultY( MxNumberTenths( 57.1 ) );
	object.setRelativeX( MxNumberTenths( 57.1 ) );
	object.setRelativeY( MxNumberTenths( 57.1 ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" default-x=\"57.1\" default-y=\"57.1\" color=\"#61626160\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 6.7 ) );
	object.setSpaceLength( MxNumberTenths( 6.7 ) );
	object.setDefaultX( MxNumberTenths( 57.2 ) );
	object.setDefaultY( MxNumberTenths( 57.2 ) );
	object.setRelativeX( MxNumberTenths( 57.2 ) );
	object.setRelativeY( MxNumberTenths( 57.2 ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" space-length=\"6.7\" default-y=\"57.2\" color=\"#646362\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 6.8 ) );
	object.setSpaceLength( MxNumberTenths( 6.8 ) );
	object.setDefaultX( MxNumberTenths( 57.3 ) );
	object.setDefaultY( MxNumberTenths( 57.3 ) );
	object.setRelativeX( MxNumberTenths( 57.3 ) );
	object.setRelativeY( MxNumberTenths( 57.3 ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" space-length=\"6.8\" default-y=\"57.3\" color=\"#65666564\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 6.9 ) );
	object.setSpaceLength( MxNumberTenths( 6.9 ) );
	object.setDefaultX( MxNumberTenths( 57.4 ) );
	object.setDefaultY( MxNumberTenths( 57.4 ) );
	object.setRelativeX( MxNumberTenths( 57.4 ) );
	object.setRelativeY( MxNumberTenths( 57.4 ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" space-length=\"6.9\" default-y=\"57.4\" color=\"#686766\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 7 ) );
	object.setSpaceLength( MxNumberTenths( 7 ) );
	object.setDefaultX( MxNumberTenths( 57.5 ) );
	object.setDefaultY( MxNumberTenths( 57.5 ) );
	object.setRelativeX( MxNumberTenths( 57.5 ) );
	object.setRelativeY( MxNumberTenths( 57.5 ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" space-length=\"7\" default-y=\"57.5\" color=\"#696A6968\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 7.1 ) );
	object.setSpaceLength( MxNumberTenths( 7.1 ) );
	object.setDefaultX( MxNumberTenths( 57.6 ) );
	object.setDefaultY( MxNumberTenths( 57.6 ) );
	object.setRelativeX( MxNumberTenths( 57.6 ) );
	object.setRelativeY( MxNumberTenths( 57.6 ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dashed\" dash-length=\"7.1\" space-length=\"7.1\" default-y=\"57.6\" relative-x=\"57.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 7.2 ) );
	object.setSpaceLength( MxNumberTenths( 7.2 ) );
	object.setDefaultX( MxNumberTenths( 57.7 ) );
	object.setDefaultY( MxNumberTenths( 57.7 ) );
	object.setRelativeX( MxNumberTenths( 57.7 ) );
	object.setRelativeY( MxNumberTenths( 57.7 ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dotted\" dash-length=\"7.2\" space-length=\"7.2\" default-y=\"57.7\" relative-x=\"57.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 7.3 ) );
	object.setSpaceLength( MxNumberTenths( 7.3 ) );
	object.setDefaultX( MxNumberTenths( 57.8 ) );
	object.setDefaultY( MxNumberTenths( 57.8 ) );
	object.setRelativeX( MxNumberTenths( 57.8 ) );
	object.setRelativeY( MxNumberTenths( 57.8 ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" line-type=\"wavy\" dash-length=\"7.3\" space-length=\"7.3\" default-y=\"57.8\" relative-x=\"57.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 7.4 ) );
	object.setSpaceLength( MxNumberTenths( 7.4 ) );
	object.setDefaultX( MxNumberTenths( 57.9 ) );
	object.setDefaultY( MxNumberTenths( 57.9 ) );
	object.setRelativeX( MxNumberTenths( 57.9 ) );
	object.setRelativeY( MxNumberTenths( 57.9 ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<wedge type=\"crescendo\" line-type=\"solid\" dash-length=\"7.4\" relative-x=\"57.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 7.5 ) );
	object.setSpaceLength( MxNumberTenths( 7.5 ) );
	object.setDefaultX( MxNumberTenths( 58 ) );
	object.setDefaultY( MxNumberTenths( 58 ) );
	object.setRelativeX( MxNumberTenths( 58 ) );
	object.setRelativeY( MxNumberTenths( 58 ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" line-type=\"dashed\" dash-length=\"7.5\" default-x=\"58\" relative-x=\"58\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 7.6 ) );
	object.setSpaceLength( MxNumberTenths( 7.6 ) );
	object.setDefaultX( MxNumberTenths( 58.1 ) );
	object.setDefaultY( MxNumberTenths( 58.1 ) );
	object.setRelativeX( MxNumberTenths( 58.1 ) );
	object.setRelativeY( MxNumberTenths( 58.1 ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" dash-length=\"7.6\" default-x=\"58.1\" relative-x=\"58.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 7.7 ) );
	object.setSpaceLength( MxNumberTenths( 7.7 ) );
	object.setDefaultX( MxNumberTenths( 58.2 ) );
	object.setDefaultY( MxNumberTenths( 58.2 ) );
	object.setRelativeX( MxNumberTenths( 58.2 ) );
	object.setRelativeY( MxNumberTenths( 58.2 ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" default-x=\"58.2\" relative-x=\"58.2\" relative-y=\"58.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 7.8 ) );
	object.setSpaceLength( MxNumberTenths( 7.8 ) );
	object.setDefaultX( MxNumberTenths( 58.3 ) );
	object.setDefaultY( MxNumberTenths( 58.3 ) );
	object.setRelativeX( MxNumberTenths( 58.3 ) );
	object.setRelativeY( MxNumberTenths( 58.3 ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" default-x=\"58.3\" relative-x=\"58.3\" relative-y=\"58.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 7.9 ) );
	object.setSpaceLength( MxNumberTenths( 7.9 ) );
	object.setDefaultX( MxNumberTenths( 58.4 ) );
	object.setDefaultY( MxNumberTenths( 58.4 ) );
	object.setRelativeX( MxNumberTenths( 58.4 ) );
	object.setRelativeY( MxNumberTenths( 58.4 ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" default-x=\"58.4\" relative-x=\"58.4\" relative-y=\"58.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 8 ) );
	object.setSpaceLength( MxNumberTenths( 8 ) );
	object.setDefaultX( MxNumberTenths( 58.5 ) );
	object.setDefaultY( MxNumberTenths( 58.5 ) );
	object.setRelativeX( MxNumberTenths( 58.5 ) );
	object.setRelativeY( MxNumberTenths( 58.5 ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" default-x=\"58.5\" relative-x=\"58.5\" relative-y=\"58.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 8.1 ) );
	object.setSpaceLength( MxNumberTenths( 8.1 ) );
	object.setDefaultX( MxNumberTenths( 58.6 ) );
	object.setDefaultY( MxNumberTenths( 58.6 ) );
	object.setRelativeX( MxNumberTenths( 58.6 ) );
	object.setRelativeY( MxNumberTenths( 58.6 ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<wedge type=\"crescendo\" line-type=\"wavy\" space-length=\"8.1\" default-x=\"58.6\" relative-y=\"58.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 8.2 ) );
	object.setSpaceLength( MxNumberTenths( 8.2 ) );
	object.setDefaultX( MxNumberTenths( 58.7 ) );
	object.setDefaultY( MxNumberTenths( 58.7 ) );
	object.setRelativeX( MxNumberTenths( 58.7 ) );
	object.setRelativeY( MxNumberTenths( 58.7 ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<wedge type=\"crescendo\" line-type=\"solid\" space-length=\"8.2\" default-x=\"58.7\" relative-y=\"58.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 8.3 ) );
	object.setSpaceLength( MxNumberTenths( 8.3 ) );
	object.setDefaultX( MxNumberTenths( 58.8 ) );
	object.setDefaultY( MxNumberTenths( 58.8 ) );
	object.setRelativeX( MxNumberTenths( 58.8 ) );
	object.setRelativeY( MxNumberTenths( 58.8 ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dashed\" dash-length=\"8.3\" space-length=\"8.3\" default-y=\"58.8\" relative-y=\"58.8\" color=\"#848382\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 8.4 ) );
	object.setSpaceLength( MxNumberTenths( 8.4 ) );
	object.setDefaultX( MxNumberTenths( 58.9 ) );
	object.setDefaultY( MxNumberTenths( 58.9 ) );
	object.setRelativeX( MxNumberTenths( 58.9 ) );
	object.setRelativeY( MxNumberTenths( 58.9 ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dotted\" dash-length=\"8.4\" space-length=\"8.4\" default-y=\"58.9\" relative-y=\"58.9\" color=\"#85868584\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 8.5 ) );
	object.setSpaceLength( MxNumberTenths( 8.5 ) );
	object.setDefaultX( MxNumberTenths( 59 ) );
	object.setDefaultY( MxNumberTenths( 59 ) );
	object.setRelativeX( MxNumberTenths( 59 ) );
	object.setRelativeY( MxNumberTenths( 59 ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"wavy\" dash-length=\"8.5\" space-length=\"8.5\" default-y=\"59\" relative-y=\"59\" color=\"#888786\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 8.6 ) );
	object.setSpaceLength( MxNumberTenths( 8.6 ) );
	object.setDefaultX( MxNumberTenths( 59.1 ) );
	object.setDefaultY( MxNumberTenths( 59.1 ) );
	object.setRelativeX( MxNumberTenths( 59.1 ) );
	object.setRelativeY( MxNumberTenths( 59.1 ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" dash-length=\"8.6\" space-length=\"8.6\" default-y=\"59.1\" relative-y=\"59.1\" color=\"#898A8988\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 8.7 ) );
	object.setSpaceLength( MxNumberTenths( 8.7 ) );
	object.setDefaultX( MxNumberTenths( 59.2 ) );
	object.setDefaultY( MxNumberTenths( 59.2 ) );
	object.setRelativeX( MxNumberTenths( 59.2 ) );
	object.setRelativeY( MxNumberTenths( 59.2 ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" dash-length=\"8.7\" space-length=\"8.7\" default-y=\"59.2\" relative-y=\"59.2\" color=\"#8C8B8A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 8.8 ) );
	object.setSpaceLength( MxNumberTenths( 8.8 ) );
	object.setDefaultX( MxNumberTenths( 59.3 ) );
	object.setDefaultY( MxNumberTenths( 59.3 ) );
	object.setRelativeX( MxNumberTenths( 59.3 ) );
	object.setRelativeY( MxNumberTenths( 59.3 ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" dash-length=\"8.8\" default-y=\"59.3\" color=\"#8D8E8D8C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 8.9 ) );
	object.setSpaceLength( MxNumberTenths( 8.9 ) );
	object.setDefaultX( MxNumberTenths( 59.4 ) );
	object.setDefaultY( MxNumberTenths( 59.4 ) );
	object.setRelativeX( MxNumberTenths( 59.4 ) );
	object.setRelativeY( MxNumberTenths( 59.4 ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" default-y=\"59.4\" color=\"#908F8E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 9 ) );
	object.setSpaceLength( MxNumberTenths( 9 ) );
	object.setDefaultX( MxNumberTenths( 59.5 ) );
	object.setDefaultY( MxNumberTenths( 59.5 ) );
	object.setRelativeX( MxNumberTenths( 59.5 ) );
	object.setRelativeY( MxNumberTenths( 59.5 ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" default-y=\"59.5\" color=\"#91929190\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 9.1 ) );
	object.setSpaceLength( MxNumberTenths( 9.1 ) );
	object.setDefaultX( MxNumberTenths( 59.6 ) );
	object.setDefaultY( MxNumberTenths( 59.6 ) );
	object.setRelativeX( MxNumberTenths( 59.6 ) );
	object.setRelativeY( MxNumberTenths( 59.6 ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" line-type=\"dashed\" default-x=\"59.6\" default-y=\"59.6\" relative-x=\"59.6\" color=\"#949392\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 9.2 ) );
	object.setSpaceLength( MxNumberTenths( 9.2 ) );
	object.setDefaultX( MxNumberTenths( 59.7 ) );
	object.setDefaultY( MxNumberTenths( 59.7 ) );
	object.setRelativeX( MxNumberTenths( 59.7 ) );
	object.setRelativeY( MxNumberTenths( 59.7 ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" line-type=\"dotted\" default-x=\"59.7\" relative-x=\"59.7\" color=\"#95969594\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 9.3 ) );
	object.setSpaceLength( MxNumberTenths( 9.3 ) );
	object.setDefaultX( MxNumberTenths( 59.8 ) );
	object.setDefaultY( MxNumberTenths( 59.8 ) );
	object.setRelativeX( MxNumberTenths( 59.8 ) );
	object.setRelativeY( MxNumberTenths( 59.8 ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" line-type=\"wavy\" default-x=\"59.8\" relative-x=\"59.8\" color=\"#989796\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 9.4 ) );
	object.setSpaceLength( MxNumberTenths( 9.4 ) );
	object.setDefaultX( MxNumberTenths( 59.9 ) );
	object.setDefaultY( MxNumberTenths( 59.9 ) );
	object.setRelativeX( MxNumberTenths( 59.9 ) );
	object.setRelativeY( MxNumberTenths( 59.9 ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" line-type=\"solid\" default-x=\"59.9\" relative-x=\"59.9\" color=\"#999A9998\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 9.5 ) );
	object.setSpaceLength( MxNumberTenths( 9.5 ) );
	object.setDefaultX( MxNumberTenths( 60 ) );
	object.setDefaultY( MxNumberTenths( 60 ) );
	object.setRelativeX( MxNumberTenths( 60 ) );
	object.setRelativeY( MxNumberTenths( 60 ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dashed\" dash-length=\"9.5\" space-length=\"9.5\" default-x=\"60\" relative-x=\"60\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 9.6 ) );
	object.setSpaceLength( MxNumberTenths( 9.6 ) );
	object.setDefaultX( MxNumberTenths( 60.1 ) );
	object.setDefaultY( MxNumberTenths( 60.1 ) );
	object.setRelativeX( MxNumberTenths( 60.1 ) );
	object.setRelativeY( MxNumberTenths( 60.1 ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" dash-length=\"9.6\" space-length=\"9.6\" default-x=\"60.1\" relative-x=\"60.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 9.7 ) );
	object.setSpaceLength( MxNumberTenths( 9.7 ) );
	object.setDefaultX( MxNumberTenths( 60.2 ) );
	object.setDefaultY( MxNumberTenths( 60.2 ) );
	object.setRelativeX( MxNumberTenths( 60.2 ) );
	object.setRelativeY( MxNumberTenths( 60.2 ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" dash-length=\"9.7\" space-length=\"9.7\" default-x=\"60.2\" relative-x=\"60.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 9.8 ) );
	object.setSpaceLength( MxNumberTenths( 9.8 ) );
	object.setDefaultX( MxNumberTenths( 60.3 ) );
	object.setDefaultY( MxNumberTenths( 60.3 ) );
	object.setRelativeX( MxNumberTenths( 60.3 ) );
	object.setRelativeY( MxNumberTenths( 60.3 ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<wedge type=\"crescendo\" dash-length=\"9.8\" space-length=\"9.8\" default-x=\"60.3\" relative-x=\"60.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 9.9 ) );
	object.setSpaceLength( MxNumberTenths( 9.9 ) );
	object.setDefaultX( MxNumberTenths( 60.4 ) );
	object.setDefaultY( MxNumberTenths( 60.4 ) );
	object.setRelativeX( MxNumberTenths( 60.4 ) );
	object.setRelativeY( MxNumberTenths( 60.4 ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" dash-length=\"9.9\" space-length=\"9.9\" relative-x=\"60.4\" relative-y=\"60.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 10 ) );
	object.setSpaceLength( MxNumberTenths( 10 ) );
	object.setDefaultX( MxNumberTenths( 60.5 ) );
	object.setDefaultY( MxNumberTenths( 60.5 ) );
	object.setRelativeX( MxNumberTenths( 60.5 ) );
	object.setRelativeY( MxNumberTenths( 60.5 ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" niente=\"yes\" dash-length=\"10\" space-length=\"10\" relative-x=\"60.5\" relative-y=\"60.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 10.1 ) );
	object.setSpaceLength( MxNumberTenths( 10.1 ) );
	object.setDefaultX( MxNumberTenths( 60.6 ) );
	object.setDefaultY( MxNumberTenths( 60.6 ) );
	object.setRelativeX( MxNumberTenths( 60.6 ) );
	object.setRelativeY( MxNumberTenths( 60.6 ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"wavy\" space-length=\"10.1\" default-y=\"60.6\" relative-y=\"60.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 10.2 ) );
	object.setSpaceLength( MxNumberTenths( 10.2 ) );
	object.setDefaultX( MxNumberTenths( 60.7 ) );
	object.setDefaultY( MxNumberTenths( 60.7 ) );
	object.setRelativeX( MxNumberTenths( 60.7 ) );
	object.setRelativeY( MxNumberTenths( 60.7 ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" line-type=\"solid\" default-y=\"60.7\" relative-y=\"60.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 10.3 ) );
	object.setSpaceLength( MxNumberTenths( 10.3 ) );
	object.setDefaultX( MxNumberTenths( 60.8 ) );
	object.setDefaultY( MxNumberTenths( 60.8 ) );
	object.setRelativeX( MxNumberTenths( 60.8 ) );
	object.setRelativeY( MxNumberTenths( 60.8 ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" line-type=\"dashed\" default-y=\"60.8\" relative-y=\"60.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
	object.setDashLength( MxNumberTenths( 10.4 ) );
	object.setSpaceLength( MxNumberTenths( 10.4 ) );
	object.setDefaultX( MxNumberTenths( 60.9 ) );
	object.setDefaultY( MxNumberTenths( 60.9 ) );
	object.setRelativeX( MxNumberTenths( 60.9 ) );
	object.setRelativeY( MxNumberTenths( 60.9 ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" line-type=\"dotted\" default-y=\"60.9\" relative-y=\"60.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 10.5 ) );
	object.setSpaceLength( MxNumberTenths( 10.5 ) );
	object.setDefaultX( MxNumberTenths( 61 ) );
	object.setDefaultY( MxNumberTenths( 61 ) );
	object.setRelativeX( MxNumberTenths( 61 ) );
	object.setRelativeY( MxNumberTenths( 61 ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<wedge type=\"crescendo\" line-type=\"wavy\" default-y=\"61\" relative-y=\"61\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 10.6 ) );
	object.setSpaceLength( MxNumberTenths( 10.6 ) );
	object.setDefaultX( MxNumberTenths( 61.1 ) );
	object.setDefaultY( MxNumberTenths( 61.1 ) );
	object.setRelativeX( MxNumberTenths( 61.1 ) );
	object.setRelativeY( MxNumberTenths( 61.1 ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<wedge type=\"crescendo\" default-y=\"61.1\" relative-y=\"61.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 10.7 ) );
	object.setSpaceLength( MxNumberTenths( 10.7 ) );
	object.setDefaultX( MxNumberTenths( 61.2 ) );
	object.setDefaultY( MxNumberTenths( 61.2 ) );
	object.setRelativeX( MxNumberTenths( 61.2 ) );
	object.setRelativeY( MxNumberTenths( 61.2 ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" dash-length=\"10.7\" default-x=\"61.2\" default-y=\"61.2\" relative-y=\"61.2\" color=\"#B4B3B2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEeWedge )
{
	MxEeWedge object;
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
	object.setDashLength( MxNumberTenths( 10.8 ) );
	object.setSpaceLength( MxNumberTenths( 10.8 ) );
	object.setDefaultX( MxNumberTenths( 61.3 ) );
	object.setDefaultY( MxNumberTenths( 61.3 ) );
	object.setRelativeX( MxNumberTenths( 61.3 ) );
	object.setRelativeY( MxNumberTenths( 61.3 ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<wedge type=\"crescendo\" number=\"1\" spread=\"1\" niente=\"yes\" dash-length=\"10.8\" default-x=\"61.3\" default-y=\"61.3\" relative-y=\"61.3\" color=\"#B5B6B5B4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::wavy ) );
	object.setDashLength( MxNumberTenths( 10.9 ) );
	object.setSpaceLength( MxNumberTenths( 10.9 ) );
	object.setDefaultX( MxNumberTenths( 61.4 ) );
	object.setDefaultY( MxNumberTenths( 61.4 ) );
	object.setRelativeX( MxNumberTenths( 61.4 ) );
	object.setRelativeY( MxNumberTenths( 61.4 ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<wedge type=\"crescendo\" spread=\"1\" niente=\"yes\" dash-length=\"10.9\" space-length=\"10.9\" default-x=\"61.4\" default-y=\"61.4\" relative-y=\"61.4\" color=\"#B8B7B6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::solid ) );
	object.setDashLength( MxNumberTenths( 11 ) );
	object.setSpaceLength( MxNumberTenths( 11 ) );
	object.setDefaultX( MxNumberTenths( 61.5 ) );
	object.setDefaultY( MxNumberTenths( 61.5 ) );
	object.setRelativeX( MxNumberTenths( 61.5 ) );
	object.setRelativeY( MxNumberTenths( 61.5 ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<wedge type=\"crescendo\" niente=\"yes\" dash-length=\"11\" space-length=\"11\" default-x=\"61.5\" color=\"#B9BAB9B8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEeWedge )
{
	MxEeWedge object;
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
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setDashLength( MxNumberTenths( 11.1 ) );
	object.setSpaceLength( MxNumberTenths( 11.1 ) );
	object.setDefaultX( MxNumberTenths( 61.6 ) );
	object.setDefaultY( MxNumberTenths( 61.6 ) );
	object.setRelativeX( MxNumberTenths( 61.6 ) );
	object.setRelativeY( MxNumberTenths( 61.6 ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<wedge type=\"crescendo\"/>";
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


