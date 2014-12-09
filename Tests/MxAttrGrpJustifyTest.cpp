/** *******************************************************
  * 
  * MxAttrGrpJustifyTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpJustify.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	std::string expected = ( MxEnumLeftCenterRight(  ) ).toString();
	std::string actual = object.getJustify().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	std::string expected = "MxAttrGrpJustify";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	std::string expected = "justify";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	std::string expected = "The justify attribute is used to indicate left, center, or right justification. The default value varies for different elements. For elements where the justify attribute is present but the halign attribute is not, the justify attribute indicates horizontal alignment as well as justification.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setJustify0, MxAttrGrpJustify )
{
	MxEnumLeftCenterRight value1( lexicon::enums::LeftCenterRight::right );
	MxEnumLeftCenterRight value2( lexicon::enums::LeftCenterRight::center );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpJustify object;
	object.setJustify( value1 );
	MxEnumLeftCenterRight expected = value1;
	MxEnumLeftCenterRight actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
	object.setJustify( value2 );
	expected = value2;
	actual = object.getJustify();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsJustifyRequired0, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	bool expected = false;
	bool actual = object.getIsJustifyRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsJustifyPresent0, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	bool expected = false;
	bool actual = object.getIsJustifyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsJustifyPresent( true );
	expected = true;
	actual = object.getIsJustifyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsJustifyPresent( false );
	expected = false;
	actual = object.getIsJustifyPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	std::string expected;
	std::string actual;
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::center ) );
	object.setIsJustifyPresent( true );
	expected = "justify=\"center\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	std::string expected;
	std::string actual;
	object.setIsJustifyPresent( false );
	object.setJustify( MxEnumLeftCenterRight( lexicon::enums::LeftCenterRight::right ) );
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

TEST( getIsJustifyDefaultDefined, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	bool expected = false;
	bool actual = object.getIsJustifyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getJustifyDefaultValue, MxAttrGrpJustify )
{
	MxAttrGrpJustify object;
	MxEnumLeftCenterRight expected;
	MxEnumLeftCenterRight actual = object.getJustifyDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


