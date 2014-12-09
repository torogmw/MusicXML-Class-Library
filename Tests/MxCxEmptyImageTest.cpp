/** *******************************************************
  * 
  * MxCxEmptyImageTest.cpp
  * Created: 2014-12-03 16:31:29
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyImage.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = ( XsAnyUri(  ) ).toString();
	std::string actual = object.getSource().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getHalign().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = ( MxEnumValignImage(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = "MxCxEmptyImage";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = "image";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	std::string expected = "The image type is used to include graphical images in a score.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setSource0, MxCxEmptyImage )
{
	XsAnyUri value1( "http://matthewjamesbriggs.com" );
	XsAnyUri value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyImage object;
	object.setSource( value1 );
	XsAnyUri expected = value1;
	XsAnyUri actual = object.getSource();
	CHECK_EQUAL( expected, actual )
	object.setSource( value2 );
	expected = value2;
	actual = object.getSource();
	CHECK_EQUAL( expected, actual )
}
TEST( setType1, MxCxEmptyImage )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyImage object;
	object.setType( value1 );
	XsToken expected = value1;
	XsToken actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxCxEmptyImage )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyImage object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxCxEmptyImage )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyImage object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxCxEmptyImage )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyImage object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxCxEmptyImage )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyImage object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setHalign6, MxCxEmptyImage )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyImage object;
	object.setHalign( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
	object.setHalign( value2 );
	expected = value2;
	actual = object.getHalign();
	CHECK_EQUAL( expected, actual )
}
TEST( setValign7, MxCxEmptyImage )
{
	MxEnumValignImage value1( lexicon::enums::ValignImage::bottom );
	MxEnumValignImage value2( lexicon::enums::ValignImage::middle );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyImage object;
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

TEST( getIsSourceRequired0, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = true;
	bool actual = object.getIsSourceRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypeRequired1, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignRequired6, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsHalignRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignRequired7, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsSourcePresent0, MxCxEmptyImage )
{
	MxCxEmptyImage object;
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
TEST( getIsTypePresent1, MxCxEmptyImage )
{
	MxCxEmptyImage object;
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
TEST( getIsDefaultXPresent2, MxCxEmptyImage )
{
	MxCxEmptyImage object;
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
TEST( getIsDefaultYPresent3, MxCxEmptyImage )
{
	MxCxEmptyImage object;
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
TEST( getIsRelativeXPresent4, MxCxEmptyImage )
{
	MxCxEmptyImage object;
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
TEST( getIsRelativeYPresent5, MxCxEmptyImage )
{
	MxCxEmptyImage object;
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
TEST( getIsHalignPresent6, MxCxEmptyImage )
{
	MxCxEmptyImage object;
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
TEST( getIsValignPresent7, MxCxEmptyImage )
{
	MxCxEmptyImage object;
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

TEST( getIsSourceDefaultDefined, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsSourceDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsTypeDefaultDefined, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsHalignDefaultDefined, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsHalignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValignDefaultDefined, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getSourceDefaultValue, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	XsAnyUri expected;
	XsAnyUri actual = object.getSourceDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getTypeDefaultValue, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	XsToken expected;
	XsToken actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getHalignDefaultValue, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getHalignDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValignDefaultValue, MxCxEmptyImage )
{
	MxCxEmptyImage object;
	MxEnumValignImage expected;
	MxEnumValignImage actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setSource( XsAnyUri( "ABC" ) );
	object.setType( XsToken( "ABC" ) );
	object.setDefaultX( MxNumberTenths( 92 ) );
	object.setDefaultY( MxNumberTenths( 92 ) );
	object.setRelativeX( MxNumberTenths( 92 ) );
	object.setRelativeY( MxNumberTenths( 92 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsHalignPresent( true );
	object.setIsValignPresent( true );
	expected = "<booksmart source=\"ABC\" type=\"ABC\" default-x=\"92\" default-y=\"92\" relative-x=\"92\" relative-y=\"92\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 92.1 ) );
	object.setDefaultY( MxNumberTenths( 92.1 ) );
	object.setRelativeX( MxNumberTenths( 92.1 ) );
	object.setRelativeY( MxNumberTenths( 92.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<quiet source=\"DEF\" type=\"DEF\" default-x=\"92.1\" default-y=\"92.1\" relative-x=\"92.1\" relative-y=\"92.1\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 92.2 ) );
	object.setDefaultY( MxNumberTenths( 92.2 ) );
	object.setRelativeX( MxNumberTenths( 92.2 ) );
	object.setRelativeY( MxNumberTenths( 92.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<musicxmlishard source=\"XYZ\" type=\"XYZ\" default-x=\"92.2\" default-y=\"92.2\" relative-x=\"92.2\" relative-y=\"92.2\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 92.3 ) );
	object.setDefaultY( MxNumberTenths( 92.3 ) );
	object.setRelativeX( MxNumberTenths( 92.3 ) );
	object.setRelativeY( MxNumberTenths( 92.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<bishop source=\"ABC\" type=\"ABC\" default-y=\"92.3\" relative-x=\"92.3\" relative-y=\"92.3\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 92.4 ) );
	object.setDefaultY( MxNumberTenths( 92.4 ) );
	object.setRelativeX( MxNumberTenths( 92.4 ) );
	object.setRelativeY( MxNumberTenths( 92.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<charlie source=\"DEF\" type=\"DEF\" relative-x=\"92.4\" relative-y=\"92.4\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 92.5 ) );
	object.setDefaultY( MxNumberTenths( 92.5 ) );
	object.setRelativeX( MxNumberTenths( 92.5 ) );
	object.setRelativeY( MxNumberTenths( 92.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<booksmart source=\"XYZ\" type=\"XYZ\" relative-y=\"92.5\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 92.6 ) );
	object.setDefaultY( MxNumberTenths( 92.6 ) );
	object.setRelativeX( MxNumberTenths( 92.6 ) );
	object.setRelativeY( MxNumberTenths( 92.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<quiet source=\"ABC\" type=\"ABC\" default-x=\"92.6\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 92.7 ) );
	object.setDefaultY( MxNumberTenths( 92.7 ) );
	object.setRelativeX( MxNumberTenths( 92.7 ) );
	object.setRelativeY( MxNumberTenths( 92.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<musicxmlishard source=\"DEF\" type=\"DEF\" default-x=\"92.7\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 92.8 ) );
	object.setDefaultY( MxNumberTenths( 92.8 ) );
	object.setRelativeX( MxNumberTenths( 92.8 ) );
	object.setRelativeY( MxNumberTenths( 92.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<bishop source=\"XYZ\" type=\"XYZ\" default-x=\"92.8\" default-y=\"92.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 92.9 ) );
	object.setDefaultY( MxNumberTenths( 92.9 ) );
	object.setRelativeX( MxNumberTenths( 92.9 ) );
	object.setRelativeY( MxNumberTenths( 92.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<charlie source=\"ABC\" type=\"ABC\" default-y=\"92.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 93 ) );
	object.setDefaultY( MxNumberTenths( 93 ) );
	object.setRelativeX( MxNumberTenths( 93 ) );
	object.setRelativeY( MxNumberTenths( 93 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<booksmart source=\"DEF\" type=\"DEF\" default-y=\"93\" relative-x=\"93\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 93.1 ) );
	object.setDefaultY( MxNumberTenths( 93.1 ) );
	object.setRelativeX( MxNumberTenths( 93.1 ) );
	object.setRelativeY( MxNumberTenths( 93.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<quiet source=\"XYZ\" type=\"XYZ\" default-y=\"93.1\" relative-x=\"93.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 93.2 ) );
	object.setDefaultY( MxNumberTenths( 93.2 ) );
	object.setRelativeX( MxNumberTenths( 93.2 ) );
	object.setRelativeY( MxNumberTenths( 93.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<musicxmlishard source=\"ABC\" type=\"ABC\" default-x=\"93.2\" relative-x=\"93.2\" relative-y=\"93.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 93.3 ) );
	object.setDefaultY( MxNumberTenths( 93.3 ) );
	object.setRelativeX( MxNumberTenths( 93.3 ) );
	object.setRelativeY( MxNumberTenths( 93.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<bishop source=\"DEF\" type=\"DEF\" default-x=\"93.3\" relative-x=\"93.3\" relative-y=\"93.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 93.4 ) );
	object.setDefaultY( MxNumberTenths( 93.4 ) );
	object.setRelativeX( MxNumberTenths( 93.4 ) );
	object.setRelativeY( MxNumberTenths( 93.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<charlie source=\"XYZ\" type=\"XYZ\" default-x=\"93.4\" relative-x=\"93.4\" relative-y=\"93.4\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 93.5 ) );
	object.setDefaultY( MxNumberTenths( 93.5 ) );
	object.setRelativeX( MxNumberTenths( 93.5 ) );
	object.setRelativeY( MxNumberTenths( 93.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<booksmart source=\"ABC\" type=\"ABC\" relative-y=\"93.5\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 93.6 ) );
	object.setDefaultY( MxNumberTenths( 93.6 ) );
	object.setRelativeX( MxNumberTenths( 93.6 ) );
	object.setRelativeY( MxNumberTenths( 93.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<quiet source=\"DEF\" type=\"DEF\" default-y=\"93.6\" relative-y=\"93.6\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 93.7 ) );
	object.setDefaultY( MxNumberTenths( 93.7 ) );
	object.setRelativeX( MxNumberTenths( 93.7 ) );
	object.setRelativeY( MxNumberTenths( 93.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<musicxmlishard source=\"XYZ\" type=\"XYZ\" default-y=\"93.7\" relative-y=\"93.7\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 93.8 ) );
	object.setDefaultY( MxNumberTenths( 93.8 ) );
	object.setRelativeX( MxNumberTenths( 93.8 ) );
	object.setRelativeY( MxNumberTenths( 93.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<bishop source=\"ABC\" type=\"ABC\" default-x=\"93.8\" default-y=\"93.8\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 93.9 ) );
	object.setDefaultY( MxNumberTenths( 93.9 ) );
	object.setRelativeX( MxNumberTenths( 93.9 ) );
	object.setRelativeY( MxNumberTenths( 93.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<charlie source=\"DEF\" type=\"DEF\" default-x=\"93.9\" default-y=\"93.9\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 94 ) );
	object.setDefaultY( MxNumberTenths( 94 ) );
	object.setRelativeX( MxNumberTenths( 94 ) );
	object.setRelativeY( MxNumberTenths( 94 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<booksmart source=\"XYZ\" type=\"XYZ\" default-x=\"94\" relative-x=\"94\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 94.1 ) );
	object.setDefaultY( MxNumberTenths( 94.1 ) );
	object.setRelativeX( MxNumberTenths( 94.1 ) );
	object.setRelativeY( MxNumberTenths( 94.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<quiet source=\"ABC\" type=\"ABC\" relative-x=\"94.1\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 94.2 ) );
	object.setDefaultY( MxNumberTenths( 94.2 ) );
	object.setRelativeX( MxNumberTenths( 94.2 ) );
	object.setRelativeY( MxNumberTenths( 94.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<musicxmlishard source=\"DEF\" type=\"DEF\" relative-x=\"94.2\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 94.3 ) );
	object.setDefaultY( MxNumberTenths( 94.3 ) );
	object.setRelativeX( MxNumberTenths( 94.3 ) );
	object.setRelativeY( MxNumberTenths( 94.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<bishop source=\"XYZ\" type=\"XYZ\" relative-x=\"94.3\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 94.4 ) );
	object.setDefaultY( MxNumberTenths( 94.4 ) );
	object.setRelativeX( MxNumberTenths( 94.4 ) );
	object.setRelativeY( MxNumberTenths( 94.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<charlie source=\"ABC\" type=\"ABC\" default-x=\"94.4\" default-y=\"94.4\" relative-x=\"94.4\" relative-y=\"94.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 94.5 ) );
	object.setDefaultY( MxNumberTenths( 94.5 ) );
	object.setRelativeX( MxNumberTenths( 94.5 ) );
	object.setRelativeY( MxNumberTenths( 94.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<booksmart source=\"DEF\" type=\"DEF\" default-x=\"94.5\" default-y=\"94.5\" relative-y=\"94.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 94.6 ) );
	object.setDefaultY( MxNumberTenths( 94.6 ) );
	object.setRelativeX( MxNumberTenths( 94.6 ) );
	object.setRelativeY( MxNumberTenths( 94.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<quiet source=\"XYZ\" type=\"XYZ\" default-x=\"94.6\" default-y=\"94.6\" relative-y=\"94.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 94.7 ) );
	object.setDefaultY( MxNumberTenths( 94.7 ) );
	object.setRelativeX( MxNumberTenths( 94.7 ) );
	object.setRelativeY( MxNumberTenths( 94.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<musicxmlishard source=\"ABC\" type=\"ABC\" default-y=\"94.7\" relative-y=\"94.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 94.8 ) );
	object.setDefaultY( MxNumberTenths( 94.8 ) );
	object.setRelativeX( MxNumberTenths( 94.8 ) );
	object.setRelativeY( MxNumberTenths( 94.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<bishop source=\"DEF\" type=\"DEF\" relative-y=\"94.8\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 94.9 ) );
	object.setDefaultY( MxNumberTenths( 94.9 ) );
	object.setRelativeX( MxNumberTenths( 94.9 ) );
	object.setRelativeY( MxNumberTenths( 94.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<charlie source=\"XYZ\" type=\"XYZ\" relative-y=\"94.9\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 95 ) );
	object.setDefaultY( MxNumberTenths( 95 ) );
	object.setRelativeX( MxNumberTenths( 95 ) );
	object.setRelativeY( MxNumberTenths( 95 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<booksmart source=\"ABC\" type=\"ABC\" default-x=\"95\" relative-x=\"95\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 95.1 ) );
	object.setDefaultY( MxNumberTenths( 95.1 ) );
	object.setRelativeX( MxNumberTenths( 95.1 ) );
	object.setRelativeY( MxNumberTenths( 95.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<quiet source=\"DEF\" type=\"DEF\" default-x=\"95.1\" relative-x=\"95.1\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 95.2 ) );
	object.setDefaultY( MxNumberTenths( 95.2 ) );
	object.setRelativeX( MxNumberTenths( 95.2 ) );
	object.setRelativeY( MxNumberTenths( 95.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<musicxmlishard source=\"XYZ\" type=\"XYZ\" default-x=\"95.2\" default-y=\"95.2\" relative-x=\"95.2\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 95.3 ) );
	object.setDefaultY( MxNumberTenths( 95.3 ) );
	object.setRelativeX( MxNumberTenths( 95.3 ) );
	object.setRelativeY( MxNumberTenths( 95.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<bishop source=\"ABC\" type=\"ABC\" default-y=\"95.3\" relative-x=\"95.3\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 95.4 ) );
	object.setDefaultY( MxNumberTenths( 95.4 ) );
	object.setRelativeX( MxNumberTenths( 95.4 ) );
	object.setRelativeY( MxNumberTenths( 95.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<charlie source=\"DEF\" type=\"DEF\" default-y=\"95.4\" relative-x=\"95.4\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 95.5 ) );
	object.setDefaultY( MxNumberTenths( 95.5 ) );
	object.setRelativeX( MxNumberTenths( 95.5 ) );
	object.setRelativeY( MxNumberTenths( 95.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<booksmart source=\"XYZ\" type=\"XYZ\" default-y=\"95.5\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 95.6 ) );
	object.setDefaultY( MxNumberTenths( 95.6 ) );
	object.setRelativeX( MxNumberTenths( 95.6 ) );
	object.setRelativeY( MxNumberTenths( 95.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<quiet source=\"ABC\" type=\"ABC\" default-x=\"95.6\" relative-y=\"95.6\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 95.7 ) );
	object.setDefaultY( MxNumberTenths( 95.7 ) );
	object.setRelativeX( MxNumberTenths( 95.7 ) );
	object.setRelativeY( MxNumberTenths( 95.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<musicxmlishard source=\"DEF\" type=\"DEF\" default-x=\"95.7\" relative-y=\"95.7\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 95.8 ) );
	object.setDefaultY( MxNumberTenths( 95.8 ) );
	object.setRelativeX( MxNumberTenths( 95.8 ) );
	object.setRelativeY( MxNumberTenths( 95.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<bishop source=\"XYZ\" type=\"XYZ\" default-x=\"95.8\" relative-y=\"95.8\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 95.9 ) );
	object.setDefaultY( MxNumberTenths( 95.9 ) );
	object.setRelativeX( MxNumberTenths( 95.9 ) );
	object.setRelativeY( MxNumberTenths( 95.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<charlie source=\"ABC\" type=\"ABC\" relative-y=\"95.9\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 96 ) );
	object.setDefaultY( MxNumberTenths( 96 ) );
	object.setRelativeX( MxNumberTenths( 96 ) );
	object.setRelativeY( MxNumberTenths( 96 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<booksmart source=\"DEF\" type=\"DEF\" default-y=\"96\" relative-x=\"96\" relative-y=\"96\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 96.1 ) );
	object.setDefaultY( MxNumberTenths( 96.1 ) );
	object.setRelativeX( MxNumberTenths( 96.1 ) );
	object.setRelativeY( MxNumberTenths( 96.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<quiet source=\"XYZ\" type=\"XYZ\" default-y=\"96.1\" relative-x=\"96.1\" relative-y=\"96.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 96.2 ) );
	object.setDefaultY( MxNumberTenths( 96.2 ) );
	object.setRelativeX( MxNumberTenths( 96.2 ) );
	object.setRelativeY( MxNumberTenths( 96.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<musicxmlishard source=\"ABC\" type=\"ABC\" default-x=\"96.2\" default-y=\"96.2\" relative-x=\"96.2\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 96.3 ) );
	object.setDefaultY( MxNumberTenths( 96.3 ) );
	object.setRelativeX( MxNumberTenths( 96.3 ) );
	object.setRelativeY( MxNumberTenths( 96.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<bishop source=\"DEF\" type=\"DEF\" default-x=\"96.3\" default-y=\"96.3\" relative-x=\"96.3\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 96.4 ) );
	object.setDefaultY( MxNumberTenths( 96.4 ) );
	object.setRelativeX( MxNumberTenths( 96.4 ) );
	object.setRelativeY( MxNumberTenths( 96.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<charlie source=\"XYZ\" type=\"XYZ\" default-x=\"96.4\" relative-x=\"96.4\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 96.5 ) );
	object.setDefaultY( MxNumberTenths( 96.5 ) );
	object.setRelativeX( MxNumberTenths( 96.5 ) );
	object.setRelativeY( MxNumberTenths( 96.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<booksmart source=\"ABC\" type=\"ABC\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 96.6 ) );
	object.setDefaultY( MxNumberTenths( 96.6 ) );
	object.setRelativeX( MxNumberTenths( 96.6 ) );
	object.setRelativeY( MxNumberTenths( 96.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<quiet source=\"DEF\" type=\"DEF\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 96.7 ) );
	object.setDefaultY( MxNumberTenths( 96.7 ) );
	object.setRelativeX( MxNumberTenths( 96.7 ) );
	object.setRelativeY( MxNumberTenths( 96.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<musicxmlishard source=\"XYZ\" type=\"XYZ\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 96.8 ) );
	object.setDefaultY( MxNumberTenths( 96.8 ) );
	object.setRelativeX( MxNumberTenths( 96.8 ) );
	object.setRelativeY( MxNumberTenths( 96.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<bishop source=\"ABC\" type=\"ABC\" default-x=\"96.8\" default-y=\"96.8\" relative-y=\"96.8\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 96.9 ) );
	object.setDefaultY( MxNumberTenths( 96.9 ) );
	object.setRelativeX( MxNumberTenths( 96.9 ) );
	object.setRelativeY( MxNumberTenths( 96.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<charlie source=\"DEF\" type=\"DEF\" default-x=\"96.9\" default-y=\"96.9\" relative-y=\"96.9\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 97 ) );
	object.setDefaultY( MxNumberTenths( 97 ) );
	object.setRelativeX( MxNumberTenths( 97 ) );
	object.setRelativeY( MxNumberTenths( 97 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<booksmart source=\"XYZ\" type=\"XYZ\" default-x=\"97\" default-y=\"97\" relative-x=\"97\" relative-y=\"97\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 97.1 ) );
	object.setDefaultY( MxNumberTenths( 97.1 ) );
	object.setRelativeX( MxNumberTenths( 97.1 ) );
	object.setRelativeY( MxNumberTenths( 97.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<quiet source=\"ABC\" type=\"ABC\" default-y=\"97.1\" relative-x=\"97.1\" relative-y=\"97.1\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 97.2 ) );
	object.setDefaultY( MxNumberTenths( 97.2 ) );
	object.setRelativeX( MxNumberTenths( 97.2 ) );
	object.setRelativeY( MxNumberTenths( 97.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<musicxmlishard source=\"DEF\" type=\"DEF\" relative-x=\"97.2\" relative-y=\"97.2\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 97.3 ) );
	object.setDefaultY( MxNumberTenths( 97.3 ) );
	object.setRelativeX( MxNumberTenths( 97.3 ) );
	object.setRelativeY( MxNumberTenths( 97.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<bishop source=\"XYZ\" type=\"XYZ\" relative-x=\"97.3\" relative-y=\"97.3\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 97.4 ) );
	object.setDefaultY( MxNumberTenths( 97.4 ) );
	object.setRelativeX( MxNumberTenths( 97.4 ) );
	object.setRelativeY( MxNumberTenths( 97.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<charlie source=\"ABC\" type=\"ABC\" default-x=\"97.4\" relative-x=\"97.4\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 97.5 ) );
	object.setDefaultY( MxNumberTenths( 97.5 ) );
	object.setRelativeX( MxNumberTenths( 97.5 ) );
	object.setRelativeY( MxNumberTenths( 97.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<booksmart source=\"DEF\" type=\"DEF\" default-x=\"97.5\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 97.6 ) );
	object.setDefaultY( MxNumberTenths( 97.6 ) );
	object.setRelativeX( MxNumberTenths( 97.6 ) );
	object.setRelativeY( MxNumberTenths( 97.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<quiet source=\"XYZ\" type=\"XYZ\" default-x=\"97.6\" default-y=\"97.6\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 97.7 ) );
	object.setDefaultY( MxNumberTenths( 97.7 ) );
	object.setRelativeX( MxNumberTenths( 97.7 ) );
	object.setRelativeY( MxNumberTenths( 97.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<musicxmlishard source=\"ABC\" type=\"ABC\" default-y=\"97.7\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 97.8 ) );
	object.setDefaultY( MxNumberTenths( 97.8 ) );
	object.setRelativeX( MxNumberTenths( 97.8 ) );
	object.setRelativeY( MxNumberTenths( 97.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<bishop source=\"DEF\" type=\"DEF\" default-y=\"97.8\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 97.9 ) );
	object.setDefaultY( MxNumberTenths( 97.9 ) );
	object.setRelativeX( MxNumberTenths( 97.9 ) );
	object.setRelativeY( MxNumberTenths( 97.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<charlie source=\"XYZ\" type=\"XYZ\" default-y=\"97.9\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 98 ) );
	object.setDefaultY( MxNumberTenths( 98 ) );
	object.setRelativeX( MxNumberTenths( 98 ) );
	object.setRelativeY( MxNumberTenths( 98 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<booksmart source=\"ABC\" type=\"ABC\" default-x=\"98\" relative-x=\"98\" relative-y=\"98\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 98.1 ) );
	object.setDefaultY( MxNumberTenths( 98.1 ) );
	object.setRelativeX( MxNumberTenths( 98.1 ) );
	object.setRelativeY( MxNumberTenths( 98.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<quiet source=\"DEF\" type=\"DEF\" default-x=\"98.1\" relative-x=\"98.1\" relative-y=\"98.1\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 98.2 ) );
	object.setDefaultY( MxNumberTenths( 98.2 ) );
	object.setRelativeX( MxNumberTenths( 98.2 ) );
	object.setRelativeY( MxNumberTenths( 98.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<musicxmlishard source=\"XYZ\" type=\"XYZ\" default-x=\"98.2\" relative-x=\"98.2\" relative-y=\"98.2\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 98.3 ) );
	object.setDefaultY( MxNumberTenths( 98.3 ) );
	object.setRelativeX( MxNumberTenths( 98.3 ) );
	object.setRelativeY( MxNumberTenths( 98.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<bishop source=\"ABC\" type=\"ABC\" relative-x=\"98.3\" relative-y=\"98.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 98.4 ) );
	object.setDefaultY( MxNumberTenths( 98.4 ) );
	object.setRelativeX( MxNumberTenths( 98.4 ) );
	object.setRelativeY( MxNumberTenths( 98.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<charlie source=\"DEF\" type=\"DEF\" default-y=\"98.4\" relative-x=\"98.4\" relative-y=\"98.4\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 98.5 ) );
	object.setDefaultY( MxNumberTenths( 98.5 ) );
	object.setRelativeX( MxNumberTenths( 98.5 ) );
	object.setRelativeY( MxNumberTenths( 98.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<booksmart source=\"XYZ\" type=\"XYZ\" default-y=\"98.5\" relative-y=\"98.5\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 98.6 ) );
	object.setDefaultY( MxNumberTenths( 98.6 ) );
	object.setRelativeX( MxNumberTenths( 98.6 ) );
	object.setRelativeY( MxNumberTenths( 98.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<quiet source=\"ABC\" type=\"ABC\" default-x=\"98.6\" default-y=\"98.6\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 98.7 ) );
	object.setDefaultY( MxNumberTenths( 98.7 ) );
	object.setRelativeX( MxNumberTenths( 98.7 ) );
	object.setRelativeY( MxNumberTenths( 98.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<musicxmlishard source=\"DEF\" type=\"DEF\" default-x=\"98.7\" default-y=\"98.7\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 98.8 ) );
	object.setDefaultY( MxNumberTenths( 98.8 ) );
	object.setRelativeX( MxNumberTenths( 98.8 ) );
	object.setRelativeY( MxNumberTenths( 98.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<bishop source=\"XYZ\" type=\"XYZ\" default-x=\"98.8\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 98.9 ) );
	object.setDefaultY( MxNumberTenths( 98.9 ) );
	object.setRelativeX( MxNumberTenths( 98.9 ) );
	object.setRelativeY( MxNumberTenths( 98.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<charlie source=\"ABC\" type=\"ABC\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 99 ) );
	object.setDefaultY( MxNumberTenths( 99 ) );
	object.setRelativeX( MxNumberTenths( 99 ) );
	object.setRelativeY( MxNumberTenths( 99 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<booksmart source=\"DEF\" type=\"DEF\" relative-x=\"99\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 99.1 ) );
	object.setDefaultY( MxNumberTenths( 99.1 ) );
	object.setRelativeX( MxNumberTenths( 99.1 ) );
	object.setRelativeY( MxNumberTenths( 99.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<quiet source=\"XYZ\" type=\"XYZ\" relative-x=\"99.1\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 99.2 ) );
	object.setDefaultY( MxNumberTenths( 99.2 ) );
	object.setRelativeX( MxNumberTenths( 99.2 ) );
	object.setRelativeY( MxNumberTenths( 99.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<musicxmlishard source=\"ABC\" type=\"ABC\" default-x=\"99.2\" default-y=\"99.2\" relative-x=\"99.2\" relative-y=\"99.2\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 99.3 ) );
	object.setDefaultY( MxNumberTenths( 99.3 ) );
	object.setRelativeX( MxNumberTenths( 99.3 ) );
	object.setRelativeY( MxNumberTenths( 99.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<bishop source=\"DEF\" type=\"DEF\" default-x=\"99.3\" default-y=\"99.3\" relative-x=\"99.3\" relative-y=\"99.3\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 99.4 ) );
	object.setDefaultY( MxNumberTenths( 99.4 ) );
	object.setRelativeX( MxNumberTenths( 99.4 ) );
	object.setRelativeY( MxNumberTenths( 99.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<charlie source=\"XYZ\" type=\"XYZ\" default-x=\"99.4\" default-y=\"99.4\" relative-x=\"99.4\" relative-y=\"99.4\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 99.5 ) );
	object.setDefaultY( MxNumberTenths( 99.5 ) );
	object.setRelativeX( MxNumberTenths( 99.5 ) );
	object.setRelativeY( MxNumberTenths( 99.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<booksmart source=\"ABC\" type=\"ABC\" default-y=\"99.5\" relative-y=\"99.5\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 99.6 ) );
	object.setDefaultY( MxNumberTenths( 99.6 ) );
	object.setRelativeX( MxNumberTenths( 99.6 ) );
	object.setRelativeY( MxNumberTenths( 99.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<quiet source=\"DEF\" type=\"DEF\" relative-y=\"99.6\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 99.7 ) );
	object.setDefaultY( MxNumberTenths( 99.7 ) );
	object.setRelativeX( MxNumberTenths( 99.7 ) );
	object.setRelativeY( MxNumberTenths( 99.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<musicxmlishard source=\"XYZ\" type=\"XYZ\" relative-y=\"99.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 99.8 ) );
	object.setDefaultY( MxNumberTenths( 99.8 ) );
	object.setRelativeX( MxNumberTenths( 99.8 ) );
	object.setRelativeY( MxNumberTenths( 99.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<bishop source=\"ABC\" type=\"ABC\" default-x=\"99.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 99.9 ) );
	object.setDefaultY( MxNumberTenths( 99.9 ) );
	object.setRelativeX( MxNumberTenths( 99.9 ) );
	object.setRelativeY( MxNumberTenths( 99.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<charlie source=\"DEF\" type=\"DEF\" default-x=\"99.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 100 ) );
	object.setDefaultY( MxNumberTenths( 100 ) );
	object.setRelativeX( MxNumberTenths( 100 ) );
	object.setRelativeY( MxNumberTenths( 100 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<booksmart source=\"XYZ\" type=\"XYZ\" default-x=\"100\" default-y=\"100\" relative-x=\"100\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 100.1 ) );
	object.setDefaultY( MxNumberTenths( 100.1 ) );
	object.setRelativeX( MxNumberTenths( 100.1 ) );
	object.setRelativeY( MxNumberTenths( 100.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<quiet source=\"ABC\" type=\"ABC\" default-y=\"100.1\" relative-x=\"100.1\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 100.2 ) );
	object.setDefaultY( MxNumberTenths( 100.2 ) );
	object.setRelativeX( MxNumberTenths( 100.2 ) );
	object.setRelativeY( MxNumberTenths( 100.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<musicxmlishard source=\"DEF\" type=\"DEF\" default-y=\"100.2\" relative-x=\"100.2\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 100.3 ) );
	object.setDefaultY( MxNumberTenths( 100.3 ) );
	object.setRelativeX( MxNumberTenths( 100.3 ) );
	object.setRelativeY( MxNumberTenths( 100.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<bishop source=\"XYZ\" type=\"XYZ\" default-y=\"100.3\" relative-x=\"100.3\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 100.4 ) );
	object.setDefaultY( MxNumberTenths( 100.4 ) );
	object.setRelativeX( MxNumberTenths( 100.4 ) );
	object.setRelativeY( MxNumberTenths( 100.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<charlie source=\"ABC\" type=\"ABC\" default-x=\"100.4\" relative-x=\"100.4\" relative-y=\"100.4\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 100.5 ) );
	object.setDefaultY( MxNumberTenths( 100.5 ) );
	object.setRelativeX( MxNumberTenths( 100.5 ) );
	object.setRelativeY( MxNumberTenths( 100.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<booksmart source=\"DEF\" type=\"DEF\" default-x=\"100.5\" relative-y=\"100.5\" halign=\"left\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 100.6 ) );
	object.setDefaultY( MxNumberTenths( 100.6 ) );
	object.setRelativeX( MxNumberTenths( 100.6 ) );
	object.setRelativeY( MxNumberTenths( 100.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<quiet source=\"XYZ\" type=\"XYZ\" default-x=\"100.6\" relative-y=\"100.6\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 100.7 ) );
	object.setDefaultY( MxNumberTenths( 100.7 ) );
	object.setRelativeX( MxNumberTenths( 100.7 ) );
	object.setRelativeY( MxNumberTenths( 100.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<musicxmlishard source=\"ABC\" type=\"ABC\" relative-y=\"100.7\" halign=\"right\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 100.8 ) );
	object.setDefaultY( MxNumberTenths( 100.8 ) );
	object.setRelativeX( MxNumberTenths( 100.8 ) );
	object.setRelativeY( MxNumberTenths( 100.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<bishop source=\"DEF\" type=\"DEF\" default-y=\"100.8\" relative-y=\"100.8\" halign=\"left\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 100.9 ) );
	object.setDefaultY( MxNumberTenths( 100.9 ) );
	object.setRelativeX( MxNumberTenths( 100.9 ) );
	object.setRelativeY( MxNumberTenths( 100.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<charlie source=\"XYZ\" type=\"XYZ\" default-y=\"100.9\" relative-y=\"100.9\" halign=\"center\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 101 ) );
	object.setDefaultY( MxNumberTenths( 101 ) );
	object.setRelativeX( MxNumberTenths( 101 ) );
	object.setRelativeY( MxNumberTenths( 101 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<booksmart source=\"ABC\" type=\"ABC\" default-x=\"101\" default-y=\"101\" relative-x=\"101\" halign=\"right\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 101.1 ) );
	object.setDefaultY( MxNumberTenths( 101.1 ) );
	object.setRelativeX( MxNumberTenths( 101.1 ) );
	object.setRelativeY( MxNumberTenths( 101.1 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<quiet source=\"DEF\" type=\"DEF\" default-x=\"101.1\" default-y=\"101.1\" relative-x=\"101.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 101.2 ) );
	object.setDefaultY( MxNumberTenths( 101.2 ) );
	object.setRelativeX( MxNumberTenths( 101.2 ) );
	object.setRelativeY( MxNumberTenths( 101.2 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<musicxmlishard source=\"XYZ\" type=\"XYZ\" default-x=\"101.2\" relative-x=\"101.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 101.3 ) );
	object.setDefaultY( MxNumberTenths( 101.3 ) );
	object.setRelativeX( MxNumberTenths( 101.3 ) );
	object.setRelativeY( MxNumberTenths( 101.3 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<bishop source=\"ABC\" type=\"ABC\" relative-x=\"101.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 101.4 ) );
	object.setDefaultY( MxNumberTenths( 101.4 ) );
	object.setRelativeX( MxNumberTenths( 101.4 ) );
	object.setRelativeY( MxNumberTenths( 101.4 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<charlie source=\"DEF\" type=\"DEF\" relative-x=\"101.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyImage )
{
	MxCxEmptyImage object( "booksmart" );
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
	object.setDefaultX( MxNumberTenths( 101.5 ) );
	object.setDefaultY( MxNumberTenths( 101.5 ) );
	object.setRelativeX( MxNumberTenths( 101.5 ) );
	object.setRelativeY( MxNumberTenths( 101.5 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<booksmart source=\"XYZ\" type=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyImage )
{
	MxCxEmptyImage object( "quiet" );
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
	object.setDefaultX( MxNumberTenths( 101.6 ) );
	object.setDefaultY( MxNumberTenths( 101.6 ) );
	object.setRelativeX( MxNumberTenths( 101.6 ) );
	object.setRelativeY( MxNumberTenths( 101.6 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<quiet source=\"ABC\" type=\"ABC\" default-x=\"101.6\" default-y=\"101.6\" relative-y=\"101.6\" valign=\"middle\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyImage )
{
	MxCxEmptyImage object( "musicxmlishard" );
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
	object.setDefaultX( MxNumberTenths( 101.7 ) );
	object.setDefaultY( MxNumberTenths( 101.7 ) );
	object.setRelativeX( MxNumberTenths( 101.7 ) );
	object.setRelativeY( MxNumberTenths( 101.7 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::left ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
	expected = "<musicxmlishard source=\"DEF\" type=\"DEF\" default-x=\"101.7\" default-y=\"101.7\" relative-y=\"101.7\" valign=\"bottom\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyImage )
{
	MxCxEmptyImage object( "bishop" );
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
	object.setDefaultX( MxNumberTenths( 101.8 ) );
	object.setDefaultY( MxNumberTenths( 101.8 ) );
	object.setRelativeX( MxNumberTenths( 101.8 ) );
	object.setRelativeY( MxNumberTenths( 101.8 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::top ) );
	expected = "<bishop source=\"XYZ\" type=\"XYZ\" default-x=\"101.8\" default-y=\"101.8\" relative-y=\"101.8\" halign=\"center\" valign=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyImage )
{
	MxCxEmptyImage object( "charlie" );
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
	object.setDefaultX( MxNumberTenths( 101.9 ) );
	object.setDefaultY( MxNumberTenths( 101.9 ) );
	object.setRelativeX( MxNumberTenths( 101.9 ) );
	object.setRelativeY( MxNumberTenths( 101.9 ) );
	object.setHalign( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	expected = "<charlie source=\"ABC\" type=\"ABC\" default-y=\"101.9\" relative-y=\"101.9\" halign=\"right\" valign=\"middle\"/>";
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


