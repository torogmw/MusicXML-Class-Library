/** *******************************************************
  * 
  * MxAttrGrpDashedFormattingTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpDashedFormatting.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	std::string expected = "MxAttrGrpDashedFormatting";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	std::string expected = "dashed-formatting";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	std::string expected = "The dashed-formatting entity represents the length of dashes and spaces in a dashed line. Both the dash-length and space-length attributes are represented in tenths. These attributes are ignored if the corresponding line-type attribute is not dashed.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDashLength0, MxAttrGrpDashedFormatting )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpDashedFormatting object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength1, MxAttrGrpDashedFormatting )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpDashedFormatting object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDashLengthRequired0, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired1, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDashLengthPresent0, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
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
TEST( getIsSpaceLengthPresent1, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
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

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	std::string expected;
	std::string actual;
	object.setDashLength( MxNumberTenths( 1.1 ) );
	object.setSpaceLength( MxNumberTenths( 1.1 ) );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	expected = "dash-length=\"1.1\" space-length=\"1.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	std::string expected;
	std::string actual;
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setDashLength( MxNumberTenths( 1.2 ) );
	object.setSpaceLength( MxNumberTenths( 1.2 ) );
	expected = "space-length=\"1.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	std::string expected;
	std::string actual;
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setDashLength( MxNumberTenths( 1.3 ) );
	object.setSpaceLength( MxNumberTenths( 1.3 ) );
	expected = "dash-length=\"1.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	std::string expected;
	std::string actual;
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setDashLength( MxNumberTenths( 1.4 ) );
	object.setSpaceLength( MxNumberTenths( 1.4 ) );
	expected = "";
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsDashLengthDefaultDefined, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDashLengthDefaultValue, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxAttrGrpDashedFormatting )
{
	MxAttrGrpDashedFormatting object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


