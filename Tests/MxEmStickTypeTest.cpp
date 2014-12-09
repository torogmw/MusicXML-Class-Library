/** *******************************************************
  * 
  * MxEmStickTypeTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmStickType.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmStickType )
{
	MxEmStickType object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmStickType )
{
	MxEmStickType object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmStickType )
{
	MxEmStickType object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmStickType )
{
	MxEmStickType object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmStickType )
{
	MxEmStickType object( lexicon::enums::StickType::bassDrum );
	std::string expected;
	std::string actual;
	expected = "bass drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickType( lexicon::enums::StickType::doubleBassDrum ) );
	expected = "double bass drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmStickType )
{
	MxEmStickType object( lexicon::enums::StickType::timpani );
	std::string expected;
	std::string actual;
	expected = "timpani";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickType( lexicon::enums::StickType::xylophone ) );
	expected = "xylophone";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmStickType )
{
	MxEmStickType object( lexicon::enums::StickType::yarn );
	std::string expected;
	std::string actual;
	expected = "yarn";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickType( lexicon::enums::StickType::bassDrum ) );
	expected = "bass drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmStickType )
{
	MxEmStickType object( lexicon::enums::StickType::doubleBassDrum );
	std::string expected;
	std::string actual;
	expected = "double bass drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickType( lexicon::enums::StickType::timpani ) );
	expected = "timpani";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmStickType )
{
	MxEmStickType object( lexicon::enums::StickType::xylophone );
	std::string expected;
	std::string actual;
	expected = "xylophone";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStickType( lexicon::enums::StickType::yarn ) );
	expected = "yarn";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmStickType )
{
	MxEmStickType object;
	std::string expected = "MxEmStickType";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmStickType )
{
	MxEmStickType object;
	std::string expected = "stick-type";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmStickType )
{
	MxEmStickType object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmStickType )
{
	MxEmStickType object( lexicon::enums::StickType::bassDrum );
	std::string expected;
	std::string actual;
	expected = "<stick-type>bass drum</stick-type>";
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


