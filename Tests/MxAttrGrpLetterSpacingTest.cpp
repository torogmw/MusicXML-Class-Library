/** *******************************************************
  * 
  * MxAttrGrpLetterSpacingTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpLetterSpacing.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	std::string expected = ( MxNumberOrNormal( "normal" ) ).toString();
	std::string actual = object.getLetterSpacing().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	std::string expected = "MxAttrGrpLetterSpacing";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	std::string expected = "letter-spacing";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	std::string expected = "The letter-spacing attribute specifies text tracking. Values are either normal or a number representing the number of ems to add between each letter. The number may be negative in order to subtract space. The default is normal, which allows flexibility of letter-spacing for purposes of text justification.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setLetterSpacing0, MxAttrGrpLetterSpacing )
{
	MxNumberOrNormal value1( 0.1 );
	MxNumberOrNormal value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLetterSpacing object;
	object.setLetterSpacing( value1 );
	MxNumberOrNormal expected = value1;
	MxNumberOrNormal actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
	object.setLetterSpacing( value2 );
	expected = value2;
	actual = object.getLetterSpacing();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsLetterSpacingRequired0, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	bool expected = false;
	bool actual = object.getIsLetterSpacingRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsLetterSpacingPresent0, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	bool expected = false;
	bool actual = object.getIsLetterSpacingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLetterSpacingPresent( true );
	expected = true;
	actual = object.getIsLetterSpacingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLetterSpacingPresent( false );
	expected = false;
	actual = object.getIsLetterSpacingPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	std::string expected;
	std::string actual;
	object.setLetterSpacing( MxNumberOrNormal( 0.1 ) );
	object.setIsLetterSpacingPresent( true );
	expected = "letter-spacing=\"0.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	std::string expected;
	std::string actual;
	object.setIsLetterSpacingPresent( false );
	object.setLetterSpacing( MxNumberOrNormal( 0.2 ) );
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

TEST( getIsLetterSpacingDefaultDefined, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	bool expected = true;
	bool actual = object.getIsLetterSpacingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getLetterSpacingDefaultValue, MxAttrGrpLetterSpacing )
{
	MxAttrGrpLetterSpacing object;
	MxNumberOrNormal expected( "normal" );
	MxNumberOrNormal actual = object.getLetterSpacingDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


