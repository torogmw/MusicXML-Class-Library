/** *******************************************************
  * 
  * MxAttrGrpLinkAttributesTest.cpp
  * Created: 2014-11-28 19:17:16
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpLinkAttributes.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected = ( XlinkHref(  ) ).toString();
	std::string actual = object.getXlinkHref().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected = ( XlinkType( enums::XlinkType::simple ) ).toString();
	std::string actual = object.getXlinkType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected = ( XlinkRole(  ) ).toString();
	std::string actual = object.getXlinkRole().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues3, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected = ( XlinkTitle(  ) ).toString();
	std::string actual = object.getXlinkTitle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues4, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected = ( XlinkShow( enums::XlinkShow::replace  ) ).toString();
	std::string actual = object.getXlinkShow().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues5, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected = ( XlinkActuate( enums::XlinkActuate::onRequest ) ).toString();
	std::string actual = object.getXlinkActuate().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected = "MxAttrGrpLinkAttributes";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected = "link-attributes";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected = "The link-attributes group includes all the simple XLink attributes supported in the MusicXML format.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setXlinkHref0, MxAttrGrpLinkAttributes )
{
	XlinkHref value1( "http://matthewjamesbriggs.com" );
	XlinkHref value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLinkAttributes object;
	object.setXlinkHref( value1 );
	XlinkHref expected = value1;
	XlinkHref actual = object.getXlinkHref();
	CHECK_EQUAL( expected, actual )
	object.setXlinkHref( value2 );
	expected = value2;
	actual = object.getXlinkHref();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkRole1, MxAttrGrpLinkAttributes )
{
	XlinkRole value1( "http://matthewjamesbriggs.com" );
	XlinkRole value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLinkAttributes object;
	object.setXlinkRole( value1 );
	XlinkRole expected = value1;
	XlinkRole actual = object.getXlinkRole();
	CHECK_EQUAL( expected, actual )
	object.setXlinkRole( value2 );
	expected = value2;
	actual = object.getXlinkRole();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkTitle2, MxAttrGrpLinkAttributes )
{
	XlinkTitle value1( "Title A" );
	XlinkTitle value2( "Title B" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLinkAttributes object;
	object.setXlinkTitle( value1 );
	XlinkTitle expected = value1;
	XlinkTitle actual = object.getXlinkTitle();
	CHECK_EQUAL( expected, actual )
	object.setXlinkTitle( value2 );
	expected = value2;
	actual = object.getXlinkTitle();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkShow3, MxAttrGrpLinkAttributes )
{
	XlinkShow value1( lexicon::enums::XlinkShow::none );
	XlinkShow value2( lexicon::enums::XlinkShow::other );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLinkAttributes object;
	object.setXlinkShow( value1 );
	XlinkShow expected = value1;
	XlinkShow actual = object.getXlinkShow();
	CHECK_EQUAL( expected, actual )
	object.setXlinkShow( value2 );
	expected = value2;
	actual = object.getXlinkShow();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkActuate4, MxAttrGrpLinkAttributes )
{
	XlinkActuate value1( lexicon::enums::XlinkActuate::none );
	XlinkActuate value2( lexicon::enums::XlinkActuate::other );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLinkAttributes object;
	object.setXlinkActuate( value1 );
	XlinkActuate expected = value1;
	XlinkActuate actual = object.getXlinkActuate();
	CHECK_EQUAL( expected, actual )
	object.setXlinkActuate( value2 );
	expected = value2;
	actual = object.getXlinkActuate();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsXlinkHrefRequired0, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = true;
	bool actual = object.getIsXlinkHrefRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTypeRequired1, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = false;
	bool actual = object.getIsXlinkTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkRoleRequired2, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = false;
	bool actual = object.getIsXlinkRoleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTitleRequired3, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = false;
	bool actual = object.getIsXlinkTitleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkShowRequired4, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = false;
	bool actual = object.getIsXlinkShowRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkActuateRequired5, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = false;
	bool actual = object.getIsXlinkActuateRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsXlinkHrefPresent0, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
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
TEST( getIsXlinkTypePresent1, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
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
TEST( getIsXlinkRolePresent2, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
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
TEST( getIsXlinkTitlePresent3, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
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
TEST( getIsXlinkShowPresent4, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
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
TEST( getIsXlinkActuatePresent5, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
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

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"replace\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"embed\" xlink:actuate=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"other\" xlink:actuate=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:show=\"none\" xlink:actuate=\"onLoad\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"DEF\" xlink:type=\"simple\" xlink:show=\"new\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:actuate=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"ABC\" xlink:role=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"DEF\" xlink:role=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"DEF\" xlink:title=\"DEF\" xlink:show=\"replace\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"embed\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:show=\"other\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:show=\"none\" xlink:actuate=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:show=\"new\" xlink:actuate=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"ABC\" xlink:actuate=\"onLoad\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:actuate=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:show=\"replace\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:show=\"embed\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"DEF\" xlink:show=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"XYZ\" xlink:show=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:actuate=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"XYZ\" xlink:title=\"XYZ\" xlink:actuate=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:actuate=\"onLoad\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"DEF\" xlink:type=\"simple\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:show=\"new\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:show=\"replace\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"embed\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:show=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:show=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"DEF\" xlink:title=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:actuate=\"onLoad\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:actuate=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"XYZ\" xlink:actuate=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" xlink:show=\"new\" xlink:actuate=\"onLoad\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:show=\"replace\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"embed\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:show=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"XYZ\" xlink:type=\"simple\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:actuate=\"onLoad\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"new\" xlink:actuate=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"replace\" xlink:actuate=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:show=\"embed\" xlink:actuate=\"onLoad\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"DEF\" xlink:type=\"simple\" xlink:show=\"other\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:show=\"none\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"ABC\" xlink:role=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"ABC\" xlink:title=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"DEF\" xlink:title=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:show=\"new\" xlink:actuate=\"onLoad\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:show=\"replace\" xlink:actuate=\"onRequest\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:show=\"embed\" xlink:actuate=\"other\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "xlink:href=\"XYZ\" xlink:show=\"other\" xlink:actuate=\"none\"";
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

TEST( getIsXlinkHrefDefaultDefined, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = false;
	bool actual = object.getIsXlinkHrefDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTypeDefaultDefined, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = true;
	bool actual = object.getIsXlinkTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkRoleDefaultDefined, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = false;
	bool actual = object.getIsXlinkRoleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTitleDefaultDefined, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = false;
	bool actual = object.getIsXlinkTitleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkShowDefaultDefined, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = true;
	bool actual = object.getIsXlinkShowDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkActuateDefaultDefined, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	bool expected = true;
	bool actual = object.getIsXlinkActuateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getXlinkHrefDefaultValue, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	XlinkHref expected;
	XlinkHref actual = object.getXlinkHrefDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkTypeDefaultValue, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	XlinkType expected( enums::XlinkType::simple );
	XlinkType actual = object.getXlinkTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkRoleDefaultValue, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	XlinkRole expected;
	XlinkRole actual = object.getXlinkRoleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkTitleDefaultValue, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	XlinkTitle expected;
	XlinkTitle actual = object.getXlinkTitleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkShowDefaultValue, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	XlinkShow expected( enums::XlinkShow::replace  );
	XlinkShow actual = object.getXlinkShowDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkActuateDefaultValue, MxAttrGrpLinkAttributes )
{
	MxAttrGrpLinkAttributes object;
	XlinkActuate expected( enums::XlinkActuate::onRequest );
	XlinkActuate actual = object.getXlinkActuateDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


