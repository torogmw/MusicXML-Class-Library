/** *******************************************************
  * 
  * MxAttrGrpPrintSpacingTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpPrintSpacing.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintSpacing().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	std::string expected = "MxAttrGrpPrintSpacing";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	std::string expected = "print-spacing";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	std::string expected = "The print-spacing attribute controls whether or not spacing is left for an invisible note or object. It is used only if no note, dot, or lyric is being printed. The value is yes (leave spacing) by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setPrintSpacing0, MxAttrGrpPrintSpacing )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPrintSpacing object;
	object.setPrintSpacing( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintSpacing();
	CHECK_EQUAL( expected, actual )
	object.setPrintSpacing( value2 );
	expected = value2;
	actual = object.getPrintSpacing();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsPrintSpacingRequired0, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	bool expected = false;
	bool actual = object.getIsPrintSpacingRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsPrintSpacingPresent0, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	bool expected = false;
	bool actual = object.getIsPrintSpacingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintSpacingPresent( true );
	expected = true;
	actual = object.getIsPrintSpacingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintSpacingPresent( false );
	expected = false;
	actual = object.getIsPrintSpacingPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	std::string expected;
	std::string actual;
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setIsPrintSpacingPresent( true );
	expected = "print-spacing=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	std::string expected;
	std::string actual;
	object.setIsPrintSpacingPresent( false );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
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

TEST( getIsPrintSpacingDefaultDefined, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	bool expected = true;
	bool actual = object.getIsPrintSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getPrintSpacingDefaultValue, MxAttrGrpPrintSpacing )
{
	MxAttrGrpPrintSpacing object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


