/** *******************************************************
  * 
  * MxAttrGrpLineShapeTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpLineShape.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	std::string expected = ( MxEnumLineShape(  ) ).toString();
	std::string actual = object.getLineShape().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	std::string expected = "MxAttrGrpLineShape";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	std::string expected = "line-shape";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	std::string expected = "The line-shape attribute distinguishes between straight and curved lines.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setLineShape0, MxAttrGrpLineShape )
{
	MxEnumLineShape value1( lexicon::enums::LineShape::curved );
	MxEnumLineShape value2( lexicon::enums::LineShape::straight );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLineShape object;
	object.setLineShape( value1 );
	MxEnumLineShape expected = value1;
	MxEnumLineShape actual = object.getLineShape();
	CHECK_EQUAL( expected, actual )
	object.setLineShape( value2 );
	expected = value2;
	actual = object.getLineShape();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsLineShapeRequired0, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	bool expected = false;
	bool actual = object.getIsLineShapeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsLineShapePresent0, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	bool expected = false;
	bool actual = object.getIsLineShapePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineShapePresent( true );
	expected = true;
	actual = object.getIsLineShapePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLineShapePresent( false );
	expected = false;
	actual = object.getIsLineShapePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	std::string expected;
	std::string actual;
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::curved ) );
	object.setIsLineShapePresent( true );
	expected = "line-shape=\"curved\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	std::string expected;
	std::string actual;
	object.setIsLineShapePresent( false );
	object.setLineShape( MxEnumLineShape( lexicon::enums::LineShape::straight ) );
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

TEST( getIsLineShapeDefaultDefined, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	bool expected = false;
	bool actual = object.getIsLineShapeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getLineShapeDefaultValue, MxAttrGrpLineShape )
{
	MxAttrGrpLineShape object;
	MxEnumLineShape expected;
	MxEnumLineShape actual = object.getLineShapeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


