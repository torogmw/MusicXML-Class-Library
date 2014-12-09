/** *******************************************************
  * 
  * MxEsLineWidthTest.cpp
  * Created: 2014-12-05 20:57:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsLineWidth.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsLineWidth )
{
	MxEsLineWidth object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsLineWidth )
{
	MxEsLineWidth object;
	std::string expected = ( MxEnumLineWidthType(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsLineWidth )
{
	MxEsLineWidth object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsLineWidth )
{
	MxEsLineWidth object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsLineWidth )
{
	MxEsLineWidth object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsLineWidth )
{
	MxEsLineWidth object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTenths( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsLineWidth )
{
	MxEsLineWidth object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTenths( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsLineWidth )
{
	MxEsLineWidth object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTenths( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsLineWidth )
{
	MxEsLineWidth object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTenths( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsLineWidth )
{
	MxEsLineWidth object( -1000 );
	std::string expected;
	std::string actual;
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberTenths( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsLineWidth )
{
	MxEsLineWidth object;
	std::string expected = "MxEsLineWidth";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsLineWidth )
{
	MxEsLineWidth object;
	std::string expected = "line-width";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsLineWidth )
{
	MxEsLineWidth object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEsLineWidth )
{
	MxEnumLineWidthType value1( lexicon::enums::LineWidthType::other );
	MxEnumLineWidthType value2( lexicon::enums::LineWidthType::wedge );
	CHECK( ( value1 != value2 ) )
	MxEsLineWidth object;
	object.setType( value1 );
	MxEnumLineWidthType expected = value1;
	MxEnumLineWidthType actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxEsLineWidth )
{
	MxEsLineWidth object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEsLineWidth )
{
	MxEsLineWidth object;
	bool expected = true;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTypeDefaultDefined, MxEsLineWidth )
{
	MxEsLineWidth object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEsLineWidth )
{
	MxEsLineWidth object;
	MxEnumLineWidthType expected;
	MxEnumLineWidthType actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsLineWidth )
{
	MxEsLineWidth object( -1000 );
	std::string expected;
	std::string actual;
	object.setType( MxEnumLineWidthType( lexicon::enums::LineWidthType::beam ) );
	expected = "<line-width type=\"beam\">-1000</line-width>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsLineWidth )
{
	MxEsLineWidth object( -1000 );
	std::string expected;
	std::string actual;
	object.setType( MxEnumLineWidthType( lexicon::enums::LineWidthType::beam ) );
	expected = "<line-width type=\"beam\">-1000</line-width>";
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


