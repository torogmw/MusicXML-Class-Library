/** *******************************************************
  * 
  * MxAttrGrpDirectiveTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpDirective.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getDirective().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	std::string expected = "MxAttrGrpDirective";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	std::string expected = "directive";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	std::string expected = "The directive attribute changes the default-x position of a direction. It indicates that the left-hand side of the direction is aligned with the left-hand side of the time signature. If no time signature is present, it is aligned with the left-hand side of the first music notational element in the measure. If a default-x, justify, or halign attribute is present, it overrides the directive attribute.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDirective0, MxAttrGrpDirective )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpDirective object;
	object.setDirective( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getDirective();
	CHECK_EQUAL( expected, actual )
	object.setDirective( value2 );
	expected = value2;
	actual = object.getDirective();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDirectiveRequired0, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	bool expected = false;
	bool actual = object.getIsDirectiveRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDirectivePresent0, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	bool expected = false;
	bool actual = object.getIsDirectivePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDirectivePresent( true );
	expected = true;
	actual = object.getIsDirectivePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDirectivePresent( false );
	expected = false;
	actual = object.getIsDirectivePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	std::string expected;
	std::string actual;
	object.setDirective( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setIsDirectivePresent( true );
	expected = "directive=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	std::string expected;
	std::string actual;
	object.setIsDirectivePresent( false );
	object.setDirective( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
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

TEST( getIsDirectiveDefaultDefined, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	bool expected = false;
	bool actual = object.getIsDirectiveDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDirectiveDefaultValue, MxAttrGrpDirective )
{
	MxAttrGrpDirective object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getDirectiveDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


