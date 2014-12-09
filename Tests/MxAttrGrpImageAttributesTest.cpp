/** *******************************************************
  * 
  * MxAttrGrpImageAttributesTest.cpp
  * Created: 2014-11-28 19:17:16
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpImageAttributes.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = ( XsAnyUri(  ) ).toString();
	std::string actual = object.getSource().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues3, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues4, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues5, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues6, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues7, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = ( MxEnumValignImage(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = "MxAttrGrpImageAttributes";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = "image-attributes";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected = "The image-attributes group is used to include graphical images in a score. The required source attribute is the URL for the image file. The required type attribute is the MIME type for the image file format. Typical choices include application/postscript, image/gif, image/jpeg, image/png, and image/tiff.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setSource0, MxAttrGrpImageAttributes )
{
	XsAnyUri value1( "http://matthewjamesbriggs.com" );
	XsAnyUri value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpImageAttributes object;
	object.setSource( value1 );
	XsAnyUri expected = value1;
	XsAnyUri actual = object.getSource();
	CHECK_EQUAL( expected, actual )
	object.setSource( value2 );
	expected = value2;
	actual = object.getSource();
	CHECK_EQUAL( expected, actual )
}
TEST( setType1, MxAttrGrpImageAttributes )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpImageAttributes object;
	object.setType( value1 );
	XsToken expected = value1;
	XsToken actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxAttrGrpImageAttributes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpImageAttributes object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxAttrGrpImageAttributes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpImageAttributes object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxAttrGrpImageAttributes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpImageAttributes object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxAttrGrpImageAttributes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpImageAttributes object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign6, MxAttrGrpImageAttributes )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpImageAttributes object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign7, MxAttrGrpImageAttributes )
{
	MxEnumValignImage value1( lexicon::enums::ValignImage::bottom );
	MxEnumValignImage value2( lexicon::enums::ValignImage::middle );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpImageAttributes object;
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

TEST( getIsSourceRequired0, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = true;
	bool actual = object.getIsSourceRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypeRequired1, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired6, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired7, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsSourcePresent0, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
TEST( getIsTypePresent1, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
TEST( getIsDefaultXPresent2, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
TEST( getIsDefaultYPresent3, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
TEST( getIsRelativeXPresent4, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
TEST( getIsRelativeYPresent5, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
TEST( getIsHalignPresent6, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
TEST( getIsValignPresent7, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	std::string expected;
	std::string actual;
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 32.9 ) );
	object.setDefaultY( MxNumberTenths( 32.9 ) );
	object.setRelativeX( MxNumberTenths( 32.9 ) );
	object.setRelativeY( MxNumberTenths( 32.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"32.9\" default-y=\"32.9\" relative-x=\"32.9\" relative-y=\"32.9\" halign=\"center\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 33 ) );
	object.setDefaultY( MxNumberTenths( 33 ) );
	object.setRelativeX( MxNumberTenths( 33 ) );
	object.setRelativeY( MxNumberTenths( 33 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"33\" default-y=\"33\" relative-x=\"33\" relative-y=\"33\" halign=\"right\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 33.1 ) );
	object.setDefaultY( MxNumberTenths( 33.1 ) );
	object.setRelativeX( MxNumberTenths( 33.1 ) );
	object.setRelativeY( MxNumberTenths( 33.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"33.1\" default-y=\"33.1\" relative-x=\"33.1\" relative-y=\"33.1\" halign=\"left\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 33.2 ) );
	object.setDefaultY( MxNumberTenths( 33.2 ) );
	object.setRelativeX( MxNumberTenths( 33.2 ) );
	object.setRelativeY( MxNumberTenths( 33.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-y=\"33.2\" relative-x=\"33.2\" relative-y=\"33.2\" halign=\"center\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 33.3 ) );
	object.setDefaultY( MxNumberTenths( 33.3 ) );
	object.setRelativeX( MxNumberTenths( 33.3 ) );
	object.setRelativeY( MxNumberTenths( 33.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" relative-x=\"33.3\" relative-y=\"33.3\" halign=\"right\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 33.4 ) );
	object.setDefaultY( MxNumberTenths( 33.4 ) );
	object.setRelativeX( MxNumberTenths( 33.4 ) );
	object.setRelativeY( MxNumberTenths( 33.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" relative-y=\"33.4\" halign=\"left\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 33.5 ) );
	object.setDefaultY( MxNumberTenths( 33.5 ) );
	object.setRelativeX( MxNumberTenths( 33.5 ) );
	object.setRelativeY( MxNumberTenths( 33.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"33.5\" halign=\"center\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 33.6 ) );
	object.setDefaultY( MxNumberTenths( 33.6 ) );
	object.setRelativeX( MxNumberTenths( 33.6 ) );
	object.setRelativeY( MxNumberTenths( 33.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"33.6\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 33.7 ) );
	object.setDefaultY( MxNumberTenths( 33.7 ) );
	object.setRelativeX( MxNumberTenths( 33.7 ) );
	object.setRelativeY( MxNumberTenths( 33.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"33.7\" default-y=\"33.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 33.8 ) );
	object.setDefaultY( MxNumberTenths( 33.8 ) );
	object.setRelativeX( MxNumberTenths( 33.8 ) );
	object.setRelativeY( MxNumberTenths( 33.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-y=\"33.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 33.9 ) );
	object.setDefaultY( MxNumberTenths( 33.9 ) );
	object.setRelativeX( MxNumberTenths( 33.9 ) );
	object.setRelativeY( MxNumberTenths( 33.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-y=\"33.9\" relative-x=\"33.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 34 ) );
	object.setDefaultY( MxNumberTenths( 34 ) );
	object.setRelativeX( MxNumberTenths( 34 ) );
	object.setRelativeY( MxNumberTenths( 34 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-y=\"34\" relative-x=\"34\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 34.1 ) );
	object.setDefaultY( MxNumberTenths( 34.1 ) );
	object.setRelativeX( MxNumberTenths( 34.1 ) );
	object.setRelativeY( MxNumberTenths( 34.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"34.1\" relative-x=\"34.1\" relative-y=\"34.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 34.2 ) );
	object.setDefaultY( MxNumberTenths( 34.2 ) );
	object.setRelativeX( MxNumberTenths( 34.2 ) );
	object.setRelativeY( MxNumberTenths( 34.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"34.2\" relative-x=\"34.2\" relative-y=\"34.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 34.3 ) );
	object.setDefaultY( MxNumberTenths( 34.3 ) );
	object.setRelativeX( MxNumberTenths( 34.3 ) );
	object.setRelativeY( MxNumberTenths( 34.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"34.3\" relative-x=\"34.3\" relative-y=\"34.3\" halign=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 34.4 ) );
	object.setDefaultY( MxNumberTenths( 34.4 ) );
	object.setRelativeX( MxNumberTenths( 34.4 ) );
	object.setRelativeY( MxNumberTenths( 34.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" relative-y=\"34.4\" halign=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 34.5 ) );
	object.setDefaultY( MxNumberTenths( 34.5 ) );
	object.setRelativeX( MxNumberTenths( 34.5 ) );
	object.setRelativeY( MxNumberTenths( 34.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-y=\"34.5\" relative-y=\"34.5\" halign=\"right\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 34.6 ) );
	object.setDefaultY( MxNumberTenths( 34.6 ) );
	object.setRelativeX( MxNumberTenths( 34.6 ) );
	object.setRelativeY( MxNumberTenths( 34.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-y=\"34.6\" relative-y=\"34.6\" halign=\"left\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 34.7 ) );
	object.setDefaultY( MxNumberTenths( 34.7 ) );
	object.setRelativeX( MxNumberTenths( 34.7 ) );
	object.setRelativeY( MxNumberTenths( 34.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"34.7\" default-y=\"34.7\" halign=\"center\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 34.8 ) );
	object.setDefaultY( MxNumberTenths( 34.8 ) );
	object.setRelativeX( MxNumberTenths( 34.8 ) );
	object.setRelativeY( MxNumberTenths( 34.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"34.8\" default-y=\"34.8\" halign=\"right\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 34.9 ) );
	object.setDefaultY( MxNumberTenths( 34.9 ) );
	object.setRelativeX( MxNumberTenths( 34.9 ) );
	object.setRelativeY( MxNumberTenths( 34.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"34.9\" relative-x=\"34.9\" halign=\"left\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 35 ) );
	object.setDefaultY( MxNumberTenths( 35 ) );
	object.setRelativeX( MxNumberTenths( 35 ) );
	object.setRelativeY( MxNumberTenths( 35 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" relative-x=\"35\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 35.1 ) );
	object.setDefaultY( MxNumberTenths( 35.1 ) );
	object.setRelativeX( MxNumberTenths( 35.1 ) );
	object.setRelativeY( MxNumberTenths( 35.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" relative-x=\"35.1\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 35.2 ) );
	object.setDefaultY( MxNumberTenths( 35.2 ) );
	object.setRelativeX( MxNumberTenths( 35.2 ) );
	object.setRelativeY( MxNumberTenths( 35.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" relative-x=\"35.2\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 35.3 ) );
	object.setDefaultY( MxNumberTenths( 35.3 ) );
	object.setRelativeX( MxNumberTenths( 35.3 ) );
	object.setRelativeY( MxNumberTenths( 35.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"35.3\" default-y=\"35.3\" relative-x=\"35.3\" relative-y=\"35.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 35.4 ) );
	object.setDefaultY( MxNumberTenths( 35.4 ) );
	object.setRelativeX( MxNumberTenths( 35.4 ) );
	object.setRelativeY( MxNumberTenths( 35.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"35.4\" default-y=\"35.4\" relative-y=\"35.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 35.5 ) );
	object.setDefaultY( MxNumberTenths( 35.5 ) );
	object.setRelativeX( MxNumberTenths( 35.5 ) );
	object.setRelativeY( MxNumberTenths( 35.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"35.5\" default-y=\"35.5\" relative-y=\"35.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 35.6 ) );
	object.setDefaultY( MxNumberTenths( 35.6 ) );
	object.setRelativeX( MxNumberTenths( 35.6 ) );
	object.setRelativeY( MxNumberTenths( 35.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-y=\"35.6\" relative-y=\"35.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 35.7 ) );
	object.setDefaultY( MxNumberTenths( 35.7 ) );
	object.setRelativeX( MxNumberTenths( 35.7 ) );
	object.setRelativeY( MxNumberTenths( 35.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" relative-y=\"35.7\" halign=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 35.8 ) );
	object.setDefaultY( MxNumberTenths( 35.8 ) );
	object.setRelativeX( MxNumberTenths( 35.8 ) );
	object.setRelativeY( MxNumberTenths( 35.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" relative-y=\"35.8\" halign=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 35.9 ) );
	object.setDefaultY( MxNumberTenths( 35.9 ) );
	object.setRelativeX( MxNumberTenths( 35.9 ) );
	object.setRelativeY( MxNumberTenths( 35.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"35.9\" relative-x=\"35.9\" halign=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 36 ) );
	object.setDefaultY( MxNumberTenths( 36 ) );
	object.setRelativeX( MxNumberTenths( 36 ) );
	object.setRelativeY( MxNumberTenths( 36 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"36\" relative-x=\"36\" halign=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 36.1 ) );
	object.setDefaultY( MxNumberTenths( 36.1 ) );
	object.setRelativeX( MxNumberTenths( 36.1 ) );
	object.setRelativeY( MxNumberTenths( 36.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"36.1\" default-y=\"36.1\" relative-x=\"36.1\" halign=\"left\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 36.2 ) );
	object.setDefaultY( MxNumberTenths( 36.2 ) );
	object.setRelativeX( MxNumberTenths( 36.2 ) );
	object.setRelativeY( MxNumberTenths( 36.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-y=\"36.2\" relative-x=\"36.2\" halign=\"center\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 36.3 ) );
	object.setDefaultY( MxNumberTenths( 36.3 ) );
	object.setRelativeX( MxNumberTenths( 36.3 ) );
	object.setRelativeY( MxNumberTenths( 36.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-y=\"36.3\" relative-x=\"36.3\" halign=\"right\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 36.4 ) );
	object.setDefaultY( MxNumberTenths( 36.4 ) );
	object.setRelativeX( MxNumberTenths( 36.4 ) );
	object.setRelativeY( MxNumberTenths( 36.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-y=\"36.4\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 36.5 ) );
	object.setDefaultY( MxNumberTenths( 36.5 ) );
	object.setRelativeX( MxNumberTenths( 36.5 ) );
	object.setRelativeY( MxNumberTenths( 36.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"36.5\" relative-y=\"36.5\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 36.6 ) );
	object.setDefaultY( MxNumberTenths( 36.6 ) );
	object.setRelativeX( MxNumberTenths( 36.6 ) );
	object.setRelativeY( MxNumberTenths( 36.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"36.6\" relative-y=\"36.6\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 36.7 ) );
	object.setDefaultY( MxNumberTenths( 36.7 ) );
	object.setRelativeX( MxNumberTenths( 36.7 ) );
	object.setRelativeY( MxNumberTenths( 36.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"36.7\" relative-y=\"36.7\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 36.8 ) );
	object.setDefaultY( MxNumberTenths( 36.8 ) );
	object.setRelativeX( MxNumberTenths( 36.8 ) );
	object.setRelativeY( MxNumberTenths( 36.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" relative-y=\"36.8\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 36.9 ) );
	object.setDefaultY( MxNumberTenths( 36.9 ) );
	object.setRelativeX( MxNumberTenths( 36.9 ) );
	object.setRelativeY( MxNumberTenths( 36.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-y=\"36.9\" relative-x=\"36.9\" relative-y=\"36.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 37 ) );
	object.setDefaultY( MxNumberTenths( 37 ) );
	object.setRelativeX( MxNumberTenths( 37 ) );
	object.setRelativeY( MxNumberTenths( 37 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-y=\"37\" relative-x=\"37\" relative-y=\"37\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 37.1 ) );
	object.setDefaultY( MxNumberTenths( 37.1 ) );
	object.setRelativeX( MxNumberTenths( 37.1 ) );
	object.setRelativeY( MxNumberTenths( 37.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"37.1\" default-y=\"37.1\" relative-x=\"37.1\" halign=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 37.2 ) );
	object.setDefaultY( MxNumberTenths( 37.2 ) );
	object.setRelativeX( MxNumberTenths( 37.2 ) );
	object.setRelativeY( MxNumberTenths( 37.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"37.2\" default-y=\"37.2\" relative-x=\"37.2\" halign=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 37.3 ) );
	object.setDefaultY( MxNumberTenths( 37.3 ) );
	object.setRelativeX( MxNumberTenths( 37.3 ) );
	object.setRelativeY( MxNumberTenths( 37.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"37.3\" relative-x=\"37.3\" halign=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 37.4 ) );
	object.setDefaultY( MxNumberTenths( 37.4 ) );
	object.setRelativeX( MxNumberTenths( 37.4 ) );
	object.setRelativeY( MxNumberTenths( 37.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" halign=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 37.5 ) );
	object.setDefaultY( MxNumberTenths( 37.5 ) );
	object.setRelativeX( MxNumberTenths( 37.5 ) );
	object.setRelativeY( MxNumberTenths( 37.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" halign=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 37.6 ) );
	object.setDefaultY( MxNumberTenths( 37.6 ) );
	object.setRelativeX( MxNumberTenths( 37.6 ) );
	object.setRelativeY( MxNumberTenths( 37.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" halign=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 37.7 ) );
	object.setDefaultY( MxNumberTenths( 37.7 ) );
	object.setRelativeX( MxNumberTenths( 37.7 ) );
	object.setRelativeY( MxNumberTenths( 37.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"37.7\" default-y=\"37.7\" relative-y=\"37.7\" halign=\"center\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 37.8 ) );
	object.setDefaultY( MxNumberTenths( 37.8 ) );
	object.setRelativeX( MxNumberTenths( 37.8 ) );
	object.setRelativeY( MxNumberTenths( 37.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"37.8\" default-y=\"37.8\" relative-y=\"37.8\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 37.9 ) );
	object.setDefaultY( MxNumberTenths( 37.9 ) );
	object.setRelativeX( MxNumberTenths( 37.9 ) );
	object.setRelativeY( MxNumberTenths( 37.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"37.9\" default-y=\"37.9\" relative-x=\"37.9\" relative-y=\"37.9\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 38 ) );
	object.setDefaultY( MxNumberTenths( 38 ) );
	object.setRelativeX( MxNumberTenths( 38 ) );
	object.setRelativeY( MxNumberTenths( 38 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-y=\"38\" relative-x=\"38\" relative-y=\"38\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 38.1 ) );
	object.setDefaultY( MxNumberTenths( 38.1 ) );
	object.setRelativeX( MxNumberTenths( 38.1 ) );
	object.setRelativeY( MxNumberTenths( 38.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" relative-x=\"38.1\" relative-y=\"38.1\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 38.2 ) );
	object.setDefaultY( MxNumberTenths( 38.2 ) );
	object.setRelativeX( MxNumberTenths( 38.2 ) );
	object.setRelativeY( MxNumberTenths( 38.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" relative-x=\"38.2\" relative-y=\"38.2\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 38.3 ) );
	object.setDefaultY( MxNumberTenths( 38.3 ) );
	object.setRelativeX( MxNumberTenths( 38.3 ) );
	object.setRelativeY( MxNumberTenths( 38.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"38.3\" relative-x=\"38.3\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 38.4 ) );
	object.setDefaultY( MxNumberTenths( 38.4 ) );
	object.setRelativeX( MxNumberTenths( 38.4 ) );
	object.setRelativeY( MxNumberTenths( 38.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"38.4\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 38.5 ) );
	object.setDefaultY( MxNumberTenths( 38.5 ) );
	object.setRelativeX( MxNumberTenths( 38.5 ) );
	object.setRelativeY( MxNumberTenths( 38.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"38.5\" default-y=\"38.5\" halign=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 38.6 ) );
	object.setDefaultY( MxNumberTenths( 38.6 ) );
	object.setRelativeX( MxNumberTenths( 38.6 ) );
	object.setRelativeY( MxNumberTenths( 38.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-y=\"38.6\" halign=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 38.7 ) );
	object.setDefaultY( MxNumberTenths( 38.7 ) );
	object.setRelativeX( MxNumberTenths( 38.7 ) );
	object.setRelativeY( MxNumberTenths( 38.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-y=\"38.7\" halign=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 38.8 ) );
	object.setDefaultY( MxNumberTenths( 38.8 ) );
	object.setRelativeX( MxNumberTenths( 38.8 ) );
	object.setRelativeY( MxNumberTenths( 38.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-y=\"38.8\" halign=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 38.9 ) );
	object.setDefaultY( MxNumberTenths( 38.9 ) );
	object.setRelativeX( MxNumberTenths( 38.9 ) );
	object.setRelativeY( MxNumberTenths( 38.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"38.9\" relative-x=\"38.9\" relative-y=\"38.9\" halign=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 39 ) );
	object.setDefaultY( MxNumberTenths( 39 ) );
	object.setRelativeX( MxNumberTenths( 39 ) );
	object.setRelativeY( MxNumberTenths( 39 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"39\" relative-x=\"39\" relative-y=\"39\" halign=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 39.1 ) );
	object.setDefaultY( MxNumberTenths( 39.1 ) );
	object.setRelativeX( MxNumberTenths( 39.1 ) );
	object.setRelativeY( MxNumberTenths( 39.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"39.1\" relative-x=\"39.1\" relative-y=\"39.1\" halign=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 39.2 ) );
	object.setDefaultY( MxNumberTenths( 39.2 ) );
	object.setRelativeX( MxNumberTenths( 39.2 ) );
	object.setRelativeY( MxNumberTenths( 39.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" relative-x=\"39.2\" relative-y=\"39.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 39.3 ) );
	object.setDefaultY( MxNumberTenths( 39.3 ) );
	object.setRelativeX( MxNumberTenths( 39.3 ) );
	object.setRelativeY( MxNumberTenths( 39.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-y=\"39.3\" relative-x=\"39.3\" relative-y=\"39.3\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 39.4 ) );
	object.setDefaultY( MxNumberTenths( 39.4 ) );
	object.setRelativeX( MxNumberTenths( 39.4 ) );
	object.setRelativeY( MxNumberTenths( 39.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-y=\"39.4\" relative-y=\"39.4\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 39.5 ) );
	object.setDefaultY( MxNumberTenths( 39.5 ) );
	object.setRelativeX( MxNumberTenths( 39.5 ) );
	object.setRelativeY( MxNumberTenths( 39.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"39.5\" default-y=\"39.5\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 39.6 ) );
	object.setDefaultY( MxNumberTenths( 39.6 ) );
	object.setRelativeX( MxNumberTenths( 39.6 ) );
	object.setRelativeY( MxNumberTenths( 39.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"39.6\" default-y=\"39.6\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 39.7 ) );
	object.setDefaultY( MxNumberTenths( 39.7 ) );
	object.setRelativeX( MxNumberTenths( 39.7 ) );
	object.setRelativeY( MxNumberTenths( 39.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"39.7\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 39.8 ) );
	object.setDefaultY( MxNumberTenths( 39.8 ) );
	object.setRelativeX( MxNumberTenths( 39.8 ) );
	object.setRelativeY( MxNumberTenths( 39.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 39.9 ) );
	object.setDefaultY( MxNumberTenths( 39.9 ) );
	object.setRelativeX( MxNumberTenths( 39.9 ) );
	object.setRelativeY( MxNumberTenths( 39.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" relative-x=\"39.9\" halign=\"right\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 40 ) );
	object.setDefaultY( MxNumberTenths( 40 ) );
	object.setRelativeX( MxNumberTenths( 40 ) );
	object.setRelativeY( MxNumberTenths( 40 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" relative-x=\"40\" halign=\"left\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 40.1 ) );
	object.setDefaultY( MxNumberTenths( 40.1 ) );
	object.setRelativeX( MxNumberTenths( 40.1 ) );
	object.setRelativeY( MxNumberTenths( 40.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"40.1\" default-y=\"40.1\" relative-x=\"40.1\" relative-y=\"40.1\" halign=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 40.2 ) );
	object.setDefaultY( MxNumberTenths( 40.2 ) );
	object.setRelativeX( MxNumberTenths( 40.2 ) );
	object.setRelativeY( MxNumberTenths( 40.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"40.2\" default-y=\"40.2\" relative-x=\"40.2\" relative-y=\"40.2\" halign=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 40.3 ) );
	object.setDefaultY( MxNumberTenths( 40.3 ) );
	object.setRelativeX( MxNumberTenths( 40.3 ) );
	object.setRelativeY( MxNumberTenths( 40.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"40.3\" default-y=\"40.3\" relative-x=\"40.3\" relative-y=\"40.3\" halign=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 40.4 ) );
	object.setDefaultY( MxNumberTenths( 40.4 ) );
	object.setRelativeX( MxNumberTenths( 40.4 ) );
	object.setRelativeY( MxNumberTenths( 40.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-y=\"40.4\" relative-y=\"40.4\" halign=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 40.5 ) );
	object.setDefaultY( MxNumberTenths( 40.5 ) );
	object.setRelativeX( MxNumberTenths( 40.5 ) );
	object.setRelativeY( MxNumberTenths( 40.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" relative-y=\"40.5\" halign=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 40.6 ) );
	object.setDefaultY( MxNumberTenths( 40.6 ) );
	object.setRelativeX( MxNumberTenths( 40.6 ) );
	object.setRelativeY( MxNumberTenths( 40.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" relative-y=\"40.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 40.7 ) );
	object.setDefaultY( MxNumberTenths( 40.7 ) );
	object.setRelativeX( MxNumberTenths( 40.7 ) );
	object.setRelativeY( MxNumberTenths( 40.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"40.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 40.8 ) );
	object.setDefaultY( MxNumberTenths( 40.8 ) );
	object.setRelativeX( MxNumberTenths( 40.8 ) );
	object.setRelativeY( MxNumberTenths( 40.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"40.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 40.9 ) );
	object.setDefaultY( MxNumberTenths( 40.9 ) );
	object.setRelativeX( MxNumberTenths( 40.9 ) );
	object.setRelativeY( MxNumberTenths( 40.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"40.9\" default-y=\"40.9\" relative-x=\"40.9\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 41 ) );
	object.setDefaultY( MxNumberTenths( 41 ) );
	object.setRelativeX( MxNumberTenths( 41 ) );
	object.setRelativeY( MxNumberTenths( 41 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-y=\"41\" relative-x=\"41\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 41.1 ) );
	object.setDefaultY( MxNumberTenths( 41.1 ) );
	object.setRelativeX( MxNumberTenths( 41.1 ) );
	object.setRelativeY( MxNumberTenths( 41.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-y=\"41.1\" relative-x=\"41.1\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 41.2 ) );
	object.setDefaultY( MxNumberTenths( 41.2 ) );
	object.setRelativeX( MxNumberTenths( 41.2 ) );
	object.setRelativeY( MxNumberTenths( 41.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-y=\"41.2\" relative-x=\"41.2\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 41.3 ) );
	object.setDefaultY( MxNumberTenths( 41.3 ) );
	object.setRelativeX( MxNumberTenths( 41.3 ) );
	object.setRelativeY( MxNumberTenths( 41.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"41.3\" relative-x=\"41.3\" relative-y=\"41.3\" halign=\"center\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 41.4 ) );
	object.setDefaultY( MxNumberTenths( 41.4 ) );
	object.setRelativeX( MxNumberTenths( 41.4 ) );
	object.setRelativeY( MxNumberTenths( 41.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"41.4\" relative-y=\"41.4\" halign=\"right\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 41.5 ) );
	object.setDefaultY( MxNumberTenths( 41.5 ) );
	object.setRelativeX( MxNumberTenths( 41.5 ) );
	object.setRelativeY( MxNumberTenths( 41.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"41.5\" relative-y=\"41.5\" halign=\"left\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 41.6 ) );
	object.setDefaultY( MxNumberTenths( 41.6 ) );
	object.setRelativeX( MxNumberTenths( 41.6 ) );
	object.setRelativeY( MxNumberTenths( 41.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" relative-y=\"41.6\" halign=\"center\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 41.7 ) );
	object.setDefaultY( MxNumberTenths( 41.7 ) );
	object.setRelativeX( MxNumberTenths( 41.7 ) );
	object.setRelativeY( MxNumberTenths( 41.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-y=\"41.7\" relative-y=\"41.7\" halign=\"right\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 41.8 ) );
	object.setDefaultY( MxNumberTenths( 41.8 ) );
	object.setRelativeX( MxNumberTenths( 41.8 ) );
	object.setRelativeY( MxNumberTenths( 41.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-y=\"41.8\" relative-y=\"41.8\" halign=\"left\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 41.9 ) );
	object.setDefaultY( MxNumberTenths( 41.9 ) );
	object.setRelativeX( MxNumberTenths( 41.9 ) );
	object.setRelativeY( MxNumberTenths( 41.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"41.9\" default-y=\"41.9\" relative-x=\"41.9\" halign=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 42 ) );
	object.setDefaultY( MxNumberTenths( 42 ) );
	object.setRelativeX( MxNumberTenths( 42 ) );
	object.setRelativeY( MxNumberTenths( 42 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"42\" default-y=\"42\" relative-x=\"42\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 42.1 ) );
	object.setDefaultY( MxNumberTenths( 42.1 ) );
	object.setRelativeX( MxNumberTenths( 42.1 ) );
	object.setRelativeY( MxNumberTenths( 42.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"42.1\" relative-x=\"42.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 42.2 ) );
	object.setDefaultY( MxNumberTenths( 42.2 ) );
	object.setRelativeX( MxNumberTenths( 42.2 ) );
	object.setRelativeY( MxNumberTenths( 42.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" relative-x=\"42.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 42.3 ) );
	object.setDefaultY( MxNumberTenths( 42.3 ) );
	object.setRelativeX( MxNumberTenths( 42.3 ) );
	object.setRelativeY( MxNumberTenths( 42.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" relative-x=\"42.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 42.4 ) );
	object.setDefaultY( MxNumberTenths( 42.4 ) );
	object.setRelativeX( MxNumberTenths( 42.4 ) );
	object.setRelativeY( MxNumberTenths( 42.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 42.5 ) );
	object.setDefaultY( MxNumberTenths( 42.5 ) );
	object.setRelativeX( MxNumberTenths( 42.5 ) );
	object.setRelativeY( MxNumberTenths( 42.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-x=\"42.5\" default-y=\"42.5\" relative-y=\"42.5\" valign=\"top\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 42.6 ) );
	object.setDefaultY( MxNumberTenths( 42.6 ) );
	object.setRelativeX( MxNumberTenths( 42.6 ) );
	object.setRelativeY( MxNumberTenths( 42.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "source=\"DEF\" type=\"DEF\" default-x=\"42.6\" default-y=\"42.6\" relative-y=\"42.6\" valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 42.7 ) );
	object.setDefaultY( MxNumberTenths( 42.7 ) );
	object.setRelativeX( MxNumberTenths( 42.7 ) );
	object.setRelativeY( MxNumberTenths( 42.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "source=\"XYZ\" type=\"XYZ\" default-x=\"42.7\" default-y=\"42.7\" relative-y=\"42.7\" halign=\"left\" valign=\"bottom\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
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
	object.setDefaultX( MxNumberTenths( 42.8 ) );
	object.setDefaultY( MxNumberTenths( 42.8 ) );
	object.setRelativeX( MxNumberTenths( 42.8 ) );
	object.setRelativeY( MxNumberTenths( 42.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "source=\"ABC\" type=\"ABC\" default-y=\"42.8\" relative-y=\"42.8\" halign=\"center\" valign=\"top\"";
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

TEST( getIsSourceDefaultDefined, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsSourceDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypeDefaultDefined, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getSourceDefaultValue, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	XsAnyUri expected;
	XsAnyUri actual = object.getSourceDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTypeDefaultValue, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	XsToken expected;
	XsToken actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxAttrGrpImageAttributes )
{
	MxAttrGrpImageAttributes object;
	MxEnumValignImage expected;
	MxEnumValignImage actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


