/** *******************************************************
  * 
  * MxCxEmptyLinkTest.cpp
  * Created: 2014-12-03 16:31:30
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyLink.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( XlinkHref(  ) ).toString();
	std::string actual = object.getXlinkHref().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( XlinkType( enums::XlinkType::simple ) ).toString();
	std::string actual = object.getXlinkType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( XlinkRole(  ) ).toString();
	std::string actual = object.getXlinkRole().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( XlinkTitle(  ) ).toString();
	std::string actual = object.getXlinkTitle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( XlinkShow( enums::XlinkShow::replace  ) ).toString();
	std::string actual = object.getXlinkShow().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( XlinkActuate( enums::XlinkActuate::onRequest ) ).toString();
	std::string actual = object.getXlinkActuate().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getName().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getElement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( XsPositiveInteger(  ) ).toString();
	std::string actual = object.getPosition().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = "MxCxEmptyLink";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = "link";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	std::string expected = "The link type serves as an outgoing simple XLink. It is also used to connect a MusicXML score with a MusicXML opus. If a relative link is used within a document that is part of a compressed MusicXML file, the link is relative to the root folder of the zip file.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setXlinkHref0, MxCxEmptyLink )
{
	XlinkHref value1( "http://matthewjamesbriggs.com" );
	XlinkHref value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setXlinkHref( value1 );
	XlinkHref expected = value1;
	XlinkHref actual = object.getXlinkHref();
	CHECK_EQUAL( expected, actual )
	object.setXlinkHref( value2 );
	expected = value2;
	actual = object.getXlinkHref();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkRole1, MxCxEmptyLink )
{
	XlinkRole value1( "http://matthewjamesbriggs.com" );
	XlinkRole value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setXlinkRole( value1 );
	XlinkRole expected = value1;
	XlinkRole actual = object.getXlinkRole();
	CHECK_EQUAL( expected, actual )
	object.setXlinkRole( value2 );
	expected = value2;
	actual = object.getXlinkRole();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkTitle2, MxCxEmptyLink )
{
	XlinkTitle value1( "Title A" );
	XlinkTitle value2( "Title B" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setXlinkTitle( value1 );
	XlinkTitle expected = value1;
	XlinkTitle actual = object.getXlinkTitle();
	CHECK_EQUAL( expected, actual )
	object.setXlinkTitle( value2 );
	expected = value2;
	actual = object.getXlinkTitle();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkShow3, MxCxEmptyLink )
{
	XlinkShow value1( lexicon::enums::XlinkShow::none );
	XlinkShow value2( lexicon::enums::XlinkShow::other );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setXlinkShow( value1 );
	XlinkShow expected = value1;
	XlinkShow actual = object.getXlinkShow();
	CHECK_EQUAL( expected, actual )
	object.setXlinkShow( value2 );
	expected = value2;
	actual = object.getXlinkShow();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkActuate4, MxCxEmptyLink )
{
	XlinkActuate value1( lexicon::enums::XlinkActuate::none );
	XlinkActuate value2( lexicon::enums::XlinkActuate::other );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setXlinkActuate( value1 );
	XlinkActuate expected = value1;
	XlinkActuate actual = object.getXlinkActuate();
	CHECK_EQUAL( expected, actual )
	object.setXlinkActuate( value2 );
	expected = value2;
	actual = object.getXlinkActuate();
	CHECK_EQUAL( expected, actual )
}
TEST( setName5, MxCxEmptyLink )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setName( value1 );
	XsToken expected = value1;
	XsToken actual = object.getName();
	CHECK_EQUAL( expected, actual )
	object.setName( value2 );
	expected = value2;
	actual = object.getName();
	CHECK_EQUAL( expected, actual )
}
TEST( setElement6, MxCxEmptyLink )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setElement( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getElement();
	CHECK_EQUAL( expected, actual )
	object.setElement( value2 );
	expected = value2;
	actual = object.getElement();
	CHECK_EQUAL( expected, actual )
}
TEST( setPosition7, MxCxEmptyLink )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setPosition( value1 );
	XsPositiveInteger expected = value1;
	XsPositiveInteger actual = object.getPosition();
	CHECK_EQUAL( expected, actual )
	object.setPosition( value2 );
	expected = value2;
	actual = object.getPosition();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX8, MxCxEmptyLink )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY9, MxCxEmptyLink )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX10, MxCxEmptyLink )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY11, MxCxEmptyLink )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLink object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsXlinkHrefRequired0, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = true;
	bool actual = object.getIsXlinkHrefRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTypeRequired1, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkRoleRequired2, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkRoleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTitleRequired3, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkTitleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkShowRequired4, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkShowRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkActuateRequired5, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkActuateRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameRequired6, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsNameRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementRequired7, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsElementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionRequired8, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsPositionRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired9, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired10, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired11, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired12, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsXlinkHrefPresent0, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = true;
	bool actual = object.getIsXlinkHrefPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsXlinkHrefPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsXlinkHrefPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTypePresent1, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXlinkTypePresent( true );
	expected = true;
	actual = object.getIsXlinkTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXlinkTypePresent( false );
	expected = false;
	actual = object.getIsXlinkTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkRolePresent2, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkRolePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXlinkRolePresent( true );
	expected = true;
	actual = object.getIsXlinkRolePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXlinkRolePresent( false );
	expected = false;
	actual = object.getIsXlinkRolePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTitlePresent3, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkTitlePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXlinkTitlePresent( true );
	expected = true;
	actual = object.getIsXlinkTitlePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXlinkTitlePresent( false );
	expected = false;
	actual = object.getIsXlinkTitlePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkShowPresent4, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkShowPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXlinkShowPresent( true );
	expected = true;
	actual = object.getIsXlinkShowPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXlinkShowPresent( false );
	expected = false;
	actual = object.getIsXlinkShowPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkActuatePresent5, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkActuatePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXlinkActuatePresent( true );
	expected = true;
	actual = object.getIsXlinkActuatePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsXlinkActuatePresent( false );
	expected = false;
	actual = object.getIsXlinkActuatePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNamePresent6, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNamePresent( true );
	expected = true;
	actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNamePresent( false );
	expected = false;
	actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementPresent7, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsElementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsElementPresent( true );
	expected = true;
	actual = object.getIsElementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsElementPresent( false );
	expected = false;
	actual = object.getIsElementPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionPresent8, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsPositionPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPositionPresent( true );
	expected = true;
	actual = object.getIsPositionPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPositionPresent( false );
	expected = false;
	actual = object.getIsPositionPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent9, MxCxEmptyLink )
{
	MxCxEmptyLink object;
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
TEST( getIsDefaultYPresent10, MxCxEmptyLink )
{
	MxCxEmptyLink object;
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
TEST( getIsRelativeXPresent11, MxCxEmptyLink )
{
	MxCxEmptyLink object;
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
TEST( getIsRelativeYPresent12, MxCxEmptyLink )
{
	MxCxEmptyLink object;
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

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsXlinkHrefDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkHrefDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTypeDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = true;
	bool actual = object.getIsXlinkTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkRoleDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkRoleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTitleDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsXlinkTitleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkShowDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = true;
	bool actual = object.getIsXlinkShowDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkActuateDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = true;
	bool actual = object.getIsXlinkActuateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsNameDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsElementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsPositionDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getXlinkHrefDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	XlinkHref expected;
	XlinkHref actual = object.getXlinkHrefDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkTypeDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	XlinkType expected( enums::XlinkType::simple );
	XlinkType actual = object.getXlinkTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkRoleDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	XlinkRole expected;
	XlinkRole actual = object.getXlinkRoleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkTitleDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	XlinkTitle expected;
	XlinkTitle actual = object.getXlinkTitleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkShowDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	XlinkShow expected( enums::XlinkShow::replace  );
	XlinkShow actual = object.getXlinkShowDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkActuateDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	XlinkActuate expected( enums::XlinkActuate::onRequest );
	XlinkActuate actual = object.getXlinkActuateDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNameDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	XsToken expected;
	XsToken actual = object.getNameDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getElementDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	XsNmToken expected;
	XsNmToken actual = object.getElementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPositionDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	XsPositiveInteger expected;
	XsPositiveInteger actual = object.getPositionDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyLink )
{
	MxCxEmptyLink object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 17 ) );
	object.setDefaultX( MxNumberTenths( 142.4 ) );
	object.setDefaultY( MxNumberTenths( 142.4 ) );
	object.setRelativeX( MxNumberTenths( 142.4 ) );
	object.setRelativeY( MxNumberTenths( 142.4 ) );
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	expected = "<booksmart xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"replace\" xlink:actuate=\"onRequest\" name=\"\" element=\"ABC\" position=\"17\" default-x=\"142.4\" default-y=\"142.4\" relative-x=\"142.4\" relative-y=\"142.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 18 ) );
	object.setDefaultX( MxNumberTenths( 142.5 ) );
	object.setDefaultY( MxNumberTenths( 142.5 ) );
	object.setRelativeX( MxNumberTenths( 142.5 ) );
	object.setRelativeY( MxNumberTenths( 142.5 ) );
	expected = "<quiet xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"embed\" xlink:actuate=\"other\" name=\"\" element=\"DEF\" position=\"18\" default-x=\"142.5\" default-y=\"142.5\" relative-x=\"142.5\" relative-y=\"142.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 19 ) );
	object.setDefaultX( MxNumberTenths( 142.6 ) );
	object.setDefaultY( MxNumberTenths( 142.6 ) );
	object.setRelativeX( MxNumberTenths( 142.6 ) );
	object.setRelativeY( MxNumberTenths( 142.6 ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"other\" xlink:actuate=\"none\" name=\"\" element=\"XYZ\" position=\"19\" default-x=\"142.6\" default-y=\"142.6\" relative-x=\"142.6\" relative-y=\"142.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 20 ) );
	object.setDefaultX( MxNumberTenths( 142.7 ) );
	object.setDefaultY( MxNumberTenths( 142.7 ) );
	object.setRelativeX( MxNumberTenths( 142.7 ) );
	object.setRelativeY( MxNumberTenths( 142.7 ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:show=\"none\" xlink:actuate=\"onLoad\" name=\"\" element=\"ABC\" position=\"20\" default-x=\"142.7\" default-y=\"142.7\" relative-x=\"142.7\" relative-y=\"142.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 21 ) );
	object.setDefaultX( MxNumberTenths( 142.8 ) );
	object.setDefaultY( MxNumberTenths( 142.8 ) );
	object.setRelativeX( MxNumberTenths( 142.8 ) );
	object.setRelativeY( MxNumberTenths( 142.8 ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:type=\"simple\" xlink:show=\"new\" xlink:actuate=\"onRequest\" name=\"\" element=\"DEF\" position=\"21\" default-x=\"142.8\" default-y=\"142.8\" relative-x=\"142.8\" relative-y=\"142.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 22 ) );
	object.setDefaultX( MxNumberTenths( 142.9 ) );
	object.setDefaultY( MxNumberTenths( 142.9 ) );
	object.setRelativeX( MxNumberTenths( 142.9 ) );
	object.setRelativeY( MxNumberTenths( 142.9 ) );
	expected = "<booksmart xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:actuate=\"other\" name=\"\" element=\"XYZ\" position=\"22\" default-x=\"142.9\" default-y=\"142.9\" relative-x=\"142.9\" relative-y=\"142.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 23 ) );
	object.setDefaultX( MxNumberTenths( 143 ) );
	object.setDefaultY( MxNumberTenths( 143 ) );
	object.setRelativeX( MxNumberTenths( 143 ) );
	object.setRelativeY( MxNumberTenths( 143 ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:role=\"ABC\" name=\"\" element=\"ABC\" position=\"23\" default-x=\"143\" default-y=\"143\" relative-x=\"143\" relative-y=\"143\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 24 ) );
	object.setDefaultX( MxNumberTenths( 143.1 ) );
	object.setDefaultY( MxNumberTenths( 143.1 ) );
	object.setRelativeX( MxNumberTenths( 143.1 ) );
	object.setRelativeY( MxNumberTenths( 143.1 ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:role=\"DEF\" element=\"DEF\" position=\"24\" default-x=\"143.1\" default-y=\"143.1\" relative-x=\"143.1\" relative-y=\"143.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 25 ) );
	object.setDefaultX( MxNumberTenths( 143.2 ) );
	object.setDefaultY( MxNumberTenths( 143.2 ) );
	object.setRelativeX( MxNumberTenths( 143.2 ) );
	object.setRelativeY( MxNumberTenths( 143.2 ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" position=\"25\" default-x=\"143.2\" default-y=\"143.2\" relative-x=\"143.2\" relative-y=\"143.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 26 ) );
	object.setDefaultX( MxNumberTenths( 143.3 ) );
	object.setDefaultY( MxNumberTenths( 143.3 ) );
	object.setRelativeX( MxNumberTenths( 143.3 ) );
	object.setRelativeY( MxNumberTenths( 143.3 ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" default-x=\"143.3\" default-y=\"143.3\" relative-x=\"143.3\" relative-y=\"143.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 27 ) );
	object.setDefaultX( MxNumberTenths( 143.4 ) );
	object.setDefaultY( MxNumberTenths( 143.4 ) );
	object.setRelativeX( MxNumberTenths( 143.4 ) );
	object.setRelativeY( MxNumberTenths( 143.4 ) );
	expected = "<booksmart xlink:href=\"DEF\" xlink:title=\"DEF\" xlink:show=\"replace\" default-y=\"143.4\" relative-x=\"143.4\" relative-y=\"143.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 28 ) );
	object.setDefaultX( MxNumberTenths( 143.5 ) );
	object.setDefaultY( MxNumberTenths( 143.5 ) );
	object.setRelativeX( MxNumberTenths( 143.5 ) );
	object.setRelativeY( MxNumberTenths( 143.5 ) );
	expected = "<quiet xlink:href=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"embed\" relative-x=\"143.5\" relative-y=\"143.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 29 ) );
	object.setDefaultX( MxNumberTenths( 143.6 ) );
	object.setDefaultY( MxNumberTenths( 143.6 ) );
	object.setRelativeX( MxNumberTenths( 143.6 ) );
	object.setRelativeY( MxNumberTenths( 143.6 ) );
	expected = "<musicxmlishard xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:show=\"other\" xlink:actuate=\"onRequest\" relative-y=\"143.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 30 ) );
	object.setDefaultX( MxNumberTenths( 143.7 ) );
	object.setDefaultY( MxNumberTenths( 143.7 ) );
	object.setRelativeX( MxNumberTenths( 143.7 ) );
	object.setRelativeY( MxNumberTenths( 143.7 ) );
	expected = "<bishop xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:show=\"none\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 31 ) );
	object.setDefaultX( MxNumberTenths( 143.8 ) );
	object.setDefaultY( MxNumberTenths( 143.8 ) );
	object.setRelativeX( MxNumberTenths( 143.8 ) );
	object.setRelativeY( MxNumberTenths( 143.8 ) );
	expected = "<charlie xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:show=\"new\" xlink:actuate=\"none\" name=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 32 ) );
	object.setDefaultX( MxNumberTenths( 143.9 ) );
	object.setDefaultY( MxNumberTenths( 143.9 ) );
	object.setRelativeX( MxNumberTenths( 143.9 ) );
	object.setRelativeY( MxNumberTenths( 143.9 ) );
	expected = "<booksmart xlink:href=\"ABC\" xlink:actuate=\"onLoad\" name=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 33 ) );
	object.setDefaultX( MxNumberTenths( 144 ) );
	object.setDefaultY( MxNumberTenths( 144 ) );
	object.setRelativeX( MxNumberTenths( 144 ) );
	object.setRelativeY( MxNumberTenths( 144 ) );
	expected = "<quiet xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:actuate=\"onRequest\" name=\"\" element=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 34 ) );
	object.setDefaultX( MxNumberTenths( 144.1 ) );
	object.setDefaultY( MxNumberTenths( 144.1 ) );
	object.setRelativeX( MxNumberTenths( 144.1 ) );
	object.setRelativeY( MxNumberTenths( 144.1 ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:actuate=\"other\" name=\"\" element=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 35 ) );
	object.setDefaultX( MxNumberTenths( 144.2 ) );
	object.setDefaultY( MxNumberTenths( 144.2 ) );
	object.setRelativeX( MxNumberTenths( 144.2 ) );
	object.setRelativeY( MxNumberTenths( 144.2 ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" name=\"\" element=\"ABC\" position=\"35\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 36 ) );
	object.setDefaultX( MxNumberTenths( 144.3 ) );
	object.setDefaultY( MxNumberTenths( 144.3 ) );
	object.setRelativeX( MxNumberTenths( 144.3 ) );
	object.setRelativeY( MxNumberTenths( 144.3 ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" name=\"\" element=\"DEF\" position=\"36\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 37 ) );
	object.setDefaultX( MxNumberTenths( 144.4 ) );
	object.setDefaultY( MxNumberTenths( 144.4 ) );
	object.setRelativeX( MxNumberTenths( 144.4 ) );
	object.setRelativeY( MxNumberTenths( 144.4 ) );
	expected = "<booksmart xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:show=\"replace\" name=\"\" element=\"XYZ\" position=\"37\" default-x=\"144.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 38 ) );
	object.setDefaultX( MxNumberTenths( 144.5 ) );
	object.setDefaultY( MxNumberTenths( 144.5 ) );
	object.setRelativeX( MxNumberTenths( 144.5 ) );
	object.setRelativeY( MxNumberTenths( 144.5 ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:type=\"simple\" xlink:show=\"embed\" element=\"ABC\" position=\"38\" default-x=\"144.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 39 ) );
	object.setDefaultX( MxNumberTenths( 144.6 ) );
	object.setDefaultY( MxNumberTenths( 144.6 ) );
	object.setRelativeX( MxNumberTenths( 144.6 ) );
	object.setRelativeY( MxNumberTenths( 144.6 ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:show=\"other\" element=\"DEF\" position=\"39\" default-x=\"144.6\" default-y=\"144.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 40 ) );
	object.setDefaultX( MxNumberTenths( 144.7 ) );
	object.setDefaultY( MxNumberTenths( 144.7 ) );
	object.setRelativeX( MxNumberTenths( 144.7 ) );
	object.setRelativeY( MxNumberTenths( 144.7 ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:show=\"none\" element=\"XYZ\" position=\"40\" default-x=\"144.7\" default-y=\"144.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 41 ) );
	object.setDefaultX( MxNumberTenths( 144.8 ) );
	object.setDefaultY( MxNumberTenths( 144.8 ) );
	object.setRelativeX( MxNumberTenths( 144.8 ) );
	object.setRelativeY( MxNumberTenths( 144.8 ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"new\" xlink:actuate=\"onRequest\" position=\"41\" default-x=\"144.8\" default-y=\"144.8\" relative-x=\"144.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 42 ) );
	object.setDefaultX( MxNumberTenths( 144.9 ) );
	object.setDefaultY( MxNumberTenths( 144.9 ) );
	object.setRelativeX( MxNumberTenths( 144.9 ) );
	object.setRelativeY( MxNumberTenths( 144.9 ) );
	expected = "<booksmart xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:actuate=\"other\" position=\"42\" default-x=\"144.9\" default-y=\"144.9\" relative-x=\"144.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 43 ) );
	object.setDefaultX( MxNumberTenths( 145 ) );
	object.setDefaultY( MxNumberTenths( 145 ) );
	object.setRelativeX( MxNumberTenths( 145 ) );
	object.setRelativeY( MxNumberTenths( 145 ) );
	expected = "<quiet xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:actuate=\"none\" position=\"43\" default-x=\"145\" default-y=\"145\" relative-x=\"145\" relative-y=\"145\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 44 ) );
	object.setDefaultX( MxNumberTenths( 145.1 ) );
	object.setDefaultY( MxNumberTenths( 145.1 ) );
	object.setRelativeX( MxNumberTenths( 145.1 ) );
	object.setRelativeY( MxNumberTenths( 145.1 ) );
	expected = "<musicxmlishard xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onLoad\" default-x=\"145.1\" default-y=\"145.1\" relative-x=\"145.1\" relative-y=\"145.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 45 ) );
	object.setDefaultX( MxNumberTenths( 145.2 ) );
	object.setDefaultY( MxNumberTenths( 145.2 ) );
	object.setRelativeX( MxNumberTenths( 145.2 ) );
	object.setRelativeY( MxNumberTenths( 145.2 ) );
	expected = "<bishop xlink:href=\"DEF\" xlink:type=\"simple\" xlink:actuate=\"onRequest\" name=\"\" default-x=\"145.2\" default-y=\"145.2\" relative-x=\"145.2\" relative-y=\"145.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 46 ) );
	object.setDefaultX( MxNumberTenths( 145.3 ) );
	object.setDefaultY( MxNumberTenths( 145.3 ) );
	object.setRelativeX( MxNumberTenths( 145.3 ) );
	object.setRelativeY( MxNumberTenths( 145.3 ) );
	expected = "<charlie xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:actuate=\"other\" name=\"\" default-x=\"145.3\" default-y=\"145.3\" relative-x=\"145.3\" relative-y=\"145.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 47 ) );
	object.setDefaultX( MxNumberTenths( 145.4 ) );
	object.setDefaultY( MxNumberTenths( 145.4 ) );
	object.setRelativeX( MxNumberTenths( 145.4 ) );
	object.setRelativeY( MxNumberTenths( 145.4 ) );
	expected = "<booksmart xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:show=\"replace\" name=\"\" default-y=\"145.4\" relative-x=\"145.4\" relative-y=\"145.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 48 ) );
	object.setDefaultX( MxNumberTenths( 145.5 ) );
	object.setDefaultY( MxNumberTenths( 145.5 ) );
	object.setRelativeX( MxNumberTenths( 145.5 ) );
	object.setRelativeY( MxNumberTenths( 145.5 ) );
	expected = "<quiet xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:show=\"embed\" name=\"\" default-y=\"145.5\" relative-x=\"145.5\" relative-y=\"145.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 49 ) );
	object.setDefaultX( MxNumberTenths( 145.6 ) );
	object.setDefaultY( MxNumberTenths( 145.6 ) );
	object.setRelativeX( MxNumberTenths( 145.6 ) );
	object.setRelativeY( MxNumberTenths( 145.6 ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"other\" name=\"\" element=\"XYZ\" default-y=\"145.6\" relative-x=\"145.6\" relative-y=\"145.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 50 ) );
	object.setDefaultX( MxNumberTenths( 145.7 ) );
	object.setDefaultY( MxNumberTenths( 145.7 ) );
	object.setRelativeX( MxNumberTenths( 145.7 ) );
	object.setRelativeY( MxNumberTenths( 145.7 ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" xlink:show=\"none\" name=\"\" element=\"ABC\" relative-x=\"145.7\" relative-y=\"145.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 51 ) );
	object.setDefaultX( MxNumberTenths( 145.8 ) );
	object.setDefaultY( MxNumberTenths( 145.8 ) );
	object.setRelativeX( MxNumberTenths( 145.8 ) );
	object.setRelativeY( MxNumberTenths( 145.8 ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:title=\"DEF\" xlink:show=\"new\" name=\"\" element=\"DEF\" relative-x=\"145.8\" relative-y=\"145.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 52 ) );
	object.setDefaultX( MxNumberTenths( 145.9 ) );
	object.setDefaultY( MxNumberTenths( 145.9 ) );
	object.setRelativeX( MxNumberTenths( 145.9 ) );
	object.setRelativeY( MxNumberTenths( 145.9 ) );
	expected = "<booksmart xlink:href=\"XYZ\" xlink:title=\"XYZ\" element=\"XYZ\" relative-x=\"145.9\" relative-y=\"145.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 53 ) );
	object.setDefaultX( MxNumberTenths( 146 ) );
	object.setDefaultY( MxNumberTenths( 146 ) );
	object.setRelativeX( MxNumberTenths( 146 ) );
	object.setRelativeY( MxNumberTenths( 146 ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:actuate=\"onRequest\" element=\"ABC\" position=\"53\" relative-y=\"146\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 54 ) );
	object.setDefaultX( MxNumberTenths( 146.1 ) );
	object.setDefaultY( MxNumberTenths( 146.1 ) );
	object.setRelativeX( MxNumberTenths( 146.1 ) );
	object.setRelativeY( MxNumberTenths( 146.1 ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:actuate=\"other\" element=\"DEF\" position=\"54\" relative-y=\"146.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 55 ) );
	object.setDefaultX( MxNumberTenths( 146.2 ) );
	object.setDefaultY( MxNumberTenths( 146.2 ) );
	object.setRelativeX( MxNumberTenths( 146.2 ) );
	object.setRelativeY( MxNumberTenths( 146.2 ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:actuate=\"none\" element=\"XYZ\" position=\"55\" relative-y=\"146.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 56 ) );
	object.setDefaultX( MxNumberTenths( 146.3 ) );
	object.setDefaultY( MxNumberTenths( 146.3 ) );
	object.setRelativeX( MxNumberTenths( 146.3 ) );
	object.setRelativeY( MxNumberTenths( 146.3 ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:actuate=\"onLoad\" element=\"ABC\" position=\"56\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 57 ) );
	object.setDefaultX( MxNumberTenths( 146.4 ) );
	object.setDefaultY( MxNumberTenths( 146.4 ) );
	object.setRelativeX( MxNumberTenths( 146.4 ) );
	object.setRelativeY( MxNumberTenths( 146.4 ) );
	expected = "<booksmart xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:show=\"replace\" xlink:actuate=\"onRequest\" position=\"57\" default-x=\"146.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 58 ) );
	object.setDefaultX( MxNumberTenths( 146.5 ) );
	object.setDefaultY( MxNumberTenths( 146.5 ) );
	object.setRelativeX( MxNumberTenths( 146.5 ) );
	object.setRelativeY( MxNumberTenths( 146.5 ) );
	expected = "<quiet xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:show=\"embed\" xlink:actuate=\"other\" position=\"58\" default-x=\"146.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 59 ) );
	object.setDefaultX( MxNumberTenths( 146.6 ) );
	object.setDefaultY( MxNumberTenths( 146.6 ) );
	object.setRelativeX( MxNumberTenths( 146.6 ) );
	object.setRelativeY( MxNumberTenths( 146.6 ) );
	expected = "<musicxmlishard xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"other\" name=\"\" position=\"59\" default-x=\"146.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 60 ) );
	object.setDefaultX( MxNumberTenths( 146.7 ) );
	object.setDefaultY( MxNumberTenths( 146.7 ) );
	object.setRelativeX( MxNumberTenths( 146.7 ) );
	object.setRelativeY( MxNumberTenths( 146.7 ) );
	expected = "<bishop xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"none\" name=\"\" position=\"60\" default-x=\"146.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 61 ) );
	object.setDefaultX( MxNumberTenths( 146.8 ) );
	object.setDefaultY( MxNumberTenths( 146.8 ) );
	object.setRelativeX( MxNumberTenths( 146.8 ) );
	object.setRelativeY( MxNumberTenths( 146.8 ) );
	expected = "<charlie xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:show=\"new\" name=\"\" position=\"61\" default-x=\"146.8\" default-y=\"146.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 62 ) );
	object.setDefaultX( MxNumberTenths( 146.9 ) );
	object.setDefaultY( MxNumberTenths( 146.9 ) );
	object.setRelativeX( MxNumberTenths( 146.9 ) );
	object.setRelativeY( MxNumberTenths( 146.9 ) );
	expected = "<booksmart xlink:href=\"ABC\" xlink:type=\"simple\" name=\"\" default-x=\"146.9\" default-y=\"146.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 63 ) );
	object.setDefaultX( MxNumberTenths( 147 ) );
	object.setDefaultY( MxNumberTenths( 147 ) );
	object.setRelativeX( MxNumberTenths( 147 ) );
	object.setRelativeY( MxNumberTenths( 147 ) );
	expected = "<quiet xlink:href=\"DEF\" name=\"\" default-x=\"147\" default-y=\"147\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 64 ) );
	object.setDefaultX( MxNumberTenths( 147.1 ) );
	object.setDefaultY( MxNumberTenths( 147.1 ) );
	object.setRelativeX( MxNumberTenths( 147.1 ) );
	object.setRelativeY( MxNumberTenths( 147.1 ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" name=\"\" default-x=\"147.1\" default-y=\"147.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 65 ) );
	object.setDefaultX( MxNumberTenths( 147.2 ) );
	object.setDefaultY( MxNumberTenths( 147.2 ) );
	object.setRelativeX( MxNumberTenths( 147.2 ) );
	object.setRelativeY( MxNumberTenths( 147.2 ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onRequest\" name=\"\" element=\"ABC\" default-x=\"147.2\" default-y=\"147.2\" relative-x=\"147.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 66 ) );
	object.setDefaultX( MxNumberTenths( 147.3 ) );
	object.setDefaultY( MxNumberTenths( 147.3 ) );
	object.setRelativeX( MxNumberTenths( 147.3 ) );
	object.setRelativeY( MxNumberTenths( 147.3 ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:actuate=\"other\" element=\"DEF\" default-x=\"147.3\" default-y=\"147.3\" relative-x=\"147.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 67 ) );
	object.setDefaultX( MxNumberTenths( 147.4 ) );
	object.setDefaultY( MxNumberTenths( 147.4 ) );
	object.setRelativeX( MxNumberTenths( 147.4 ) );
	object.setRelativeY( MxNumberTenths( 147.4 ) );
	expected = "<booksmart xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"replace\" xlink:actuate=\"none\" element=\"XYZ\" default-y=\"147.4\" relative-x=\"147.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 68 ) );
	object.setDefaultX( MxNumberTenths( 147.5 ) );
	object.setDefaultY( MxNumberTenths( 147.5 ) );
	object.setRelativeX( MxNumberTenths( 147.5 ) );
	object.setRelativeY( MxNumberTenths( 147.5 ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:show=\"embed\" xlink:actuate=\"onLoad\" element=\"ABC\" default-y=\"147.5\" relative-x=\"147.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 69 ) );
	object.setDefaultX( MxNumberTenths( 147.6 ) );
	object.setDefaultY( MxNumberTenths( 147.6 ) );
	object.setRelativeX( MxNumberTenths( 147.6 ) );
	object.setRelativeY( MxNumberTenths( 147.6 ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:type=\"simple\" xlink:show=\"other\" xlink:actuate=\"onRequest\" element=\"DEF\" default-y=\"147.6\" relative-x=\"147.6\" relative-y=\"147.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 70 ) );
	object.setDefaultX( MxNumberTenths( 147.7 ) );
	object.setDefaultY( MxNumberTenths( 147.7 ) );
	object.setRelativeX( MxNumberTenths( 147.7 ) );
	object.setRelativeY( MxNumberTenths( 147.7 ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:show=\"none\" xlink:actuate=\"other\" element=\"XYZ\" default-y=\"147.7\" relative-x=\"147.7\" relative-y=\"147.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 71 ) );
	object.setDefaultX( MxNumberTenths( 147.8 ) );
	object.setDefaultY( MxNumberTenths( 147.8 ) );
	object.setRelativeX( MxNumberTenths( 147.8 ) );
	object.setRelativeY( MxNumberTenths( 147.8 ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:show=\"new\" element=\"ABC\" position=\"71\" default-y=\"147.8\" relative-x=\"147.8\" relative-y=\"147.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 72 ) );
	object.setDefaultX( MxNumberTenths( 147.9 ) );
	object.setDefaultY( MxNumberTenths( 147.9 ) );
	object.setRelativeX( MxNumberTenths( 147.9 ) );
	object.setRelativeY( MxNumberTenths( 147.9 ) );
	expected = "<booksmart xlink:href=\"DEF\" xlink:role=\"DEF\" element=\"DEF\" position=\"72\" relative-x=\"147.9\" relative-y=\"147.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 73 ) );
	object.setDefaultX( MxNumberTenths( 148 ) );
	object.setDefaultY( MxNumberTenths( 148 ) );
	object.setRelativeX( MxNumberTenths( 148 ) );
	object.setRelativeY( MxNumberTenths( 148 ) );
	expected = "<quiet xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" name=\"\" position=\"73\" relative-x=\"148\" relative-y=\"148\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 74 ) );
	object.setDefaultX( MxNumberTenths( 148.1 ) );
	object.setDefaultY( MxNumberTenths( 148.1 ) );
	object.setRelativeX( MxNumberTenths( 148.1 ) );
	object.setRelativeY( MxNumberTenths( 148.1 ) );
	expected = "<musicxmlishard xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" name=\"\" position=\"74\" relative-x=\"148.1\" relative-y=\"148.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 75 ) );
	object.setDefaultX( MxNumberTenths( 148.2 ) );
	object.setDefaultY( MxNumberTenths( 148.2 ) );
	object.setRelativeX( MxNumberTenths( 148.2 ) );
	object.setRelativeY( MxNumberTenths( 148.2 ) );
	expected = "<bishop xlink:href=\"DEF\" xlink:title=\"DEF\" name=\"\" position=\"75\" relative-x=\"148.2\" relative-y=\"148.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 76 ) );
	object.setDefaultX( MxNumberTenths( 148.3 ) );
	object.setDefaultY( MxNumberTenths( 148.3 ) );
	object.setRelativeX( MxNumberTenths( 148.3 ) );
	object.setRelativeY( MxNumberTenths( 148.3 ) );
	expected = "<charlie xlink:href=\"XYZ\" xlink:title=\"XYZ\" name=\"\" position=\"76\" relative-x=\"148.3\" relative-y=\"148.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 77 ) );
	object.setDefaultX( MxNumberTenths( 148.4 ) );
	object.setDefaultY( MxNumberTenths( 148.4 ) );
	object.setRelativeX( MxNumberTenths( 148.4 ) );
	object.setRelativeY( MxNumberTenths( 148.4 ) );
	expected = "<booksmart xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:show=\"replace\" xlink:actuate=\"onRequest\" name=\"\" position=\"77\" default-x=\"148.4\" relative-y=\"148.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 78 ) );
	object.setDefaultX( MxNumberTenths( 148.5 ) );
	object.setDefaultY( MxNumberTenths( 148.5 ) );
	object.setRelativeX( MxNumberTenths( 148.5 ) );
	object.setRelativeY( MxNumberTenths( 148.5 ) );
	expected = "<quiet xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:show=\"embed\" xlink:actuate=\"other\" name=\"\" position=\"78\" default-x=\"148.5\" relative-y=\"148.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 79 ) );
	object.setDefaultX( MxNumberTenths( 148.6 ) );
	object.setDefaultY( MxNumberTenths( 148.6 ) );
	object.setRelativeX( MxNumberTenths( 148.6 ) );
	object.setRelativeY( MxNumberTenths( 148.6 ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:show=\"other\" xlink:actuate=\"none\" name=\"\" position=\"79\" default-x=\"148.6\" relative-y=\"148.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 80 ) );
	object.setDefaultX( MxNumberTenths( 148.7 ) );
	object.setDefaultY( MxNumberTenths( 148.7 ) );
	object.setRelativeX( MxNumberTenths( 148.7 ) );
	object.setRelativeY( MxNumberTenths( 148.7 ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:show=\"none\" xlink:actuate=\"onLoad\" default-x=\"148.7\" relative-y=\"148.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 81 ) );
	object.setDefaultX( MxNumberTenths( 148.8 ) );
	object.setDefaultY( MxNumberTenths( 148.8 ) );
	object.setRelativeX( MxNumberTenths( 148.8 ) );
	object.setRelativeY( MxNumberTenths( 148.8 ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:show=\"new\" xlink:actuate=\"onRequest\" element=\"DEF\" default-x=\"148.8\" relative-y=\"148.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 82 ) );
	object.setDefaultX( MxNumberTenths( 148.9 ) );
	object.setDefaultY( MxNumberTenths( 148.9 ) );
	object.setRelativeX( MxNumberTenths( 148.9 ) );
	object.setRelativeY( MxNumberTenths( 148.9 ) );
	expected = "<booksmart xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:actuate=\"other\" element=\"XYZ\" default-x=\"148.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 83 ) );
	object.setDefaultX( MxNumberTenths( 149 ) );
	object.setDefaultY( MxNumberTenths( 149 ) );
	object.setRelativeX( MxNumberTenths( 149 ) );
	object.setRelativeY( MxNumberTenths( 149 ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" element=\"ABC\" default-x=\"149\" default-y=\"149\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 84 ) );
	object.setDefaultX( MxNumberTenths( 149.1 ) );
	object.setDefaultY( MxNumberTenths( 149.1 ) );
	object.setRelativeX( MxNumberTenths( 149.1 ) );
	object.setRelativeY( MxNumberTenths( 149.1 ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" element=\"DEF\" default-x=\"149.1\" default-y=\"149.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 85 ) );
	object.setDefaultX( MxNumberTenths( 149.2 ) );
	object.setDefaultY( MxNumberTenths( 149.2 ) );
	object.setRelativeX( MxNumberTenths( 149.2 ) );
	object.setRelativeY( MxNumberTenths( 149.2 ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" element=\"XYZ\" default-x=\"149.2\" default-y=\"149.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 86 ) );
	object.setDefaultX( MxNumberTenths( 149.3 ) );
	object.setDefaultY( MxNumberTenths( 149.3 ) );
	object.setRelativeX( MxNumberTenths( 149.3 ) );
	object.setRelativeY( MxNumberTenths( 149.3 ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:type=\"simple\" element=\"ABC\" default-x=\"149.3\" default-y=\"149.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 87 ) );
	object.setDefaultX( MxNumberTenths( 149.4 ) );
	object.setDefaultY( MxNumberTenths( 149.4 ) );
	object.setRelativeX( MxNumberTenths( 149.4 ) );
	object.setRelativeY( MxNumberTenths( 149.4 ) );
	expected = "<booksmart xlink:href=\"DEF\" xlink:show=\"replace\" name=\"\" element=\"DEF\" default-y=\"149.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 88 ) );
	object.setDefaultX( MxNumberTenths( 149.5 ) );
	object.setDefaultY( MxNumberTenths( 149.5 ) );
	object.setRelativeX( MxNumberTenths( 149.5 ) );
	object.setRelativeY( MxNumberTenths( 149.5 ) );
	expected = "<quiet xlink:href=\"XYZ\" xlink:show=\"embed\" name=\"\" element=\"XYZ\" default-y=\"149.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 89 ) );
	object.setDefaultX( MxNumberTenths( 149.6 ) );
	object.setDefaultY( MxNumberTenths( 149.6 ) );
	object.setRelativeX( MxNumberTenths( 149.6 ) );
	object.setRelativeY( MxNumberTenths( 149.6 ) );
	expected = "<musicxmlishard xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"other\" xlink:actuate=\"onRequest\" name=\"\" position=\"89\" default-y=\"149.6\" relative-x=\"149.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 90 ) );
	object.setDefaultX( MxNumberTenths( 149.7 ) );
	object.setDefaultY( MxNumberTenths( 149.7 ) );
	object.setRelativeX( MxNumberTenths( 149.7 ) );
	object.setRelativeY( MxNumberTenths( 149.7 ) );
	expected = "<bishop xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"none\" xlink:actuate=\"other\" name=\"\" position=\"90\" default-y=\"149.7\" relative-x=\"149.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 91 ) );
	object.setDefaultX( MxNumberTenths( 149.8 ) );
	object.setDefaultY( MxNumberTenths( 149.8 ) );
	object.setRelativeX( MxNumberTenths( 149.8 ) );
	object.setRelativeY( MxNumberTenths( 149.8 ) );
	expected = "<charlie xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"new\" xlink:actuate=\"none\" name=\"\" position=\"91\" default-y=\"149.8\" relative-x=\"149.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 92 ) );
	object.setDefaultX( MxNumberTenths( 149.9 ) );
	object.setDefaultY( MxNumberTenths( 149.9 ) );
	object.setRelativeX( MxNumberTenths( 149.9 ) );
	object.setRelativeY( MxNumberTenths( 149.9 ) );
	expected = "<booksmart xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onLoad\" name=\"\" position=\"92\" default-y=\"149.9\" relative-x=\"149.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 93 ) );
	object.setDefaultX( MxNumberTenths( 150 ) );
	object.setDefaultY( MxNumberTenths( 150 ) );
	object.setRelativeX( MxNumberTenths( 150 ) );
	object.setRelativeY( MxNumberTenths( 150 ) );
	expected = "<quiet xlink:href=\"DEF\" xlink:type=\"simple\" xlink:actuate=\"onRequest\" name=\"\" position=\"93\" default-y=\"150\" relative-x=\"150\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 94 ) );
	object.setDefaultX( MxNumberTenths( 150.1 ) );
	object.setDefaultY( MxNumberTenths( 150.1 ) );
	object.setRelativeX( MxNumberTenths( 150.1 ) );
	object.setRelativeY( MxNumberTenths( 150.1 ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:actuate=\"other\" position=\"94\" relative-x=\"150.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 95 ) );
	object.setDefaultX( MxNumberTenths( 150.2 ) );
	object.setDefaultY( MxNumberTenths( 150.2 ) );
	object.setRelativeX( MxNumberTenths( 150.2 ) );
	object.setRelativeY( MxNumberTenths( 150.2 ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:role=\"ABC\" position=\"95\" relative-x=\"150.2\" relative-y=\"150.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 96 ) );
	object.setDefaultX( MxNumberTenths( 150.3 ) );
	object.setDefaultY( MxNumberTenths( 150.3 ) );
	object.setRelativeX( MxNumberTenths( 150.3 ) );
	object.setRelativeY( MxNumberTenths( 150.3 ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:role=\"DEF\" position=\"96\" relative-x=\"150.3\" relative-y=\"150.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 97 ) );
	object.setDefaultX( MxNumberTenths( 150.4 ) );
	object.setDefaultY( MxNumberTenths( 150.4 ) );
	object.setRelativeX( MxNumberTenths( 150.4 ) );
	object.setRelativeY( MxNumberTenths( 150.4 ) );
	expected = "<booksmart xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"replace\" element=\"XYZ\" position=\"97\" default-x=\"150.4\" relative-x=\"150.4\" relative-y=\"150.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 98 ) );
	object.setDefaultX( MxNumberTenths( 150.5 ) );
	object.setDefaultY( MxNumberTenths( 150.5 ) );
	object.setRelativeX( MxNumberTenths( 150.5 ) );
	object.setRelativeY( MxNumberTenths( 150.5 ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" xlink:show=\"embed\" element=\"ABC\" default-x=\"150.5\" relative-x=\"150.5\" relative-y=\"150.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 99 ) );
	object.setDefaultX( MxNumberTenths( 150.6 ) );
	object.setDefaultY( MxNumberTenths( 150.6 ) );
	object.setRelativeX( MxNumberTenths( 150.6 ) );
	object.setRelativeY( MxNumberTenths( 150.6 ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:title=\"DEF\" xlink:show=\"other\" element=\"DEF\" default-x=\"150.6\" relative-x=\"150.6\" relative-y=\"150.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 100 ) );
	object.setDefaultX( MxNumberTenths( 150.7 ) );
	object.setDefaultY( MxNumberTenths( 150.7 ) );
	object.setRelativeX( MxNumberTenths( 150.7 ) );
	object.setRelativeY( MxNumberTenths( 150.7 ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"none\" element=\"XYZ\" default-x=\"150.7\" relative-x=\"150.7\" relative-y=\"150.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 101 ) );
	object.setDefaultX( MxNumberTenths( 150.8 ) );
	object.setDefaultY( MxNumberTenths( 150.8 ) );
	object.setRelativeX( MxNumberTenths( 150.8 ) );
	object.setRelativeY( MxNumberTenths( 150.8 ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:show=\"new\" xlink:actuate=\"onRequest\" name=\"\" element=\"ABC\" default-x=\"150.8\" relative-y=\"150.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 102 ) );
	object.setDefaultX( MxNumberTenths( 150.9 ) );
	object.setDefaultY( MxNumberTenths( 150.9 ) );
	object.setRelativeX( MxNumberTenths( 150.9 ) );
	object.setRelativeY( MxNumberTenths( 150.9 ) );
	expected = "<booksmart xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:actuate=\"other\" name=\"\" element=\"DEF\" default-x=\"150.9\" relative-y=\"150.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 103 ) );
	object.setDefaultX( MxNumberTenths( 151 ) );
	object.setDefaultY( MxNumberTenths( 151 ) );
	object.setRelativeX( MxNumberTenths( 151 ) );
	object.setRelativeY( MxNumberTenths( 151 ) );
	expected = "<quiet xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:actuate=\"none\" name=\"\" element=\"XYZ\" default-x=\"151\" relative-y=\"151\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 104 ) );
	object.setDefaultX( MxNumberTenths( 151.1 ) );
	object.setDefaultY( MxNumberTenths( 151.1 ) );
	object.setRelativeX( MxNumberTenths( 151.1 ) );
	object.setRelativeY( MxNumberTenths( 151.1 ) );
	expected = "<musicxmlishard xlink:href=\"ABC\" xlink:actuate=\"onLoad\" name=\"\" element=\"ABC\" default-x=\"151.1\" relative-y=\"151.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 105 ) );
	object.setDefaultX( MxNumberTenths( 151.2 ) );
	object.setDefaultY( MxNumberTenths( 151.2 ) );
	object.setRelativeX( MxNumberTenths( 151.2 ) );
	object.setRelativeY( MxNumberTenths( 151.2 ) );
	expected = "<bishop xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:actuate=\"onRequest\" name=\"\" default-x=\"151.2\" default-y=\"151.2\" relative-y=\"151.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 106 ) );
	object.setDefaultX( MxNumberTenths( 151.3 ) );
	object.setDefaultY( MxNumberTenths( 151.3 ) );
	object.setRelativeX( MxNumberTenths( 151.3 ) );
	object.setRelativeY( MxNumberTenths( 151.3 ) );
	expected = "<charlie xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:actuate=\"other\" name=\"\" default-x=\"151.3\" default-y=\"151.3\" relative-y=\"151.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( true );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 107 ) );
	object.setDefaultX( MxNumberTenths( 151.4 ) );
	object.setDefaultY( MxNumberTenths( 151.4 ) );
	object.setRelativeX( MxNumberTenths( 151.4 ) );
	object.setRelativeY( MxNumberTenths( 151.4 ) );
	expected = "<booksmart xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"replace\" name=\"\" position=\"107\" default-y=\"151.4\" relative-y=\"151.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 108 ) );
	object.setDefaultX( MxNumberTenths( 151.5 ) );
	object.setDefaultY( MxNumberTenths( 151.5 ) );
	object.setRelativeX( MxNumberTenths( 151.5 ) );
	object.setRelativeY( MxNumberTenths( 151.5 ) );
	expected = "<quiet xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"embed\" position=\"108\" default-y=\"151.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 109 ) );
	object.setDefaultX( MxNumberTenths( 151.6 ) );
	object.setDefaultY( MxNumberTenths( 151.6 ) );
	object.setRelativeX( MxNumberTenths( 151.6 ) );
	object.setRelativeY( MxNumberTenths( 151.6 ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:show=\"other\" position=\"109\" default-y=\"151.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 110 ) );
	object.setDefaultX( MxNumberTenths( 151.7 ) );
	object.setDefaultY( MxNumberTenths( 151.7 ) );
	object.setRelativeX( MxNumberTenths( 151.7 ) );
	object.setRelativeY( MxNumberTenths( 151.7 ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:type=\"simple\" xlink:show=\"none\" position=\"110\" default-y=\"151.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 111 ) );
	object.setDefaultX( MxNumberTenths( 151.8 ) );
	object.setDefaultY( MxNumberTenths( 151.8 ) );
	object.setRelativeX( MxNumberTenths( 151.8 ) );
	object.setRelativeY( MxNumberTenths( 151.8 ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:show=\"new\" position=\"111\" default-y=\"151.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 112 ) );
	object.setDefaultX( MxNumberTenths( 151.9 ) );
	object.setDefaultY( MxNumberTenths( 151.9 ) );
	object.setRelativeX( MxNumberTenths( 151.9 ) );
	object.setRelativeY( MxNumberTenths( 151.9 ) );
	expected = "<booksmart xlink:href=\"XYZ\" position=\"112\" default-y=\"151.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyLink )
{
	MxCxEmptyLink object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 113 ) );
	object.setDefaultX( MxNumberTenths( 152 ) );
	object.setDefaultY( MxNumberTenths( 152 ) );
	object.setRelativeX( MxNumberTenths( 152 ) );
	object.setRelativeY( MxNumberTenths( 152 ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onRequest\" element=\"ABC\" position=\"113\" default-y=\"152\" relative-x=\"152\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyLink )
{
	MxCxEmptyLink object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( false );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 114 ) );
	object.setDefaultX( MxNumberTenths( 152.1 ) );
	object.setDefaultY( MxNumberTenths( 152.1 ) );
	object.setRelativeX( MxNumberTenths( 152.1 ) );
	object.setRelativeY( MxNumberTenths( 152.1 ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:actuate=\"other\" element=\"DEF\" position=\"114\" default-y=\"152.1\" relative-x=\"152.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyLink )
{
	MxCxEmptyLink object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "XYZ" ) );
	object.setPosition( XsPositiveInteger( 115 ) );
	object.setDefaultX( MxNumberTenths( 152.2 ) );
	object.setDefaultY( MxNumberTenths( 152.2 ) );
	object.setRelativeX( MxNumberTenths( 152.2 ) );
	object.setRelativeY( MxNumberTenths( 152.2 ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:actuate=\"none\" name=\"\" element=\"XYZ\" position=\"115\" default-y=\"152.2\" relative-x=\"152.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyLink )
{
	MxCxEmptyLink object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setIsNamePresent( true );
	object.setIsElementPresent( true );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 116 ) );
	object.setDefaultX( MxNumberTenths( 152.3 ) );
	object.setDefaultY( MxNumberTenths( 152.3 ) );
	object.setRelativeX( MxNumberTenths( 152.3 ) );
	object.setRelativeY( MxNumberTenths( 152.3 ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onLoad\" name=\"\" element=\"ABC\" relative-x=\"152.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptyLink )
{
	MxCxEmptyLink object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setIsNamePresent( false );
	object.setIsElementPresent( false );
	object.setIsPositionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "DEF" ) );
	object.setPosition( XsPositiveInteger( 117 ) );
	object.setDefaultX( MxNumberTenths( 152.4 ) );
	object.setDefaultY( MxNumberTenths( 152.4 ) );
	object.setRelativeX( MxNumberTenths( 152.4 ) );
	object.setRelativeY( MxNumberTenths( 152.4 ) );
	expected = "<booksmart xlink:href=\"DEF\"/>";
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


