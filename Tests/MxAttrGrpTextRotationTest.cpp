/** *******************************************************
  * 
  * MxAttrGrpTextRotationTest.cpp
  * Created: 2014-11-28 19:17:16
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpTextRotation.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	std::string expected = ( MxNumberRotationDegrees(  ) ).toString();
	std::string actual = object.getRotation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	std::string expected = "MxAttrGrpTextRotation";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	std::string expected = "text-rotation";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	std::string expected = "The rotation attribute is used to rotate text around the alignment point specified by the halign and valign attributes. Positive values are clockwise rotations, while negative values are counter-clockwise rotations.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setRotation0, MxAttrGrpTextRotation )
{
	MxNumberRotationDegrees value1( -179.9 );
	MxNumberRotationDegrees value2( -179.8 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpTextRotation object;
	object.setRotation( value1 );
	MxNumberRotationDegrees expected = value1;
	MxNumberRotationDegrees actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
	object.setRotation( value2 );
	expected = value2;
	actual = object.getRotation();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsRotationRequired0, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	bool expected = false;
	bool actual = object.getIsRotationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsRotationPresent0, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	bool expected = false;
	bool actual = object.getIsRotationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRotationPresent( true );
	expected = true;
	actual = object.getIsRotationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRotationPresent( false );
	expected = false;
	actual = object.getIsRotationPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	std::string expected;
	std::string actual;
	object.setRotation( MxNumberRotationDegrees( 11.2 ) );
	object.setIsRotationPresent( true );
	expected = "rotation=\"11.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	std::string expected;
	std::string actual;
	object.setIsRotationPresent( false );
	object.setRotation( MxNumberRotationDegrees( 11.3 ) );
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

TEST( getIsRotationDefaultDefined, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	bool expected = false;
	bool actual = object.getIsRotationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getRotationDefaultValue, MxAttrGrpTextRotation )
{
	MxAttrGrpTextRotation object;
	MxNumberRotationDegrees expected;
	MxNumberRotationDegrees actual = object.getRotationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


