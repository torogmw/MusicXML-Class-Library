/** *******************************************************
  * 
  * MxEmMetalTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmMetal.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmMetal )
{
	MxEmMetal object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmMetal )
{
	MxEmMetal object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmMetal )
{
	MxEmMetal object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmMetal )
{
	MxEmMetal object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmMetal )
{
	MxEmMetal object( lexicon::enums::Metal::almglocken );
	std::string expected;
	std::string actual;
	expected = "almglocken";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMetal( lexicon::enums::Metal::bell ) );
	expected = "bell";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmMetal )
{
	MxEmMetal object( lexicon::enums::Metal::bellPlate );
	std::string expected;
	std::string actual;
	expected = "bell plate";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMetal( lexicon::enums::Metal::brakeDrum ) );
	expected = "brake drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmMetal )
{
	MxEmMetal object( lexicon::enums::Metal::chineseCymbal );
	std::string expected;
	std::string actual;
	expected = "Chinese cymbal";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMetal( lexicon::enums::Metal::cowbell ) );
	expected = "cowbell";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmMetal )
{
	MxEmMetal object( lexicon::enums::Metal::crashCymbals );
	std::string expected;
	std::string actual;
	expected = "crash cymbals";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMetal( lexicon::enums::Metal::crotale ) );
	expected = "crotale";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmMetal )
{
	MxEmMetal object( lexicon::enums::Metal::cymbalTongs );
	std::string expected;
	std::string actual;
	expected = "cymbal tongs";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMetal( lexicon::enums::Metal::domedGong ) );
	expected = "domed gong";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmMetal )
{
	MxEmMetal object;
	std::string expected = "MxEmMetal";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmMetal )
{
	MxEmMetal object;
	std::string expected = "metal";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmMetal )
{
	MxEmMetal object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmMetal )
{
	MxEmMetal object( lexicon::enums::Metal::fingerCymbals );
	std::string expected;
	std::string actual;
	expected = "<metal>finger cymbals</metal>";
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


