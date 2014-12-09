/** *******************************************************
  * 
  * MxAttrGrpOrientationTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpOrientation.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	std::string expected = ( MxEnumOverUnder(  ) ).toString();
	std::string actual = object.getOrientation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	std::string expected = "MxAttrGrpOrientation";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	std::string expected = "orientation";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	std::string expected = "The orientation attribute indicates whether slurs and ties are overhand (tips down) or underhand (tips up). This is distinct from the placement attribute used by any notation type.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setOrientation0, MxAttrGrpOrientation )
{
	MxEnumOverUnder value1( lexicon::enums::OverUnder::under );
	MxEnumOverUnder value2( lexicon::enums::OverUnder::over );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpOrientation object;
	object.setOrientation( value1 );
	MxEnumOverUnder expected = value1;
	MxEnumOverUnder actual = object.getOrientation();
	CHECK_EQUAL( expected, actual )
	object.setOrientation( value2 );
	expected = value2;
	actual = object.getOrientation();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsOrientationRequired0, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	bool expected = false;
	bool actual = object.getIsOrientationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsOrientationPresent0, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	bool expected = false;
	bool actual = object.getIsOrientationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsOrientationPresent( true );
	expected = true;
	actual = object.getIsOrientationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsOrientationPresent( false );
	expected = false;
	actual = object.getIsOrientationPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	std::string expected;
	std::string actual;
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::under ) );
	object.setIsOrientationPresent( true );
	expected = "orientation=\"under\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	std::string expected;
	std::string actual;
	object.setIsOrientationPresent( false );
	object.setOrientation( MxEnumOverUnder( lexicon::enums::OverUnder::over ) );
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

TEST( getIsOrientationDefaultDefined, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	bool expected = false;
	bool actual = object.getIsOrientationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getOrientationDefaultValue, MxAttrGrpOrientation )
{
	MxAttrGrpOrientation object;
	MxEnumOverUnder expected;
	MxEnumOverUnder actual = object.getOrientationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


