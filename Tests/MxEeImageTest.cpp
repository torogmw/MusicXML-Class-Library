/** *******************************************************
  * 
  * MxEeImageTest.cpp
  * Created: 2014-12-05 16:47:05
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeImage.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeImage )
{
	MxEeImage object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeImage )
{
	MxEeImage object;
	std::string expected = ( XsAnyUri(  ) ).toString();
	std::string actual = object.getSource().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeImage )
{
	MxEeImage object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeImage )
{
	MxEeImage object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeImage )
{
	MxEeImage object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeImage )
{
	MxEeImage object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEeImage )
{
	MxEeImage object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEeImage )
{
	MxEeImage object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEeImage )
{
	MxEeImage object;
	std::string expected = ( MxEnumValignImage(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeImage )
{
	MxEeImage object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeImage )
{
	MxEeImage object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeImage )
{
	MxEeImage object;
	std::string expected = "MxEeImage";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeImage )
{
	MxEeImage object;
	std::string expected = "image";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeImage )
{
	MxEeImage object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setSource0, MxEeImage )
{
	XsAnyUri value1( "http://matthewjamesbriggs.com" );
	XsAnyUri value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxEeImage object;
	object.setSource( value1 );
	XsAnyUri expected = value1;
	XsAnyUri actual = object.getSource();
	CHECK_EQUAL( expected, actual )
	object.setSource( value2 );
	expected = value2;
	actual = object.getSource();
	CHECK_EQUAL( expected, actual )
}
TEST( setType1, MxEeImage )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEeImage object;
	object.setType( value1 );
	XsToken expected = value1;
	XsToken actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxEeImage )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeImage object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxEeImage )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeImage object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxEeImage )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeImage object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxEeImage )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeImage object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign6, MxEeImage )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxEeImage object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign7, MxEeImage )
{
	MxEnumValignImage value1( lexicon::enums::ValignImage::bottom );
	MxEnumValignImage value2( lexicon::enums::ValignImage::middle );
	CHECK( ( value1 != value2 ) )
	MxEeImage object;
	object.setValign( value1 );
	MxEnumValignImage expected = value1;
	MxEnumValignImage actual = object.getValign();
	CHECK_EQUAL( expected, actual )
	object.setValign( value2 );
	expected = value2;
	actual = object.getValign();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsSourceRequired0, MxEeImage )
{
	MxEeImage object;
	bool expected = true;
	bool actual = object.getIsSourceRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypeRequired1, MxEeImage )
{
	MxEeImage object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired6, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired7, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsSourcePresent0, MxEeImage )
{
	MxEeImage object;
	bool expected = true;
	bool actual = object.getIsSourcePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsSourcePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsSourcePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypePresent1, MxEeImage )
{
	MxEeImage object;
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
TEST( getIsDefaultXPresent2, MxEeImage )
{
	MxEeImage object;
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
TEST( getIsDefaultYPresent3, MxEeImage )
{
	MxEeImage object;
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
TEST( getIsRelativeXPresent4, MxEeImage )
{
	MxEeImage object;
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
TEST( getIsRelativeYPresent5, MxEeImage )
{
	MxEeImage object;
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
TEST( getIsHalignPresent6, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsHalignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsHalignPresent( true );
	expected = true;
	actual = object.getIsHalignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsHalignPresent( false );
	expected = false;
	actual = object.getIsHalignPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignPresent7, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsValignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsValignPresent( true );
	expected = true;
	actual = object.getIsValignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsValignPresent( false );
	expected = false;
	actual = object.getIsValignPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsSourceDefaultDefined, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsSourceDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypeDefaultDefined, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxEeImage )
{
	MxEeImage object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getSourceDefaultValue, MxEeImage )
{
	MxEeImage object;
	XsAnyUri expected;
	XsAnyUri actual = object.getSourceDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTypeDefaultValue, MxEeImage )
{
	MxEeImage object;
	XsToken expected;
	XsToken actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEeImage )
{
	MxEeImage object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEeImage )
{
	MxEeImage object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEeImage )
{
	MxEeImage object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEeImage )
{
	MxEeImage object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxEeImage )
{
	MxEeImage object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxEeImage )
{
	MxEeImage object;
	MxEnumValignImage expected;
	MxEnumValignImage actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 142.5 ) );
	object.setDefaultY( MxNumberTenths( 142.5 ) );
	object.setRelativeX( MxNumberTenths( 142.5 ) );
	object.setRelativeY( MxNumberTenths( 142.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"142.5\" default-y=\"142.5\" relative-x=\"142.5\" relative-y=\"142.5\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 142.6 ) );
	object.setDefaultY( MxNumberTenths( 142.6 ) );
	object.setRelativeX( MxNumberTenths( 142.6 ) );
	object.setRelativeY( MxNumberTenths( 142.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"142.6\" default-y=\"142.6\" relative-x=\"142.6\" relative-y=\"142.6\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 142.7 ) );
	object.setDefaultY( MxNumberTenths( 142.7 ) );
	object.setRelativeX( MxNumberTenths( 142.7 ) );
	object.setRelativeY( MxNumberTenths( 142.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"142.7\" default-y=\"142.7\" relative-x=\"142.7\" relative-y=\"142.7\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 142.8 ) );
	object.setDefaultY( MxNumberTenths( 142.8 ) );
	object.setRelativeX( MxNumberTenths( 142.8 ) );
	object.setRelativeY( MxNumberTenths( 142.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-y=\"142.8\" relative-x=\"142.8\" relative-y=\"142.8\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 142.9 ) );
	object.setDefaultY( MxNumberTenths( 142.9 ) );
	object.setRelativeX( MxNumberTenths( 142.9 ) );
	object.setRelativeY( MxNumberTenths( 142.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" relative-x=\"142.9\" relative-y=\"142.9\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 143 ) );
	object.setDefaultY( MxNumberTenths( 143 ) );
	object.setRelativeX( MxNumberTenths( 143 ) );
	object.setRelativeY( MxNumberTenths( 143 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" relative-y=\"143\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 143.1 ) );
	object.setDefaultY( MxNumberTenths( 143.1 ) );
	object.setRelativeX( MxNumberTenths( 143.1 ) );
	object.setRelativeY( MxNumberTenths( 143.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"143.1\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 143.2 ) );
	object.setDefaultY( MxNumberTenths( 143.2 ) );
	object.setRelativeX( MxNumberTenths( 143.2 ) );
	object.setRelativeY( MxNumberTenths( 143.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"143.2\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 143.3 ) );
	object.setDefaultY( MxNumberTenths( 143.3 ) );
	object.setRelativeX( MxNumberTenths( 143.3 ) );
	object.setRelativeY( MxNumberTenths( 143.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"143.3\" default-y=\"143.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 143.4 ) );
	object.setDefaultY( MxNumberTenths( 143.4 ) );
	object.setRelativeX( MxNumberTenths( 143.4 ) );
	object.setRelativeY( MxNumberTenths( 143.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-y=\"143.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 143.5 ) );
	object.setDefaultY( MxNumberTenths( 143.5 ) );
	object.setRelativeX( MxNumberTenths( 143.5 ) );
	object.setRelativeY( MxNumberTenths( 143.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-y=\"143.5\" relative-x=\"143.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 143.6 ) );
	object.setDefaultY( MxNumberTenths( 143.6 ) );
	object.setRelativeX( MxNumberTenths( 143.6 ) );
	object.setRelativeY( MxNumberTenths( 143.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-y=\"143.6\" relative-x=\"143.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 143.7 ) );
	object.setDefaultY( MxNumberTenths( 143.7 ) );
	object.setRelativeX( MxNumberTenths( 143.7 ) );
	object.setRelativeY( MxNumberTenths( 143.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"143.7\" relative-x=\"143.7\" relative-y=\"143.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 143.8 ) );
	object.setDefaultY( MxNumberTenths( 143.8 ) );
	object.setRelativeX( MxNumberTenths( 143.8 ) );
	object.setRelativeY( MxNumberTenths( 143.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"143.8\" relative-x=\"143.8\" relative-y=\"143.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 143.9 ) );
	object.setDefaultY( MxNumberTenths( 143.9 ) );
	object.setRelativeX( MxNumberTenths( 143.9 ) );
	object.setRelativeY( MxNumberTenths( 143.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"143.9\" relative-x=\"143.9\" relative-y=\"143.9\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 144 ) );
	object.setDefaultY( MxNumberTenths( 144 ) );
	object.setRelativeX( MxNumberTenths( 144 ) );
	object.setRelativeY( MxNumberTenths( 144 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" relative-y=\"144\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 144.1 ) );
	object.setDefaultY( MxNumberTenths( 144.1 ) );
	object.setRelativeX( MxNumberTenths( 144.1 ) );
	object.setRelativeY( MxNumberTenths( 144.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-y=\"144.1\" relative-y=\"144.1\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 144.2 ) );
	object.setDefaultY( MxNumberTenths( 144.2 ) );
	object.setRelativeX( MxNumberTenths( 144.2 ) );
	object.setRelativeY( MxNumberTenths( 144.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-y=\"144.2\" relative-y=\"144.2\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 144.3 ) );
	object.setDefaultY( MxNumberTenths( 144.3 ) );
	object.setRelativeX( MxNumberTenths( 144.3 ) );
	object.setRelativeY( MxNumberTenths( 144.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"144.3\" default-y=\"144.3\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 144.4 ) );
	object.setDefaultY( MxNumberTenths( 144.4 ) );
	object.setRelativeX( MxNumberTenths( 144.4 ) );
	object.setRelativeY( MxNumberTenths( 144.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"144.4\" default-y=\"144.4\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 144.5 ) );
	object.setDefaultY( MxNumberTenths( 144.5 ) );
	object.setRelativeX( MxNumberTenths( 144.5 ) );
	object.setRelativeY( MxNumberTenths( 144.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"144.5\" relative-x=\"144.5\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 144.6 ) );
	object.setDefaultY( MxNumberTenths( 144.6 ) );
	object.setRelativeX( MxNumberTenths( 144.6 ) );
	object.setRelativeY( MxNumberTenths( 144.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" relative-x=\"144.6\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 144.7 ) );
	object.setDefaultY( MxNumberTenths( 144.7 ) );
	object.setRelativeX( MxNumberTenths( 144.7 ) );
	object.setRelativeY( MxNumberTenths( 144.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" relative-x=\"144.7\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 144.8 ) );
	object.setDefaultY( MxNumberTenths( 144.8 ) );
	object.setRelativeX( MxNumberTenths( 144.8 ) );
	object.setRelativeY( MxNumberTenths( 144.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" relative-x=\"144.8\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 144.9 ) );
	object.setDefaultY( MxNumberTenths( 144.9 ) );
	object.setRelativeX( MxNumberTenths( 144.9 ) );
	object.setRelativeY( MxNumberTenths( 144.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"144.9\" default-y=\"144.9\" relative-x=\"144.9\" relative-y=\"144.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 145 ) );
	object.setDefaultY( MxNumberTenths( 145 ) );
	object.setRelativeX( MxNumberTenths( 145 ) );
	object.setRelativeY( MxNumberTenths( 145 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"145\" default-y=\"145\" relative-y=\"145\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 145.1 ) );
	object.setDefaultY( MxNumberTenths( 145.1 ) );
	object.setRelativeX( MxNumberTenths( 145.1 ) );
	object.setRelativeY( MxNumberTenths( 145.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"145.1\" default-y=\"145.1\" relative-y=\"145.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 145.2 ) );
	object.setDefaultY( MxNumberTenths( 145.2 ) );
	object.setRelativeX( MxNumberTenths( 145.2 ) );
	object.setRelativeY( MxNumberTenths( 145.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-y=\"145.2\" relative-y=\"145.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 145.3 ) );
	object.setDefaultY( MxNumberTenths( 145.3 ) );
	object.setRelativeX( MxNumberTenths( 145.3 ) );
	object.setRelativeY( MxNumberTenths( 145.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" relative-y=\"145.3\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 145.4 ) );
	object.setDefaultY( MxNumberTenths( 145.4 ) );
	object.setRelativeX( MxNumberTenths( 145.4 ) );
	object.setRelativeY( MxNumberTenths( 145.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" relative-y=\"145.4\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 145.5 ) );
	object.setDefaultY( MxNumberTenths( 145.5 ) );
	object.setRelativeX( MxNumberTenths( 145.5 ) );
	object.setRelativeY( MxNumberTenths( 145.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"145.5\" relative-x=\"145.5\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 145.6 ) );
	object.setDefaultY( MxNumberTenths( 145.6 ) );
	object.setRelativeX( MxNumberTenths( 145.6 ) );
	object.setRelativeY( MxNumberTenths( 145.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"145.6\" relative-x=\"145.6\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 145.7 ) );
	object.setDefaultY( MxNumberTenths( 145.7 ) );
	object.setRelativeX( MxNumberTenths( 145.7 ) );
	object.setRelativeY( MxNumberTenths( 145.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"145.7\" default-y=\"145.7\" relative-x=\"145.7\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 145.8 ) );
	object.setDefaultY( MxNumberTenths( 145.8 ) );
	object.setRelativeX( MxNumberTenths( 145.8 ) );
	object.setRelativeY( MxNumberTenths( 145.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-y=\"145.8\" relative-x=\"145.8\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 145.9 ) );
	object.setDefaultY( MxNumberTenths( 145.9 ) );
	object.setRelativeX( MxNumberTenths( 145.9 ) );
	object.setRelativeY( MxNumberTenths( 145.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-y=\"145.9\" relative-x=\"145.9\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 146 ) );
	object.setDefaultY( MxNumberTenths( 146 ) );
	object.setRelativeX( MxNumberTenths( 146 ) );
	object.setRelativeY( MxNumberTenths( 146 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-y=\"146\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 146.1 ) );
	object.setDefaultY( MxNumberTenths( 146.1 ) );
	object.setRelativeX( MxNumberTenths( 146.1 ) );
	object.setRelativeY( MxNumberTenths( 146.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"146.1\" relative-y=\"146.1\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 146.2 ) );
	object.setDefaultY( MxNumberTenths( 146.2 ) );
	object.setRelativeX( MxNumberTenths( 146.2 ) );
	object.setRelativeY( MxNumberTenths( 146.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"146.2\" relative-y=\"146.2\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 146.3 ) );
	object.setDefaultY( MxNumberTenths( 146.3 ) );
	object.setRelativeX( MxNumberTenths( 146.3 ) );
	object.setRelativeY( MxNumberTenths( 146.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"146.3\" relative-y=\"146.3\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 146.4 ) );
	object.setDefaultY( MxNumberTenths( 146.4 ) );
	object.setRelativeX( MxNumberTenths( 146.4 ) );
	object.setRelativeY( MxNumberTenths( 146.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" relative-y=\"146.4\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 146.5 ) );
	object.setDefaultY( MxNumberTenths( 146.5 ) );
	object.setRelativeX( MxNumberTenths( 146.5 ) );
	object.setRelativeY( MxNumberTenths( 146.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-y=\"146.5\" relative-x=\"146.5\" relative-y=\"146.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 146.6 ) );
	object.setDefaultY( MxNumberTenths( 146.6 ) );
	object.setRelativeX( MxNumberTenths( 146.6 ) );
	object.setRelativeY( MxNumberTenths( 146.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-y=\"146.6\" relative-x=\"146.6\" relative-y=\"146.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 146.7 ) );
	object.setDefaultY( MxNumberTenths( 146.7 ) );
	object.setRelativeX( MxNumberTenths( 146.7 ) );
	object.setRelativeY( MxNumberTenths( 146.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"146.7\" default-y=\"146.7\" relative-x=\"146.7\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 146.8 ) );
	object.setDefaultY( MxNumberTenths( 146.8 ) );
	object.setRelativeX( MxNumberTenths( 146.8 ) );
	object.setRelativeY( MxNumberTenths( 146.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"146.8\" default-y=\"146.8\" relative-x=\"146.8\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 146.9 ) );
	object.setDefaultY( MxNumberTenths( 146.9 ) );
	object.setRelativeX( MxNumberTenths( 146.9 ) );
	object.setRelativeY( MxNumberTenths( 146.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"146.9\" relative-x=\"146.9\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 147 ) );
	object.setDefaultY( MxNumberTenths( 147 ) );
	object.setRelativeX( MxNumberTenths( 147 ) );
	object.setRelativeY( MxNumberTenths( 147 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 147.1 ) );
	object.setDefaultY( MxNumberTenths( 147.1 ) );
	object.setRelativeX( MxNumberTenths( 147.1 ) );
	object.setRelativeY( MxNumberTenths( 147.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 147.2 ) );
	object.setDefaultY( MxNumberTenths( 147.2 ) );
	object.setRelativeX( MxNumberTenths( 147.2 ) );
	object.setRelativeY( MxNumberTenths( 147.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 147.3 ) );
	object.setDefaultY( MxNumberTenths( 147.3 ) );
	object.setRelativeX( MxNumberTenths( 147.3 ) );
	object.setRelativeY( MxNumberTenths( 147.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"147.3\" default-y=\"147.3\" relative-y=\"147.3\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 147.4 ) );
	object.setDefaultY( MxNumberTenths( 147.4 ) );
	object.setRelativeX( MxNumberTenths( 147.4 ) );
	object.setRelativeY( MxNumberTenths( 147.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"147.4\" default-y=\"147.4\" relative-y=\"147.4\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 147.5 ) );
	object.setDefaultY( MxNumberTenths( 147.5 ) );
	object.setRelativeX( MxNumberTenths( 147.5 ) );
	object.setRelativeY( MxNumberTenths( 147.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"147.5\" default-y=\"147.5\" relative-x=\"147.5\" relative-y=\"147.5\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 147.6 ) );
	object.setDefaultY( MxNumberTenths( 147.6 ) );
	object.setRelativeX( MxNumberTenths( 147.6 ) );
	object.setRelativeY( MxNumberTenths( 147.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-y=\"147.6\" relative-x=\"147.6\" relative-y=\"147.6\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 147.7 ) );
	object.setDefaultY( MxNumberTenths( 147.7 ) );
	object.setRelativeX( MxNumberTenths( 147.7 ) );
	object.setRelativeY( MxNumberTenths( 147.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" relative-x=\"147.7\" relative-y=\"147.7\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 147.8 ) );
	object.setDefaultY( MxNumberTenths( 147.8 ) );
	object.setRelativeX( MxNumberTenths( 147.8 ) );
	object.setRelativeY( MxNumberTenths( 147.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" relative-x=\"147.8\" relative-y=\"147.8\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 147.9 ) );
	object.setDefaultY( MxNumberTenths( 147.9 ) );
	object.setRelativeX( MxNumberTenths( 147.9 ) );
	object.setRelativeY( MxNumberTenths( 147.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"147.9\" relative-x=\"147.9\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 148 ) );
	object.setDefaultY( MxNumberTenths( 148 ) );
	object.setRelativeX( MxNumberTenths( 148 ) );
	object.setRelativeY( MxNumberTenths( 148 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"148\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 148.1 ) );
	object.setDefaultY( MxNumberTenths( 148.1 ) );
	object.setRelativeX( MxNumberTenths( 148.1 ) );
	object.setRelativeY( MxNumberTenths( 148.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"148.1\" default-y=\"148.1\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 148.2 ) );
	object.setDefaultY( MxNumberTenths( 148.2 ) );
	object.setRelativeX( MxNumberTenths( 148.2 ) );
	object.setRelativeY( MxNumberTenths( 148.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-y=\"148.2\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 148.3 ) );
	object.setDefaultY( MxNumberTenths( 148.3 ) );
	object.setRelativeX( MxNumberTenths( 148.3 ) );
	object.setRelativeY( MxNumberTenths( 148.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-y=\"148.3\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 148.4 ) );
	object.setDefaultY( MxNumberTenths( 148.4 ) );
	object.setRelativeX( MxNumberTenths( 148.4 ) );
	object.setRelativeY( MxNumberTenths( 148.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-y=\"148.4\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 148.5 ) );
	object.setDefaultY( MxNumberTenths( 148.5 ) );
	object.setRelativeX( MxNumberTenths( 148.5 ) );
	object.setRelativeY( MxNumberTenths( 148.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"148.5\" relative-x=\"148.5\" relative-y=\"148.5\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 148.6 ) );
	object.setDefaultY( MxNumberTenths( 148.6 ) );
	object.setRelativeX( MxNumberTenths( 148.6 ) );
	object.setRelativeY( MxNumberTenths( 148.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"148.6\" relative-x=\"148.6\" relative-y=\"148.6\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 148.7 ) );
	object.setDefaultY( MxNumberTenths( 148.7 ) );
	object.setRelativeX( MxNumberTenths( 148.7 ) );
	object.setRelativeY( MxNumberTenths( 148.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"148.7\" relative-x=\"148.7\" relative-y=\"148.7\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 148.8 ) );
	object.setDefaultY( MxNumberTenths( 148.8 ) );
	object.setRelativeX( MxNumberTenths( 148.8 ) );
	object.setRelativeY( MxNumberTenths( 148.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" relative-x=\"148.8\" relative-y=\"148.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 148.9 ) );
	object.setDefaultY( MxNumberTenths( 148.9 ) );
	object.setRelativeX( MxNumberTenths( 148.9 ) );
	object.setRelativeY( MxNumberTenths( 148.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-y=\"148.9\" relative-x=\"148.9\" relative-y=\"148.9\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 149 ) );
	object.setDefaultY( MxNumberTenths( 149 ) );
	object.setRelativeX( MxNumberTenths( 149 ) );
	object.setRelativeY( MxNumberTenths( 149 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-y=\"149\" relative-y=\"149\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 149.1 ) );
	object.setDefaultY( MxNumberTenths( 149.1 ) );
	object.setRelativeX( MxNumberTenths( 149.1 ) );
	object.setRelativeY( MxNumberTenths( 149.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"149.1\" default-y=\"149.1\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 149.2 ) );
	object.setDefaultY( MxNumberTenths( 149.2 ) );
	object.setRelativeX( MxNumberTenths( 149.2 ) );
	object.setRelativeY( MxNumberTenths( 149.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"149.2\" default-y=\"149.2\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 149.3 ) );
	object.setDefaultY( MxNumberTenths( 149.3 ) );
	object.setRelativeX( MxNumberTenths( 149.3 ) );
	object.setRelativeY( MxNumberTenths( 149.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"149.3\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 149.4 ) );
	object.setDefaultY( MxNumberTenths( 149.4 ) );
	object.setRelativeX( MxNumberTenths( 149.4 ) );
	object.setRelativeY( MxNumberTenths( 149.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 149.5 ) );
	object.setDefaultY( MxNumberTenths( 149.5 ) );
	object.setRelativeX( MxNumberTenths( 149.5 ) );
	object.setRelativeY( MxNumberTenths( 149.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" relative-x=\"149.5\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 149.6 ) );
	object.setDefaultY( MxNumberTenths( 149.6 ) );
	object.setRelativeX( MxNumberTenths( 149.6 ) );
	object.setRelativeY( MxNumberTenths( 149.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" relative-x=\"149.6\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 149.7 ) );
	object.setDefaultY( MxNumberTenths( 149.7 ) );
	object.setRelativeX( MxNumberTenths( 149.7 ) );
	object.setRelativeY( MxNumberTenths( 149.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"149.7\" default-y=\"149.7\" relative-x=\"149.7\" relative-y=\"149.7\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 149.8 ) );
	object.setDefaultY( MxNumberTenths( 149.8 ) );
	object.setRelativeX( MxNumberTenths( 149.8 ) );
	object.setRelativeY( MxNumberTenths( 149.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"149.8\" default-y=\"149.8\" relative-x=\"149.8\" relative-y=\"149.8\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 149.9 ) );
	object.setDefaultY( MxNumberTenths( 149.9 ) );
	object.setRelativeX( MxNumberTenths( 149.9 ) );
	object.setRelativeY( MxNumberTenths( 149.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"149.9\" default-y=\"149.9\" relative-x=\"149.9\" relative-y=\"149.9\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 150 ) );
	object.setDefaultY( MxNumberTenths( 150 ) );
	object.setRelativeX( MxNumberTenths( 150 ) );
	object.setRelativeY( MxNumberTenths( 150 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-y=\"150\" relative-y=\"150\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 150.1 ) );
	object.setDefaultY( MxNumberTenths( 150.1 ) );
	object.setRelativeX( MxNumberTenths( 150.1 ) );
	object.setRelativeY( MxNumberTenths( 150.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" relative-y=\"150.1\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 150.2 ) );
	object.setDefaultY( MxNumberTenths( 150.2 ) );
	object.setRelativeX( MxNumberTenths( 150.2 ) );
	object.setRelativeY( MxNumberTenths( 150.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" relative-y=\"150.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 150.3 ) );
	object.setDefaultY( MxNumberTenths( 150.3 ) );
	object.setRelativeX( MxNumberTenths( 150.3 ) );
	object.setRelativeY( MxNumberTenths( 150.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"150.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 150.4 ) );
	object.setDefaultY( MxNumberTenths( 150.4 ) );
	object.setRelativeX( MxNumberTenths( 150.4 ) );
	object.setRelativeY( MxNumberTenths( 150.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"150.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 150.5 ) );
	object.setDefaultY( MxNumberTenths( 150.5 ) );
	object.setRelativeX( MxNumberTenths( 150.5 ) );
	object.setRelativeY( MxNumberTenths( 150.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"150.5\" default-y=\"150.5\" relative-x=\"150.5\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 150.6 ) );
	object.setDefaultY( MxNumberTenths( 150.6 ) );
	object.setRelativeX( MxNumberTenths( 150.6 ) );
	object.setRelativeY( MxNumberTenths( 150.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-y=\"150.6\" relative-x=\"150.6\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 150.7 ) );
	object.setDefaultY( MxNumberTenths( 150.7 ) );
	object.setRelativeX( MxNumberTenths( 150.7 ) );
	object.setRelativeY( MxNumberTenths( 150.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-y=\"150.7\" relative-x=\"150.7\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 150.8 ) );
	object.setDefaultY( MxNumberTenths( 150.8 ) );
	object.setRelativeX( MxNumberTenths( 150.8 ) );
	object.setRelativeY( MxNumberTenths( 150.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-y=\"150.8\" relative-x=\"150.8\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 150.9 ) );
	object.setDefaultY( MxNumberTenths( 150.9 ) );
	object.setRelativeX( MxNumberTenths( 150.9 ) );
	object.setRelativeY( MxNumberTenths( 150.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"150.9\" relative-x=\"150.9\" relative-y=\"150.9\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 151 ) );
	object.setDefaultY( MxNumberTenths( 151 ) );
	object.setRelativeX( MxNumberTenths( 151 ) );
	object.setRelativeY( MxNumberTenths( 151 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"151\" relative-y=\"151\" halign=\"right\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 151.1 ) );
	object.setDefaultY( MxNumberTenths( 151.1 ) );
	object.setRelativeX( MxNumberTenths( 151.1 ) );
	object.setRelativeY( MxNumberTenths( 151.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"151.1\" relative-y=\"151.1\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 151.2 ) );
	object.setDefaultY( MxNumberTenths( 151.2 ) );
	object.setRelativeX( MxNumberTenths( 151.2 ) );
	object.setRelativeY( MxNumberTenths( 151.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" relative-y=\"151.2\" halign=\"center\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 151.3 ) );
	object.setDefaultY( MxNumberTenths( 151.3 ) );
	object.setRelativeX( MxNumberTenths( 151.3 ) );
	object.setRelativeY( MxNumberTenths( 151.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-y=\"151.3\" relative-y=\"151.3\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 151.4 ) );
	object.setDefaultY( MxNumberTenths( 151.4 ) );
	object.setRelativeX( MxNumberTenths( 151.4 ) );
	object.setRelativeY( MxNumberTenths( 151.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-y=\"151.4\" relative-y=\"151.4\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 151.5 ) );
	object.setDefaultY( MxNumberTenths( 151.5 ) );
	object.setRelativeX( MxNumberTenths( 151.5 ) );
	object.setRelativeY( MxNumberTenths( 151.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"151.5\" default-y=\"151.5\" relative-x=\"151.5\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 151.6 ) );
	object.setDefaultY( MxNumberTenths( 151.6 ) );
	object.setRelativeX( MxNumberTenths( 151.6 ) );
	object.setRelativeY( MxNumberTenths( 151.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"151.6\" default-y=\"151.6\" relative-x=\"151.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 151.7 ) );
	object.setDefaultY( MxNumberTenths( 151.7 ) );
	object.setRelativeX( MxNumberTenths( 151.7 ) );
	object.setRelativeY( MxNumberTenths( 151.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"151.7\" relative-x=\"151.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 151.8 ) );
	object.setDefaultY( MxNumberTenths( 151.8 ) );
	object.setRelativeX( MxNumberTenths( 151.8 ) );
	object.setRelativeY( MxNumberTenths( 151.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" relative-x=\"151.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 151.9 ) );
	object.setDefaultY( MxNumberTenths( 151.9 ) );
	object.setRelativeX( MxNumberTenths( 151.9 ) );
	object.setRelativeY( MxNumberTenths( 151.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" relative-x=\"151.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( false );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 152 ) );
	object.setDefaultY( MxNumberTenths( 152 ) );
	object.setRelativeX( MxNumberTenths( 152 ) );
	object.setRelativeY( MxNumberTenths( 152 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 152.1 ) );
	object.setDefaultY( MxNumberTenths( 152.1 ) );
	object.setRelativeX( MxNumberTenths( 152.1 ) );
	object.setRelativeY( MxNumberTenths( 152.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-x=\"152.1\" default-y=\"152.1\" relative-y=\"152.1\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( false );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "DEF" ) );
	object.setType( XsToken( "DEF" ) );
	object.setDefaultX( MxNumberTenths( 152.2 ) );
	object.setDefaultY( MxNumberTenths( 152.2 ) );
	object.setRelativeX( MxNumberTenths( 152.2 ) );
	object.setRelativeY( MxNumberTenths( 152.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<image source=\"DEF\" type=\"DEF\" default-x=\"152.2\" default-y=\"152.2\" relative-y=\"152.2\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "XYZ" ) );
	object.setType( XsToken( "XYZ" ) );
	object.setDefaultX( MxNumberTenths( 152.3 ) );
	object.setDefaultY( MxNumberTenths( 152.3 ) );
	object.setRelativeX( MxNumberTenths( 152.3 ) );
	object.setRelativeY( MxNumberTenths( 152.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<image source=\"XYZ\" type=\"XYZ\" default-x=\"152.3\" default-y=\"152.3\" relative-y=\"152.3\" halign=\"left\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEeImage )
{
	MxEeImage object;
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 152.4 ) );
	object.setDefaultY( MxNumberTenths( 152.4 ) );
	object.setRelativeX( MxNumberTenths( 152.4 ) );
	object.setRelativeY( MxNumberTenths( 152.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<image source=\"ABC\" type=\"ABC\" default-y=\"152.4\" relative-y=\"152.4\" halign=\"center\" valign=\"middle\"/>";
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


