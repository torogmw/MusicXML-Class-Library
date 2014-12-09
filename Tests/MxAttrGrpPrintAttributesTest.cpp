/** *******************************************************
  * 
  * MxAttrGrpPrintAttributesTest.cpp
  * Created: 2014-11-28 19:17:16
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpPrintAttributes.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getStaffSpacing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getNewSystem().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getNewPage().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues3, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected = ( XsPositiveInteger(  ) ).toString();
	std::string actual = object.getBlankPage().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues4, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getPageNumber().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected = "MxAttrGrpPrintAttributes";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected = "print-attributes";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected = "The print-attributes group is used by the print element. The new-system and new-page attributes indicate whether to force a system or page break, or to force the current music onto the same system or page as the preceding music. Normally this is the first music data within a measure. If used in multi-part music, they should be placed in the same positions within each part, or the results are undefined. The page-number attribute sets the number of a new page; it is ignored if new-page is not yes. Version 2.0 adds a blank-page attribute. This is a positive integer value that specifies the number of blank pages to insert before the current measure. It is ignored if new-page is not yes. These blank pages have no music, but may have text or images specified by the credit element. This is used to allow a combination of pages that are all text, or all text and images, together with pages of music. The staff-spacing attribute specifies spacing between multiple staves in tenths of staff space. This is deprecated as of Version 1.1; the staff-layout element should be used instead. If both are present, the staff-layout values take priority.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setStaffSpacing0, MxAttrGrpPrintAttributes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPrintAttributes object;
	object.setStaffSpacing( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getStaffSpacing();
	CHECK_EQUAL( expected, actual )
	object.setStaffSpacing( value2 );
	expected = value2;
	actual = object.getStaffSpacing();
	CHECK_EQUAL( expected, actual )
}
TEST( setNewSystem1, MxAttrGrpPrintAttributes )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPrintAttributes object;
	object.setNewSystem( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getNewSystem();
	CHECK_EQUAL( expected, actual )
	object.setNewSystem( value2 );
	expected = value2;
	actual = object.getNewSystem();
	CHECK_EQUAL( expected, actual )
}
TEST( setNewPage2, MxAttrGrpPrintAttributes )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPrintAttributes object;
	object.setNewPage( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getNewPage();
	CHECK_EQUAL( expected, actual )
	object.setNewPage( value2 );
	expected = value2;
	actual = object.getNewPage();
	CHECK_EQUAL( expected, actual )
}
TEST( setBlankPage3, MxAttrGrpPrintAttributes )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPrintAttributes object;
	object.setBlankPage( value1 );
	XsPositiveInteger expected = value1;
	XsPositiveInteger actual = object.getBlankPage();
	CHECK_EQUAL( expected, actual )
	object.setBlankPage( value2 );
	expected = value2;
	actual = object.getBlankPage();
	CHECK_EQUAL( expected, actual )
}
TEST( setPageNumber4, MxAttrGrpPrintAttributes )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPrintAttributes object;
	object.setPageNumber( value1 );
	XsToken expected = value1;
	XsToken actual = object.getPageNumber();
	CHECK_EQUAL( expected, actual )
	object.setPageNumber( value2 );
	expected = value2;
	actual = object.getPageNumber();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsStaffSpacingRequired0, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsStaffSpacingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNewSystemRequired1, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsNewSystemRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNewPageRequired2, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsNewPageRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBlankPageRequired3, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsBlankPageRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPageNumberRequired4, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsPageNumberRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsStaffSpacingPresent0, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsStaffSpacingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStaffSpacingPresent( true );
	expected = true;
	actual = object.getIsStaffSpacingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStaffSpacingPresent( false );
	expected = false;
	actual = object.getIsStaffSpacingPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNewSystemPresent1, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsNewSystemPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNewSystemPresent( true );
	expected = true;
	actual = object.getIsNewSystemPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNewSystemPresent( false );
	expected = false;
	actual = object.getIsNewSystemPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNewPagePresent2, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsNewPagePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNewPagePresent( true );
	expected = true;
	actual = object.getIsNewPagePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNewPagePresent( false );
	expected = false;
	actual = object.getIsNewPagePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBlankPagePresent3, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsBlankPagePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBlankPagePresent( true );
	expected = true;
	actual = object.getIsBlankPagePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBlankPagePresent( false );
	expected = false;
	actual = object.getIsBlankPagePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPageNumberPresent4, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsPageNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPageNumberPresent( true );
	expected = true;
	actual = object.getIsPageNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPageNumberPresent( false );
	expected = false;
	actual = object.getIsPageNumberPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setStaffSpacing( MxNumberTenths( 1.1 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 2 ) );
	object.setPageNumber( XsToken( "ABC" ) );
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( true );
	expected = "staff-spacing=\"1.1\" new-system=\"no\" new-page=\"no\" blank-page=\"2\" page-number=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 1.2 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 3 ) );
	object.setPageNumber( XsToken( "DEF" ) );
	expected = "new-system=\"yes\" new-page=\"yes\" blank-page=\"3\" page-number=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 1.3 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 4 ) );
	object.setPageNumber( XsToken( "XYZ" ) );
	expected = "staff-spacing=\"1.3\" new-page=\"no\" blank-page=\"4\" page-number=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 1.4 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 5 ) );
	object.setPageNumber( XsToken( "ABC" ) );
	expected = "blank-page=\"5\" page-number=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 1.5 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 6 ) );
	object.setPageNumber( XsToken( "DEF" ) );
	expected = "staff-spacing=\"1.5\" new-system=\"no\" page-number=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 1.6 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 7 ) );
	object.setPageNumber( XsToken( "XYZ" ) );
	expected = "new-system=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 1.7 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 8 ) );
	object.setPageNumber( XsToken( "ABC" ) );
	expected = "staff-spacing=\"1.7\" new-page=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 1.8 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 9 ) );
	object.setPageNumber( XsToken( "DEF" ) );
	expected = "new-page=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 1.9 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 10 ) );
	object.setPageNumber( XsToken( "XYZ" ) );
	expected = "staff-spacing=\"1.9\" new-system=\"no\" new-page=\"no\" blank-page=\"10\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 2 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 11 ) );
	object.setPageNumber( XsToken( "ABC" ) );
	expected = "new-system=\"yes\" blank-page=\"11\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 2.1 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 12 ) );
	object.setPageNumber( XsToken( "DEF" ) );
	expected = "staff-spacing=\"2.1\" blank-page=\"12\" page-number=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 2.2 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 13 ) );
	object.setPageNumber( XsToken( "XYZ" ) );
	expected = "blank-page=\"13\" page-number=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 2.3 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 14 ) );
	object.setPageNumber( XsToken( "ABC" ) );
	expected = "staff-spacing=\"2.3\" new-system=\"no\" new-page=\"no\" page-number=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 2.4 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 15 ) );
	object.setPageNumber( XsToken( "DEF" ) );
	expected = "new-system=\"yes\" new-page=\"yes\" page-number=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 2.5 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 16 ) );
	object.setPageNumber( XsToken( "XYZ" ) );
	expected = "staff-spacing=\"2.5\" new-page=\"no\" page-number=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 2.6 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 17 ) );
	object.setPageNumber( XsToken( "ABC" ) );
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
TEST( toString16, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 2.7 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 18 ) );
	object.setPageNumber( XsToken( "DEF" ) );
	expected = "staff-spacing=\"2.7\" new-system=\"no\" blank-page=\"18\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 2.8 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 19 ) );
	object.setPageNumber( XsToken( "XYZ" ) );
	expected = "new-system=\"yes\" blank-page=\"19\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 2.9 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 20 ) );
	object.setPageNumber( XsToken( "ABC" ) );
	expected = "staff-spacing=\"2.9\" new-page=\"no\" blank-page=\"20\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 3 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 21 ) );
	object.setPageNumber( XsToken( "DEF" ) );
	expected = "new-page=\"yes\" blank-page=\"21\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 3.1 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 22 ) );
	object.setPageNumber( XsToken( "XYZ" ) );
	expected = "staff-spacing=\"3.1\" new-system=\"no\" new-page=\"no\" page-number=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 3.2 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 23 ) );
	object.setPageNumber( XsToken( "ABC" ) );
	expected = "new-system=\"yes\" page-number=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 3.3 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 24 ) );
	object.setPageNumber( XsToken( "DEF" ) );
	expected = "staff-spacing=\"3.3\" page-number=\"DEF\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 3.4 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 25 ) );
	object.setPageNumber( XsToken( "XYZ" ) );
	expected = "page-number=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 3.5 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 26 ) );
	object.setPageNumber( XsToken( "ABC" ) );
	expected = "new-system=\"no\" new-page=\"no\" blank-page=\"26\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 3.6 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 27 ) );
	object.setPageNumber( XsToken( "DEF" ) );
	expected = "staff-spacing=\"3.6\" new-page=\"yes\" blank-page=\"27\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( true );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 3.7 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 28 ) );
	object.setPageNumber( XsToken( "XYZ" ) );
	expected = "blank-page=\"28\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 3.8 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 29 ) );
	object.setPageNumber( XsToken( "ABC" ) );
	expected = "staff-spacing=\"3.8\" new-system=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( true );
	object.setIsNewPagePresent( false );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( false );
	object.setStaffSpacing( MxNumberTenths( 3.9 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 30 ) );
	object.setPageNumber( XsToken( "DEF" ) );
	expected = "new-system=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( true );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 4 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBlankPage( XsPositiveInteger( 31 ) );
	object.setPageNumber( XsToken( "XYZ" ) );
	expected = "staff-spacing=\"4\" new-page=\"yes\" page-number=\"XYZ\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	std::string expected;
	std::string actual;
	object.setIsStaffSpacingPresent( false );
	object.setIsNewSystemPresent( false );
	object.setIsNewPagePresent( true );
	object.setIsBlankPagePresent( false );
	object.setIsPageNumberPresent( true );
	object.setStaffSpacing( MxNumberTenths( 4.1 ) );
	object.setNewSystem( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setNewPage( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBlankPage( XsPositiveInteger( 32 ) );
	object.setPageNumber( XsToken( "ABC" ) );
	expected = "new-page=\"no\" page-number=\"ABC\"";
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

TEST( getIsStaffSpacingDefaultDefined, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsStaffSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNewSystemDefaultDefined, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsNewSystemDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNewPageDefaultDefined, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsNewPageDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBlankPageDefaultDefined, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsBlankPageDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPageNumberDefaultDefined, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	bool expected = false;
	bool actual = object.getIsPageNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getStaffSpacingDefaultValue, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getStaffSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNewSystemDefaultValue, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getNewSystemDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNewPageDefaultValue, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getNewPageDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBlankPageDefaultValue, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	XsPositiveInteger expected;
	XsPositiveInteger actual = object.getBlankPageDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPageNumberDefaultValue, MxAttrGrpPrintAttributes )
{
	MxAttrGrpPrintAttributes object;
	XsToken expected;
	XsToken actual = object.getPageNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


