/** *******************************************************
  * 
  * MxAttrGrpPrintoutTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpPrintout.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintObject().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintDot().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintSpacing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues3, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getPrintLyric().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected = "MxAttrGrpPrintout";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected = "printout";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected = "The printout attribute group collects the different controls over printing an object (e.g. a note or rest) and its parts, including augmentation dots and lyrics. This is especially useful for notes that overlap in different voices, or for chord sheets that contain lyrics and chords but no melody. By default, all these attributes are set to yes. If print-object is set to no, the print-dot and print-lyric attributes are interpreted to also be set to no if they are not present.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setPrintObject0, MxAttrGrpPrintout )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPrintout object;
	object.setPrintObject( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
	object.setPrintObject( value2 );
	expected = value2;
	actual = object.getPrintObject();
	CHECK_EQUAL( expected, actual )
}
TEST( setPrintDot1, MxAttrGrpPrintout )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPrintout object;
	object.setPrintDot( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintDot();
	CHECK_EQUAL( expected, actual )
	object.setPrintDot( value2 );
	expected = value2;
	actual = object.getPrintDot();
	CHECK_EQUAL( expected, actual )
}
TEST( setPrintSpacing2, MxAttrGrpPrintout )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPrintout object;
	object.setPrintSpacing( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintSpacing();
	CHECK_EQUAL( expected, actual )
	object.setPrintSpacing( value2 );
	expected = value2;
	actual = object.getPrintSpacing();
	CHECK_EQUAL( expected, actual )
}
TEST( setPrintLyric3, MxAttrGrpPrintout )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPrintout object;
	object.setPrintLyric( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getPrintLyric();
	CHECK_EQUAL( expected, actual )
	object.setPrintLyric( value2 );
	expected = value2;
	actual = object.getPrintLyric();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsPrintObjectRequired0, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = false;
	bool actual = object.getIsPrintObjectRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintDotRequired1, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = false;
	bool actual = object.getIsPrintDotRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintSpacingRequired2, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = false;
	bool actual = object.getIsPrintSpacingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintLyricRequired3, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = false;
	bool actual = object.getIsPrintLyricRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsPrintObjectPresent0, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = false;
	bool actual = object.getIsPrintObjectPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintObjectPresent( true );
	expected = true;
	actual = object.getIsPrintObjectPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintObjectPresent( false );
	expected = false;
	actual = object.getIsPrintObjectPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintDotPresent1, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = false;
	bool actual = object.getIsPrintDotPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintDotPresent( true );
	expected = true;
	actual = object.getIsPrintDotPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintDotPresent( false );
	expected = false;
	actual = object.getIsPrintDotPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintSpacingPresent2, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
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
TEST( getIsPrintLyricPresent3, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = false;
	bool actual = object.getIsPrintLyricPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintLyricPresent( true );
	expected = true;
	actual = object.getIsPrintLyricPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPrintLyricPresent( false );
	expected = false;
	actual = object.getIsPrintLyricPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setIsPrintObjectPresent( true );
	object.setIsPrintDotPresent( true );
	object.setIsPrintSpacingPresent( true );
	object.setIsPrintLyricPresent( true );
	expected = "print-object=\"no\" print-dot=\"no\" print-spacing=\"no\" print-lyric=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsPrintDotPresent( true );
	object.setIsPrintSpacingPresent( true );
	object.setIsPrintLyricPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "print-dot=\"yes\" print-spacing=\"yes\" print-lyric=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsPrintDotPresent( false );
	object.setIsPrintSpacingPresent( true );
	object.setIsPrintLyricPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	expected = "print-object=\"no\" print-spacing=\"no\" print-lyric=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsPrintDotPresent( false );
	object.setIsPrintSpacingPresent( false );
	object.setIsPrintLyricPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "print-lyric=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsPrintDotPresent( true );
	object.setIsPrintSpacingPresent( false );
	object.setIsPrintLyricPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	expected = "print-object=\"no\" print-dot=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsPrintDotPresent( true );
	object.setIsPrintSpacingPresent( false );
	object.setIsPrintLyricPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "print-dot=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsPrintDotPresent( false );
	object.setIsPrintSpacingPresent( true );
	object.setIsPrintLyricPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	expected = "print-object=\"no\" print-spacing=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsPrintDotPresent( false );
	object.setIsPrintSpacingPresent( true );
	object.setIsPrintLyricPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "print-spacing=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsPrintDotPresent( true );
	object.setIsPrintSpacingPresent( false );
	object.setIsPrintLyricPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	expected = "print-dot=\"no\" print-lyric=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsPrintDotPresent( false );
	object.setIsPrintSpacingPresent( false );
	object.setIsPrintLyricPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "print-object=\"yes\" print-lyric=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsPrintDotPresent( false );
	object.setIsPrintSpacingPresent( false );
	object.setIsPrintLyricPresent( true );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	expected = "print-lyric=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsPrintDotPresent( true );
	object.setIsPrintSpacingPresent( true );
	object.setIsPrintLyricPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "print-object=\"yes\" print-dot=\"yes\" print-spacing=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsPrintDotPresent( true );
	object.setIsPrintSpacingPresent( true );
	object.setIsPrintLyricPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	expected = "print-dot=\"no\" print-spacing=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( true );
	object.setIsPrintDotPresent( false );
	object.setIsPrintSpacingPresent( true );
	object.setIsPrintLyricPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "print-object=\"yes\" print-spacing=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	std::string expected;
	std::string actual;
	object.setIsPrintObjectPresent( false );
	object.setIsPrintDotPresent( false );
	object.setIsPrintSpacingPresent( false );
	object.setIsPrintLyricPresent( false );
	object.setPrintObject( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintDot( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintSpacing( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setPrintLyric( MxEnumYesNo( lexicon::enums::YesNo::no ) );
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

TEST( getIsPrintObjectDefaultDefined, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = true;
	bool actual = object.getIsPrintObjectDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintDotDefaultDefined, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = true;
	bool actual = object.getIsPrintDotDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintSpacingDefaultDefined, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = true;
	bool actual = object.getIsPrintSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPrintLyricDefaultDefined, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	bool expected = true;
	bool actual = object.getIsPrintLyricDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getPrintObjectDefaultValue, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintObjectDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPrintDotDefaultValue, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintDotDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPrintSpacingDefaultValue, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPrintLyricDefaultValue, MxAttrGrpPrintout )
{
	MxAttrGrpPrintout object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getPrintLyricDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


