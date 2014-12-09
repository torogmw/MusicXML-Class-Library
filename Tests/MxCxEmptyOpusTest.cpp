/** *******************************************************
  * 
  * MxCxEmptyOpusTest.cpp
  * Created: 2014-12-03 16:31:31
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyOpus.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	std::string expected = ( XlinkHref(  ) ).toString();
	std::string actual = object.getXlinkHref().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	std::string expected = ( XlinkType( enums::XlinkType::simple ) ).toString();
	std::string actual = object.getXlinkType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	std::string expected = ( XlinkRole(  ) ).toString();
	std::string actual = object.getXlinkRole().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	std::string expected = ( XlinkTitle(  ) ).toString();
	std::string actual = object.getXlinkTitle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	std::string expected = ( XlinkShow( enums::XlinkShow::replace  ) ).toString();
	std::string actual = object.getXlinkShow().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	std::string expected = ( XlinkActuate( enums::XlinkActuate::onRequest ) ).toString();
	std::string actual = object.getXlinkActuate().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	std::string expected = "MxCxEmptyOpus";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	std::string expected = "opus";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	std::string expected = "The opus type represents a link to a MusicXML opus document that composes multiple MusicXML scores into a collection.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setXlinkHref0, MxCxEmptyOpus )
{
	XlinkHref value1( "http://matthewjamesbriggs.com" );
	XlinkHref value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOpus object;
	object.setXlinkHref( value1 );
	XlinkHref expected = value1;
	XlinkHref actual = object.getXlinkHref();
	CHECK_EQUAL( expected, actual )
	object.setXlinkHref( value2 );
	expected = value2;
	actual = object.getXlinkHref();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkRole1, MxCxEmptyOpus )
{
	XlinkRole value1( "http://matthewjamesbriggs.com" );
	XlinkRole value2( "http://somethingelse.com" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOpus object;
	object.setXlinkRole( value1 );
	XlinkRole expected = value1;
	XlinkRole actual = object.getXlinkRole();
	CHECK_EQUAL( expected, actual )
	object.setXlinkRole( value2 );
	expected = value2;
	actual = object.getXlinkRole();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkTitle2, MxCxEmptyOpus )
{
	XlinkTitle value1( "Title A" );
	XlinkTitle value2( "Title B" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOpus object;
	object.setXlinkTitle( value1 );
	XlinkTitle expected = value1;
	XlinkTitle actual = object.getXlinkTitle();
	CHECK_EQUAL( expected, actual )
	object.setXlinkTitle( value2 );
	expected = value2;
	actual = object.getXlinkTitle();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkShow3, MxCxEmptyOpus )
{
	XlinkShow value1( lexicon::enums::XlinkShow::none );
	XlinkShow value2( lexicon::enums::XlinkShow::other );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOpus object;
	object.setXlinkShow( value1 );
	XlinkShow expected = value1;
	XlinkShow actual = object.getXlinkShow();
	CHECK_EQUAL( expected, actual )
	object.setXlinkShow( value2 );
	expected = value2;
	actual = object.getXlinkShow();
	CHECK_EQUAL( expected, actual )
}
TEST( setXlinkActuate4, MxCxEmptyOpus )
{
	XlinkActuate value1( lexicon::enums::XlinkActuate::none );
	XlinkActuate value2( lexicon::enums::XlinkActuate::other );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyOpus object;
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

TEST( getIsXlinkHrefRequired0, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = true;
	bool actual = object.getIsXlinkHrefRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTypeRequired1, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = false;
	bool actual = object.getIsXlinkTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkRoleRequired2, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = false;
	bool actual = object.getIsXlinkRoleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTitleRequired3, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = false;
	bool actual = object.getIsXlinkTitleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkShowRequired4, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = false;
	bool actual = object.getIsXlinkShowRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkActuateRequired5, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = false;
	bool actual = object.getIsXlinkActuateRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsXlinkHrefPresent0, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
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
TEST( getIsXlinkTypePresent1, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
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
TEST( getIsXlinkRolePresent2, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
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
TEST( getIsXlinkTitlePresent3, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
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
TEST( getIsXlinkShowPresent4, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
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
TEST( getIsXlinkActuatePresent5, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsXlinkHrefDefaultDefined, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = false;
	bool actual = object.getIsXlinkHrefDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTypeDefaultDefined, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = true;
	bool actual = object.getIsXlinkTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkRoleDefaultDefined, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = false;
	bool actual = object.getIsXlinkRoleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkTitleDefaultDefined, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = false;
	bool actual = object.getIsXlinkTitleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkShowDefaultDefined, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = true;
	bool actual = object.getIsXlinkShowDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXlinkActuateDefaultDefined, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	bool expected = true;
	bool actual = object.getIsXlinkActuateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getXlinkHrefDefaultValue, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	XlinkHref expected;
	XlinkHref actual = object.getXlinkHrefDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkTypeDefaultValue, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	XlinkType expected( enums::XlinkType::simple );
	XlinkType actual = object.getXlinkTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkRoleDefaultValue, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	XlinkRole expected;
	XlinkRole actual = object.getXlinkRoleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkTitleDefaultValue, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	XlinkTitle expected;
	XlinkTitle actual = object.getXlinkTitleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkShowDefaultValue, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	XlinkShow expected( enums::XlinkShow::replace  );
	XlinkShow actual = object.getXlinkShowDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXlinkActuateDefaultValue, MxCxEmptyOpus )
{
	MxCxEmptyOpus object;
	XlinkActuate expected( enums::XlinkActuate::onRequest );
	XlinkActuate actual = object.getXlinkActuateDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	expected = "<booksmart xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"embed\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"other\" xlink:actuate=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"none\" xlink:actuate=\"onLoad\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"new\" xlink:actuate=\"onRequest\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:type=\"simple\" xlink:show=\"replace\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<booksmart xlink:href=\"DEF\" xlink:type=\"simple\" xlink:actuate=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<quiet xlink:href=\"XYZ\" xlink:role=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<musicxmlishard xlink:href=\"ABC\" xlink:role=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<bishop xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<charlie xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<booksmart xlink:href=\"ABC\" xlink:title=\"ABC\" xlink:show=\"embed\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<quiet xlink:href=\"DEF\" xlink:title=\"DEF\" xlink:show=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:show=\"none\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:show=\"new\" xlink:actuate=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:show=\"replace\" xlink:actuate=\"onLoad\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<booksmart xlink:href=\"XYZ\" xlink:actuate=\"onRequest\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:actuate=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<booksmart xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:show=\"embed\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<quiet xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:show=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<musicxmlishard xlink:href=\"ABC\" xlink:show=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<bishop xlink:href=\"DEF\" xlink:show=\"new\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<charlie xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<booksmart xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:actuate=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<quiet xlink:href=\"DEF\" xlink:title=\"DEF\" xlink:actuate=\"onLoad\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:actuate=\"onRequest\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:type=\"simple\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:show=\"replace\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<booksmart xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:show=\"embed\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\" xlink:show=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"new\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:title=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<booksmart xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:actuate=\"onRequest\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<quiet xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<musicxmlishard xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:actuate=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<bishop xlink:href=\"DEF\" xlink:actuate=\"onLoad\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<charlie xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:title=\"XYZ\" xlink:show=\"replace\" xlink:actuate=\"onRequest\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<booksmart xlink:href=\"ABC\" xlink:type=\"simple\" xlink:title=\"ABC\" xlink:show=\"embed\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<quiet xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:show=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:show=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:show=\"new\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:type=\"simple\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<booksmart xlink:href=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<quiet xlink:href=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:title=\"DEF\" xlink:actuate=\"onRequest\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<bishop xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:title=\"XYZ\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<charlie xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:title=\"ABC\" xlink:show=\"replace\" xlink:actuate=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<booksmart xlink:href=\"DEF\" xlink:title=\"DEF\" xlink:show=\"embed\" xlink:actuate=\"onLoad\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<quiet xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:show=\"other\" xlink:actuate=\"onRequest\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<musicxmlishard xlink:href=\"ABC\" xlink:type=\"simple\" xlink:show=\"none\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<bishop xlink:href=\"DEF\" xlink:role=\"DEF\" xlink:show=\"new\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<charlie xlink:href=\"XYZ\" xlink:role=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<booksmart xlink:href=\"ABC\" xlink:type=\"simple\" xlink:role=\"ABC\" xlink:title=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( true );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<quiet xlink:href=\"DEF\" xlink:type=\"simple\" xlink:title=\"DEF\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( true );
	object.setIsXlinkShowPresent( false );
	object.setIsXlinkActuatePresent( false );
	object.setXlinkHref( XlinkHref( "XYZ" ) );
	
	object.setXlinkRole( XlinkRole( "XYZ" ) );
	object.setXlinkTitle( XlinkTitle( "XYZ" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<musicxmlishard xlink:href=\"XYZ\" xlink:title=\"XYZ\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "bishop" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::new_ ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<bishop xlink:href=\"ABC\" xlink:title=\"ABC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "charlie" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::replace ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onRequest ) );
	expected = "<charlie xlink:href=\"DEF\" xlink:type=\"simple\" xlink:role=\"DEF\" xlink:show=\"replace\" xlink:actuate=\"onRequest\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "booksmart" );
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
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::embed ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::other ) );
	expected = "<booksmart xlink:href=\"XYZ\" xlink:type=\"simple\" xlink:role=\"XYZ\" xlink:show=\"embed\" xlink:actuate=\"other\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( true );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "ABC" ) );
	
	object.setXlinkRole( XlinkRole( "ABC" ) );
	object.setXlinkTitle( XlinkTitle( "ABC" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::other ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::none ) );
	expected = "<quiet xlink:href=\"ABC\" xlink:role=\"ABC\" xlink:show=\"other\" xlink:actuate=\"none\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyOpus )
{
	MxCxEmptyOpus object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsXlinkTypePresent( false );
	object.setIsXlinkRolePresent( false );
	object.setIsXlinkTitlePresent( false );
	object.setIsXlinkShowPresent( true );
	object.setIsXlinkActuatePresent( true );
	object.setXlinkHref( XlinkHref( "DEF" ) );
	
	object.setXlinkRole( XlinkRole( "DEF" ) );
	object.setXlinkTitle( XlinkTitle( "DEF" ) );
	object.setXlinkShow( XlinkShow( lexicon::enums::XlinkShow::none ) );
	object.setXlinkActuate( XlinkActuate( lexicon::enums::XlinkActuate::onLoad ) );
	expected = "<musicxmlishard xlink:href=\"DEF\" xlink:show=\"none\" xlink:actuate=\"onLoad\"/>";
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


