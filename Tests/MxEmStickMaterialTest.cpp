/** *******************************************************
  * 
  * MxEmStickMaterialTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmStickMaterial.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmStickMaterial )
{
	MxEmStickMaterial object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmStickMaterial )
{
	MxEmStickMaterial object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmStickMaterial )
{
	MxEmStickMaterial object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmStickMaterial )
{
	MxEmStickMaterial object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmStickMaterial )
{
	MxEmStickMaterial object( lexicon::enums::StickMaterial::soft );
	std::string expected;
	std::string actual;
	expected = "soft";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickMaterial( lexicon::enums::StickMaterial::medium ) );
	expected = "medium";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmStickMaterial )
{
	MxEmStickMaterial object( lexicon::enums::StickMaterial::hard );
	std::string expected;
	std::string actual;
	expected = "hard";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickMaterial( lexicon::enums::StickMaterial::shaded ) );
	expected = "shaded";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmStickMaterial )
{
	MxEmStickMaterial object( lexicon::enums::StickMaterial::x );
	std::string expected;
	std::string actual;
	expected = "x";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickMaterial( lexicon::enums::StickMaterial::soft ) );
	expected = "soft";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmStickMaterial )
{
	MxEmStickMaterial object( lexicon::enums::StickMaterial::medium );
	std::string expected;
	std::string actual;
	expected = "medium";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickMaterial( lexicon::enums::StickMaterial::hard ) );
	expected = "hard";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmStickMaterial )
{
	MxEmStickMaterial object( lexicon::enums::StickMaterial::shaded );
	std::string expected;
	std::string actual;
	expected = "shaded";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickMaterial( lexicon::enums::StickMaterial::x ) );
	expected = "x";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmStickMaterial )
{
	MxEmStickMaterial object;
	std::string expected = "MxEmStickMaterial";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmStickMaterial )
{
	MxEmStickMaterial object;
	std::string expected = "stick-material";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmStickMaterial )
{
	MxEmStickMaterial object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmStickMaterial )
{
	MxEmStickMaterial object( lexicon::enums::StickMaterial::soft );
	std::string expected;
	std::string actual;
	expected = "<stick-material>soft</stick-material>";
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


