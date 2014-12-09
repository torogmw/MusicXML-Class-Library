/** *******************************************************
  * 
  * MxAttrGrpLineTypeTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpLineType.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	std::string expected = ( MxEnumLineType(  ) ).toString();
	std::string actual = object.getLineType().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	std::string expected = "MxAttrGrpLineType";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	std::string expected = "line-type";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	std::string expected = "The line-type attribute distinguishes between solid, dashed, dotted, and wavy lines.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setLineType0, MxAttrGrpLineType )
{
	MxEnumLineType value1( lexicon::enums::LineType::wavy );
	MxEnumLineType value2( lexicon::enums::LineType::dotted );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLineType object;
	object.setLineType( value1 );
	MxEnumLineType expected = value1;
	MxEnumLineType actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
	object.setLineType( value2 );
	expected = value2;
	actual = object.getLineType();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsLineTypeRequired0, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	bool expected = false;
	bool actual = object.getIsLineTypeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsLineTypePresent0, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	bool expected = false;
	bool actual = object.getIsLineTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineTypePresent( true );
	expected = true;
	actual = object.getIsLineTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineTypePresent( false );
	expected = false;
	actual = object.getIsLineTypePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	std::string expected;
	std::string actual;
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dashed ) );
	object.setIsLineTypePresent( true );
	expected = "line-type=\"dashed\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	std::string expected;
	std::string actual;
	object.setIsLineTypePresent( false );
	object.setLineType( MxEnumLineType( lexicon::enums::LineType::dotted ) );
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

TEST( getIsLineTypeDefaultDefined, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	bool expected = false;
	bool actual = object.getIsLineTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getLineTypeDefaultValue, MxAttrGrpLineType )
{
	MxAttrGrpLineType object;
	MxEnumLineType expected;
	MxEnumLineType actual = object.getLineTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


