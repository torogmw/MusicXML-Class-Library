/** *******************************************************
  * 
  * MxAttrGrpPartAttributesTest.cpp
  * Created: 2014-11-28 19:17:16
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpPartAttributes.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	std::string expected = ( XsIdRef(  ) ).toString();
	std::string actual = object.getId().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	std::string expected = "MxAttrGrpPartAttributes";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	std::string expected = "part-attributes";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	std::string expected = "In either partwise or timewise format, the part element has an id attribute that is an IDREF back to a score-part in the part-list.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setId0, MxAttrGrpPartAttributes )
{
	XsIdRef value1( "ID01" );
	XsIdRef value2( "ID02" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpPartAttributes object;
	object.setId( value1 );
	XsIdRef expected = value1;
	XsIdRef actual = object.getId();
	CHECK_EQUAL( expected, actual )
	object.setId( value2 );
	expected = value2;
	actual = object.getId();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsIdRequired0, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	bool expected = true;
	bool actual = object.getIsIdRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsIdPresent0, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	bool expected = true;
	bool actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	std::string expected;
	std::string actual;
	object.setId( XsIdRef( "ABC" ) );
	expected = "id=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	std::string expected;
	std::string actual;
	object.setId( XsIdRef( "DEF" ) );
	expected = "id=\"DEF\"";
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

TEST( getIsIdDefaultDefined, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	bool expected = false;
	bool actual = object.getIsIdDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getIdDefaultValue, MxAttrGrpPartAttributes )
{
	MxAttrGrpPartAttributes object;
	XsIdRef expected;
	XsIdRef actual = object.getIdDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


