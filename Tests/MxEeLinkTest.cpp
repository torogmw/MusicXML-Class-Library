/** *******************************************************
  * 
  * MxEeLinkTest.cpp
  * Created: 2014-12-05 16:47:07
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeLink.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeLink )
{
	MxEeLink object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( XlinkHref(  ) ).toString();
	std::string actual = object.getXlinkHref().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( XlinkType( enums::XlinkType::simple ) ).toString();
	std::string actual = object.getXlinkType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( XlinkRole(  ) ).toString();
	std::string actual = object.getXlinkRole().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( XlinkTitle(  ) ).toString();
	std::string actual = object.getXlinkTitle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( XlinkShow( enums::XlinkShow::replace  ) ).toString();
	std::string actual = object.getXlinkShow().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( XlinkActuate( enums::XlinkActuate::onRequest ) ).toString();
	std::string actual = object.getXlinkActuate().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getName().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getElement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( XsPositiveInteger(  ) ).toString();
	std::string actual = object.getPosition().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues9, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues10, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues11, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues12, MxEeLink )
{
	MxEeLink object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeLink )
{
	MxEeLink object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeLink )
{
	MxEeLink object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeLink )
{
	MxEeLink object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeLink )
{
	MxEeLink object;
	std::string expected = "MxEeLink";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeLink )
{
	MxEeLink object;
	std::string expected = "link";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeLink )
{
	MxEeLink object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setXlinkHref0, MxEeLink )
{
	XlinkHref value1( "http://matthewjamesbriggs.com" );
	XlinkHref value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setXlinkHref( value1 );
	XlinkHref expected = value1;
	XlinkHref actual = object.getXlinkHref();
	CHECK_EQUAL( expected, actual )
	object.setXlinkHref( value2 );
	expected = value2;
	actual = object.getXlinkHref();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkRole1, MxEeLink )
{
	XlinkRole value1( "http://matthewjamesbriggs.com" );
	XlinkRole value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setXlinkRole( value1 );
	XlinkRole expected = value1;
	XlinkRole actual = object.getXlinkRole();
	CHECK_EQUAL( expected, actual )
	object.setXlinkRole( value2 );
	expected = value2;
	actual = object.getXlinkRole();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkTitle2, MxEeLink )
{
	XlinkTitle value1( "Title A" );
	XlinkTitle value2( "Title B" );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setXlinkTitle( value1 );
	XlinkTitle expected = value1;
	XlinkTitle actual = object.getXlinkTitle();
	CHECK_EQUAL( expected, actual )
	object.setXlinkTitle( value2 );
	expected = value2;
	actual = object.getXlinkTitle();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkShow3, MxEeLink )
{
	XlinkShow value1( lexicon::enums::XlinkShow::none );
	XlinkShow value2( lexicon::enums::XlinkShow::other );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setXlinkShow( value1 );
	XlinkShow expected = value1;
	XlinkShow actual = object.getXlinkShow();
	CHECK_EQUAL( expected, actual )
	object.setXlinkShow( value2 );
	expected = value2;
	actual = object.getXlinkShow();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkActuate4, MxEeLink )
{
	XlinkActuate value1( lexicon::enums::XlinkActuate::none );
	XlinkActuate value2( lexicon::enums::XlinkActuate::other );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setXlinkActuate( value1 );
	XlinkActuate expected = value1;
	XlinkActuate actual = object.getXlinkActuate();
	CHECK_EQUAL( expected, actual )
	object.setXlinkActuate( value2 );
	expected = value2;
	actual = object.getXlinkActuate();
	CHECK_EQUAL( expected, actual )
}
TEST( setName5, MxEeLink )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setName( value1 );
	XsToken expected = value1;
	XsToken actual = object.getName();
	CHECK_EQUAL( expected, actual )
	object.setName( value2 );
	expected = value2;
	actual = object.getName();
	CHECK_EQUAL( expected, actual )
}
TEST( setElement6, MxEeLink )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setElement( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getElement();
	CHECK_EQUAL( expected, actual )
	object.setElement( value2 );
	expected = value2;
	actual = object.getElement();
	CHECK_EQUAL( expected, actual )
}
TEST( setPosition7, MxEeLink )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setPosition( value1 );
	XsPositiveInteger expected = value1;
	XsPositiveInteger actual = object.getPosition();
	CHECK_EQUAL( expected, actual )
	object.setPosition( value2 );
	expected = value2;
	actual = object.getPosition();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX8, MxEeLink )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY9, MxEeLink )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX10, MxEeLink )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY11, MxEeLink )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeLink object;
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

TEST( getIsXlinkHrefRequired0, MxEeLink )
{
	MxEeLink object;
	bool expected = true;
	bool actual = object.getIsXlinkHrefRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTypeRequired1, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsXlinkTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkRoleRequired2, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsXlinkRoleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTitleRequired3, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsXlinkTitleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkShowRequired4, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsXlinkShowRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkActuateRequired5, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsXlinkActuateRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameRequired6, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsNameRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementRequired7, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsElementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionRequired8, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsPositionRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired9, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired10, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired11, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired12, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsXlinkHrefPresent0, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsXlinkTypePresent1, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsXlinkRolePresent2, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsXlinkTitlePresent3, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsXlinkShowPresent4, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsXlinkActuatePresent5, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsNamePresent6, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsElementPresent7, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsPositionPresent8, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsDefaultXPresent9, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsDefaultYPresent10, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsRelativeXPresent11, MxEeLink )
{
	MxEeLink object;
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
TEST( getIsRelativeYPresent12, MxEeLink )
{
	MxEeLink object;
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

TEST( getIsXlinkHrefDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsXlinkHrefDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTypeDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = true;
	bool actual = object.getIsXlinkTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkRoleDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsXlinkRoleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTitleDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsXlinkTitleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkShowDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = true;
	bool actual = object.getIsXlinkShowDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkActuateDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = true;
	bool actual = object.getIsXlinkActuateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsNameDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsElementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPositionDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsPositionDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEeLink )
{
	MxEeLink object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getXlinkHrefDefaultValue, MxEeLink )
{
	MxEeLink object;
	XlinkHref expected;
	XlinkHref actual = object.getXlinkHrefDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkTypeDefaultValue, MxEeLink )
{
	MxEeLink object;
	XlinkType expected( enums::XlinkType::simple );
	XlinkType actual = object.getXlinkTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkRoleDefaultValue, MxEeLink )
{
	MxEeLink object;
	XlinkRole expected;
	XlinkRole actual = object.getXlinkRoleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkTitleDefaultValue, MxEeLink )
{
	MxEeLink object;
	XlinkTitle expected;
	XlinkTitle actual = object.getXlinkTitleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkShowDefaultValue, MxEeLink )
{
	MxEeLink object;
	XlinkShow expected( enums::XlinkShow::replace  );
	XlinkShow actual = object.getXlinkShowDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkActuateDefaultValue, MxEeLink )
{
	MxEeLink object;
	XlinkActuate expected( enums::XlinkActuate::onRequest );
	XlinkActuate actual = object.getXlinkActuateDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNameDefaultValue, MxEeLink )
{
	MxEeLink object;
	XsToken expected;
	XsToken actual = object.getNameDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getElementDefaultValue, MxEeLink )
{
	MxEeLink object;
	XsNmToken expected;
	XsNmToken actual = object.getElementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPositionDefaultValue, MxEeLink )
{
	MxEeLink object;
	XsPositiveInteger expected;
	XsPositiveInteger actual = object.getPositionDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEeLink )
{
	MxEeLink object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEeLink )
{
	MxEeLink object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEeLink )
{
	MxEeLink object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEeLink )
{
	MxEeLink object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeLink )
{
	MxEeLink object;
	std::string expected;
	std::string actual;
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setName( XsToken( "" ) );
	object.setElement( XsNmToken( "ABC" ) );
	object.setPosition( XsPositiveInteger( 2 ) );
	object.setDefaultX( MxNumberTenths( 425.2 ) );
	object.setDefaultY( MxNumberTenths( 425.2 ) );
	object.setRelativeX( MxNumberTenths( 425.2 ) );
	object.setRelativeY( MxNumberTenths( 425.2 ) );
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
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"replace\" xlink:actuate=\"onRequest\" name=\"\" element=\"ABC\" position=\"2\" default-x=\"425.2\" default-y=\"425.2\" relative-x=\"425.2\" relative-y=\"425.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 3 ) );
	object.setDefaultX( MxNumberTenths( 425.3 ) );
	object.setDefaultY( MxNumberTenths( 425.3 ) );
	object.setRelativeX( MxNumberTenths( 425.3 ) );
	object.setRelativeY( MxNumberTenths( 425.3 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"embed\" xlink:actuate=\"other\" name=\"\" element=\"DEF\" position=\"3\" default-x=\"425.3\" default-y=\"425.3\" relative-x=\"425.3\" relative-y=\"425.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 4 ) );
	object.setDefaultX( MxNumberTenths( 425.4 ) );
	object.setDefaultY( MxNumberTenths( 425.4 ) );
	object.setRelativeX( MxNumberTenths( 425.4 ) );
	object.setRelativeY( MxNumberTenths( 425.4 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"other\" xlink:actuate=\"none\" name=\"\" element=\"XYZ\" position=\"4\" default-x=\"425.4\" default-y=\"425.4\" relative-x=\"425.4\" relative-y=\"425.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 5 ) );
	object.setDefaultX( MxNumberTenths( 425.5 ) );
	object.setDefaultY( MxNumberTenths( 425.5 ) );
	object.setRelativeX( MxNumberTenths( 425.5 ) );
	object.setRelativeY( MxNumberTenths( 425.5 ) );
	expected = "<link xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:show=\"none\" xlink:actuate=\"onLoad\" name=\"\" element=\"ABC\" position=\"5\" default-x=\"425.5\" default-y=\"425.5\" relative-x=\"425.5\" relative-y=\"425.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 6 ) );
	object.setDefaultX( MxNumberTenths( 425.6 ) );
	object.setDefaultY( MxNumberTenths( 425.6 ) );
	object.setRelativeX( MxNumberTenths( 425.6 ) );
	object.setRelativeY( MxNumberTenths( 425.6 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:show=\"new\" xlink:actuate=\"onRequest\" name=\"\" element=\"DEF\" position=\"6\" default-x=\"425.6\" default-y=\"425.6\" relative-x=\"425.6\" relative-y=\"425.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 7 ) );
	object.setDefaultX( MxNumberTenths( 425.7 ) );
	object.setDefaultY( MxNumberTenths( 425.7 ) );
	object.setRelativeX( MxNumberTenths( 425.7 ) );
	object.setRelativeY( MxNumberTenths( 425.7 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:actuate=\"other\" name=\"\" element=\"XYZ\" position=\"7\" default-x=\"425.7\" default-y=\"425.7\" relative-x=\"425.7\" relative-y=\"425.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 8 ) );
	object.setDefaultX( MxNumberTenths( 425.8 ) );
	object.setDefaultY( MxNumberTenths( 425.8 ) );
	object.setRelativeX( MxNumberTenths( 425.8 ) );
	object.setRelativeY( MxNumberTenths( 425.8 ) );
	expected = "<link xlink:href=\"ABC\" xlink:role=\"ABC\" name=\"\" element=\"ABC\" position=\"8\" default-x=\"425.8\" default-y=\"425.8\" relative-x=\"425.8\" relative-y=\"425.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 9 ) );
	object.setDefaultX( MxNumberTenths( 425.9 ) );
	object.setDefaultY( MxNumberTenths( 425.9 ) );
	object.setRelativeX( MxNumberTenths( 425.9 ) );
	object.setRelativeY( MxNumberTenths( 425.9 ) );
	expected = "<link xlink:href=\"DEF\" xlink:role=\"DEF\" element=\"DEF\" position=\"9\" default-x=\"425.9\" default-y=\"425.9\" relative-x=\"425.9\" relative-y=\"425.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 10 ) );
	object.setDefaultX( MxNumberTenths( 426 ) );
	object.setDefaultY( MxNumberTenths( 426 ) );
	object.setRelativeX( MxNumberTenths( 426 ) );
	object.setRelativeY( MxNumberTenths( 426 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" position=\"10\" default-x=\"426\" default-y=\"426\" relative-x=\"426\" relative-y=\"426\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 11 ) );
	object.setDefaultX( MxNumberTenths( 426.1 ) );
	object.setDefaultY( MxNumberTenths( 426.1 ) );
	object.setRelativeX( MxNumberTenths( 426.1 ) );
	object.setRelativeY( MxNumberTenths( 426.1 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" default-x=\"426.1\" default-y=\"426.1\" relative-x=\"426.1\" relative-y=\"426.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 12 ) );
	object.setDefaultX( MxNumberTenths( 426.2 ) );
	object.setDefaultY( MxNumberTenths( 426.2 ) );
	object.setRelativeX( MxNumberTenths( 426.2 ) );
	object.setRelativeY( MxNumberTenths( 426.2 ) );
	expected = "<link xlink:href=\"DEF\" xlink:title=\"DEF\" xlink:show=\"replace\" default-y=\"426.2\" relative-x=\"426.2\" relative-y=\"426.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 13 ) );
	object.setDefaultX( MxNumberTenths( 426.3 ) );
	object.setDefaultY( MxNumberTenths( 426.3 ) );
	object.setRelativeX( MxNumberTenths( 426.3 ) );
	object.setRelativeY( MxNumberTenths( 426.3 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"embed\" relative-x=\"426.3\" relative-y=\"426.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 14 ) );
	object.setDefaultX( MxNumberTenths( 426.4 ) );
	object.setDefaultY( MxNumberTenths( 426.4 ) );
	object.setRelativeX( MxNumberTenths( 426.4 ) );
	object.setRelativeY( MxNumberTenths( 426.4 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:show=\"other\" xlink:actuate=\"onRequest\" relative-y=\"426.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 15 ) );
	object.setDefaultX( MxNumberTenths( 426.5 ) );
	object.setDefaultY( MxNumberTenths( 426.5 ) );
	object.setRelativeX( MxNumberTenths( 426.5 ) );
	object.setRelativeY( MxNumberTenths( 426.5 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:show=\"none\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 16 ) );
	object.setDefaultX( MxNumberTenths( 426.6 ) );
	object.setDefaultY( MxNumberTenths( 426.6 ) );
	object.setRelativeX( MxNumberTenths( 426.6 ) );
	object.setRelativeY( MxNumberTenths( 426.6 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:show=\"new\" xlink:actuate=\"none\" name=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 17 ) );
	object.setDefaultX( MxNumberTenths( 426.7 ) );
	object.setDefaultY( MxNumberTenths( 426.7 ) );
	object.setRelativeX( MxNumberTenths( 426.7 ) );
	object.setRelativeY( MxNumberTenths( 426.7 ) );
	expected = "<link xlink:href=\"ABC\" xlink:actuate=\"onLoad\" name=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 18 ) );
	object.setDefaultX( MxNumberTenths( 426.8 ) );
	object.setDefaultY( MxNumberTenths( 426.8 ) );
	object.setRelativeX( MxNumberTenths( 426.8 ) );
	object.setRelativeY( MxNumberTenths( 426.8 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:actuate=\"onRequest\" name=\"\" element=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 19 ) );
	object.setDefaultX( MxNumberTenths( 426.9 ) );
	object.setDefaultY( MxNumberTenths( 426.9 ) );
	object.setRelativeX( MxNumberTenths( 426.9 ) );
	object.setRelativeY( MxNumberTenths( 426.9 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:actuate=\"other\" name=\"\" element=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 20 ) );
	object.setDefaultX( MxNumberTenths( 427 ) );
	object.setDefaultY( MxNumberTenths( 427 ) );
	object.setRelativeX( MxNumberTenths( 427 ) );
	object.setRelativeY( MxNumberTenths( 427 ) );
	expected = "<link xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" name=\"\" element=\"ABC\" position=\"20\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 21 ) );
	object.setDefaultX( MxNumberTenths( 427.1 ) );
	object.setDefaultY( MxNumberTenths( 427.1 ) );
	object.setRelativeX( MxNumberTenths( 427.1 ) );
	object.setRelativeY( MxNumberTenths( 427.1 ) );
	expected = "<link xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" name=\"\" element=\"DEF\" position=\"21\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 22 ) );
	object.setDefaultX( MxNumberTenths( 427.2 ) );
	object.setDefaultY( MxNumberTenths( 427.2 ) );
	object.setRelativeX( MxNumberTenths( 427.2 ) );
	object.setRelativeY( MxNumberTenths( 427.2 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:show=\"replace\" name=\"\" element=\"XYZ\" position=\"22\" default-x=\"427.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 23 ) );
	object.setDefaultX( MxNumberTenths( 427.3 ) );
	object.setDefaultY( MxNumberTenths( 427.3 ) );
	object.setRelativeX( MxNumberTenths( 427.3 ) );
	object.setRelativeY( MxNumberTenths( 427.3 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:show=\"embed\" element=\"ABC\" position=\"23\" default-x=\"427.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 24 ) );
	object.setDefaultX( MxNumberTenths( 427.4 ) );
	object.setDefaultY( MxNumberTenths( 427.4 ) );
	object.setRelativeX( MxNumberTenths( 427.4 ) );
	object.setRelativeY( MxNumberTenths( 427.4 ) );
	expected = "<link xlink:href=\"DEF\" xlink:show=\"other\" element=\"DEF\" position=\"24\" default-x=\"427.4\" default-y=\"427.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 25 ) );
	object.setDefaultX( MxNumberTenths( 427.5 ) );
	object.setDefaultY( MxNumberTenths( 427.5 ) );
	object.setRelativeX( MxNumberTenths( 427.5 ) );
	object.setRelativeY( MxNumberTenths( 427.5 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:show=\"none\" element=\"XYZ\" position=\"25\" default-x=\"427.5\" default-y=\"427.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 26 ) );
	object.setDefaultX( MxNumberTenths( 427.6 ) );
	object.setDefaultY( MxNumberTenths( 427.6 ) );
	object.setRelativeX( MxNumberTenths( 427.6 ) );
	object.setRelativeY( MxNumberTenths( 427.6 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"new\" xlink:actuate=\"onRequest\" position=\"26\" default-x=\"427.6\" default-y=\"427.6\" relative-x=\"427.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 27 ) );
	object.setDefaultX( MxNumberTenths( 427.7 ) );
	object.setDefaultY( MxNumberTenths( 427.7 ) );
	object.setRelativeX( MxNumberTenths( 427.7 ) );
	object.setRelativeY( MxNumberTenths( 427.7 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:actuate=\"other\" position=\"27\" default-x=\"427.7\" default-y=\"427.7\" relative-x=\"427.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 28 ) );
	object.setDefaultX( MxNumberTenths( 427.8 ) );
	object.setDefaultY( MxNumberTenths( 427.8 ) );
	object.setRelativeX( MxNumberTenths( 427.8 ) );
	object.setRelativeY( MxNumberTenths( 427.8 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:actuate=\"none\" position=\"28\" default-x=\"427.8\" default-y=\"427.8\" relative-x=\"427.8\" relative-y=\"427.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 29 ) );
	object.setDefaultX( MxNumberTenths( 427.9 ) );
	object.setDefaultY( MxNumberTenths( 427.9 ) );
	object.setRelativeX( MxNumberTenths( 427.9 ) );
	object.setRelativeY( MxNumberTenths( 427.9 ) );
	expected = "<link xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onLoad\" default-x=\"427.9\" default-y=\"427.9\" relative-x=\"427.9\" relative-y=\"427.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 30 ) );
	object.setDefaultX( MxNumberTenths( 428 ) );
	object.setDefaultY( MxNumberTenths( 428 ) );
	object.setRelativeX( MxNumberTenths( 428 ) );
	object.setRelativeY( MxNumberTenths( 428 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:actuate=\"onRequest\" name=\"\" default-x=\"428\" default-y=\"428\" relative-x=\"428\" relative-y=\"428\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 31 ) );
	object.setDefaultX( MxNumberTenths( 428.1 ) );
	object.setDefaultY( MxNumberTenths( 428.1 ) );
	object.setRelativeX( MxNumberTenths( 428.1 ) );
	object.setRelativeY( MxNumberTenths( 428.1 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:actuate=\"other\" name=\"\" default-x=\"428.1\" default-y=\"428.1\" relative-x=\"428.1\" relative-y=\"428.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 32 ) );
	object.setDefaultX( MxNumberTenths( 428.2 ) );
	object.setDefaultY( MxNumberTenths( 428.2 ) );
	object.setRelativeX( MxNumberTenths( 428.2 ) );
	object.setRelativeY( MxNumberTenths( 428.2 ) );
	expected = "<link xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:show=\"replace\" name=\"\" default-y=\"428.2\" relative-x=\"428.2\" relative-y=\"428.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 33 ) );
	object.setDefaultX( MxNumberTenths( 428.3 ) );
	object.setDefaultY( MxNumberTenths( 428.3 ) );
	object.setRelativeX( MxNumberTenths( 428.3 ) );
	object.setRelativeY( MxNumberTenths( 428.3 ) );
	expected = "<link xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:show=\"embed\" name=\"\" default-y=\"428.3\" relative-x=\"428.3\" relative-y=\"428.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 34 ) );
	object.setDefaultX( MxNumberTenths( 428.4 ) );
	object.setDefaultY( MxNumberTenths( 428.4 ) );
	object.setRelativeX( MxNumberTenths( 428.4 ) );
	object.setRelativeY( MxNumberTenths( 428.4 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"other\" name=\"\" element=\"XYZ\" default-y=\"428.4\" relative-x=\"428.4\" relative-y=\"428.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 35 ) );
	object.setDefaultX( MxNumberTenths( 428.5 ) );
	object.setDefaultY( MxNumberTenths( 428.5 ) );
	object.setRelativeX( MxNumberTenths( 428.5 ) );
	object.setRelativeY( MxNumberTenths( 428.5 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" xlink:show=\"none\" name=\"\" element=\"ABC\" relative-x=\"428.5\" relative-y=\"428.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 36 ) );
	object.setDefaultX( MxNumberTenths( 428.6 ) );
	object.setDefaultY( MxNumberTenths( 428.6 ) );
	object.setRelativeX( MxNumberTenths( 428.6 ) );
	object.setRelativeY( MxNumberTenths( 428.6 ) );
	expected = "<link xlink:href=\"DEF\" xlink:title=\"DEF\" xlink:show=\"new\" name=\"\" element=\"DEF\" relative-x=\"428.6\" relative-y=\"428.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 37 ) );
	object.setDefaultX( MxNumberTenths( 428.7 ) );
	object.setDefaultY( MxNumberTenths( 428.7 ) );
	object.setRelativeX( MxNumberTenths( 428.7 ) );
	object.setRelativeY( MxNumberTenths( 428.7 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:title=\"XYZ\" element=\"XYZ\" relative-x=\"428.7\" relative-y=\"428.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 38 ) );
	object.setDefaultX( MxNumberTenths( 428.8 ) );
	object.setDefaultY( MxNumberTenths( 428.8 ) );
	object.setRelativeX( MxNumberTenths( 428.8 ) );
	object.setRelativeY( MxNumberTenths( 428.8 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:actuate=\"onRequest\" element=\"ABC\" position=\"38\" relative-y=\"428.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 39 ) );
	object.setDefaultX( MxNumberTenths( 428.9 ) );
	object.setDefaultY( MxNumberTenths( 428.9 ) );
	object.setRelativeX( MxNumberTenths( 428.9 ) );
	object.setRelativeY( MxNumberTenths( 428.9 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:actuate=\"other\" element=\"DEF\" position=\"39\" relative-y=\"428.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 40 ) );
	object.setDefaultX( MxNumberTenths( 429 ) );
	object.setDefaultY( MxNumberTenths( 429 ) );
	object.setRelativeX( MxNumberTenths( 429 ) );
	object.setRelativeY( MxNumberTenths( 429 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:actuate=\"none\" element=\"XYZ\" position=\"40\" relative-y=\"429\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 41 ) );
	object.setDefaultX( MxNumberTenths( 429.1 ) );
	object.setDefaultY( MxNumberTenths( 429.1 ) );
	object.setRelativeX( MxNumberTenths( 429.1 ) );
	object.setRelativeY( MxNumberTenths( 429.1 ) );
	expected = "<link xlink:href=\"ABC\" xlink:actuate=\"onLoad\" element=\"ABC\" position=\"41\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 42 ) );
	object.setDefaultX( MxNumberTenths( 429.2 ) );
	object.setDefaultY( MxNumberTenths( 429.2 ) );
	object.setRelativeX( MxNumberTenths( 429.2 ) );
	object.setRelativeY( MxNumberTenths( 429.2 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:show=\"replace\" xlink:actuate=\"onRequest\" position=\"42\" default-x=\"429.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 43 ) );
	object.setDefaultX( MxNumberTenths( 429.3 ) );
	object.setDefaultY( MxNumberTenths( 429.3 ) );
	object.setRelativeX( MxNumberTenths( 429.3 ) );
	object.setRelativeY( MxNumberTenths( 429.3 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:show=\"embed\" xlink:actuate=\"other\" position=\"43\" default-x=\"429.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 44 ) );
	object.setDefaultX( MxNumberTenths( 429.4 ) );
	object.setDefaultY( MxNumberTenths( 429.4 ) );
	object.setRelativeX( MxNumberTenths( 429.4 ) );
	object.setRelativeY( MxNumberTenths( 429.4 ) );
	expected = "<link xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"other\" name=\"\" position=\"44\" default-x=\"429.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 45 ) );
	object.setDefaultX( MxNumberTenths( 429.5 ) );
	object.setDefaultY( MxNumberTenths( 429.5 ) );
	object.setRelativeX( MxNumberTenths( 429.5 ) );
	object.setRelativeY( MxNumberTenths( 429.5 ) );
	expected = "<link xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"none\" name=\"\" position=\"45\" default-x=\"429.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 46 ) );
	object.setDefaultX( MxNumberTenths( 429.6 ) );
	object.setDefaultY( MxNumberTenths( 429.6 ) );
	object.setRelativeX( MxNumberTenths( 429.6 ) );
	object.setRelativeY( MxNumberTenths( 429.6 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:show=\"new\" name=\"\" position=\"46\" default-x=\"429.6\" default-y=\"429.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 47 ) );
	object.setDefaultX( MxNumberTenths( 429.7 ) );
	object.setDefaultY( MxNumberTenths( 429.7 ) );
	object.setRelativeX( MxNumberTenths( 429.7 ) );
	object.setRelativeY( MxNumberTenths( 429.7 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" name=\"\" default-x=\"429.7\" default-y=\"429.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 48 ) );
	object.setDefaultX( MxNumberTenths( 429.8 ) );
	object.setDefaultY( MxNumberTenths( 429.8 ) );
	object.setRelativeX( MxNumberTenths( 429.8 ) );
	object.setRelativeY( MxNumberTenths( 429.8 ) );
	expected = "<link xlink:href=\"DEF\" name=\"\" default-x=\"429.8\" default-y=\"429.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 49 ) );
	object.setDefaultX( MxNumberTenths( 429.9 ) );
	object.setDefaultY( MxNumberTenths( 429.9 ) );
	object.setRelativeX( MxNumberTenths( 429.9 ) );
	object.setRelativeY( MxNumberTenths( 429.9 ) );
	expected = "<link xlink:href=\"XYZ\" name=\"\" default-x=\"429.9\" default-y=\"429.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 50 ) );
	object.setDefaultX( MxNumberTenths( 430 ) );
	object.setDefaultY( MxNumberTenths( 430 ) );
	object.setRelativeX( MxNumberTenths( 430 ) );
	object.setRelativeY( MxNumberTenths( 430 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onRequest\" name=\"\" element=\"ABC\" default-x=\"430\" default-y=\"430\" relative-x=\"430\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 51 ) );
	object.setDefaultX( MxNumberTenths( 430.1 ) );
	object.setDefaultY( MxNumberTenths( 430.1 ) );
	object.setRelativeX( MxNumberTenths( 430.1 ) );
	object.setRelativeY( MxNumberTenths( 430.1 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:actuate=\"other\" element=\"DEF\" default-x=\"430.1\" default-y=\"430.1\" relative-x=\"430.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 52 ) );
	object.setDefaultX( MxNumberTenths( 430.2 ) );
	object.setDefaultY( MxNumberTenths( 430.2 ) );
	object.setRelativeX( MxNumberTenths( 430.2 ) );
	object.setRelativeY( MxNumberTenths( 430.2 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"replace\" xlink:actuate=\"none\" element=\"XYZ\" default-y=\"430.2\" relative-x=\"430.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 53 ) );
	object.setDefaultX( MxNumberTenths( 430.3 ) );
	object.setDefaultY( MxNumberTenths( 430.3 ) );
	object.setRelativeX( MxNumberTenths( 430.3 ) );
	object.setRelativeY( MxNumberTenths( 430.3 ) );
	expected = "<link xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:show=\"embed\" xlink:actuate=\"onLoad\" element=\"ABC\" default-y=\"430.3\" relative-x=\"430.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 54 ) );
	object.setDefaultX( MxNumberTenths( 430.4 ) );
	object.setDefaultY( MxNumberTenths( 430.4 ) );
	object.setRelativeX( MxNumberTenths( 430.4 ) );
	object.setRelativeY( MxNumberTenths( 430.4 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:show=\"other\" xlink:actuate=\"onRequest\" element=\"DEF\" default-y=\"430.4\" relative-x=\"430.4\" relative-y=\"430.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 55 ) );
	object.setDefaultX( MxNumberTenths( 430.5 ) );
	object.setDefaultY( MxNumberTenths( 430.5 ) );
	object.setRelativeX( MxNumberTenths( 430.5 ) );
	object.setRelativeY( MxNumberTenths( 430.5 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:show=\"none\" xlink:actuate=\"other\" element=\"XYZ\" default-y=\"430.5\" relative-x=\"430.5\" relative-y=\"430.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 56 ) );
	object.setDefaultX( MxNumberTenths( 430.6 ) );
	object.setDefaultY( MxNumberTenths( 430.6 ) );
	object.setRelativeX( MxNumberTenths( 430.6 ) );
	object.setRelativeY( MxNumberTenths( 430.6 ) );
	expected = "<link xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:show=\"new\" element=\"ABC\" position=\"56\" default-y=\"430.6\" relative-x=\"430.6\" relative-y=\"430.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 57 ) );
	object.setDefaultX( MxNumberTenths( 430.7 ) );
	object.setDefaultY( MxNumberTenths( 430.7 ) );
	object.setRelativeX( MxNumberTenths( 430.7 ) );
	object.setRelativeY( MxNumberTenths( 430.7 ) );
	expected = "<link xlink:href=\"DEF\" xlink:role=\"DEF\" element=\"DEF\" position=\"57\" relative-x=\"430.7\" relative-y=\"430.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 58 ) );
	object.setDefaultX( MxNumberTenths( 430.8 ) );
	object.setDefaultY( MxNumberTenths( 430.8 ) );
	object.setRelativeX( MxNumberTenths( 430.8 ) );
	object.setRelativeY( MxNumberTenths( 430.8 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" name=\"\" position=\"58\" relative-x=\"430.8\" relative-y=\"430.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 59 ) );
	object.setDefaultX( MxNumberTenths( 430.9 ) );
	object.setDefaultY( MxNumberTenths( 430.9 ) );
	object.setRelativeX( MxNumberTenths( 430.9 ) );
	object.setRelativeY( MxNumberTenths( 430.9 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" name=\"\" position=\"59\" relative-x=\"430.9\" relative-y=\"430.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 60 ) );
	object.setDefaultX( MxNumberTenths( 431 ) );
	object.setDefaultY( MxNumberTenths( 431 ) );
	object.setRelativeX( MxNumberTenths( 431 ) );
	object.setRelativeY( MxNumberTenths( 431 ) );
	expected = "<link xlink:href=\"DEF\" xlink:title=\"DEF\" name=\"\" position=\"60\" relative-x=\"431\" relative-y=\"431\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 61 ) );
	object.setDefaultX( MxNumberTenths( 431.1 ) );
	object.setDefaultY( MxNumberTenths( 431.1 ) );
	object.setRelativeX( MxNumberTenths( 431.1 ) );
	object.setRelativeY( MxNumberTenths( 431.1 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:title=\"XYZ\" name=\"\" position=\"61\" relative-x=\"431.1\" relative-y=\"431.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 62 ) );
	object.setDefaultX( MxNumberTenths( 431.2 ) );
	object.setDefaultY( MxNumberTenths( 431.2 ) );
	object.setRelativeX( MxNumberTenths( 431.2 ) );
	object.setRelativeY( MxNumberTenths( 431.2 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:show=\"replace\" xlink:actuate=\"onRequest\" name=\"\" position=\"62\" default-x=\"431.2\" relative-y=\"431.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 63 ) );
	object.setDefaultX( MxNumberTenths( 431.3 ) );
	object.setDefaultY( MxNumberTenths( 431.3 ) );
	object.setRelativeX( MxNumberTenths( 431.3 ) );
	object.setRelativeY( MxNumberTenths( 431.3 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:show=\"embed\" xlink:actuate=\"other\" name=\"\" position=\"63\" default-x=\"431.3\" relative-y=\"431.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 64 ) );
	object.setDefaultX( MxNumberTenths( 431.4 ) );
	object.setDefaultY( MxNumberTenths( 431.4 ) );
	object.setRelativeX( MxNumberTenths( 431.4 ) );
	object.setRelativeY( MxNumberTenths( 431.4 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:show=\"other\" xlink:actuate=\"none\" name=\"\" position=\"64\" default-x=\"431.4\" relative-y=\"431.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 65 ) );
	object.setDefaultX( MxNumberTenths( 431.5 ) );
	object.setDefaultY( MxNumberTenths( 431.5 ) );
	object.setRelativeX( MxNumberTenths( 431.5 ) );
	object.setRelativeY( MxNumberTenths( 431.5 ) );
	expected = "<link xlink:href=\"ABC\" xlink:show=\"none\" xlink:actuate=\"onLoad\" default-x=\"431.5\" relative-y=\"431.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 66 ) );
	object.setDefaultX( MxNumberTenths( 431.6 ) );
	object.setDefaultY( MxNumberTenths( 431.6 ) );
	object.setRelativeX( MxNumberTenths( 431.6 ) );
	object.setRelativeY( MxNumberTenths( 431.6 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:show=\"new\" xlink:actuate=\"onRequest\" element=\"DEF\" default-x=\"431.6\" relative-y=\"431.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 67 ) );
	object.setDefaultX( MxNumberTenths( 431.7 ) );
	object.setDefaultY( MxNumberTenths( 431.7 ) );
	object.setRelativeX( MxNumberTenths( 431.7 ) );
	object.setRelativeY( MxNumberTenths( 431.7 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:actuate=\"other\" element=\"XYZ\" default-x=\"431.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 68 ) );
	object.setDefaultX( MxNumberTenths( 431.8 ) );
	object.setDefaultY( MxNumberTenths( 431.8 ) );
	object.setRelativeX( MxNumberTenths( 431.8 ) );
	object.setRelativeY( MxNumberTenths( 431.8 ) );
	expected = "<link xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" element=\"ABC\" default-x=\"431.8\" default-y=\"431.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 69 ) );
	object.setDefaultX( MxNumberTenths( 431.9 ) );
	object.setDefaultY( MxNumberTenths( 431.9 ) );
	object.setRelativeX( MxNumberTenths( 431.9 ) );
	object.setRelativeY( MxNumberTenths( 431.9 ) );
	expected = "<link xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" element=\"DEF\" default-x=\"431.9\" default-y=\"431.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 70 ) );
	object.setDefaultX( MxNumberTenths( 432 ) );
	object.setDefaultY( MxNumberTenths( 432 ) );
	object.setRelativeX( MxNumberTenths( 432 ) );
	object.setRelativeY( MxNumberTenths( 432 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" element=\"XYZ\" default-x=\"432\" default-y=\"432\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 71 ) );
	object.setDefaultX( MxNumberTenths( 432.1 ) );
	object.setDefaultY( MxNumberTenths( 432.1 ) );
	object.setRelativeX( MxNumberTenths( 432.1 ) );
	object.setRelativeY( MxNumberTenths( 432.1 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" element=\"ABC\" default-x=\"432.1\" default-y=\"432.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 72 ) );
	object.setDefaultX( MxNumberTenths( 432.2 ) );
	object.setDefaultY( MxNumberTenths( 432.2 ) );
	object.setRelativeX( MxNumberTenths( 432.2 ) );
	object.setRelativeY( MxNumberTenths( 432.2 ) );
	expected = "<link xlink:href=\"DEF\" xlink:show=\"replace\" name=\"\" element=\"DEF\" default-y=\"432.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 73 ) );
	object.setDefaultX( MxNumberTenths( 432.3 ) );
	object.setDefaultY( MxNumberTenths( 432.3 ) );
	object.setRelativeX( MxNumberTenths( 432.3 ) );
	object.setRelativeY( MxNumberTenths( 432.3 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:show=\"embed\" name=\"\" element=\"XYZ\" default-y=\"432.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 74 ) );
	object.setDefaultX( MxNumberTenths( 432.4 ) );
	object.setDefaultY( MxNumberTenths( 432.4 ) );
	object.setRelativeX( MxNumberTenths( 432.4 ) );
	object.setRelativeY( MxNumberTenths( 432.4 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"other\" xlink:actuate=\"onRequest\" name=\"\" position=\"74\" default-y=\"432.4\" relative-x=\"432.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 75 ) );
	object.setDefaultX( MxNumberTenths( 432.5 ) );
	object.setDefaultY( MxNumberTenths( 432.5 ) );
	object.setRelativeX( MxNumberTenths( 432.5 ) );
	object.setRelativeY( MxNumberTenths( 432.5 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"none\" xlink:actuate=\"other\" name=\"\" position=\"75\" default-y=\"432.5\" relative-x=\"432.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 76 ) );
	object.setDefaultX( MxNumberTenths( 432.6 ) );
	object.setDefaultY( MxNumberTenths( 432.6 ) );
	object.setRelativeX( MxNumberTenths( 432.6 ) );
	object.setRelativeY( MxNumberTenths( 432.6 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"new\" xlink:actuate=\"none\" name=\"\" position=\"76\" default-y=\"432.6\" relative-x=\"432.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 77 ) );
	object.setDefaultX( MxNumberTenths( 432.7 ) );
	object.setDefaultY( MxNumberTenths( 432.7 ) );
	object.setRelativeX( MxNumberTenths( 432.7 ) );
	object.setRelativeY( MxNumberTenths( 432.7 ) );
	expected = "<link xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onLoad\" name=\"\" position=\"77\" default-y=\"432.7\" relative-x=\"432.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 78 ) );
	object.setDefaultX( MxNumberTenths( 432.8 ) );
	object.setDefaultY( MxNumberTenths( 432.8 ) );
	object.setRelativeX( MxNumberTenths( 432.8 ) );
	object.setRelativeY( MxNumberTenths( 432.8 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:actuate=\"onRequest\" name=\"\" position=\"78\" default-y=\"432.8\" relative-x=\"432.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 79 ) );
	object.setDefaultX( MxNumberTenths( 432.9 ) );
	object.setDefaultY( MxNumberTenths( 432.9 ) );
	object.setRelativeX( MxNumberTenths( 432.9 ) );
	object.setRelativeY( MxNumberTenths( 432.9 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:actuate=\"other\" position=\"79\" relative-x=\"432.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 80 ) );
	object.setDefaultX( MxNumberTenths( 433 ) );
	object.setDefaultY( MxNumberTenths( 433 ) );
	object.setRelativeX( MxNumberTenths( 433 ) );
	object.setRelativeY( MxNumberTenths( 433 ) );
	expected = "<link xlink:href=\"ABC\" xlink:role=\"ABC\" position=\"80\" relative-x=\"433\" relative-y=\"433\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 81 ) );
	object.setDefaultX( MxNumberTenths( 433.1 ) );
	object.setDefaultY( MxNumberTenths( 433.1 ) );
	object.setRelativeX( MxNumberTenths( 433.1 ) );
	object.setRelativeY( MxNumberTenths( 433.1 ) );
	expected = "<link xlink:href=\"DEF\" xlink:role=\"DEF\" position=\"81\" relative-x=\"433.1\" relative-y=\"433.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 82 ) );
	object.setDefaultX( MxNumberTenths( 433.2 ) );
	object.setDefaultY( MxNumberTenths( 433.2 ) );
	object.setRelativeX( MxNumberTenths( 433.2 ) );
	object.setRelativeY( MxNumberTenths( 433.2 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"replace\" element=\"XYZ\" position=\"82\" default-x=\"433.2\" relative-x=\"433.2\" relative-y=\"433.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 83 ) );
	object.setDefaultX( MxNumberTenths( 433.3 ) );
	object.setDefaultY( MxNumberTenths( 433.3 ) );
	object.setRelativeX( MxNumberTenths( 433.3 ) );
	object.setRelativeY( MxNumberTenths( 433.3 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" xlink:show=\"embed\" element=\"ABC\" default-x=\"433.3\" relative-x=\"433.3\" relative-y=\"433.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 84 ) );
	object.setDefaultX( MxNumberTenths( 433.4 ) );
	object.setDefaultY( MxNumberTenths( 433.4 ) );
	object.setRelativeX( MxNumberTenths( 433.4 ) );
	object.setRelativeY( MxNumberTenths( 433.4 ) );
	expected = "<link xlink:href=\"DEF\" xlink:title=\"DEF\" xlink:show=\"other\" element=\"DEF\" default-x=\"433.4\" relative-x=\"433.4\" relative-y=\"433.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 85 ) );
	object.setDefaultX( MxNumberTenths( 433.5 ) );
	object.setDefaultY( MxNumberTenths( 433.5 ) );
	object.setRelativeX( MxNumberTenths( 433.5 ) );
	object.setRelativeY( MxNumberTenths( 433.5 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"none\" element=\"XYZ\" default-x=\"433.5\" relative-x=\"433.5\" relative-y=\"433.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 86 ) );
	object.setDefaultX( MxNumberTenths( 433.6 ) );
	object.setDefaultY( MxNumberTenths( 433.6 ) );
	object.setRelativeX( MxNumberTenths( 433.6 ) );
	object.setRelativeY( MxNumberTenths( 433.6 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:show=\"new\" xlink:actuate=\"onRequest\" name=\"\" element=\"ABC\" default-x=\"433.6\" relative-y=\"433.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 87 ) );
	object.setDefaultX( MxNumberTenths( 433.7 ) );
	object.setDefaultY( MxNumberTenths( 433.7 ) );
	object.setRelativeX( MxNumberTenths( 433.7 ) );
	object.setRelativeY( MxNumberTenths( 433.7 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:actuate=\"other\" name=\"\" element=\"DEF\" default-x=\"433.7\" relative-y=\"433.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 88 ) );
	object.setDefaultX( MxNumberTenths( 433.8 ) );
	object.setDefaultY( MxNumberTenths( 433.8 ) );
	object.setRelativeX( MxNumberTenths( 433.8 ) );
	object.setRelativeY( MxNumberTenths( 433.8 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:actuate=\"none\" name=\"\" element=\"XYZ\" default-x=\"433.8\" relative-y=\"433.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 89 ) );
	object.setDefaultX( MxNumberTenths( 433.9 ) );
	object.setDefaultY( MxNumberTenths( 433.9 ) );
	object.setRelativeX( MxNumberTenths( 433.9 ) );
	object.setRelativeY( MxNumberTenths( 433.9 ) );
	expected = "<link xlink:href=\"ABC\" xlink:actuate=\"onLoad\" name=\"\" element=\"ABC\" default-x=\"433.9\" relative-y=\"433.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 90 ) );
	object.setDefaultX( MxNumberTenths( 434 ) );
	object.setDefaultY( MxNumberTenths( 434 ) );
	object.setRelativeX( MxNumberTenths( 434 ) );
	object.setRelativeY( MxNumberTenths( 434 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:actuate=\"onRequest\" name=\"\" default-x=\"434\" default-y=\"434\" relative-y=\"434\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 91 ) );
	object.setDefaultX( MxNumberTenths( 434.1 ) );
	object.setDefaultY( MxNumberTenths( 434.1 ) );
	object.setRelativeX( MxNumberTenths( 434.1 ) );
	object.setRelativeY( MxNumberTenths( 434.1 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:actuate=\"other\" name=\"\" default-x=\"434.1\" default-y=\"434.1\" relative-y=\"434.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 92 ) );
	object.setDefaultX( MxNumberTenths( 434.2 ) );
	object.setDefaultY( MxNumberTenths( 434.2 ) );
	object.setRelativeX( MxNumberTenths( 434.2 ) );
	object.setRelativeY( MxNumberTenths( 434.2 ) );
	expected = "<link xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"replace\" name=\"\" position=\"92\" default-y=\"434.2\" relative-y=\"434.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 93 ) );
	object.setDefaultX( MxNumberTenths( 434.3 ) );
	object.setDefaultY( MxNumberTenths( 434.3 ) );
	object.setRelativeX( MxNumberTenths( 434.3 ) );
	object.setRelativeY( MxNumberTenths( 434.3 ) );
	expected = "<link xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"embed\" position=\"93\" default-y=\"434.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 94 ) );
	object.setDefaultX( MxNumberTenths( 434.4 ) );
	object.setDefaultY( MxNumberTenths( 434.4 ) );
	object.setRelativeX( MxNumberTenths( 434.4 ) );
	object.setRelativeY( MxNumberTenths( 434.4 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:show=\"other\" position=\"94\" default-y=\"434.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 95 ) );
	object.setDefaultX( MxNumberTenths( 434.5 ) );
	object.setDefaultY( MxNumberTenths( 434.5 ) );
	object.setRelativeX( MxNumberTenths( 434.5 ) );
	object.setRelativeY( MxNumberTenths( 434.5 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:show=\"none\" position=\"95\" default-y=\"434.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 96 ) );
	object.setDefaultX( MxNumberTenths( 434.6 ) );
	object.setDefaultY( MxNumberTenths( 434.6 ) );
	object.setRelativeX( MxNumberTenths( 434.6 ) );
	object.setRelativeY( MxNumberTenths( 434.6 ) );
	expected = "<link xlink:href=\"DEF\" xlink:show=\"new\" position=\"96\" default-y=\"434.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 97 ) );
	object.setDefaultX( MxNumberTenths( 434.7 ) );
	object.setDefaultY( MxNumberTenths( 434.7 ) );
	object.setRelativeX( MxNumberTenths( 434.7 ) );
	object.setRelativeY( MxNumberTenths( 434.7 ) );
	expected = "<link xlink:href=\"XYZ\" position=\"97\" default-y=\"434.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 98 ) );
	object.setDefaultX( MxNumberTenths( 434.8 ) );
	object.setDefaultY( MxNumberTenths( 434.8 ) );
	object.setRelativeX( MxNumberTenths( 434.8 ) );
	object.setRelativeY( MxNumberTenths( 434.8 ) );
	expected = "<link xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onRequest\" element=\"ABC\" position=\"98\" default-y=\"434.8\" relative-x=\"434.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 99 ) );
	object.setDefaultX( MxNumberTenths( 434.9 ) );
	object.setDefaultY( MxNumberTenths( 434.9 ) );
	object.setRelativeX( MxNumberTenths( 434.9 ) );
	object.setRelativeY( MxNumberTenths( 434.9 ) );
	expected = "<link xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:actuate=\"other\" element=\"DEF\" position=\"99\" default-y=\"434.9\" relative-x=\"434.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 100 ) );
	object.setDefaultX( MxNumberTenths( 435 ) );
	object.setDefaultY( MxNumberTenths( 435 ) );
	object.setRelativeX( MxNumberTenths( 435 ) );
	object.setRelativeY( MxNumberTenths( 435 ) );
	expected = "<link xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:actuate=\"none\" name=\"\" element=\"XYZ\" position=\"100\" default-y=\"435\" relative-x=\"435\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 101 ) );
	object.setDefaultX( MxNumberTenths( 435.1 ) );
	object.setDefaultY( MxNumberTenths( 435.1 ) );
	object.setRelativeX( MxNumberTenths( 435.1 ) );
	object.setRelativeY( MxNumberTenths( 435.1 ) );
	expected = "<link xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onLoad\" name=\"\" element=\"ABC\" relative-x=\"435.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEeLink )
{
	MxEeLink object;
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
	object.setPosition( XsPositiveInteger( 102 ) );
	object.setDefaultX( MxNumberTenths( 435.2 ) );
	object.setDefaultY( MxNumberTenths( 435.2 ) );
	object.setRelativeX( MxNumberTenths( 435.2 ) );
	object.setRelativeY( MxNumberTenths( 435.2 ) );
	expected = "<link xlink:href=\"DEF\"/>";
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


