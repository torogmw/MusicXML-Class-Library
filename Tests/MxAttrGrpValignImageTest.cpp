/** *******************************************************
  * 
  * MxAttrGrpValignImageTest.cpp
  * Created: 2014-11-28 19:17:16
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpValignImage.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	std::string expected = ( MxEnumValignImage(  ) ).toString();
	std::string actual = object.getValign().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	std::string expected = "MxAttrGrpValignImage";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	std::string expected = "valign-image";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	std::string expected = "The valign-image attribute is used to indicate vertical alignment for images and graphics, so it removes the baseline value. Defaults are implementation-dependent.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setValign0, MxAttrGrpValignImage )
{
	MxEnumValignImage value1( lexicon::enums::ValignImage::bottom );
	MxEnumValignImage value2( lexicon::enums::ValignImage::middle );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpValignImage object;
	object.setValign( value1 );
	MxEnumValignImage expected = value1;
	MxEnumValignImage actual = object.getValign();
	CHECK_EQUAL( expected, actual )
	object.setValign( value2 );
	expected = value2;
	actual = object.getValign();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsValignRequired0, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	bool expected = false;
	bool actual = object.getIsValignRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsValignPresent0, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	bool expected = false;
	bool actual = object.getIsValignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsValignPresent( true );
	expected = true;
	actual = object.getIsValignPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsValignPresent( false );
	expected = false;
	actual = object.getIsValignPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	std::string expected;
	std::string actual;
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::middle ) );
	object.setIsValignPresent( true );
	expected = "valign=\"middle\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	std::string expected;
	std::string actual;
	object.setIsValignPresent( false );
	object.setValign( MxEnumValignImage( lexicon::enums::ValignImage::bottom ) );
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

TEST( getIsValignDefaultDefined, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	bool expected = false;
	bool actual = object.getIsValignDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getValignDefaultValue, MxAttrGrpValignImage )
{
	MxAttrGrpValignImage object;
	MxEnumValignImage expected;
	MxEnumValignImage actual = object.getValignDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


